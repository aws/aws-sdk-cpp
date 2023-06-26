/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/payment-cryptography-data/PaymentCryptographyDataErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/payment-cryptography-data/PaymentCryptographyDataEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PaymentCryptographyDataClient header */
#include <aws/payment-cryptography-data/model/DecryptDataResult.h>
#include <aws/payment-cryptography-data/model/EncryptDataResult.h>
#include <aws/payment-cryptography-data/model/GenerateCardValidationDataResult.h>
#include <aws/payment-cryptography-data/model/GenerateMacResult.h>
#include <aws/payment-cryptography-data/model/GeneratePinDataResult.h>
#include <aws/payment-cryptography-data/model/ReEncryptDataResult.h>
#include <aws/payment-cryptography-data/model/TranslatePinDataResult.h>
#include <aws/payment-cryptography-data/model/VerifyAuthRequestCryptogramResult.h>
#include <aws/payment-cryptography-data/model/VerifyCardValidationDataResult.h>
#include <aws/payment-cryptography-data/model/VerifyMacResult.h>
#include <aws/payment-cryptography-data/model/VerifyPinDataResult.h>
/* End of service model headers required in PaymentCryptographyDataClient header */

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

  namespace PaymentCryptographyData
  {
    using PaymentCryptographyDataClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using PaymentCryptographyDataEndpointProviderBase = Aws::PaymentCryptographyData::Endpoint::PaymentCryptographyDataEndpointProviderBase;
    using PaymentCryptographyDataEndpointProvider = Aws::PaymentCryptographyData::Endpoint::PaymentCryptographyDataEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PaymentCryptographyDataClient header */
      class DecryptDataRequest;
      class EncryptDataRequest;
      class GenerateCardValidationDataRequest;
      class GenerateMacRequest;
      class GeneratePinDataRequest;
      class ReEncryptDataRequest;
      class TranslatePinDataRequest;
      class VerifyAuthRequestCryptogramRequest;
      class VerifyCardValidationDataRequest;
      class VerifyMacRequest;
      class VerifyPinDataRequest;
      /* End of service model forward declarations required in PaymentCryptographyDataClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DecryptDataResult, PaymentCryptographyDataError> DecryptDataOutcome;
      typedef Aws::Utils::Outcome<EncryptDataResult, PaymentCryptographyDataError> EncryptDataOutcome;
      typedef Aws::Utils::Outcome<GenerateCardValidationDataResult, PaymentCryptographyDataError> GenerateCardValidationDataOutcome;
      typedef Aws::Utils::Outcome<GenerateMacResult, PaymentCryptographyDataError> GenerateMacOutcome;
      typedef Aws::Utils::Outcome<GeneratePinDataResult, PaymentCryptographyDataError> GeneratePinDataOutcome;
      typedef Aws::Utils::Outcome<ReEncryptDataResult, PaymentCryptographyDataError> ReEncryptDataOutcome;
      typedef Aws::Utils::Outcome<TranslatePinDataResult, PaymentCryptographyDataError> TranslatePinDataOutcome;
      typedef Aws::Utils::Outcome<VerifyAuthRequestCryptogramResult, PaymentCryptographyDataError> VerifyAuthRequestCryptogramOutcome;
      typedef Aws::Utils::Outcome<VerifyCardValidationDataResult, PaymentCryptographyDataError> VerifyCardValidationDataOutcome;
      typedef Aws::Utils::Outcome<VerifyMacResult, PaymentCryptographyDataError> VerifyMacOutcome;
      typedef Aws::Utils::Outcome<VerifyPinDataResult, PaymentCryptographyDataError> VerifyPinDataOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DecryptDataOutcome> DecryptDataOutcomeCallable;
      typedef std::future<EncryptDataOutcome> EncryptDataOutcomeCallable;
      typedef std::future<GenerateCardValidationDataOutcome> GenerateCardValidationDataOutcomeCallable;
      typedef std::future<GenerateMacOutcome> GenerateMacOutcomeCallable;
      typedef std::future<GeneratePinDataOutcome> GeneratePinDataOutcomeCallable;
      typedef std::future<ReEncryptDataOutcome> ReEncryptDataOutcomeCallable;
      typedef std::future<TranslatePinDataOutcome> TranslatePinDataOutcomeCallable;
      typedef std::future<VerifyAuthRequestCryptogramOutcome> VerifyAuthRequestCryptogramOutcomeCallable;
      typedef std::future<VerifyCardValidationDataOutcome> VerifyCardValidationDataOutcomeCallable;
      typedef std::future<VerifyMacOutcome> VerifyMacOutcomeCallable;
      typedef std::future<VerifyPinDataOutcome> VerifyPinDataOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PaymentCryptographyDataClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PaymentCryptographyDataClient*, const Model::DecryptDataRequest&, const Model::DecryptDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DecryptDataResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyDataClient*, const Model::EncryptDataRequest&, const Model::EncryptDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EncryptDataResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyDataClient*, const Model::GenerateCardValidationDataRequest&, const Model::GenerateCardValidationDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateCardValidationDataResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyDataClient*, const Model::GenerateMacRequest&, const Model::GenerateMacOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GenerateMacResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyDataClient*, const Model::GeneratePinDataRequest&, const Model::GeneratePinDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GeneratePinDataResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyDataClient*, const Model::ReEncryptDataRequest&, const Model::ReEncryptDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReEncryptDataResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyDataClient*, const Model::TranslatePinDataRequest&, const Model::TranslatePinDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TranslatePinDataResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyDataClient*, const Model::VerifyAuthRequestCryptogramRequest&, const Model::VerifyAuthRequestCryptogramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyAuthRequestCryptogramResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyDataClient*, const Model::VerifyCardValidationDataRequest&, const Model::VerifyCardValidationDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyCardValidationDataResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyDataClient*, const Model::VerifyMacRequest&, const Model::VerifyMacOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyMacResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyDataClient*, const Model::VerifyPinDataRequest&, const Model::VerifyPinDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyPinDataResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace PaymentCryptographyData
} // namespace Aws
