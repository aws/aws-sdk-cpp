/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/mediastore/MediaStoreErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/mediastore/MediaStoreEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MediaStoreClient header */
#include <aws/mediastore/model/CreateContainerResult.h>
#include <aws/mediastore/model/DeleteContainerResult.h>
#include <aws/mediastore/model/DeleteContainerPolicyResult.h>
#include <aws/mediastore/model/DeleteCorsPolicyResult.h>
#include <aws/mediastore/model/DeleteLifecyclePolicyResult.h>
#include <aws/mediastore/model/DeleteMetricPolicyResult.h>
#include <aws/mediastore/model/DescribeContainerResult.h>
#include <aws/mediastore/model/GetContainerPolicyResult.h>
#include <aws/mediastore/model/GetCorsPolicyResult.h>
#include <aws/mediastore/model/GetLifecyclePolicyResult.h>
#include <aws/mediastore/model/GetMetricPolicyResult.h>
#include <aws/mediastore/model/ListContainersResult.h>
#include <aws/mediastore/model/ListTagsForResourceResult.h>
#include <aws/mediastore/model/PutContainerPolicyResult.h>
#include <aws/mediastore/model/PutCorsPolicyResult.h>
#include <aws/mediastore/model/PutLifecyclePolicyResult.h>
#include <aws/mediastore/model/PutMetricPolicyResult.h>
#include <aws/mediastore/model/StartAccessLoggingResult.h>
#include <aws/mediastore/model/StopAccessLoggingResult.h>
#include <aws/mediastore/model/TagResourceResult.h>
#include <aws/mediastore/model/UntagResourceResult.h>
/* End of service model headers required in MediaStoreClient header */

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

  namespace MediaStore
  {
    using MediaStoreClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MediaStoreEndpointProviderBase = Aws::MediaStore::Endpoint::MediaStoreEndpointProviderBase;
    using MediaStoreEndpointProvider = Aws::MediaStore::Endpoint::MediaStoreEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MediaStoreClient header */
      class CreateContainerRequest;
      class DeleteContainerRequest;
      class DeleteContainerPolicyRequest;
      class DeleteCorsPolicyRequest;
      class DeleteLifecyclePolicyRequest;
      class DeleteMetricPolicyRequest;
      class DescribeContainerRequest;
      class GetContainerPolicyRequest;
      class GetCorsPolicyRequest;
      class GetLifecyclePolicyRequest;
      class GetMetricPolicyRequest;
      class ListContainersRequest;
      class ListTagsForResourceRequest;
      class PutContainerPolicyRequest;
      class PutCorsPolicyRequest;
      class PutLifecyclePolicyRequest;
      class PutMetricPolicyRequest;
      class StartAccessLoggingRequest;
      class StopAccessLoggingRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in MediaStoreClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateContainerResult, MediaStoreError> CreateContainerOutcome;
      typedef Aws::Utils::Outcome<DeleteContainerResult, MediaStoreError> DeleteContainerOutcome;
      typedef Aws::Utils::Outcome<DeleteContainerPolicyResult, MediaStoreError> DeleteContainerPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteCorsPolicyResult, MediaStoreError> DeleteCorsPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteLifecyclePolicyResult, MediaStoreError> DeleteLifecyclePolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteMetricPolicyResult, MediaStoreError> DeleteMetricPolicyOutcome;
      typedef Aws::Utils::Outcome<DescribeContainerResult, MediaStoreError> DescribeContainerOutcome;
      typedef Aws::Utils::Outcome<GetContainerPolicyResult, MediaStoreError> GetContainerPolicyOutcome;
      typedef Aws::Utils::Outcome<GetCorsPolicyResult, MediaStoreError> GetCorsPolicyOutcome;
      typedef Aws::Utils::Outcome<GetLifecyclePolicyResult, MediaStoreError> GetLifecyclePolicyOutcome;
      typedef Aws::Utils::Outcome<GetMetricPolicyResult, MediaStoreError> GetMetricPolicyOutcome;
      typedef Aws::Utils::Outcome<ListContainersResult, MediaStoreError> ListContainersOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MediaStoreError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutContainerPolicyResult, MediaStoreError> PutContainerPolicyOutcome;
      typedef Aws::Utils::Outcome<PutCorsPolicyResult, MediaStoreError> PutCorsPolicyOutcome;
      typedef Aws::Utils::Outcome<PutLifecyclePolicyResult, MediaStoreError> PutLifecyclePolicyOutcome;
      typedef Aws::Utils::Outcome<PutMetricPolicyResult, MediaStoreError> PutMetricPolicyOutcome;
      typedef Aws::Utils::Outcome<StartAccessLoggingResult, MediaStoreError> StartAccessLoggingOutcome;
      typedef Aws::Utils::Outcome<StopAccessLoggingResult, MediaStoreError> StopAccessLoggingOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, MediaStoreError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, MediaStoreError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateContainerOutcome> CreateContainerOutcomeCallable;
      typedef std::future<DeleteContainerOutcome> DeleteContainerOutcomeCallable;
      typedef std::future<DeleteContainerPolicyOutcome> DeleteContainerPolicyOutcomeCallable;
      typedef std::future<DeleteCorsPolicyOutcome> DeleteCorsPolicyOutcomeCallable;
      typedef std::future<DeleteLifecyclePolicyOutcome> DeleteLifecyclePolicyOutcomeCallable;
      typedef std::future<DeleteMetricPolicyOutcome> DeleteMetricPolicyOutcomeCallable;
      typedef std::future<DescribeContainerOutcome> DescribeContainerOutcomeCallable;
      typedef std::future<GetContainerPolicyOutcome> GetContainerPolicyOutcomeCallable;
      typedef std::future<GetCorsPolicyOutcome> GetCorsPolicyOutcomeCallable;
      typedef std::future<GetLifecyclePolicyOutcome> GetLifecyclePolicyOutcomeCallable;
      typedef std::future<GetMetricPolicyOutcome> GetMetricPolicyOutcomeCallable;
      typedef std::future<ListContainersOutcome> ListContainersOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutContainerPolicyOutcome> PutContainerPolicyOutcomeCallable;
      typedef std::future<PutCorsPolicyOutcome> PutCorsPolicyOutcomeCallable;
      typedef std::future<PutLifecyclePolicyOutcome> PutLifecyclePolicyOutcomeCallable;
      typedef std::future<PutMetricPolicyOutcome> PutMetricPolicyOutcomeCallable;
      typedef std::future<StartAccessLoggingOutcome> StartAccessLoggingOutcomeCallable;
      typedef std::future<StopAccessLoggingOutcome> StopAccessLoggingOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MediaStoreClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MediaStoreClient*, const Model::CreateContainerRequest&, const Model::CreateContainerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContainerResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::DeleteContainerRequest&, const Model::DeleteContainerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContainerResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::DeleteContainerPolicyRequest&, const Model::DeleteContainerPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContainerPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::DeleteCorsPolicyRequest&, const Model::DeleteCorsPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCorsPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::DeleteLifecyclePolicyRequest&, const Model::DeleteLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::DeleteMetricPolicyRequest&, const Model::DeleteMetricPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMetricPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::DescribeContainerRequest&, const Model::DescribeContainerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContainerResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::GetContainerPolicyRequest&, const Model::GetContainerPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContainerPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::GetCorsPolicyRequest&, const Model::GetCorsPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCorsPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::GetLifecyclePolicyRequest&, const Model::GetLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::GetMetricPolicyRequest&, const Model::GetMetricPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetricPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::ListContainersRequest&, const Model::ListContainersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContainersResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::PutContainerPolicyRequest&, const Model::PutContainerPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutContainerPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::PutCorsPolicyRequest&, const Model::PutCorsPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutCorsPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::PutLifecyclePolicyRequest&, const Model::PutLifecyclePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutLifecyclePolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::PutMetricPolicyRequest&, const Model::PutMetricPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMetricPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::StartAccessLoggingRequest&, const Model::StartAccessLoggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAccessLoggingResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::StopAccessLoggingRequest&, const Model::StopAccessLoggingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopAccessLoggingResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaStoreClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MediaStore
} // namespace Aws
