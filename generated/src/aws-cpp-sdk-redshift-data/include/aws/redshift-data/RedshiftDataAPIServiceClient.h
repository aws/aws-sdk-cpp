/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/redshift-data/RedshiftDataAPIServiceServiceClientModel.h>

namespace Aws
{
namespace RedshiftDataAPIService
{
  /**
   * <p>You can use the Amazon Redshift Data API to run queries on Amazon Redshift
   * tables. You can run SQL statements, which are committed if the statement
   * succeeds. </p> <p>For more information about the Amazon Redshift Data API and
   * CLI usage examples, see <a
   * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
   * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
   * </p>
   */
  class AWS_REDSHIFTDATAAPISERVICE_API RedshiftDataAPIServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<RedshiftDataAPIServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef RedshiftDataAPIServiceClientConfiguration ClientConfigurationType;
      typedef RedshiftDataAPIServiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftDataAPIServiceClient(const Aws::RedshiftDataAPIService::RedshiftDataAPIServiceClientConfiguration& clientConfiguration = Aws::RedshiftDataAPIService::RedshiftDataAPIServiceClientConfiguration(),
                                     std::shared_ptr<RedshiftDataAPIServiceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftDataAPIServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                     std::shared_ptr<RedshiftDataAPIServiceEndpointProviderBase> endpointProvider = nullptr,
                                     const Aws::RedshiftDataAPIService::RedshiftDataAPIServiceClientConfiguration& clientConfiguration = Aws::RedshiftDataAPIService::RedshiftDataAPIServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RedshiftDataAPIServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<RedshiftDataAPIServiceEndpointProviderBase> endpointProvider = nullptr,
                                     const Aws::RedshiftDataAPIService::RedshiftDataAPIServiceClientConfiguration& clientConfiguration = Aws::RedshiftDataAPIService::RedshiftDataAPIServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftDataAPIServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        RedshiftDataAPIServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        RedshiftDataAPIServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~RedshiftDataAPIServiceClient();

        /**
         * <p>Runs one or more SQL statements, which can be data manipulation language
         * (DML) or data definition language (DDL). Depending on the authorization method,
         * use one of the following combinations of request parameters: </p> <ul> <li>
         * <p>Secrets Manager - when connecting to a cluster, provide the
         * <code>secret-arn</code> of a secret stored in Secrets Manager which has
         * <code>username</code> and <code>password</code>. The specified secret contains
         * credentials to connect to the <code>database</code> you specify. When you are
         * connecting to a cluster, you also supply the database name, If you provide a
         * cluster identifier (<code>dbClusterIdentifier</code>), it must match the cluster
         * identifier stored in the secret. When you are connecting to a serverless
         * workgroup, you also supply the database name.</p> </li> <li> <p>Temporary
         * credentials - when connecting to your data warehouse, choose one of the
         * following options:</p> <ul> <li> <p>When connecting to a serverless workgroup,
         * specify the workgroup name and database name. The database user name is derived
         * from the IAM identity. For example, <code>arn:iam::123456789012:user:foo</code>
         * has the database user name <code>IAM:foo</code>. Also, permission to call the
         * <code>redshift-serverless:GetCredentials</code> operation is required.</p> </li>
         * <li> <p>When connecting to a cluster as an IAM identity, specify the cluster
         * identifier and the database name. The database user name is derived from the IAM
         * identity. For example, <code>arn:iam::123456789012:user:foo</code> has the
         * database user name <code>IAM:foo</code>. Also, permission to call the
         * <code>redshift:GetClusterCredentialsWithIAM</code> operation is required.</p>
         * </li> <li> <p>When connecting to a cluster as a database user, specify the
         * cluster identifier, the database name, and the database user name. Also,
         * permission to call the <code>redshift:GetClusterCredentials</code> operation is
         * required.</p> </li> </ul> </li> </ul> <p>For more information about the Amazon
         * Redshift Data API and CLI usage examples, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
         * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/BatchExecuteStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchExecuteStatementOutcome BatchExecuteStatement(const Model::BatchExecuteStatementRequest& request) const;

        /**
         * A Callable wrapper for BatchExecuteStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchExecuteStatementRequestT = Model::BatchExecuteStatementRequest>
        Model::BatchExecuteStatementOutcomeCallable BatchExecuteStatementCallable(const BatchExecuteStatementRequestT& request) const
        {
            return SubmitCallable(&RedshiftDataAPIServiceClient::BatchExecuteStatement, request);
        }

        /**
         * An Async wrapper for BatchExecuteStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchExecuteStatementRequestT = Model::BatchExecuteStatementRequest>
        void BatchExecuteStatementAsync(const BatchExecuteStatementRequestT& request, const BatchExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftDataAPIServiceClient::BatchExecuteStatement, request, handler, context);
        }

        /**
         * <p>Cancels a running query. To be canceled, a query must be running. </p> <p>For
         * more information about the Amazon Redshift Data API and CLI usage examples, see
         * <a href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using
         * the Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/CancelStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelStatementOutcome CancelStatement(const Model::CancelStatementRequest& request) const;

        /**
         * A Callable wrapper for CancelStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelStatementRequestT = Model::CancelStatementRequest>
        Model::CancelStatementOutcomeCallable CancelStatementCallable(const CancelStatementRequestT& request) const
        {
            return SubmitCallable(&RedshiftDataAPIServiceClient::CancelStatement, request);
        }

        /**
         * An Async wrapper for CancelStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelStatementRequestT = Model::CancelStatementRequest>
        void CancelStatementAsync(const CancelStatementRequestT& request, const CancelStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftDataAPIServiceClient::CancelStatement, request, handler, context);
        }

        /**
         * <p>Describes the details about a specific instance when a query was run by the
         * Amazon Redshift Data API. The information includes when the query started, when
         * it finished, the query status, the number of rows returned, and the SQL
         * statement. </p> <p>For more information about the Amazon Redshift Data API and
         * CLI usage examples, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
         * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/DescribeStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStatementOutcome DescribeStatement(const Model::DescribeStatementRequest& request) const;

        /**
         * A Callable wrapper for DescribeStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeStatementRequestT = Model::DescribeStatementRequest>
        Model::DescribeStatementOutcomeCallable DescribeStatementCallable(const DescribeStatementRequestT& request) const
        {
            return SubmitCallable(&RedshiftDataAPIServiceClient::DescribeStatement, request);
        }

        /**
         * An Async wrapper for DescribeStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeStatementRequestT = Model::DescribeStatementRequest>
        void DescribeStatementAsync(const DescribeStatementRequestT& request, const DescribeStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftDataAPIServiceClient::DescribeStatement, request, handler, context);
        }

        /**
         * <p>Describes the detailed information about a table from metadata in the
         * cluster. The information includes its columns. A token is returned to page
         * through the column list. Depending on the authorization method, use one of the
         * following combinations of request parameters: </p> <ul> <li> <p>Secrets Manager
         * - when connecting to a cluster, provide the <code>secret-arn</code> of a secret
         * stored in Secrets Manager which has <code>username</code> and
         * <code>password</code>. The specified secret contains credentials to connect to
         * the <code>database</code> you specify. When you are connecting to a cluster, you
         * also supply the database name, If you provide a cluster identifier
         * (<code>dbClusterIdentifier</code>), it must match the cluster identifier stored
         * in the secret. When you are connecting to a serverless workgroup, you also
         * supply the database name.</p> </li> <li> <p>Temporary credentials - when
         * connecting to your data warehouse, choose one of the following options:</p> <ul>
         * <li> <p>When connecting to a serverless workgroup, specify the workgroup name
         * and database name. The database user name is derived from the IAM identity. For
         * example, <code>arn:iam::123456789012:user:foo</code> has the database user name
         * <code>IAM:foo</code>. Also, permission to call the
         * <code>redshift-serverless:GetCredentials</code> operation is required.</p> </li>
         * <li> <p>When connecting to a cluster as an IAM identity, specify the cluster
         * identifier and the database name. The database user name is derived from the IAM
         * identity. For example, <code>arn:iam::123456789012:user:foo</code> has the
         * database user name <code>IAM:foo</code>. Also, permission to call the
         * <code>redshift:GetClusterCredentialsWithIAM</code> operation is required.</p>
         * </li> <li> <p>When connecting to a cluster as a database user, specify the
         * cluster identifier, the database name, and the database user name. Also,
         * permission to call the <code>redshift:GetClusterCredentials</code> operation is
         * required.</p> </li> </ul> </li> </ul> <p>For more information about the Amazon
         * Redshift Data API and CLI usage examples, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
         * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/DescribeTable">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTableOutcome DescribeTable(const Model::DescribeTableRequest& request) const;

        /**
         * A Callable wrapper for DescribeTable that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTableRequestT = Model::DescribeTableRequest>
        Model::DescribeTableOutcomeCallable DescribeTableCallable(const DescribeTableRequestT& request) const
        {
            return SubmitCallable(&RedshiftDataAPIServiceClient::DescribeTable, request);
        }

        /**
         * An Async wrapper for DescribeTable that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTableRequestT = Model::DescribeTableRequest>
        void DescribeTableAsync(const DescribeTableRequestT& request, const DescribeTableResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftDataAPIServiceClient::DescribeTable, request, handler, context);
        }

        /**
         * <p>Runs an SQL statement, which can be data manipulation language (DML) or data
         * definition language (DDL). This statement must be a single SQL statement.
         * Depending on the authorization method, use one of the following combinations of
         * request parameters: </p> <ul> <li> <p>Secrets Manager - when connecting to a
         * cluster, provide the <code>secret-arn</code> of a secret stored in Secrets
         * Manager which has <code>username</code> and <code>password</code>. The specified
         * secret contains credentials to connect to the <code>database</code> you specify.
         * When you are connecting to a cluster, you also supply the database name, If you
         * provide a cluster identifier (<code>dbClusterIdentifier</code>), it must match
         * the cluster identifier stored in the secret. When you are connecting to a
         * serverless workgroup, you also supply the database name.</p> </li> <li>
         * <p>Temporary credentials - when connecting to your data warehouse, choose one of
         * the following options:</p> <ul> <li> <p>When connecting to a serverless
         * workgroup, specify the workgroup name and database name. The database user name
         * is derived from the IAM identity. For example,
         * <code>arn:iam::123456789012:user:foo</code> has the database user name
         * <code>IAM:foo</code>. Also, permission to call the
         * <code>redshift-serverless:GetCredentials</code> operation is required.</p> </li>
         * <li> <p>When connecting to a cluster as an IAM identity, specify the cluster
         * identifier and the database name. The database user name is derived from the IAM
         * identity. For example, <code>arn:iam::123456789012:user:foo</code> has the
         * database user name <code>IAM:foo</code>. Also, permission to call the
         * <code>redshift:GetClusterCredentialsWithIAM</code> operation is required.</p>
         * </li> <li> <p>When connecting to a cluster as a database user, specify the
         * cluster identifier, the database name, and the database user name. Also,
         * permission to call the <code>redshift:GetClusterCredentials</code> operation is
         * required.</p> </li> </ul> </li> </ul> <p>For more information about the Amazon
         * Redshift Data API and CLI usage examples, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
         * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ExecuteStatement">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteStatementOutcome ExecuteStatement(const Model::ExecuteStatementRequest& request) const;

        /**
         * A Callable wrapper for ExecuteStatement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExecuteStatementRequestT = Model::ExecuteStatementRequest>
        Model::ExecuteStatementOutcomeCallable ExecuteStatementCallable(const ExecuteStatementRequestT& request) const
        {
            return SubmitCallable(&RedshiftDataAPIServiceClient::ExecuteStatement, request);
        }

        /**
         * An Async wrapper for ExecuteStatement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExecuteStatementRequestT = Model::ExecuteStatementRequest>
        void ExecuteStatementAsync(const ExecuteStatementRequestT& request, const ExecuteStatementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftDataAPIServiceClient::ExecuteStatement, request, handler, context);
        }

        /**
         * <p>Fetches the temporarily cached result of an SQL statement. A token is
         * returned to page through the statement results. </p> <p>For more information
         * about the Amazon Redshift Data API and CLI usage examples, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
         * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/GetStatementResult">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStatementResultOutcome GetStatementResult(const Model::GetStatementResultRequest& request) const;

        /**
         * A Callable wrapper for GetStatementResult that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStatementResultRequestT = Model::GetStatementResultRequest>
        Model::GetStatementResultOutcomeCallable GetStatementResultCallable(const GetStatementResultRequestT& request) const
        {
            return SubmitCallable(&RedshiftDataAPIServiceClient::GetStatementResult, request);
        }

        /**
         * An Async wrapper for GetStatementResult that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStatementResultRequestT = Model::GetStatementResultRequest>
        void GetStatementResultAsync(const GetStatementResultRequestT& request, const GetStatementResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftDataAPIServiceClient::GetStatementResult, request, handler, context);
        }

        /**
         * <p>List the databases in a cluster. A token is returned to page through the
         * database list. Depending on the authorization method, use one of the following
         * combinations of request parameters: </p> <ul> <li> <p>Secrets Manager - when
         * connecting to a cluster, provide the <code>secret-arn</code> of a secret stored
         * in Secrets Manager which has <code>username</code> and <code>password</code>.
         * The specified secret contains credentials to connect to the
         * <code>database</code> you specify. When you are connecting to a cluster, you
         * also supply the database name, If you provide a cluster identifier
         * (<code>dbClusterIdentifier</code>), it must match the cluster identifier stored
         * in the secret. When you are connecting to a serverless workgroup, you also
         * supply the database name.</p> </li> <li> <p>Temporary credentials - when
         * connecting to your data warehouse, choose one of the following options:</p> <ul>
         * <li> <p>When connecting to a serverless workgroup, specify the workgroup name
         * and database name. The database user name is derived from the IAM identity. For
         * example, <code>arn:iam::123456789012:user:foo</code> has the database user name
         * <code>IAM:foo</code>. Also, permission to call the
         * <code>redshift-serverless:GetCredentials</code> operation is required.</p> </li>
         * <li> <p>When connecting to a cluster as an IAM identity, specify the cluster
         * identifier and the database name. The database user name is derived from the IAM
         * identity. For example, <code>arn:iam::123456789012:user:foo</code> has the
         * database user name <code>IAM:foo</code>. Also, permission to call the
         * <code>redshift:GetClusterCredentialsWithIAM</code> operation is required.</p>
         * </li> <li> <p>When connecting to a cluster as a database user, specify the
         * cluster identifier, the database name, and the database user name. Also,
         * permission to call the <code>redshift:GetClusterCredentials</code> operation is
         * required.</p> </li> </ul> </li> </ul> <p>For more information about the Amazon
         * Redshift Data API and CLI usage examples, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
         * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDatabasesOutcome ListDatabases(const Model::ListDatabasesRequest& request) const;

        /**
         * A Callable wrapper for ListDatabases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDatabasesRequestT = Model::ListDatabasesRequest>
        Model::ListDatabasesOutcomeCallable ListDatabasesCallable(const ListDatabasesRequestT& request) const
        {
            return SubmitCallable(&RedshiftDataAPIServiceClient::ListDatabases, request);
        }

        /**
         * An Async wrapper for ListDatabases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDatabasesRequestT = Model::ListDatabasesRequest>
        void ListDatabasesAsync(const ListDatabasesRequestT& request, const ListDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftDataAPIServiceClient::ListDatabases, request, handler, context);
        }

        /**
         * <p>Lists the schemas in a database. A token is returned to page through the
         * schema list. Depending on the authorization method, use one of the following
         * combinations of request parameters: </p> <ul> <li> <p>Secrets Manager - when
         * connecting to a cluster, provide the <code>secret-arn</code> of a secret stored
         * in Secrets Manager which has <code>username</code> and <code>password</code>.
         * The specified secret contains credentials to connect to the
         * <code>database</code> you specify. When you are connecting to a cluster, you
         * also supply the database name, If you provide a cluster identifier
         * (<code>dbClusterIdentifier</code>), it must match the cluster identifier stored
         * in the secret. When you are connecting to a serverless workgroup, you also
         * supply the database name.</p> </li> <li> <p>Temporary credentials - when
         * connecting to your data warehouse, choose one of the following options:</p> <ul>
         * <li> <p>When connecting to a serverless workgroup, specify the workgroup name
         * and database name. The database user name is derived from the IAM identity. For
         * example, <code>arn:iam::123456789012:user:foo</code> has the database user name
         * <code>IAM:foo</code>. Also, permission to call the
         * <code>redshift-serverless:GetCredentials</code> operation is required.</p> </li>
         * <li> <p>When connecting to a cluster as an IAM identity, specify the cluster
         * identifier and the database name. The database user name is derived from the IAM
         * identity. For example, <code>arn:iam::123456789012:user:foo</code> has the
         * database user name <code>IAM:foo</code>. Also, permission to call the
         * <code>redshift:GetClusterCredentialsWithIAM</code> operation is required.</p>
         * </li> <li> <p>When connecting to a cluster as a database user, specify the
         * cluster identifier, the database name, and the database user name. Also,
         * permission to call the <code>redshift:GetClusterCredentials</code> operation is
         * required.</p> </li> </ul> </li> </ul> <p>For more information about the Amazon
         * Redshift Data API and CLI usage examples, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
         * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemasOutcome ListSchemas(const Model::ListSchemasRequest& request) const;

        /**
         * A Callable wrapper for ListSchemas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSchemasRequestT = Model::ListSchemasRequest>
        Model::ListSchemasOutcomeCallable ListSchemasCallable(const ListSchemasRequestT& request) const
        {
            return SubmitCallable(&RedshiftDataAPIServiceClient::ListSchemas, request);
        }

        /**
         * An Async wrapper for ListSchemas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSchemasRequestT = Model::ListSchemasRequest>
        void ListSchemasAsync(const ListSchemasRequestT& request, const ListSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftDataAPIServiceClient::ListSchemas, request, handler, context);
        }

        /**
         * <p>List of SQL statements. By default, only finished statements are shown. A
         * token is returned to page through the statement list. </p> <p>For more
         * information about the Amazon Redshift Data API and CLI usage examples, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
         * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListStatements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStatementsOutcome ListStatements(const Model::ListStatementsRequest& request) const;

        /**
         * A Callable wrapper for ListStatements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStatementsRequestT = Model::ListStatementsRequest>
        Model::ListStatementsOutcomeCallable ListStatementsCallable(const ListStatementsRequestT& request) const
        {
            return SubmitCallable(&RedshiftDataAPIServiceClient::ListStatements, request);
        }

        /**
         * An Async wrapper for ListStatements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStatementsRequestT = Model::ListStatementsRequest>
        void ListStatementsAsync(const ListStatementsRequestT& request, const ListStatementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftDataAPIServiceClient::ListStatements, request, handler, context);
        }

        /**
         * <p>List the tables in a database. If neither <code>SchemaPattern</code> nor
         * <code>TablePattern</code> are specified, then all tables in the database are
         * returned. A token is returned to page through the table list. Depending on the
         * authorization method, use one of the following combinations of request
         * parameters: </p> <ul> <li> <p>Secrets Manager - when connecting to a cluster,
         * provide the <code>secret-arn</code> of a secret stored in Secrets Manager which
         * has <code>username</code> and <code>password</code>. The specified secret
         * contains credentials to connect to the <code>database</code> you specify. When
         * you are connecting to a cluster, you also supply the database name, If you
         * provide a cluster identifier (<code>dbClusterIdentifier</code>), it must match
         * the cluster identifier stored in the secret. When you are connecting to a
         * serverless workgroup, you also supply the database name.</p> </li> <li>
         * <p>Temporary credentials - when connecting to your data warehouse, choose one of
         * the following options:</p> <ul> <li> <p>When connecting to a serverless
         * workgroup, specify the workgroup name and database name. The database user name
         * is derived from the IAM identity. For example,
         * <code>arn:iam::123456789012:user:foo</code> has the database user name
         * <code>IAM:foo</code>. Also, permission to call the
         * <code>redshift-serverless:GetCredentials</code> operation is required.</p> </li>
         * <li> <p>When connecting to a cluster as an IAM identity, specify the cluster
         * identifier and the database name. The database user name is derived from the IAM
         * identity. For example, <code>arn:iam::123456789012:user:foo</code> has the
         * database user name <code>IAM:foo</code>. Also, permission to call the
         * <code>redshift:GetClusterCredentialsWithIAM</code> operation is required.</p>
         * </li> <li> <p>When connecting to a cluster as a database user, specify the
         * cluster identifier, the database name, and the database user name. Also,
         * permission to call the <code>redshift:GetClusterCredentials</code> operation is
         * required.</p> </li> </ul> </li> </ul> <p>For more information about the Amazon
         * Redshift Data API and CLI usage examples, see <a
         * href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the
         * Amazon Redshift Data API</a> in the <i>Amazon Redshift Management Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ListTables">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTablesOutcome ListTables(const Model::ListTablesRequest& request) const;

        /**
         * A Callable wrapper for ListTables that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTablesRequestT = Model::ListTablesRequest>
        Model::ListTablesOutcomeCallable ListTablesCallable(const ListTablesRequestT& request) const
        {
            return SubmitCallable(&RedshiftDataAPIServiceClient::ListTables, request);
        }

        /**
         * An Async wrapper for ListTables that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTablesRequestT = Model::ListTablesRequest>
        void ListTablesAsync(const ListTablesRequestT& request, const ListTablesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&RedshiftDataAPIServiceClient::ListTables, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<RedshiftDataAPIServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<RedshiftDataAPIServiceClient>;
      void init(const RedshiftDataAPIServiceClientConfiguration& clientConfiguration);

      RedshiftDataAPIServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<RedshiftDataAPIServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace RedshiftDataAPIService
} // namespace Aws
