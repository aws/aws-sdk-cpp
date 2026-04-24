/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3TablesEndpointProvider.h>
#include <aws/s3tables/S3TablesErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in S3TablesClient header */
#include <aws/core/NoResult.h>
#include <aws/s3tables/model/CreateNamespaceResult.h>
#include <aws/s3tables/model/CreateTableBucketResult.h>
#include <aws/s3tables/model/CreateTableResult.h>
#include <aws/s3tables/model/GetNamespaceResult.h>
#include <aws/s3tables/model/GetTableBucketEncryptionResult.h>
#include <aws/s3tables/model/GetTableBucketMaintenanceConfigurationResult.h>
#include <aws/s3tables/model/GetTableBucketMetricsConfigurationResult.h>
#include <aws/s3tables/model/GetTableBucketPolicyResult.h>
#include <aws/s3tables/model/GetTableBucketReplicationResult.h>
#include <aws/s3tables/model/GetTableBucketResult.h>
#include <aws/s3tables/model/GetTableBucketStorageClassResult.h>
#include <aws/s3tables/model/GetTableEncryptionResult.h>
#include <aws/s3tables/model/GetTableMaintenanceConfigurationResult.h>
#include <aws/s3tables/model/GetTableMaintenanceJobStatusResult.h>
#include <aws/s3tables/model/GetTableMetadataLocationResult.h>
#include <aws/s3tables/model/GetTablePolicyResult.h>
#include <aws/s3tables/model/GetTableRecordExpirationConfigurationResult.h>
#include <aws/s3tables/model/GetTableRecordExpirationJobStatusResult.h>
#include <aws/s3tables/model/GetTableReplicationResult.h>
#include <aws/s3tables/model/GetTableReplicationStatusResult.h>
#include <aws/s3tables/model/GetTableRequest.h>
#include <aws/s3tables/model/GetTableResult.h>
#include <aws/s3tables/model/GetTableStorageClassResult.h>
#include <aws/s3tables/model/ListNamespacesResult.h>
#include <aws/s3tables/model/ListTableBucketsRequest.h>
#include <aws/s3tables/model/ListTableBucketsResult.h>
#include <aws/s3tables/model/ListTablesResult.h>
#include <aws/s3tables/model/ListTagsForResourceResult.h>
#include <aws/s3tables/model/PutTableBucketReplicationResult.h>
#include <aws/s3tables/model/PutTableReplicationResult.h>
#include <aws/s3tables/model/TagResourceResult.h>
#include <aws/s3tables/model/UntagResourceResult.h>
#include <aws/s3tables/model/UpdateTableMetadataLocationResult.h>
/* End of service model headers required in S3TablesClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace S3Tables {
using S3TablesClientConfiguration = Aws::Client::GenericClientConfiguration;
using S3TablesEndpointProviderBase = Aws::S3Tables::Endpoint::S3TablesEndpointProviderBase;
using S3TablesEndpointProvider = Aws::S3Tables::Endpoint::S3TablesEndpointProvider;

namespace Model {
/* Service model forward declarations required in S3TablesClient header */
class CreateNamespaceRequest;
class CreateTableRequest;
class CreateTableBucketRequest;
class DeleteNamespaceRequest;
class DeleteTableRequest;
class DeleteTableBucketRequest;
class DeleteTableBucketEncryptionRequest;
class DeleteTableBucketMetricsConfigurationRequest;
class DeleteTableBucketPolicyRequest;
class DeleteTableBucketReplicationRequest;
class DeleteTablePolicyRequest;
class DeleteTableReplicationRequest;
class GetNamespaceRequest;
class GetTableRequest;
class GetTableBucketRequest;
class GetTableBucketEncryptionRequest;
class GetTableBucketMaintenanceConfigurationRequest;
class GetTableBucketMetricsConfigurationRequest;
class GetTableBucketPolicyRequest;
class GetTableBucketReplicationRequest;
class GetTableBucketStorageClassRequest;
class GetTableEncryptionRequest;
class GetTableMaintenanceConfigurationRequest;
class GetTableMaintenanceJobStatusRequest;
class GetTableMetadataLocationRequest;
class GetTablePolicyRequest;
class GetTableRecordExpirationConfigurationRequest;
class GetTableRecordExpirationJobStatusRequest;
class GetTableReplicationRequest;
class GetTableReplicationStatusRequest;
class GetTableStorageClassRequest;
class ListNamespacesRequest;
class ListTableBucketsRequest;
class ListTablesRequest;
class ListTagsForResourceRequest;
class PutTableBucketEncryptionRequest;
class PutTableBucketMaintenanceConfigurationRequest;
class PutTableBucketMetricsConfigurationRequest;
class PutTableBucketPolicyRequest;
class PutTableBucketReplicationRequest;
class PutTableBucketStorageClassRequest;
class PutTableMaintenanceConfigurationRequest;
class PutTablePolicyRequest;
class PutTableRecordExpirationConfigurationRequest;
class PutTableReplicationRequest;
class RenameTableRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateTableMetadataLocationRequest;
/* End of service model forward declarations required in S3TablesClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateNamespaceResult, S3TablesError> CreateNamespaceOutcome;
typedef Aws::Utils::Outcome<CreateTableResult, S3TablesError> CreateTableOutcome;
typedef Aws::Utils::Outcome<CreateTableBucketResult, S3TablesError> CreateTableBucketOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3TablesError> DeleteNamespaceOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3TablesError> DeleteTableOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3TablesError> DeleteTableBucketOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3TablesError> DeleteTableBucketEncryptionOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3TablesError> DeleteTableBucketMetricsConfigurationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3TablesError> DeleteTableBucketPolicyOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3TablesError> DeleteTableBucketReplicationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3TablesError> DeleteTablePolicyOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3TablesError> DeleteTableReplicationOutcome;
typedef Aws::Utils::Outcome<GetNamespaceResult, S3TablesError> GetNamespaceOutcome;
typedef Aws::Utils::Outcome<GetTableResult, S3TablesError> GetTableOutcome;
typedef Aws::Utils::Outcome<GetTableBucketResult, S3TablesError> GetTableBucketOutcome;
typedef Aws::Utils::Outcome<GetTableBucketEncryptionResult, S3TablesError> GetTableBucketEncryptionOutcome;
typedef Aws::Utils::Outcome<GetTableBucketMaintenanceConfigurationResult, S3TablesError> GetTableBucketMaintenanceConfigurationOutcome;
typedef Aws::Utils::Outcome<GetTableBucketMetricsConfigurationResult, S3TablesError> GetTableBucketMetricsConfigurationOutcome;
typedef Aws::Utils::Outcome<GetTableBucketPolicyResult, S3TablesError> GetTableBucketPolicyOutcome;
typedef Aws::Utils::Outcome<GetTableBucketReplicationResult, S3TablesError> GetTableBucketReplicationOutcome;
typedef Aws::Utils::Outcome<GetTableBucketStorageClassResult, S3TablesError> GetTableBucketStorageClassOutcome;
typedef Aws::Utils::Outcome<GetTableEncryptionResult, S3TablesError> GetTableEncryptionOutcome;
typedef Aws::Utils::Outcome<GetTableMaintenanceConfigurationResult, S3TablesError> GetTableMaintenanceConfigurationOutcome;
typedef Aws::Utils::Outcome<GetTableMaintenanceJobStatusResult, S3TablesError> GetTableMaintenanceJobStatusOutcome;
typedef Aws::Utils::Outcome<GetTableMetadataLocationResult, S3TablesError> GetTableMetadataLocationOutcome;
typedef Aws::Utils::Outcome<GetTablePolicyResult, S3TablesError> GetTablePolicyOutcome;
typedef Aws::Utils::Outcome<GetTableRecordExpirationConfigurationResult, S3TablesError> GetTableRecordExpirationConfigurationOutcome;
typedef Aws::Utils::Outcome<GetTableRecordExpirationJobStatusResult, S3TablesError> GetTableRecordExpirationJobStatusOutcome;
typedef Aws::Utils::Outcome<GetTableReplicationResult, S3TablesError> GetTableReplicationOutcome;
typedef Aws::Utils::Outcome<GetTableReplicationStatusResult, S3TablesError> GetTableReplicationStatusOutcome;
typedef Aws::Utils::Outcome<GetTableStorageClassResult, S3TablesError> GetTableStorageClassOutcome;
typedef Aws::Utils::Outcome<ListNamespacesResult, S3TablesError> ListNamespacesOutcome;
typedef Aws::Utils::Outcome<ListTableBucketsResult, S3TablesError> ListTableBucketsOutcome;
typedef Aws::Utils::Outcome<ListTablesResult, S3TablesError> ListTablesOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, S3TablesError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3TablesError> PutTableBucketEncryptionOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3TablesError> PutTableBucketMaintenanceConfigurationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3TablesError> PutTableBucketMetricsConfigurationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3TablesError> PutTableBucketPolicyOutcome;
typedef Aws::Utils::Outcome<PutTableBucketReplicationResult, S3TablesError> PutTableBucketReplicationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3TablesError> PutTableBucketStorageClassOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3TablesError> PutTableMaintenanceConfigurationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3TablesError> PutTablePolicyOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3TablesError> PutTableRecordExpirationConfigurationOutcome;
typedef Aws::Utils::Outcome<PutTableReplicationResult, S3TablesError> PutTableReplicationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3TablesError> RenameTableOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, S3TablesError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, S3TablesError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateTableMetadataLocationResult, S3TablesError> UpdateTableMetadataLocationOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
typedef std::future<CreateTableOutcome> CreateTableOutcomeCallable;
typedef std::future<CreateTableBucketOutcome> CreateTableBucketOutcomeCallable;
typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
typedef std::future<DeleteTableOutcome> DeleteTableOutcomeCallable;
typedef std::future<DeleteTableBucketOutcome> DeleteTableBucketOutcomeCallable;
typedef std::future<DeleteTableBucketEncryptionOutcome> DeleteTableBucketEncryptionOutcomeCallable;
typedef std::future<DeleteTableBucketMetricsConfigurationOutcome> DeleteTableBucketMetricsConfigurationOutcomeCallable;
typedef std::future<DeleteTableBucketPolicyOutcome> DeleteTableBucketPolicyOutcomeCallable;
typedef std::future<DeleteTableBucketReplicationOutcome> DeleteTableBucketReplicationOutcomeCallable;
typedef std::future<DeleteTablePolicyOutcome> DeleteTablePolicyOutcomeCallable;
typedef std::future<DeleteTableReplicationOutcome> DeleteTableReplicationOutcomeCallable;
typedef std::future<GetNamespaceOutcome> GetNamespaceOutcomeCallable;
typedef std::future<GetTableOutcome> GetTableOutcomeCallable;
typedef std::future<GetTableBucketOutcome> GetTableBucketOutcomeCallable;
typedef std::future<GetTableBucketEncryptionOutcome> GetTableBucketEncryptionOutcomeCallable;
typedef std::future<GetTableBucketMaintenanceConfigurationOutcome> GetTableBucketMaintenanceConfigurationOutcomeCallable;
typedef std::future<GetTableBucketMetricsConfigurationOutcome> GetTableBucketMetricsConfigurationOutcomeCallable;
typedef std::future<GetTableBucketPolicyOutcome> GetTableBucketPolicyOutcomeCallable;
typedef std::future<GetTableBucketReplicationOutcome> GetTableBucketReplicationOutcomeCallable;
typedef std::future<GetTableBucketStorageClassOutcome> GetTableBucketStorageClassOutcomeCallable;
typedef std::future<GetTableEncryptionOutcome> GetTableEncryptionOutcomeCallable;
typedef std::future<GetTableMaintenanceConfigurationOutcome> GetTableMaintenanceConfigurationOutcomeCallable;
typedef std::future<GetTableMaintenanceJobStatusOutcome> GetTableMaintenanceJobStatusOutcomeCallable;
typedef std::future<GetTableMetadataLocationOutcome> GetTableMetadataLocationOutcomeCallable;
typedef std::future<GetTablePolicyOutcome> GetTablePolicyOutcomeCallable;
typedef std::future<GetTableRecordExpirationConfigurationOutcome> GetTableRecordExpirationConfigurationOutcomeCallable;
typedef std::future<GetTableRecordExpirationJobStatusOutcome> GetTableRecordExpirationJobStatusOutcomeCallable;
typedef std::future<GetTableReplicationOutcome> GetTableReplicationOutcomeCallable;
typedef std::future<GetTableReplicationStatusOutcome> GetTableReplicationStatusOutcomeCallable;
typedef std::future<GetTableStorageClassOutcome> GetTableStorageClassOutcomeCallable;
typedef std::future<ListNamespacesOutcome> ListNamespacesOutcomeCallable;
typedef std::future<ListTableBucketsOutcome> ListTableBucketsOutcomeCallable;
typedef std::future<ListTablesOutcome> ListTablesOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<PutTableBucketEncryptionOutcome> PutTableBucketEncryptionOutcomeCallable;
typedef std::future<PutTableBucketMaintenanceConfigurationOutcome> PutTableBucketMaintenanceConfigurationOutcomeCallable;
typedef std::future<PutTableBucketMetricsConfigurationOutcome> PutTableBucketMetricsConfigurationOutcomeCallable;
typedef std::future<PutTableBucketPolicyOutcome> PutTableBucketPolicyOutcomeCallable;
typedef std::future<PutTableBucketReplicationOutcome> PutTableBucketReplicationOutcomeCallable;
typedef std::future<PutTableBucketStorageClassOutcome> PutTableBucketStorageClassOutcomeCallable;
typedef std::future<PutTableMaintenanceConfigurationOutcome> PutTableMaintenanceConfigurationOutcomeCallable;
typedef std::future<PutTablePolicyOutcome> PutTablePolicyOutcomeCallable;
typedef std::future<PutTableRecordExpirationConfigurationOutcome> PutTableRecordExpirationConfigurationOutcomeCallable;
typedef std::future<PutTableReplicationOutcome> PutTableReplicationOutcomeCallable;
typedef std::future<RenameTableOutcome> RenameTableOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateTableMetadataLocationOutcome> UpdateTableMetadataLocationOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class S3TablesClient;

/* Service model async handlers definitions */
typedef std::function<void(const S3TablesClient*, const Model::CreateNamespaceRequest&, const Model::CreateNamespaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateNamespaceResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::CreateTableRequest&, const Model::CreateTableOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateTableResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::CreateTableBucketRequest&, const Model::CreateTableBucketOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateTableBucketResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::DeleteNamespaceRequest&, const Model::DeleteNamespaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteNamespaceResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::DeleteTableRequest&, const Model::DeleteTableOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteTableResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::DeleteTableBucketRequest&, const Model::DeleteTableBucketOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteTableBucketResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::DeleteTableBucketEncryptionRequest&,
                           const Model::DeleteTableBucketEncryptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteTableBucketEncryptionResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::DeleteTableBucketMetricsConfigurationRequest&,
                           const Model::DeleteTableBucketMetricsConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteTableBucketMetricsConfigurationResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::DeleteTableBucketPolicyRequest&,
                           const Model::DeleteTableBucketPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteTableBucketPolicyResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::DeleteTableBucketReplicationRequest&,
                           const Model::DeleteTableBucketReplicationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteTableBucketReplicationResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::DeleteTablePolicyRequest&, const Model::DeleteTablePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteTablePolicyResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::DeleteTableReplicationRequest&, const Model::DeleteTableReplicationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteTableReplicationResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetNamespaceRequest&, const Model::GetNamespaceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetNamespaceResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetTableRequest&, const Model::GetTableOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTableResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetTableBucketRequest&, const Model::GetTableBucketOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTableBucketResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetTableBucketEncryptionRequest&,
                           const Model::GetTableBucketEncryptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTableBucketEncryptionResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetTableBucketMaintenanceConfigurationRequest&,
                           const Model::GetTableBucketMaintenanceConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTableBucketMaintenanceConfigurationResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetTableBucketMetricsConfigurationRequest&,
                           const Model::GetTableBucketMetricsConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTableBucketMetricsConfigurationResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetTableBucketPolicyRequest&, const Model::GetTableBucketPolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTableBucketPolicyResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetTableBucketReplicationRequest&,
                           const Model::GetTableBucketReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTableBucketReplicationResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetTableBucketStorageClassRequest&,
                           const Model::GetTableBucketStorageClassOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTableBucketStorageClassResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetTableEncryptionRequest&, const Model::GetTableEncryptionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTableEncryptionResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetTableMaintenanceConfigurationRequest&,
                           const Model::GetTableMaintenanceConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTableMaintenanceConfigurationResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetTableMaintenanceJobStatusRequest&,
                           const Model::GetTableMaintenanceJobStatusOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTableMaintenanceJobStatusResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetTableMetadataLocationRequest&,
                           const Model::GetTableMetadataLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTableMetadataLocationResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetTablePolicyRequest&, const Model::GetTablePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTablePolicyResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetTableRecordExpirationConfigurationRequest&,
                           const Model::GetTableRecordExpirationConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTableRecordExpirationConfigurationResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetTableRecordExpirationJobStatusRequest&,
                           const Model::GetTableRecordExpirationJobStatusOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTableRecordExpirationJobStatusResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetTableReplicationRequest&, const Model::GetTableReplicationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTableReplicationResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetTableReplicationStatusRequest&,
                           const Model::GetTableReplicationStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTableReplicationStatusResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::GetTableStorageClassRequest&, const Model::GetTableStorageClassOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTableStorageClassResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::ListNamespacesRequest&, const Model::ListNamespacesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListNamespacesResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::ListTableBucketsRequest&, const Model::ListTableBucketsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTableBucketsResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::ListTablesRequest&, const Model::ListTablesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTablesResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::PutTableBucketEncryptionRequest&,
                           const Model::PutTableBucketEncryptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutTableBucketEncryptionResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::PutTableBucketMaintenanceConfigurationRequest&,
                           const Model::PutTableBucketMaintenanceConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutTableBucketMaintenanceConfigurationResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::PutTableBucketMetricsConfigurationRequest&,
                           const Model::PutTableBucketMetricsConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutTableBucketMetricsConfigurationResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::PutTableBucketPolicyRequest&, const Model::PutTableBucketPolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutTableBucketPolicyResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::PutTableBucketReplicationRequest&,
                           const Model::PutTableBucketReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutTableBucketReplicationResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::PutTableBucketStorageClassRequest&,
                           const Model::PutTableBucketStorageClassOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutTableBucketStorageClassResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::PutTableMaintenanceConfigurationRequest&,
                           const Model::PutTableMaintenanceConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutTableMaintenanceConfigurationResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::PutTablePolicyRequest&, const Model::PutTablePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutTablePolicyResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::PutTableRecordExpirationConfigurationRequest&,
                           const Model::PutTableRecordExpirationConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutTableRecordExpirationConfigurationResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::PutTableReplicationRequest&, const Model::PutTableReplicationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutTableReplicationResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::RenameTableRequest&, const Model::RenameTableOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RenameTableResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const S3TablesClient*, const Model::UpdateTableMetadataLocationRequest&,
                           const Model::UpdateTableMetadataLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateTableMetadataLocationResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace S3Tables
}  // namespace Aws
