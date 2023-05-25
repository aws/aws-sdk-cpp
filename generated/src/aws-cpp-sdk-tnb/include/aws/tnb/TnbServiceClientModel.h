/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/tnb/TnbErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/tnb/TnbEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in TnbClient header */
#include <aws/tnb/model/CreateSolFunctionPackageResult.h>
#include <aws/tnb/model/CreateSolNetworkInstanceResult.h>
#include <aws/tnb/model/CreateSolNetworkPackageResult.h>
#include <aws/tnb/model/GetSolFunctionInstanceResult.h>
#include <aws/tnb/model/GetSolFunctionPackageResult.h>
#include <aws/tnb/model/GetSolFunctionPackageContentResult.h>
#include <aws/tnb/model/GetSolFunctionPackageDescriptorResult.h>
#include <aws/tnb/model/GetSolNetworkInstanceResult.h>
#include <aws/tnb/model/GetSolNetworkOperationResult.h>
#include <aws/tnb/model/GetSolNetworkPackageResult.h>
#include <aws/tnb/model/GetSolNetworkPackageContentResult.h>
#include <aws/tnb/model/GetSolNetworkPackageDescriptorResult.h>
#include <aws/tnb/model/InstantiateSolNetworkInstanceResult.h>
#include <aws/tnb/model/ListSolFunctionInstancesResult.h>
#include <aws/tnb/model/ListSolFunctionPackagesResult.h>
#include <aws/tnb/model/ListSolNetworkInstancesResult.h>
#include <aws/tnb/model/ListSolNetworkOperationsResult.h>
#include <aws/tnb/model/ListSolNetworkPackagesResult.h>
#include <aws/tnb/model/ListTagsForResourceResult.h>
#include <aws/tnb/model/PutSolFunctionPackageContentResult.h>
#include <aws/tnb/model/PutSolNetworkPackageContentResult.h>
#include <aws/tnb/model/TagResourceResult.h>
#include <aws/tnb/model/TerminateSolNetworkInstanceResult.h>
#include <aws/tnb/model/UntagResourceResult.h>
#include <aws/tnb/model/UpdateSolFunctionPackageResult.h>
#include <aws/tnb/model/UpdateSolNetworkInstanceResult.h>
#include <aws/tnb/model/UpdateSolNetworkPackageResult.h>
#include <aws/tnb/model/ValidateSolFunctionPackageContentResult.h>
#include <aws/tnb/model/ValidateSolNetworkPackageContentResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in TnbClient header */

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

  namespace tnb
  {
    using TnbClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using TnbEndpointProviderBase = Aws::tnb::Endpoint::TnbEndpointProviderBase;
    using TnbEndpointProvider = Aws::tnb::Endpoint::TnbEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in TnbClient header */
      class CancelSolNetworkOperationRequest;
      class CreateSolFunctionPackageRequest;
      class CreateSolNetworkInstanceRequest;
      class CreateSolNetworkPackageRequest;
      class DeleteSolFunctionPackageRequest;
      class DeleteSolNetworkInstanceRequest;
      class DeleteSolNetworkPackageRequest;
      class GetSolFunctionInstanceRequest;
      class GetSolFunctionPackageRequest;
      class GetSolFunctionPackageContentRequest;
      class GetSolFunctionPackageDescriptorRequest;
      class GetSolNetworkInstanceRequest;
      class GetSolNetworkOperationRequest;
      class GetSolNetworkPackageRequest;
      class GetSolNetworkPackageContentRequest;
      class GetSolNetworkPackageDescriptorRequest;
      class InstantiateSolNetworkInstanceRequest;
      class ListSolFunctionInstancesRequest;
      class ListSolFunctionPackagesRequest;
      class ListSolNetworkInstancesRequest;
      class ListSolNetworkOperationsRequest;
      class ListSolNetworkPackagesRequest;
      class ListTagsForResourceRequest;
      class PutSolFunctionPackageContentRequest;
      class PutSolNetworkPackageContentRequest;
      class TagResourceRequest;
      class TerminateSolNetworkInstanceRequest;
      class UntagResourceRequest;
      class UpdateSolFunctionPackageRequest;
      class UpdateSolNetworkInstanceRequest;
      class UpdateSolNetworkPackageRequest;
      class ValidateSolFunctionPackageContentRequest;
      class ValidateSolNetworkPackageContentRequest;
      /* End of service model forward declarations required in TnbClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, TnbError> CancelSolNetworkOperationOutcome;
      typedef Aws::Utils::Outcome<CreateSolFunctionPackageResult, TnbError> CreateSolFunctionPackageOutcome;
      typedef Aws::Utils::Outcome<CreateSolNetworkInstanceResult, TnbError> CreateSolNetworkInstanceOutcome;
      typedef Aws::Utils::Outcome<CreateSolNetworkPackageResult, TnbError> CreateSolNetworkPackageOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TnbError> DeleteSolFunctionPackageOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TnbError> DeleteSolNetworkInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TnbError> DeleteSolNetworkPackageOutcome;
      typedef Aws::Utils::Outcome<GetSolFunctionInstanceResult, TnbError> GetSolFunctionInstanceOutcome;
      typedef Aws::Utils::Outcome<GetSolFunctionPackageResult, TnbError> GetSolFunctionPackageOutcome;
      typedef Aws::Utils::Outcome<GetSolFunctionPackageContentResult, TnbError> GetSolFunctionPackageContentOutcome;
      typedef Aws::Utils::Outcome<GetSolFunctionPackageDescriptorResult, TnbError> GetSolFunctionPackageDescriptorOutcome;
      typedef Aws::Utils::Outcome<GetSolNetworkInstanceResult, TnbError> GetSolNetworkInstanceOutcome;
      typedef Aws::Utils::Outcome<GetSolNetworkOperationResult, TnbError> GetSolNetworkOperationOutcome;
      typedef Aws::Utils::Outcome<GetSolNetworkPackageResult, TnbError> GetSolNetworkPackageOutcome;
      typedef Aws::Utils::Outcome<GetSolNetworkPackageContentResult, TnbError> GetSolNetworkPackageContentOutcome;
      typedef Aws::Utils::Outcome<GetSolNetworkPackageDescriptorResult, TnbError> GetSolNetworkPackageDescriptorOutcome;
      typedef Aws::Utils::Outcome<InstantiateSolNetworkInstanceResult, TnbError> InstantiateSolNetworkInstanceOutcome;
      typedef Aws::Utils::Outcome<ListSolFunctionInstancesResult, TnbError> ListSolFunctionInstancesOutcome;
      typedef Aws::Utils::Outcome<ListSolFunctionPackagesResult, TnbError> ListSolFunctionPackagesOutcome;
      typedef Aws::Utils::Outcome<ListSolNetworkInstancesResult, TnbError> ListSolNetworkInstancesOutcome;
      typedef Aws::Utils::Outcome<ListSolNetworkOperationsResult, TnbError> ListSolNetworkOperationsOutcome;
      typedef Aws::Utils::Outcome<ListSolNetworkPackagesResult, TnbError> ListSolNetworkPackagesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, TnbError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutSolFunctionPackageContentResult, TnbError> PutSolFunctionPackageContentOutcome;
      typedef Aws::Utils::Outcome<PutSolNetworkPackageContentResult, TnbError> PutSolNetworkPackageContentOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, TnbError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<TerminateSolNetworkInstanceResult, TnbError> TerminateSolNetworkInstanceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, TnbError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateSolFunctionPackageResult, TnbError> UpdateSolFunctionPackageOutcome;
      typedef Aws::Utils::Outcome<UpdateSolNetworkInstanceResult, TnbError> UpdateSolNetworkInstanceOutcome;
      typedef Aws::Utils::Outcome<UpdateSolNetworkPackageResult, TnbError> UpdateSolNetworkPackageOutcome;
      typedef Aws::Utils::Outcome<ValidateSolFunctionPackageContentResult, TnbError> ValidateSolFunctionPackageContentOutcome;
      typedef Aws::Utils::Outcome<ValidateSolNetworkPackageContentResult, TnbError> ValidateSolNetworkPackageContentOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelSolNetworkOperationOutcome> CancelSolNetworkOperationOutcomeCallable;
      typedef std::future<CreateSolFunctionPackageOutcome> CreateSolFunctionPackageOutcomeCallable;
      typedef std::future<CreateSolNetworkInstanceOutcome> CreateSolNetworkInstanceOutcomeCallable;
      typedef std::future<CreateSolNetworkPackageOutcome> CreateSolNetworkPackageOutcomeCallable;
      typedef std::future<DeleteSolFunctionPackageOutcome> DeleteSolFunctionPackageOutcomeCallable;
      typedef std::future<DeleteSolNetworkInstanceOutcome> DeleteSolNetworkInstanceOutcomeCallable;
      typedef std::future<DeleteSolNetworkPackageOutcome> DeleteSolNetworkPackageOutcomeCallable;
      typedef std::future<GetSolFunctionInstanceOutcome> GetSolFunctionInstanceOutcomeCallable;
      typedef std::future<GetSolFunctionPackageOutcome> GetSolFunctionPackageOutcomeCallable;
      typedef std::future<GetSolFunctionPackageContentOutcome> GetSolFunctionPackageContentOutcomeCallable;
      typedef std::future<GetSolFunctionPackageDescriptorOutcome> GetSolFunctionPackageDescriptorOutcomeCallable;
      typedef std::future<GetSolNetworkInstanceOutcome> GetSolNetworkInstanceOutcomeCallable;
      typedef std::future<GetSolNetworkOperationOutcome> GetSolNetworkOperationOutcomeCallable;
      typedef std::future<GetSolNetworkPackageOutcome> GetSolNetworkPackageOutcomeCallable;
      typedef std::future<GetSolNetworkPackageContentOutcome> GetSolNetworkPackageContentOutcomeCallable;
      typedef std::future<GetSolNetworkPackageDescriptorOutcome> GetSolNetworkPackageDescriptorOutcomeCallable;
      typedef std::future<InstantiateSolNetworkInstanceOutcome> InstantiateSolNetworkInstanceOutcomeCallable;
      typedef std::future<ListSolFunctionInstancesOutcome> ListSolFunctionInstancesOutcomeCallable;
      typedef std::future<ListSolFunctionPackagesOutcome> ListSolFunctionPackagesOutcomeCallable;
      typedef std::future<ListSolNetworkInstancesOutcome> ListSolNetworkInstancesOutcomeCallable;
      typedef std::future<ListSolNetworkOperationsOutcome> ListSolNetworkOperationsOutcomeCallable;
      typedef std::future<ListSolNetworkPackagesOutcome> ListSolNetworkPackagesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutSolFunctionPackageContentOutcome> PutSolFunctionPackageContentOutcomeCallable;
      typedef std::future<PutSolNetworkPackageContentOutcome> PutSolNetworkPackageContentOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<TerminateSolNetworkInstanceOutcome> TerminateSolNetworkInstanceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateSolFunctionPackageOutcome> UpdateSolFunctionPackageOutcomeCallable;
      typedef std::future<UpdateSolNetworkInstanceOutcome> UpdateSolNetworkInstanceOutcomeCallable;
      typedef std::future<UpdateSolNetworkPackageOutcome> UpdateSolNetworkPackageOutcomeCallable;
      typedef std::future<ValidateSolFunctionPackageContentOutcome> ValidateSolFunctionPackageContentOutcomeCallable;
      typedef std::future<ValidateSolNetworkPackageContentOutcome> ValidateSolNetworkPackageContentOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class TnbClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const TnbClient*, const Model::CancelSolNetworkOperationRequest&, const Model::CancelSolNetworkOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelSolNetworkOperationResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::CreateSolFunctionPackageRequest&, const Model::CreateSolFunctionPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSolFunctionPackageResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::CreateSolNetworkInstanceRequest&, const Model::CreateSolNetworkInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSolNetworkInstanceResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::CreateSolNetworkPackageRequest&, const Model::CreateSolNetworkPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSolNetworkPackageResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::DeleteSolFunctionPackageRequest&, const Model::DeleteSolFunctionPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSolFunctionPackageResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::DeleteSolNetworkInstanceRequest&, const Model::DeleteSolNetworkInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSolNetworkInstanceResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::DeleteSolNetworkPackageRequest&, const Model::DeleteSolNetworkPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSolNetworkPackageResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::GetSolFunctionInstanceRequest&, const Model::GetSolFunctionInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSolFunctionInstanceResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::GetSolFunctionPackageRequest&, const Model::GetSolFunctionPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSolFunctionPackageResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::GetSolFunctionPackageContentRequest&, Model::GetSolFunctionPackageContentOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSolFunctionPackageContentResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::GetSolFunctionPackageDescriptorRequest&, Model::GetSolFunctionPackageDescriptorOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSolFunctionPackageDescriptorResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::GetSolNetworkInstanceRequest&, const Model::GetSolNetworkInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSolNetworkInstanceResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::GetSolNetworkOperationRequest&, const Model::GetSolNetworkOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSolNetworkOperationResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::GetSolNetworkPackageRequest&, const Model::GetSolNetworkPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSolNetworkPackageResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::GetSolNetworkPackageContentRequest&, Model::GetSolNetworkPackageContentOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSolNetworkPackageContentResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::GetSolNetworkPackageDescriptorRequest&, Model::GetSolNetworkPackageDescriptorOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSolNetworkPackageDescriptorResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::InstantiateSolNetworkInstanceRequest&, const Model::InstantiateSolNetworkInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InstantiateSolNetworkInstanceResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::ListSolFunctionInstancesRequest&, const Model::ListSolFunctionInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSolFunctionInstancesResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::ListSolFunctionPackagesRequest&, const Model::ListSolFunctionPackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSolFunctionPackagesResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::ListSolNetworkInstancesRequest&, const Model::ListSolNetworkInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSolNetworkInstancesResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::ListSolNetworkOperationsRequest&, const Model::ListSolNetworkOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSolNetworkOperationsResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::ListSolNetworkPackagesRequest&, const Model::ListSolNetworkPackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSolNetworkPackagesResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::PutSolFunctionPackageContentRequest&, const Model::PutSolFunctionPackageContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSolFunctionPackageContentResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::PutSolNetworkPackageContentRequest&, const Model::PutSolNetworkPackageContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSolNetworkPackageContentResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::TerminateSolNetworkInstanceRequest&, const Model::TerminateSolNetworkInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateSolNetworkInstanceResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::UpdateSolFunctionPackageRequest&, const Model::UpdateSolFunctionPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSolFunctionPackageResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::UpdateSolNetworkInstanceRequest&, const Model::UpdateSolNetworkInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSolNetworkInstanceResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::UpdateSolNetworkPackageRequest&, const Model::UpdateSolNetworkPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSolNetworkPackageResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::ValidateSolFunctionPackageContentRequest&, const Model::ValidateSolFunctionPackageContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidateSolFunctionPackageContentResponseReceivedHandler;
    typedef std::function<void(const TnbClient*, const Model::ValidateSolNetworkPackageContentRequest&, const Model::ValidateSolNetworkPackageContentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ValidateSolNetworkPackageContentResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace tnb
} // namespace Aws
