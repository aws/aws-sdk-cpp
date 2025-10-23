/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/rtbfabric/RTBFabricErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/rtbfabric/RTBFabricEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in RTBFabricClient header */
#include <aws/rtbfabric/model/AcceptLinkResult.h>
#include <aws/rtbfabric/model/CreateInboundExternalLinkResult.h>
#include <aws/rtbfabric/model/CreateLinkResult.h>
#include <aws/rtbfabric/model/CreateOutboundExternalLinkResult.h>
#include <aws/rtbfabric/model/CreateRequesterGatewayResult.h>
#include <aws/rtbfabric/model/CreateResponderGatewayResult.h>
#include <aws/rtbfabric/model/DeleteInboundExternalLinkResult.h>
#include <aws/rtbfabric/model/DeleteLinkResult.h>
#include <aws/rtbfabric/model/DeleteOutboundExternalLinkResult.h>
#include <aws/rtbfabric/model/DeleteRequesterGatewayResult.h>
#include <aws/rtbfabric/model/DeleteResponderGatewayResult.h>
#include <aws/rtbfabric/model/GetInboundExternalLinkResult.h>
#include <aws/rtbfabric/model/GetLinkResult.h>
#include <aws/rtbfabric/model/GetOutboundExternalLinkResult.h>
#include <aws/rtbfabric/model/GetRequesterGatewayResult.h>
#include <aws/rtbfabric/model/GetResponderGatewayResult.h>
#include <aws/rtbfabric/model/ListLinksResult.h>
#include <aws/rtbfabric/model/ListRequesterGatewaysResult.h>
#include <aws/rtbfabric/model/ListResponderGatewaysResult.h>
#include <aws/rtbfabric/model/ListTagsForResourceResult.h>
#include <aws/rtbfabric/model/RejectLinkResult.h>
#include <aws/rtbfabric/model/TagResourceResult.h>
#include <aws/rtbfabric/model/UntagResourceResult.h>
#include <aws/rtbfabric/model/UpdateLinkResult.h>
#include <aws/rtbfabric/model/UpdateLinkModuleFlowResult.h>
#include <aws/rtbfabric/model/UpdateRequesterGatewayResult.h>
#include <aws/rtbfabric/model/UpdateResponderGatewayResult.h>
#include <aws/rtbfabric/model/ListResponderGatewaysRequest.h>
#include <aws/rtbfabric/model/ListRequesterGatewaysRequest.h>
/* End of service model headers required in RTBFabricClient header */

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

  namespace RTBFabric
  {
    using RTBFabricClientConfiguration = Aws::Client::GenericClientConfiguration;
    using RTBFabricEndpointProviderBase = Aws::RTBFabric::Endpoint::RTBFabricEndpointProviderBase;
    using RTBFabricEndpointProvider = Aws::RTBFabric::Endpoint::RTBFabricEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in RTBFabricClient header */
      class AcceptLinkRequest;
      class CreateInboundExternalLinkRequest;
      class CreateLinkRequest;
      class CreateOutboundExternalLinkRequest;
      class CreateRequesterGatewayRequest;
      class CreateResponderGatewayRequest;
      class DeleteInboundExternalLinkRequest;
      class DeleteLinkRequest;
      class DeleteOutboundExternalLinkRequest;
      class DeleteRequesterGatewayRequest;
      class DeleteResponderGatewayRequest;
      class GetInboundExternalLinkRequest;
      class GetLinkRequest;
      class GetOutboundExternalLinkRequest;
      class GetRequesterGatewayRequest;
      class GetResponderGatewayRequest;
      class ListLinksRequest;
      class ListRequesterGatewaysRequest;
      class ListResponderGatewaysRequest;
      class ListTagsForResourceRequest;
      class RejectLinkRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateLinkRequest;
      class UpdateLinkModuleFlowRequest;
      class UpdateRequesterGatewayRequest;
      class UpdateResponderGatewayRequest;
      /* End of service model forward declarations required in RTBFabricClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptLinkResult, RTBFabricError> AcceptLinkOutcome;
      typedef Aws::Utils::Outcome<CreateInboundExternalLinkResult, RTBFabricError> CreateInboundExternalLinkOutcome;
      typedef Aws::Utils::Outcome<CreateLinkResult, RTBFabricError> CreateLinkOutcome;
      typedef Aws::Utils::Outcome<CreateOutboundExternalLinkResult, RTBFabricError> CreateOutboundExternalLinkOutcome;
      typedef Aws::Utils::Outcome<CreateRequesterGatewayResult, RTBFabricError> CreateRequesterGatewayOutcome;
      typedef Aws::Utils::Outcome<CreateResponderGatewayResult, RTBFabricError> CreateResponderGatewayOutcome;
      typedef Aws::Utils::Outcome<DeleteInboundExternalLinkResult, RTBFabricError> DeleteInboundExternalLinkOutcome;
      typedef Aws::Utils::Outcome<DeleteLinkResult, RTBFabricError> DeleteLinkOutcome;
      typedef Aws::Utils::Outcome<DeleteOutboundExternalLinkResult, RTBFabricError> DeleteOutboundExternalLinkOutcome;
      typedef Aws::Utils::Outcome<DeleteRequesterGatewayResult, RTBFabricError> DeleteRequesterGatewayOutcome;
      typedef Aws::Utils::Outcome<DeleteResponderGatewayResult, RTBFabricError> DeleteResponderGatewayOutcome;
      typedef Aws::Utils::Outcome<GetInboundExternalLinkResult, RTBFabricError> GetInboundExternalLinkOutcome;
      typedef Aws::Utils::Outcome<GetLinkResult, RTBFabricError> GetLinkOutcome;
      typedef Aws::Utils::Outcome<GetOutboundExternalLinkResult, RTBFabricError> GetOutboundExternalLinkOutcome;
      typedef Aws::Utils::Outcome<GetRequesterGatewayResult, RTBFabricError> GetRequesterGatewayOutcome;
      typedef Aws::Utils::Outcome<GetResponderGatewayResult, RTBFabricError> GetResponderGatewayOutcome;
      typedef Aws::Utils::Outcome<ListLinksResult, RTBFabricError> ListLinksOutcome;
      typedef Aws::Utils::Outcome<ListRequesterGatewaysResult, RTBFabricError> ListRequesterGatewaysOutcome;
      typedef Aws::Utils::Outcome<ListResponderGatewaysResult, RTBFabricError> ListResponderGatewaysOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, RTBFabricError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<RejectLinkResult, RTBFabricError> RejectLinkOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, RTBFabricError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, RTBFabricError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateLinkResult, RTBFabricError> UpdateLinkOutcome;
      typedef Aws::Utils::Outcome<UpdateLinkModuleFlowResult, RTBFabricError> UpdateLinkModuleFlowOutcome;
      typedef Aws::Utils::Outcome<UpdateRequesterGatewayResult, RTBFabricError> UpdateRequesterGatewayOutcome;
      typedef Aws::Utils::Outcome<UpdateResponderGatewayResult, RTBFabricError> UpdateResponderGatewayOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptLinkOutcome> AcceptLinkOutcomeCallable;
      typedef std::future<CreateInboundExternalLinkOutcome> CreateInboundExternalLinkOutcomeCallable;
      typedef std::future<CreateLinkOutcome> CreateLinkOutcomeCallable;
      typedef std::future<CreateOutboundExternalLinkOutcome> CreateOutboundExternalLinkOutcomeCallable;
      typedef std::future<CreateRequesterGatewayOutcome> CreateRequesterGatewayOutcomeCallable;
      typedef std::future<CreateResponderGatewayOutcome> CreateResponderGatewayOutcomeCallable;
      typedef std::future<DeleteInboundExternalLinkOutcome> DeleteInboundExternalLinkOutcomeCallable;
      typedef std::future<DeleteLinkOutcome> DeleteLinkOutcomeCallable;
      typedef std::future<DeleteOutboundExternalLinkOutcome> DeleteOutboundExternalLinkOutcomeCallable;
      typedef std::future<DeleteRequesterGatewayOutcome> DeleteRequesterGatewayOutcomeCallable;
      typedef std::future<DeleteResponderGatewayOutcome> DeleteResponderGatewayOutcomeCallable;
      typedef std::future<GetInboundExternalLinkOutcome> GetInboundExternalLinkOutcomeCallable;
      typedef std::future<GetLinkOutcome> GetLinkOutcomeCallable;
      typedef std::future<GetOutboundExternalLinkOutcome> GetOutboundExternalLinkOutcomeCallable;
      typedef std::future<GetRequesterGatewayOutcome> GetRequesterGatewayOutcomeCallable;
      typedef std::future<GetResponderGatewayOutcome> GetResponderGatewayOutcomeCallable;
      typedef std::future<ListLinksOutcome> ListLinksOutcomeCallable;
      typedef std::future<ListRequesterGatewaysOutcome> ListRequesterGatewaysOutcomeCallable;
      typedef std::future<ListResponderGatewaysOutcome> ListResponderGatewaysOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RejectLinkOutcome> RejectLinkOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateLinkOutcome> UpdateLinkOutcomeCallable;
      typedef std::future<UpdateLinkModuleFlowOutcome> UpdateLinkModuleFlowOutcomeCallable;
      typedef std::future<UpdateRequesterGatewayOutcome> UpdateRequesterGatewayOutcomeCallable;
      typedef std::future<UpdateResponderGatewayOutcome> UpdateResponderGatewayOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class RTBFabricClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const RTBFabricClient*, const Model::AcceptLinkRequest&, const Model::AcceptLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptLinkResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::CreateInboundExternalLinkRequest&, const Model::CreateInboundExternalLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInboundExternalLinkResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::CreateLinkRequest&, const Model::CreateLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLinkResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::CreateOutboundExternalLinkRequest&, const Model::CreateOutboundExternalLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOutboundExternalLinkResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::CreateRequesterGatewayRequest&, const Model::CreateRequesterGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRequesterGatewayResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::CreateResponderGatewayRequest&, const Model::CreateResponderGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResponderGatewayResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::DeleteInboundExternalLinkRequest&, const Model::DeleteInboundExternalLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInboundExternalLinkResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::DeleteLinkRequest&, const Model::DeleteLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLinkResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::DeleteOutboundExternalLinkRequest&, const Model::DeleteOutboundExternalLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOutboundExternalLinkResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::DeleteRequesterGatewayRequest&, const Model::DeleteRequesterGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRequesterGatewayResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::DeleteResponderGatewayRequest&, const Model::DeleteResponderGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResponderGatewayResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::GetInboundExternalLinkRequest&, const Model::GetInboundExternalLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInboundExternalLinkResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::GetLinkRequest&, const Model::GetLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLinkResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::GetOutboundExternalLinkRequest&, const Model::GetOutboundExternalLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOutboundExternalLinkResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::GetRequesterGatewayRequest&, const Model::GetRequesterGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRequesterGatewayResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::GetResponderGatewayRequest&, const Model::GetResponderGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResponderGatewayResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::ListLinksRequest&, const Model::ListLinksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLinksResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::ListRequesterGatewaysRequest&, const Model::ListRequesterGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRequesterGatewaysResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::ListResponderGatewaysRequest&, const Model::ListResponderGatewaysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResponderGatewaysResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::RejectLinkRequest&, const Model::RejectLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectLinkResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::UpdateLinkRequest&, const Model::UpdateLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLinkResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::UpdateLinkModuleFlowRequest&, const Model::UpdateLinkModuleFlowOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLinkModuleFlowResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::UpdateRequesterGatewayRequest&, const Model::UpdateRequesterGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRequesterGatewayResponseReceivedHandler;
    typedef std::function<void(const RTBFabricClient*, const Model::UpdateResponderGatewayRequest&, const Model::UpdateResponderGatewayOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResponderGatewayResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace RTBFabric
} // namespace Aws
