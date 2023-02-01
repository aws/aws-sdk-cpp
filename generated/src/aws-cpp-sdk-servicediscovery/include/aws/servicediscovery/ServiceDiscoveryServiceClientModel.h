/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/servicediscovery/ServiceDiscoveryErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/servicediscovery/ServiceDiscoveryEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ServiceDiscoveryClient header */
#include <aws/servicediscovery/model/CreateHttpNamespaceResult.h>
#include <aws/servicediscovery/model/CreatePrivateDnsNamespaceResult.h>
#include <aws/servicediscovery/model/CreatePublicDnsNamespaceResult.h>
#include <aws/servicediscovery/model/CreateServiceResult.h>
#include <aws/servicediscovery/model/DeleteNamespaceResult.h>
#include <aws/servicediscovery/model/DeleteServiceResult.h>
#include <aws/servicediscovery/model/DeregisterInstanceResult.h>
#include <aws/servicediscovery/model/DiscoverInstancesResult.h>
#include <aws/servicediscovery/model/GetInstanceResult.h>
#include <aws/servicediscovery/model/GetInstancesHealthStatusResult.h>
#include <aws/servicediscovery/model/GetNamespaceResult.h>
#include <aws/servicediscovery/model/GetOperationResult.h>
#include <aws/servicediscovery/model/GetServiceResult.h>
#include <aws/servicediscovery/model/ListInstancesResult.h>
#include <aws/servicediscovery/model/ListNamespacesResult.h>
#include <aws/servicediscovery/model/ListOperationsResult.h>
#include <aws/servicediscovery/model/ListServicesResult.h>
#include <aws/servicediscovery/model/ListTagsForResourceResult.h>
#include <aws/servicediscovery/model/RegisterInstanceResult.h>
#include <aws/servicediscovery/model/TagResourceResult.h>
#include <aws/servicediscovery/model/UntagResourceResult.h>
#include <aws/servicediscovery/model/UpdateHttpNamespaceResult.h>
#include <aws/servicediscovery/model/UpdatePrivateDnsNamespaceResult.h>
#include <aws/servicediscovery/model/UpdatePublicDnsNamespaceResult.h>
#include <aws/servicediscovery/model/UpdateServiceResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ServiceDiscoveryClient header */

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

  namespace ServiceDiscovery
  {
    using ServiceDiscoveryClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ServiceDiscoveryEndpointProviderBase = Aws::ServiceDiscovery::Endpoint::ServiceDiscoveryEndpointProviderBase;
    using ServiceDiscoveryEndpointProvider = Aws::ServiceDiscovery::Endpoint::ServiceDiscoveryEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ServiceDiscoveryClient header */
      class CreateHttpNamespaceRequest;
      class CreatePrivateDnsNamespaceRequest;
      class CreatePublicDnsNamespaceRequest;
      class CreateServiceRequest;
      class DeleteNamespaceRequest;
      class DeleteServiceRequest;
      class DeregisterInstanceRequest;
      class DiscoverInstancesRequest;
      class GetInstanceRequest;
      class GetInstancesHealthStatusRequest;
      class GetNamespaceRequest;
      class GetOperationRequest;
      class GetServiceRequest;
      class ListInstancesRequest;
      class ListNamespacesRequest;
      class ListOperationsRequest;
      class ListServicesRequest;
      class ListTagsForResourceRequest;
      class RegisterInstanceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateHttpNamespaceRequest;
      class UpdateInstanceCustomHealthStatusRequest;
      class UpdatePrivateDnsNamespaceRequest;
      class UpdatePublicDnsNamespaceRequest;
      class UpdateServiceRequest;
      /* End of service model forward declarations required in ServiceDiscoveryClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateHttpNamespaceResult, ServiceDiscoveryError> CreateHttpNamespaceOutcome;
      typedef Aws::Utils::Outcome<CreatePrivateDnsNamespaceResult, ServiceDiscoveryError> CreatePrivateDnsNamespaceOutcome;
      typedef Aws::Utils::Outcome<CreatePublicDnsNamespaceResult, ServiceDiscoveryError> CreatePublicDnsNamespaceOutcome;
      typedef Aws::Utils::Outcome<CreateServiceResult, ServiceDiscoveryError> CreateServiceOutcome;
      typedef Aws::Utils::Outcome<DeleteNamespaceResult, ServiceDiscoveryError> DeleteNamespaceOutcome;
      typedef Aws::Utils::Outcome<DeleteServiceResult, ServiceDiscoveryError> DeleteServiceOutcome;
      typedef Aws::Utils::Outcome<DeregisterInstanceResult, ServiceDiscoveryError> DeregisterInstanceOutcome;
      typedef Aws::Utils::Outcome<DiscoverInstancesResult, ServiceDiscoveryError> DiscoverInstancesOutcome;
      typedef Aws::Utils::Outcome<GetInstanceResult, ServiceDiscoveryError> GetInstanceOutcome;
      typedef Aws::Utils::Outcome<GetInstancesHealthStatusResult, ServiceDiscoveryError> GetInstancesHealthStatusOutcome;
      typedef Aws::Utils::Outcome<GetNamespaceResult, ServiceDiscoveryError> GetNamespaceOutcome;
      typedef Aws::Utils::Outcome<GetOperationResult, ServiceDiscoveryError> GetOperationOutcome;
      typedef Aws::Utils::Outcome<GetServiceResult, ServiceDiscoveryError> GetServiceOutcome;
      typedef Aws::Utils::Outcome<ListInstancesResult, ServiceDiscoveryError> ListInstancesOutcome;
      typedef Aws::Utils::Outcome<ListNamespacesResult, ServiceDiscoveryError> ListNamespacesOutcome;
      typedef Aws::Utils::Outcome<ListOperationsResult, ServiceDiscoveryError> ListOperationsOutcome;
      typedef Aws::Utils::Outcome<ListServicesResult, ServiceDiscoveryError> ListServicesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, ServiceDiscoveryError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<RegisterInstanceResult, ServiceDiscoveryError> RegisterInstanceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, ServiceDiscoveryError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, ServiceDiscoveryError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateHttpNamespaceResult, ServiceDiscoveryError> UpdateHttpNamespaceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ServiceDiscoveryError> UpdateInstanceCustomHealthStatusOutcome;
      typedef Aws::Utils::Outcome<UpdatePrivateDnsNamespaceResult, ServiceDiscoveryError> UpdatePrivateDnsNamespaceOutcome;
      typedef Aws::Utils::Outcome<UpdatePublicDnsNamespaceResult, ServiceDiscoveryError> UpdatePublicDnsNamespaceOutcome;
      typedef Aws::Utils::Outcome<UpdateServiceResult, ServiceDiscoveryError> UpdateServiceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateHttpNamespaceOutcome> CreateHttpNamespaceOutcomeCallable;
      typedef std::future<CreatePrivateDnsNamespaceOutcome> CreatePrivateDnsNamespaceOutcomeCallable;
      typedef std::future<CreatePublicDnsNamespaceOutcome> CreatePublicDnsNamespaceOutcomeCallable;
      typedef std::future<CreateServiceOutcome> CreateServiceOutcomeCallable;
      typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
      typedef std::future<DeleteServiceOutcome> DeleteServiceOutcomeCallable;
      typedef std::future<DeregisterInstanceOutcome> DeregisterInstanceOutcomeCallable;
      typedef std::future<DiscoverInstancesOutcome> DiscoverInstancesOutcomeCallable;
      typedef std::future<GetInstanceOutcome> GetInstanceOutcomeCallable;
      typedef std::future<GetInstancesHealthStatusOutcome> GetInstancesHealthStatusOutcomeCallable;
      typedef std::future<GetNamespaceOutcome> GetNamespaceOutcomeCallable;
      typedef std::future<GetOperationOutcome> GetOperationOutcomeCallable;
      typedef std::future<GetServiceOutcome> GetServiceOutcomeCallable;
      typedef std::future<ListInstancesOutcome> ListInstancesOutcomeCallable;
      typedef std::future<ListNamespacesOutcome> ListNamespacesOutcomeCallable;
      typedef std::future<ListOperationsOutcome> ListOperationsOutcomeCallable;
      typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RegisterInstanceOutcome> RegisterInstanceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateHttpNamespaceOutcome> UpdateHttpNamespaceOutcomeCallable;
      typedef std::future<UpdateInstanceCustomHealthStatusOutcome> UpdateInstanceCustomHealthStatusOutcomeCallable;
      typedef std::future<UpdatePrivateDnsNamespaceOutcome> UpdatePrivateDnsNamespaceOutcomeCallable;
      typedef std::future<UpdatePublicDnsNamespaceOutcome> UpdatePublicDnsNamespaceOutcomeCallable;
      typedef std::future<UpdateServiceOutcome> UpdateServiceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ServiceDiscoveryClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::CreateHttpNamespaceRequest&, const Model::CreateHttpNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHttpNamespaceResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::CreatePrivateDnsNamespaceRequest&, const Model::CreatePrivateDnsNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePrivateDnsNamespaceResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::CreatePublicDnsNamespaceRequest&, const Model::CreatePublicDnsNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePublicDnsNamespaceResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::CreateServiceRequest&, const Model::CreateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::DeleteNamespaceRequest&, const Model::DeleteNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNamespaceResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::DeleteServiceRequest&, const Model::DeleteServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::DeregisterInstanceRequest&, const Model::DeregisterInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterInstanceResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::DiscoverInstancesRequest&, const Model::DiscoverInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DiscoverInstancesResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::GetInstanceRequest&, const Model::GetInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::GetInstancesHealthStatusRequest&, const Model::GetInstancesHealthStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstancesHealthStatusResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::GetNamespaceRequest&, const Model::GetNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNamespaceResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::GetOperationRequest&, const Model::GetOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOperationResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::GetServiceRequest&, const Model::GetServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::ListInstancesRequest&, const Model::ListInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstancesResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::ListNamespacesRequest&, const Model::ListNamespacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNamespacesResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::ListOperationsRequest&, const Model::ListOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOperationsResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::ListServicesRequest&, const Model::ListServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServicesResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::RegisterInstanceRequest&, const Model::RegisterInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterInstanceResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::UpdateHttpNamespaceRequest&, const Model::UpdateHttpNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateHttpNamespaceResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::UpdateInstanceCustomHealthStatusRequest&, const Model::UpdateInstanceCustomHealthStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInstanceCustomHealthStatusResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::UpdatePrivateDnsNamespaceRequest&, const Model::UpdatePrivateDnsNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePrivateDnsNamespaceResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::UpdatePublicDnsNamespaceRequest&, const Model::UpdatePublicDnsNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePublicDnsNamespaceResponseReceivedHandler;
    typedef std::function<void(const ServiceDiscoveryClient*, const Model::UpdateServiceRequest&, const Model::UpdateServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ServiceDiscovery
} // namespace Aws
