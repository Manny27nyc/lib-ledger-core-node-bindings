// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from database.djinni

#ifndef DJINNI_GENERATED_DATABASEBACKEND_HPP
#define DJINNI_GENERATED_DATABASEBACKEND_HPP

#include <cstdint>
#include <memory>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

class DatabaseEngine;

/**Class representing a database backend. */
class LIBCORE_EXPORT DatabaseBackend {
public:
    virtual ~DatabaseBackend() {}

    /**
     * Get the maximum number of concurrent connection that the backend is able to open on a single database.
     * @return the size of the connection pool.
     */
    virtual int32_t getConnectionPoolSize() = 0;

    /**
     * Get the maximum number of concurrent readonly connection that the backend is able to open on a single database.
     * @return the size of the readonly connection pool.
     */
    virtual int32_t getReadonlyConnectionPoolSize() = 0;

    /**
     * Enable or disable query logging. By default logging is disabled. Query logging will record every SQL query in log streams.
     * @return this database backend (to chain configuration calls)
     */
    virtual std::shared_ptr<DatabaseBackend> enableQueryLogging(bool enable) = 0;

    /**
     * Return true if query logging is enabled.
     * @return trye if query logging is enabled, false otherwise.
     */
    virtual bool isLoggingEnabled() = 0;

    /**
     * Create an instance of SQLite3 database.
     * @return DatabaseBackend object
     */
    static std::shared_ptr<DatabaseBackend> getSqlite3Backend();

    /**
     * Create an instance of PostgreSQL database.
     * @return DatabaseBackend object
     */
    static std::shared_ptr<DatabaseBackend> getPostgreSQLBackend(int32_t connectionPoolSize, int32_t readonlyConnectionPoolSize);

    /** Create a database backend instance from the given DatabaseEngine implementation. */
    static std::shared_ptr<DatabaseBackend> createBackendFromEngine(const std::shared_ptr<DatabaseEngine> & engine);
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_DATABASEBACKEND_HPP
