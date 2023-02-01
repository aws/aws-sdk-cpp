/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/secretsmanager/SecretsManagerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/secretsmanager/SecretsManagerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SecretsManagerClient header */
#include <aws/secretsmanager/model/CancelRotateSecretResult.h>
#include <aws/secretsmanager/model/CreateSecretResult.h>
#include <aws/secretsmanager/model/DeleteResourcePolicyResult.h>
#include <aws/secretsmanager/model/DeleteSecretResult.h>
#include <aws/secretsmanager/model/DescribeSecretResult.h>
#include <aws/secretsmanager/model/GetRandomPasswordResult.h>
#include <aws/secretsmanager/model/GetResourcePolicyResult.h>
#include <aws/secretsmanager/model/GetSecretValueResult.h>
#include <aws/secretsmanager/model/ListSecretVersionIdsResult.h>
#include <aws/secretsmanager/model/ListSecretsResult.h>
#include <aws/secretsmanager/model/PutResourcePolicyResult.h>
#include <aws/secretsmanager/model/PutSecretValueResult.h>
#include <aws/secretsmanager/model/RemoveRegionsFromReplicationResult.h>
#include <aws/secretsmanager/model/ReplicateSecretToRegionsResult.h>
#include <aws/secretsmanager/model/RestoreSecretResult.h>
#include <aws/secretsmanager/model/RotateSecretResult.h>
#include <aws/secretsmanager/model/StopReplicationToReplicaResult.h>
#include <aws/secretsmanager/model/UpdateSecretResult.h>
#include <aws/secretsmanager/model/UpdateSecretVersionStageResult.h>
#include <aws/secretsmanager/model/ValidateResourcePolicyResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in SecretsManagerClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace SecretsManager
  {
    using SecretsManagerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SecretsManagerEndpointProviderBase = Aws::SecretsManager::Endpoint::SecretsManagerEndpointProviderBase;
    using SecretsManagerEndpointProvider = Aws::SecretsManager::Endpoint::SecretsManagerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SecretsManagerClient header */
      class CancelRotateSecretRequest;
      class CreateSecretRequest;
      class DeleteResourcePolicyRequest;
      class DeleteSecretRequest;
      class DescribeSecretRequest;
      class GetRandomPasswordRequest;
      class GetResourcePolicyRequest;
      class GetSecretValueRequest;
      class ListSecretVersionIdsRequest;
      class ListSecretsRequest;
      class PutResourcePolicyRequest;
      class PutSecretValueRequest;
      class RemoveRegionsFromReplicationRequest;
      class ReplicateSecretToRegionsRequest;
      class RestoreSecretRequest;
      class RotateSecretRequest;
      class StopReplicationToReplicaRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateSecretRequest;
      class UpdateSecretVersionStageRequest;
      class ValidateResourcePolicyRequest;
      /* End of service model forward declarations required in SecretsManagerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelRotateSecretResult, SecretsManagerError> CancelRotateSecretOutcome;
      typedef Aws::Utils::Outcome<CreateSecretResult, SecretsManagerError> CreateSecretOutcome;
      typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, SecretsManagerError> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteSecretResult, SecretsManagerError> DeleteSecretOutcome;
      typedef Aws::Utils::Outcome<DescribeSecretResult, SecretsManagerError> DescribeSecretOutcome;
      typedef Aws::Utils::Outcome<GetRandomPasswordResult, SecretsManagerError> GetRandomPasswordOutcome;
      typedef Aws::Utils::Outcome<GetResourcePolicyResult, SecretsManagerError> GetResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<GetSecretValueResult, SecretsManagerError> GetSecretValueOutcome;
      typedef Aws::Utils::Outcome<ListSecretVersionIdsResult, SecretsManagerError> ListSecretVersionIdsOutcome;
      typedef Aws::Utils::Outcome<ListSecretsResult, SecretsManagerError> ListSecretsOutcome;
      typedef Aws::Utils::Outcome<PutResourcePolicyResult, SecretsManagerError> PutResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<PutSecretValueResult, SecretsManagerError> PutSecretValueOutcome;
      typedef Aws::Utils::Outcome<RemoveRegionsFromReplicationResult, SecretsManagerError> RemoveRegionsFromReplicationOutcome;
      typedef Aws::Utils::Outcome<ReplicateSecretToRegionsResult, SecretsManagerError> ReplicateSecretToRegionsOutcome;
      typedef Aws::Utils::Outcome<RestoreSecretResult, SecretsManagerError> RestoreSecretOutcome;
      typedef Aws::Utils::Outcome<RotateSecretResult, SecretsManagerError> RotateSecretOutcome;
      typedef Aws::Utils::Outcome<StopReplicationToReplicaResult, SecretsManagerError> StopReplicationToReplicaOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SecretsManagerError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SecretsManagerError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateSecretResult, SecretsManagerError> UpdateSecretOutcome;
      typedef Aws::Utils::Outcome<UpdateSecretVersionStageResult, SecretsManagerError> UpdateSecretVersionStageOutcome;
      typedef Aws::Utils::Outcome<ValidateResourcePolicyResult, SecretsManagerError> ValidateResourcePolicyOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelRotateSecretOutcome> CancelRotateSecretOutcomeCallable;
      typedef std::future<CreateSecretOutcome> CreateSecretOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DeleteSecretOutcome> DeleteSecretOutcomeCallable;
      typedef std::future<DescribeSecretOutcome> DescribeSecretOutcomeCallable;
      typedef std::future<GetRandomPasswordOutcome> GetRandomPasswordOutcomeCallable;
      typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
      typedef std::future<GetSecretValueOutcome> GetSecretValueOutcomeCallable;
      typedef std::future<ListSecretVersionIdsOutcome> ListSecretVersionIdsOutcomeCallable;
      typedef std::future<ListSecretsOutcome> ListSecretsOutcomeCallable;
      typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
      typedef std::future<PutSecretValueOutcome> PutSecretValueOutcomeCallable;
      typedef std::future<RemoveRegionsFromReplicationOutcome> RemoveRegionsFromReplicationOutcomeCallable;
      typedef std::future<ReplicateSecretToRegionsOutcome> ReplicateSecretToRegionsOutcomeCallable;
      typedef std::future<RestoreSecretOutcome> RestoreSecretOutcomeCallable;
      typedef std::future<RotateSecretOutcome> RotateSecretOutcomeCallable;
      typedef std::future<StopReplicationToReplicaOutcome> StopReplicationToReplicaOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateSecretOutcome> UpdateSecretOutcomeCallable;
      typedef std::future<UpdateSecretVersionStageOutcome> UpdateSecretVersionStageOutcomeCallable;
      typedef std::future<ValidateResourcePolicyOutcome> ValidateResourcePolicyOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SecretsManagerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SecretsManagerClient*, const Model::CancelRotateSecretRequest&, const Model::CancelRotateSecretOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelRotateSecretResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::CreateSecretRequest&, const Model::CreateSecretOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSecretResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::DeleteSecretRequest&, const Model::DeleteSecretOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSecretResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::DescribeSecretRequest&, const Model::DescribeSecretOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSecretResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::GetRandomPasswordRequest&, const Model::GetRandomPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRandomPasswordResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::GetSecretValueRequest&, const Model::GetSecretValueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSecretValueResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::ListSecretVersionIdsRequest&, const Model::ListSecretVersionIdsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecretVersionIdsResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::ListSecretsRequest&, const Model::ListSecretsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSecretsResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::PutSecretValueRequest&, const Model::PutSecretValueOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSecretValueResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::RemoveRegionsFromReplicationRequest&, const Model::RemoveRegionsFromReplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveRegionsFromReplicationResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::ReplicateSecretToRegionsRequest&, const Model::ReplicateSecretToRegionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReplicateSecretToRegionsResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::RestoreSecretRequest&, const Model::RestoreSecretOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreSecretResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::RotateSecretRequest&, const Model::RotateSecretOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RotateSecretResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::StopReplicationToReplicaRequest&, const Model::StopReplicationToReplicaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopReplicationToReplicaResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::UpdateSecretRequest&, const Model::UpdateSecretOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSecretResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::UpdateSecretVersionStageRequest&, const Model::UpdateSecretVersionStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSecretVersionStageResponseReceivedHandler;
    typedef std::function<void(const SecretsManagerClient*, const Model::ValidateResourcePolicyRequest&, const Model::ValidateResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidateResourcePolicyResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SecretsManager
} // namespace Aws
