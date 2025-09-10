/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/payment-cryptography/PaymentCryptographyErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/payment-cryptography/PaymentCryptographyEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PaymentCryptographyClient header */
#include <aws/payment-cryptography/model/AddKeyReplicationRegionsResult.h>
#include <aws/payment-cryptography/model/CreateAliasResult.h>
#include <aws/payment-cryptography/model/CreateKeyResult.h>
#include <aws/payment-cryptography/model/DeleteAliasResult.h>
#include <aws/payment-cryptography/model/DeleteKeyResult.h>
#include <aws/payment-cryptography/model/DisableDefaultKeyReplicationRegionsResult.h>
#include <aws/payment-cryptography/model/EnableDefaultKeyReplicationRegionsResult.h>
#include <aws/payment-cryptography/model/ExportKeyResult.h>
#include <aws/payment-cryptography/model/GetAliasResult.h>
#include <aws/payment-cryptography/model/GetDefaultKeyReplicationRegionsResult.h>
#include <aws/payment-cryptography/model/GetKeyResult.h>
#include <aws/payment-cryptography/model/GetParametersForExportResult.h>
#include <aws/payment-cryptography/model/GetParametersForImportResult.h>
#include <aws/payment-cryptography/model/GetPublicKeyCertificateResult.h>
#include <aws/payment-cryptography/model/ImportKeyResult.h>
#include <aws/payment-cryptography/model/ListAliasesResult.h>
#include <aws/payment-cryptography/model/ListKeysResult.h>
#include <aws/payment-cryptography/model/ListTagsForResourceResult.h>
#include <aws/payment-cryptography/model/RemoveKeyReplicationRegionsResult.h>
#include <aws/payment-cryptography/model/RestoreKeyResult.h>
#include <aws/payment-cryptography/model/StartKeyUsageResult.h>
#include <aws/payment-cryptography/model/StopKeyUsageResult.h>
#include <aws/payment-cryptography/model/TagResourceResult.h>
#include <aws/payment-cryptography/model/UntagResourceResult.h>
#include <aws/payment-cryptography/model/UpdateAliasResult.h>
#include <aws/payment-cryptography/model/ListAliasesRequest.h>
#include <aws/payment-cryptography/model/ListKeysRequest.h>
#include <aws/payment-cryptography/model/GetDefaultKeyReplicationRegionsRequest.h>
/* End of service model headers required in PaymentCryptographyClient header */

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

  namespace PaymentCryptography
  {
    using PaymentCryptographyClientConfiguration = Aws::Client::GenericClientConfiguration;
    using PaymentCryptographyEndpointProviderBase = Aws::PaymentCryptography::Endpoint::PaymentCryptographyEndpointProviderBase;
    using PaymentCryptographyEndpointProvider = Aws::PaymentCryptography::Endpoint::PaymentCryptographyEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PaymentCryptographyClient header */
      class AddKeyReplicationRegionsRequest;
      class CreateAliasRequest;
      class CreateKeyRequest;
      class DeleteAliasRequest;
      class DeleteKeyRequest;
      class DisableDefaultKeyReplicationRegionsRequest;
      class EnableDefaultKeyReplicationRegionsRequest;
      class ExportKeyRequest;
      class GetAliasRequest;
      class GetDefaultKeyReplicationRegionsRequest;
      class GetKeyRequest;
      class GetParametersForExportRequest;
      class GetParametersForImportRequest;
      class GetPublicKeyCertificateRequest;
      class ImportKeyRequest;
      class ListAliasesRequest;
      class ListKeysRequest;
      class ListTagsForResourceRequest;
      class RemoveKeyReplicationRegionsRequest;
      class RestoreKeyRequest;
      class StartKeyUsageRequest;
      class StopKeyUsageRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAliasRequest;
      /* End of service model forward declarations required in PaymentCryptographyClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AddKeyReplicationRegionsResult, PaymentCryptographyError> AddKeyReplicationRegionsOutcome;
      typedef Aws::Utils::Outcome<CreateAliasResult, PaymentCryptographyError> CreateAliasOutcome;
      typedef Aws::Utils::Outcome<CreateKeyResult, PaymentCryptographyError> CreateKeyOutcome;
      typedef Aws::Utils::Outcome<DeleteAliasResult, PaymentCryptographyError> DeleteAliasOutcome;
      typedef Aws::Utils::Outcome<DeleteKeyResult, PaymentCryptographyError> DeleteKeyOutcome;
      typedef Aws::Utils::Outcome<DisableDefaultKeyReplicationRegionsResult, PaymentCryptographyError> DisableDefaultKeyReplicationRegionsOutcome;
      typedef Aws::Utils::Outcome<EnableDefaultKeyReplicationRegionsResult, PaymentCryptographyError> EnableDefaultKeyReplicationRegionsOutcome;
      typedef Aws::Utils::Outcome<ExportKeyResult, PaymentCryptographyError> ExportKeyOutcome;
      typedef Aws::Utils::Outcome<GetAliasResult, PaymentCryptographyError> GetAliasOutcome;
      typedef Aws::Utils::Outcome<GetDefaultKeyReplicationRegionsResult, PaymentCryptographyError> GetDefaultKeyReplicationRegionsOutcome;
      typedef Aws::Utils::Outcome<GetKeyResult, PaymentCryptographyError> GetKeyOutcome;
      typedef Aws::Utils::Outcome<GetParametersForExportResult, PaymentCryptographyError> GetParametersForExportOutcome;
      typedef Aws::Utils::Outcome<GetParametersForImportResult, PaymentCryptographyError> GetParametersForImportOutcome;
      typedef Aws::Utils::Outcome<GetPublicKeyCertificateResult, PaymentCryptographyError> GetPublicKeyCertificateOutcome;
      typedef Aws::Utils::Outcome<ImportKeyResult, PaymentCryptographyError> ImportKeyOutcome;
      typedef Aws::Utils::Outcome<ListAliasesResult, PaymentCryptographyError> ListAliasesOutcome;
      typedef Aws::Utils::Outcome<ListKeysResult, PaymentCryptographyError> ListKeysOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, PaymentCryptographyError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<RemoveKeyReplicationRegionsResult, PaymentCryptographyError> RemoveKeyReplicationRegionsOutcome;
      typedef Aws::Utils::Outcome<RestoreKeyResult, PaymentCryptographyError> RestoreKeyOutcome;
      typedef Aws::Utils::Outcome<StartKeyUsageResult, PaymentCryptographyError> StartKeyUsageOutcome;
      typedef Aws::Utils::Outcome<StopKeyUsageResult, PaymentCryptographyError> StopKeyUsageOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, PaymentCryptographyError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, PaymentCryptographyError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAliasResult, PaymentCryptographyError> UpdateAliasOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddKeyReplicationRegionsOutcome> AddKeyReplicationRegionsOutcomeCallable;
      typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
      typedef std::future<CreateKeyOutcome> CreateKeyOutcomeCallable;
      typedef std::future<DeleteAliasOutcome> DeleteAliasOutcomeCallable;
      typedef std::future<DeleteKeyOutcome> DeleteKeyOutcomeCallable;
      typedef std::future<DisableDefaultKeyReplicationRegionsOutcome> DisableDefaultKeyReplicationRegionsOutcomeCallable;
      typedef std::future<EnableDefaultKeyReplicationRegionsOutcome> EnableDefaultKeyReplicationRegionsOutcomeCallable;
      typedef std::future<ExportKeyOutcome> ExportKeyOutcomeCallable;
      typedef std::future<GetAliasOutcome> GetAliasOutcomeCallable;
      typedef std::future<GetDefaultKeyReplicationRegionsOutcome> GetDefaultKeyReplicationRegionsOutcomeCallable;
      typedef std::future<GetKeyOutcome> GetKeyOutcomeCallable;
      typedef std::future<GetParametersForExportOutcome> GetParametersForExportOutcomeCallable;
      typedef std::future<GetParametersForImportOutcome> GetParametersForImportOutcomeCallable;
      typedef std::future<GetPublicKeyCertificateOutcome> GetPublicKeyCertificateOutcomeCallable;
      typedef std::future<ImportKeyOutcome> ImportKeyOutcomeCallable;
      typedef std::future<ListAliasesOutcome> ListAliasesOutcomeCallable;
      typedef std::future<ListKeysOutcome> ListKeysOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RemoveKeyReplicationRegionsOutcome> RemoveKeyReplicationRegionsOutcomeCallable;
      typedef std::future<RestoreKeyOutcome> RestoreKeyOutcomeCallable;
      typedef std::future<StartKeyUsageOutcome> StartKeyUsageOutcomeCallable;
      typedef std::future<StopKeyUsageOutcome> StopKeyUsageOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAliasOutcome> UpdateAliasOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PaymentCryptographyClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PaymentCryptographyClient*, const Model::AddKeyReplicationRegionsRequest&, const Model::AddKeyReplicationRegionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddKeyReplicationRegionsResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::CreateAliasRequest&, const Model::CreateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAliasResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::CreateKeyRequest&, const Model::CreateKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKeyResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::DeleteAliasRequest&, const Model::DeleteAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAliasResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::DeleteKeyRequest&, const Model::DeleteKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKeyResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::DisableDefaultKeyReplicationRegionsRequest&, const Model::DisableDefaultKeyReplicationRegionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableDefaultKeyReplicationRegionsResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::EnableDefaultKeyReplicationRegionsRequest&, const Model::EnableDefaultKeyReplicationRegionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableDefaultKeyReplicationRegionsResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::ExportKeyRequest&, const Model::ExportKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportKeyResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::GetAliasRequest&, const Model::GetAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAliasResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::GetDefaultKeyReplicationRegionsRequest&, const Model::GetDefaultKeyReplicationRegionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDefaultKeyReplicationRegionsResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::GetKeyRequest&, const Model::GetKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKeyResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::GetParametersForExportRequest&, const Model::GetParametersForExportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetParametersForExportResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::GetParametersForImportRequest&, const Model::GetParametersForImportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetParametersForImportResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::GetPublicKeyCertificateRequest&, const Model::GetPublicKeyCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPublicKeyCertificateResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::ImportKeyRequest&, const Model::ImportKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportKeyResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::ListAliasesRequest&, const Model::ListAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAliasesResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::ListKeysRequest&, const Model::ListKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListKeysResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::RemoveKeyReplicationRegionsRequest&, const Model::RemoveKeyReplicationRegionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveKeyReplicationRegionsResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::RestoreKeyRequest&, const Model::RestoreKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreKeyResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::StartKeyUsageRequest&, const Model::StartKeyUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartKeyUsageResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::StopKeyUsageRequest&, const Model::StopKeyUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopKeyUsageResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const PaymentCryptographyClient*, const Model::UpdateAliasRequest&, const Model::UpdateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAliasResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace PaymentCryptography
} // namespace Aws
