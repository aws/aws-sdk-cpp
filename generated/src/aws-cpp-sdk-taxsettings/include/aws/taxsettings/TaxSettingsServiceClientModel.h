/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/taxsettings/TaxSettingsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/taxsettings/TaxSettingsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in TaxSettingsClient header */
#include <aws/taxsettings/model/BatchDeleteTaxRegistrationResult.h>
#include <aws/taxsettings/model/BatchGetTaxExemptionsResult.h>
#include <aws/taxsettings/model/BatchPutTaxRegistrationResult.h>
#include <aws/taxsettings/model/DeleteSupplementalTaxRegistrationResult.h>
#include <aws/taxsettings/model/DeleteTaxRegistrationResult.h>
#include <aws/taxsettings/model/GetTaxExemptionTypesResult.h>
#include <aws/taxsettings/model/GetTaxInheritanceResult.h>
#include <aws/taxsettings/model/GetTaxRegistrationResult.h>
#include <aws/taxsettings/model/GetTaxRegistrationDocumentResult.h>
#include <aws/taxsettings/model/ListSupplementalTaxRegistrationsResult.h>
#include <aws/taxsettings/model/ListTaxExemptionsResult.h>
#include <aws/taxsettings/model/ListTaxRegistrationsResult.h>
#include <aws/taxsettings/model/PutSupplementalTaxRegistrationResult.h>
#include <aws/taxsettings/model/PutTaxExemptionResult.h>
#include <aws/taxsettings/model/PutTaxInheritanceResult.h>
#include <aws/taxsettings/model/PutTaxRegistrationResult.h>
#include <aws/taxsettings/model/ListTaxRegistrationsRequest.h>
#include <aws/taxsettings/model/ListTaxExemptionsRequest.h>
#include <aws/taxsettings/model/PutTaxInheritanceRequest.h>
#include <aws/taxsettings/model/GetTaxInheritanceRequest.h>
#include <aws/taxsettings/model/DeleteTaxRegistrationRequest.h>
#include <aws/taxsettings/model/GetTaxRegistrationRequest.h>
#include <aws/taxsettings/model/ListSupplementalTaxRegistrationsRequest.h>
#include <aws/taxsettings/model/GetTaxExemptionTypesRequest.h>
/* End of service model headers required in TaxSettingsClient header */

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

  namespace TaxSettings
  {
    using TaxSettingsClientConfiguration = Aws::Client::GenericClientConfiguration;
    using TaxSettingsEndpointProviderBase = Aws::TaxSettings::Endpoint::TaxSettingsEndpointProviderBase;
    using TaxSettingsEndpointProvider = Aws::TaxSettings::Endpoint::TaxSettingsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in TaxSettingsClient header */
      class BatchDeleteTaxRegistrationRequest;
      class BatchGetTaxExemptionsRequest;
      class BatchPutTaxRegistrationRequest;
      class DeleteSupplementalTaxRegistrationRequest;
      class DeleteTaxRegistrationRequest;
      class GetTaxExemptionTypesRequest;
      class GetTaxInheritanceRequest;
      class GetTaxRegistrationRequest;
      class GetTaxRegistrationDocumentRequest;
      class ListSupplementalTaxRegistrationsRequest;
      class ListTaxExemptionsRequest;
      class ListTaxRegistrationsRequest;
      class PutSupplementalTaxRegistrationRequest;
      class PutTaxExemptionRequest;
      class PutTaxInheritanceRequest;
      class PutTaxRegistrationRequest;
      /* End of service model forward declarations required in TaxSettingsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchDeleteTaxRegistrationResult, TaxSettingsError> BatchDeleteTaxRegistrationOutcome;
      typedef Aws::Utils::Outcome<BatchGetTaxExemptionsResult, TaxSettingsError> BatchGetTaxExemptionsOutcome;
      typedef Aws::Utils::Outcome<BatchPutTaxRegistrationResult, TaxSettingsError> BatchPutTaxRegistrationOutcome;
      typedef Aws::Utils::Outcome<DeleteSupplementalTaxRegistrationResult, TaxSettingsError> DeleteSupplementalTaxRegistrationOutcome;
      typedef Aws::Utils::Outcome<DeleteTaxRegistrationResult, TaxSettingsError> DeleteTaxRegistrationOutcome;
      typedef Aws::Utils::Outcome<GetTaxExemptionTypesResult, TaxSettingsError> GetTaxExemptionTypesOutcome;
      typedef Aws::Utils::Outcome<GetTaxInheritanceResult, TaxSettingsError> GetTaxInheritanceOutcome;
      typedef Aws::Utils::Outcome<GetTaxRegistrationResult, TaxSettingsError> GetTaxRegistrationOutcome;
      typedef Aws::Utils::Outcome<GetTaxRegistrationDocumentResult, TaxSettingsError> GetTaxRegistrationDocumentOutcome;
      typedef Aws::Utils::Outcome<ListSupplementalTaxRegistrationsResult, TaxSettingsError> ListSupplementalTaxRegistrationsOutcome;
      typedef Aws::Utils::Outcome<ListTaxExemptionsResult, TaxSettingsError> ListTaxExemptionsOutcome;
      typedef Aws::Utils::Outcome<ListTaxRegistrationsResult, TaxSettingsError> ListTaxRegistrationsOutcome;
      typedef Aws::Utils::Outcome<PutSupplementalTaxRegistrationResult, TaxSettingsError> PutSupplementalTaxRegistrationOutcome;
      typedef Aws::Utils::Outcome<PutTaxExemptionResult, TaxSettingsError> PutTaxExemptionOutcome;
      typedef Aws::Utils::Outcome<PutTaxInheritanceResult, TaxSettingsError> PutTaxInheritanceOutcome;
      typedef Aws::Utils::Outcome<PutTaxRegistrationResult, TaxSettingsError> PutTaxRegistrationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchDeleteTaxRegistrationOutcome> BatchDeleteTaxRegistrationOutcomeCallable;
      typedef std::future<BatchGetTaxExemptionsOutcome> BatchGetTaxExemptionsOutcomeCallable;
      typedef std::future<BatchPutTaxRegistrationOutcome> BatchPutTaxRegistrationOutcomeCallable;
      typedef std::future<DeleteSupplementalTaxRegistrationOutcome> DeleteSupplementalTaxRegistrationOutcomeCallable;
      typedef std::future<DeleteTaxRegistrationOutcome> DeleteTaxRegistrationOutcomeCallable;
      typedef std::future<GetTaxExemptionTypesOutcome> GetTaxExemptionTypesOutcomeCallable;
      typedef std::future<GetTaxInheritanceOutcome> GetTaxInheritanceOutcomeCallable;
      typedef std::future<GetTaxRegistrationOutcome> GetTaxRegistrationOutcomeCallable;
      typedef std::future<GetTaxRegistrationDocumentOutcome> GetTaxRegistrationDocumentOutcomeCallable;
      typedef std::future<ListSupplementalTaxRegistrationsOutcome> ListSupplementalTaxRegistrationsOutcomeCallable;
      typedef std::future<ListTaxExemptionsOutcome> ListTaxExemptionsOutcomeCallable;
      typedef std::future<ListTaxRegistrationsOutcome> ListTaxRegistrationsOutcomeCallable;
      typedef std::future<PutSupplementalTaxRegistrationOutcome> PutSupplementalTaxRegistrationOutcomeCallable;
      typedef std::future<PutTaxExemptionOutcome> PutTaxExemptionOutcomeCallable;
      typedef std::future<PutTaxInheritanceOutcome> PutTaxInheritanceOutcomeCallable;
      typedef std::future<PutTaxRegistrationOutcome> PutTaxRegistrationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class TaxSettingsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const TaxSettingsClient*, const Model::BatchDeleteTaxRegistrationRequest&, const Model::BatchDeleteTaxRegistrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteTaxRegistrationResponseReceivedHandler;
    typedef std::function<void(const TaxSettingsClient*, const Model::BatchGetTaxExemptionsRequest&, const Model::BatchGetTaxExemptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetTaxExemptionsResponseReceivedHandler;
    typedef std::function<void(const TaxSettingsClient*, const Model::BatchPutTaxRegistrationRequest&, const Model::BatchPutTaxRegistrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutTaxRegistrationResponseReceivedHandler;
    typedef std::function<void(const TaxSettingsClient*, const Model::DeleteSupplementalTaxRegistrationRequest&, const Model::DeleteSupplementalTaxRegistrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSupplementalTaxRegistrationResponseReceivedHandler;
    typedef std::function<void(const TaxSettingsClient*, const Model::DeleteTaxRegistrationRequest&, const Model::DeleteTaxRegistrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTaxRegistrationResponseReceivedHandler;
    typedef std::function<void(const TaxSettingsClient*, const Model::GetTaxExemptionTypesRequest&, const Model::GetTaxExemptionTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTaxExemptionTypesResponseReceivedHandler;
    typedef std::function<void(const TaxSettingsClient*, const Model::GetTaxInheritanceRequest&, const Model::GetTaxInheritanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTaxInheritanceResponseReceivedHandler;
    typedef std::function<void(const TaxSettingsClient*, const Model::GetTaxRegistrationRequest&, const Model::GetTaxRegistrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTaxRegistrationResponseReceivedHandler;
    typedef std::function<void(const TaxSettingsClient*, const Model::GetTaxRegistrationDocumentRequest&, const Model::GetTaxRegistrationDocumentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTaxRegistrationDocumentResponseReceivedHandler;
    typedef std::function<void(const TaxSettingsClient*, const Model::ListSupplementalTaxRegistrationsRequest&, const Model::ListSupplementalTaxRegistrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSupplementalTaxRegistrationsResponseReceivedHandler;
    typedef std::function<void(const TaxSettingsClient*, const Model::ListTaxExemptionsRequest&, const Model::ListTaxExemptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTaxExemptionsResponseReceivedHandler;
    typedef std::function<void(const TaxSettingsClient*, const Model::ListTaxRegistrationsRequest&, const Model::ListTaxRegistrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTaxRegistrationsResponseReceivedHandler;
    typedef std::function<void(const TaxSettingsClient*, const Model::PutSupplementalTaxRegistrationRequest&, const Model::PutSupplementalTaxRegistrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSupplementalTaxRegistrationResponseReceivedHandler;
    typedef std::function<void(const TaxSettingsClient*, const Model::PutTaxExemptionRequest&, const Model::PutTaxExemptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutTaxExemptionResponseReceivedHandler;
    typedef std::function<void(const TaxSettingsClient*, const Model::PutTaxInheritanceRequest&, const Model::PutTaxInheritanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutTaxInheritanceResponseReceivedHandler;
    typedef std::function<void(const TaxSettingsClient*, const Model::PutTaxRegistrationRequest&, const Model::PutTaxRegistrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutTaxRegistrationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace TaxSettings
} // namespace Aws
