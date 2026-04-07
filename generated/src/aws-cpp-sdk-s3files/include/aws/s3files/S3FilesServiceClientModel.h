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
#include <aws/s3files/S3FilesEndpointProvider.h>
#include <aws/s3files/S3FilesErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in S3FilesClient header */
#include <aws/core/NoResult.h>
#include <aws/s3files/model/CreateAccessPointResult.h>
#include <aws/s3files/model/CreateFileSystemResult.h>
#include <aws/s3files/model/CreateMountTargetResult.h>
#include <aws/s3files/model/GetAccessPointResult.h>
#include <aws/s3files/model/GetFileSystemPolicyResult.h>
#include <aws/s3files/model/GetFileSystemResult.h>
#include <aws/s3files/model/GetMountTargetResult.h>
#include <aws/s3files/model/GetSynchronizationConfigurationResult.h>
#include <aws/s3files/model/ListAccessPointsResult.h>
#include <aws/s3files/model/ListFileSystemsRequest.h>
#include <aws/s3files/model/ListFileSystemsResult.h>
#include <aws/s3files/model/ListMountTargetsRequest.h>
#include <aws/s3files/model/ListMountTargetsResult.h>
#include <aws/s3files/model/ListTagsForResourceResult.h>
#include <aws/s3files/model/PutFileSystemPolicyResult.h>
#include <aws/s3files/model/PutSynchronizationConfigurationResult.h>
#include <aws/s3files/model/UpdateMountTargetResult.h>
/* End of service model headers required in S3FilesClient header */

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

