/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/supplychain/SupplyChainErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/supplychain/SupplyChainEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SupplyChainClient header */
#include <aws/supplychain/model/CreateBillOfMaterialsImportJobResult.h>
#include <aws/supplychain/model/GetBillOfMaterialsImportJobResult.h>
/* End of service model headers required in SupplyChainClient header */

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

  namespace SupplyChain
  {
    using SupplyChainClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SupplyChainEndpointProviderBase = Aws::SupplyChain::Endpoint::SupplyChainEndpointProviderBase;
    using SupplyChainEndpointProvider = Aws::SupplyChain::Endpoint::SupplyChainEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SupplyChainClient header */
      class CreateBillOfMaterialsImportJobRequest;
      class GetBillOfMaterialsImportJobRequest;
      /* End of service model forward declarations required in SupplyChainClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateBillOfMaterialsImportJobResult, SupplyChainError> CreateBillOfMaterialsImportJobOutcome;
      typedef Aws::Utils::Outcome<GetBillOfMaterialsImportJobResult, SupplyChainError> GetBillOfMaterialsImportJobOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateBillOfMaterialsImportJobOutcome> CreateBillOfMaterialsImportJobOutcomeCallable;
      typedef std::future<GetBillOfMaterialsImportJobOutcome> GetBillOfMaterialsImportJobOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SupplyChainClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SupplyChainClient*, const Model::CreateBillOfMaterialsImportJobRequest&, const Model::CreateBillOfMaterialsImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBillOfMaterialsImportJobResponseReceivedHandler;
    typedef std::function<void(const SupplyChainClient*, const Model::GetBillOfMaterialsImportJobRequest&, const Model::GetBillOfMaterialsImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBillOfMaterialsImportJobResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SupplyChain
} // namespace Aws
