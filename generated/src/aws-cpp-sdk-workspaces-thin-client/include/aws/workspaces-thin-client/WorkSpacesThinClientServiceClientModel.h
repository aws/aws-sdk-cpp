/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/workspaces-thin-client/WorkSpacesThinClientErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClientEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in WorkSpacesThinClientClient header */
#include <aws/workspaces-thin-client/model/CreateEnvironmentResult.h>
#include <aws/workspaces-thin-client/model/DeleteDeviceResult.h>
#include <aws/workspaces-thin-client/model/DeleteEnvironmentResult.h>
#include <aws/workspaces-thin-client/model/DeregisterDeviceResult.h>
#include <aws/workspaces-thin-client/model/GetDeviceResult.h>
#include <aws/workspaces-thin-client/model/GetEnvironmentResult.h>
#include <aws/workspaces-thin-client/model/GetSoftwareSetResult.h>
#include <aws/workspaces-thin-client/model/ListDevicesResult.h>
#include <aws/workspaces-thin-client/model/ListEnvironmentsResult.h>
#include <aws/workspaces-thin-client/model/ListSoftwareSetsResult.h>
#include <aws/workspaces-thin-client/model/ListTagsForResourceResult.h>
#include <aws/workspaces-thin-client/model/TagResourceResult.h>
#include <aws/workspaces-thin-client/model/UntagResourceResult.h>
#include <aws/workspaces-thin-client/model/UpdateDeviceResult.h>
#include <aws/workspaces-thin-client/model/UpdateEnvironmentResult.h>
#include <aws/workspaces-thin-client/model/UpdateSoftwareSetResult.h>
/* End of service model headers required in WorkSpacesThinClientClient header */

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

  namespace WorkSpacesThinClient
  {
    using WorkSpacesThinClientClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using WorkSpacesThinClientEndpointProviderBase = Aws::WorkSpacesThinClient::Endpoint::WorkSpacesThinClientEndpointProviderBase;
    using WorkSpacesThinClientEndpointProvider = Aws::WorkSpacesThinClient::Endpoint::WorkSpacesThinClientEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in WorkSpacesThinClientClient header */
      class CreateEnvironmentRequest;
      class DeleteDeviceRequest;
      class DeleteEnvironmentRequest;
      class DeregisterDeviceRequest;
      class GetDeviceRequest;
      class GetEnvironmentRequest;
      class GetSoftwareSetRequest;
      class ListDevicesRequest;
      class ListEnvironmentsRequest;
      class ListSoftwareSetsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDeviceRequest;
      class UpdateEnvironmentRequest;
      class UpdateSoftwareSetRequest;
      /* End of service model forward declarations required in WorkSpacesThinClientClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateEnvironmentResult, WorkSpacesThinClientError> CreateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeleteDeviceResult, WorkSpacesThinClientError> DeleteDeviceOutcome;
      typedef Aws::Utils::Outcome<DeleteEnvironmentResult, WorkSpacesThinClientError> DeleteEnvironmentOutcome;
      typedef Aws::Utils::Outcome<DeregisterDeviceResult, WorkSpacesThinClientError> DeregisterDeviceOutcome;
      typedef Aws::Utils::Outcome<GetDeviceResult, WorkSpacesThinClientError> GetDeviceOutcome;
      typedef Aws::Utils::Outcome<GetEnvironmentResult, WorkSpacesThinClientError> GetEnvironmentOutcome;
      typedef Aws::Utils::Outcome<GetSoftwareSetResult, WorkSpacesThinClientError> GetSoftwareSetOutcome;
      typedef Aws::Utils::Outcome<ListDevicesResult, WorkSpacesThinClientError> ListDevicesOutcome;
      typedef Aws::Utils::Outcome<ListEnvironmentsResult, WorkSpacesThinClientError> ListEnvironmentsOutcome;
      typedef Aws::Utils::Outcome<ListSoftwareSetsResult, WorkSpacesThinClientError> ListSoftwareSetsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, WorkSpacesThinClientError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, WorkSpacesThinClientError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, WorkSpacesThinClientError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDeviceResult, WorkSpacesThinClientError> UpdateDeviceOutcome;
      typedef Aws::Utils::Outcome<UpdateEnvironmentResult, WorkSpacesThinClientError> UpdateEnvironmentOutcome;
      typedef Aws::Utils::Outcome<UpdateSoftwareSetResult, WorkSpacesThinClientError> UpdateSoftwareSetOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateEnvironmentOutcome> CreateEnvironmentOutcomeCallable;
      typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
      typedef std::future<DeleteEnvironmentOutcome> DeleteEnvironmentOutcomeCallable;
      typedef std::future<DeregisterDeviceOutcome> DeregisterDeviceOutcomeCallable;
      typedef std::future<GetDeviceOutcome> GetDeviceOutcomeCallable;
      typedef std::future<GetEnvironmentOutcome> GetEnvironmentOutcomeCallable;
      typedef std::future<GetSoftwareSetOutcome> GetSoftwareSetOutcomeCallable;
      typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
      typedef std::future<ListEnvironmentsOutcome> ListEnvironmentsOutcomeCallable;
      typedef std::future<ListSoftwareSetsOutcome> ListSoftwareSetsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDeviceOutcome> UpdateDeviceOutcomeCallable;
      typedef std::future<UpdateEnvironmentOutcome> UpdateEnvironmentOutcomeCallable;
      typedef std::future<UpdateSoftwareSetOutcome> UpdateSoftwareSetOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class WorkSpacesThinClientClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const WorkSpacesThinClientClient*, const Model::CreateEnvironmentRequest&, const Model::CreateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesThinClientClient*, const Model::DeleteDeviceRequest&, const Model::DeleteDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeviceResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesThinClientClient*, const Model::DeleteEnvironmentRequest&, const Model::DeleteEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEnvironmentResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesThinClientClient*, const Model::DeregisterDeviceRequest&, const Model::DeregisterDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterDeviceResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesThinClientClient*, const Model::GetDeviceRequest&, const Model::GetDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesThinClientClient*, const Model::GetEnvironmentRequest&, const Model::GetEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEnvironmentResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesThinClientClient*, const Model::GetSoftwareSetRequest&, const Model::GetSoftwareSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSoftwareSetResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesThinClientClient*, const Model::ListDevicesRequest&, const Model::ListDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevicesResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesThinClientClient*, const Model::ListEnvironmentsRequest&, const Model::ListEnvironmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEnvironmentsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesThinClientClient*, const Model::ListSoftwareSetsRequest&, const Model::ListSoftwareSetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSoftwareSetsResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesThinClientClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesThinClientClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesThinClientClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesThinClientClient*, const Model::UpdateDeviceRequest&, const Model::UpdateDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeviceResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesThinClientClient*, const Model::UpdateEnvironmentRequest&, const Model::UpdateEnvironmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEnvironmentResponseReceivedHandler;
    typedef std::function<void(const WorkSpacesThinClientClient*, const Model::UpdateSoftwareSetRequest&, const Model::UpdateSoftwareSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSoftwareSetResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace WorkSpacesThinClient
} // namespace Aws