namespace S3Files {
using S3FilesClientConfiguration = Aws::Client::GenericClientConfiguration;
using S3FilesEndpointProviderBase = Aws::S3Files::Endpoint::S3FilesEndpointProviderBase;
using S3FilesEndpointProvider = Aws::S3Files::Endpoint::S3FilesEndpointProvider;

namespace Model {
/* Service model forward declarations required in S3FilesClient header */
class CreateAccessPointRequest;
class CreateFileSystemRequest;
class CreateMountTargetRequest;
class DeleteAccessPointRequest;
class DeleteFileSystemRequest;
class DeleteFileSystemPolicyRequest;
class DeleteMountTargetRequest;
class GetAccessPointRequest;
class GetFileSystemRequest;
class GetFileSystemPolicyRequest;
class GetMountTargetRequest;
class GetSynchronizationConfigurationRequest;
class ListAccessPointsRequest;
class ListFileSystemsRequest;
class ListMountTargetsRequest;
class ListTagsForResourceRequest;
class PutFileSystemPolicyRequest;
class PutSynchronizationConfigurationRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateMountTargetRequest;
/* End of service model forward declarations required in S3FilesClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateAccessPointResult, S3FilesError> CreateAccessPointOutcome;
typedef Aws::Utils::Outcome<CreateFileSystemResult, S3FilesError> CreateFileSystemOutcome;
typedef Aws::Utils::Outcome<CreateMountTargetResult, S3FilesError> CreateMountTargetOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3FilesError> DeleteAccessPointOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3FilesError> DeleteFileSystemOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3FilesError> DeleteFileSystemPolicyOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3FilesError> DeleteMountTargetOutcome;
typedef Aws::Utils::Outcome<GetAccessPointResult, S3FilesError> GetAccessPointOutcome;
typedef Aws::Utils::Outcome<GetFileSystemResult, S3FilesError> GetFileSystemOutcome;
typedef Aws::Utils::Outcome<GetFileSystemPolicyResult, S3FilesError> GetFileSystemPolicyOutcome;
typedef Aws::Utils::Outcome<GetMountTargetResult, S3FilesError> GetMountTargetOutcome;
typedef Aws::Utils::Outcome<GetSynchronizationConfigurationResult, S3FilesError> GetSynchronizationConfigurationOutcome;
typedef Aws::Utils::Outcome<ListAccessPointsResult, S3FilesError> ListAccessPointsOutcome;
typedef Aws::Utils::Outcome<ListFileSystemsResult, S3FilesError> ListFileSystemsOutcome;
typedef Aws::Utils::Outcome<ListMountTargetsResult, S3FilesError> ListMountTargetsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, S3FilesError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<PutFileSystemPolicyResult, S3FilesError> PutFileSystemPolicyOutcome;
typedef Aws::Utils::Outcome<PutSynchronizationConfigurationResult, S3FilesError> PutSynchronizationConfigurationOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3FilesError> TagResourceOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, S3FilesError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateMountTargetResult, S3FilesError> UpdateMountTargetOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateAccessPointOutcome> CreateAccessPointOutcomeCallable;
typedef std::future<CreateFileSystemOutcome> CreateFileSystemOutcomeCallable;
typedef std::future<CreateMountTargetOutcome> CreateMountTargetOutcomeCallable;
typedef std::future<DeleteAccessPointOutcome> DeleteAccessPointOutcomeCallable;
typedef std::future<DeleteFileSystemOutcome> DeleteFileSystemOutcomeCallable;
typedef std::future<DeleteFileSystemPolicyOutcome> DeleteFileSystemPolicyOutcomeCallable;
typedef std::future<DeleteMountTargetOutcome> DeleteMountTargetOutcomeCallable;
typedef std::future<GetAccessPointOutcome> GetAccessPointOutcomeCallable;
typedef std::future<GetFileSystemOutcome> GetFileSystemOutcomeCallable;
typedef std::future<GetFileSystemPolicyOutcome> GetFileSystemPolicyOutcomeCallable;
typedef std::future<GetMountTargetOutcome> GetMountTargetOutcomeCallable;
typedef std::future<GetSynchronizationConfigurationOutcome> GetSynchronizationConfigurationOutcomeCallable;
typedef std::future<ListAccessPointsOutcome> ListAccessPointsOutcomeCallable;
typedef std::future<ListFileSystemsOutcome> ListFileSystemsOutcomeCallable;
typedef std::future<ListMountTargetsOutcome> ListMountTargetsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<PutFileSystemPolicyOutcome> PutFileSystemPolicyOutcomeCallable;
typedef std::future<PutSynchronizationConfigurationOutcome> PutSynchronizationConfigurationOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateMountTargetOutcome> UpdateMountTargetOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class S3FilesClient;

/* Service model async handlers definitions */
typedef std::function<void(const S3FilesClient*, const Model::CreateAccessPointRequest&, const Model::CreateAccessPointOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAccessPointResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::CreateFileSystemRequest&, const Model::CreateFileSystemOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateFileSystemResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::CreateMountTargetRequest&, const Model::CreateMountTargetOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateMountTargetResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::DeleteAccessPointRequest&, const Model::DeleteAccessPointOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAccessPointResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::DeleteFileSystemRequest&, const Model::DeleteFileSystemOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteFileSystemResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::DeleteFileSystemPolicyRequest&, const Model::DeleteFileSystemPolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteFileSystemPolicyResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::DeleteMountTargetRequest&, const Model::DeleteMountTargetOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteMountTargetResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::GetAccessPointRequest&, const Model::GetAccessPointOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAccessPointResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::GetFileSystemRequest&, const Model::GetFileSystemOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetFileSystemResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::GetFileSystemPolicyRequest&, const Model::GetFileSystemPolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetFileSystemPolicyResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::GetMountTargetRequest&, const Model::GetMountTargetOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetMountTargetResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::GetSynchronizationConfigurationRequest&,
                           const Model::GetSynchronizationConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetSynchronizationConfigurationResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::ListAccessPointsRequest&, const Model::ListAccessPointsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAccessPointsResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::ListFileSystemsRequest&, const Model::ListFileSystemsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListFileSystemsResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::ListMountTargetsRequest&, const Model::ListMountTargetsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListMountTargetsResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::PutFileSystemPolicyRequest&, const Model::PutFileSystemPolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutFileSystemPolicyResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::PutSynchronizationConfigurationRequest&,
                           const Model::PutSynchronizationConfigurationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutSynchronizationConfigurationResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const S3FilesClient*, const Model::UpdateMountTargetRequest&, const Model::UpdateMountTargetOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateMountTargetResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace S3Files
}  // namespace Aws
