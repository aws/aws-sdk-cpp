/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/verifiedpermissions/VerifiedPermissionsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/verifiedpermissions/VerifiedPermissionsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in VerifiedPermissionsClient header */
#include <aws/verifiedpermissions/model/BatchIsAuthorizedResult.h>
#include <aws/verifiedpermissions/model/CreateIdentitySourceResult.h>
#include <aws/verifiedpermissions/model/CreatePolicyResult.h>
#include <aws/verifiedpermissions/model/CreatePolicyStoreResult.h>
#include <aws/verifiedpermissions/model/CreatePolicyTemplateResult.h>
#include <aws/verifiedpermissions/model/DeleteIdentitySourceResult.h>
#include <aws/verifiedpermissions/model/DeletePolicyResult.h>
#include <aws/verifiedpermissions/model/DeletePolicyStoreResult.h>
#include <aws/verifiedpermissions/model/DeletePolicyTemplateResult.h>
#include <aws/verifiedpermissions/model/GetIdentitySourceResult.h>
#include <aws/verifiedpermissions/model/GetPolicyResult.h>
#include <aws/verifiedpermissions/model/GetPolicyStoreResult.h>
#include <aws/verifiedpermissions/model/GetPolicyTemplateResult.h>
#include <aws/verifiedpermissions/model/GetSchemaResult.h>
#include <aws/verifiedpermissions/model/IsAuthorizedResult.h>
#include <aws/verifiedpermissions/model/IsAuthorizedWithTokenResult.h>
#include <aws/verifiedpermissions/model/ListIdentitySourcesResult.h>
#include <aws/verifiedpermissions/model/ListPoliciesResult.h>
#include <aws/verifiedpermissions/model/ListPolicyStoresResult.h>
#include <aws/verifiedpermissions/model/ListPolicyTemplatesResult.h>
#include <aws/verifiedpermissions/model/PutSchemaResult.h>
#include <aws/verifiedpermissions/model/UpdateIdentitySourceResult.h>
#include <aws/verifiedpermissions/model/UpdatePolicyResult.h>
#include <aws/verifiedpermissions/model/UpdatePolicyStoreResult.h>
#include <aws/verifiedpermissions/model/UpdatePolicyTemplateResult.h>
/* End of service model headers required in VerifiedPermissionsClient header */

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

  namespace VerifiedPermissions
  {
    using VerifiedPermissionsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using VerifiedPermissionsEndpointProviderBase = Aws::VerifiedPermissions::Endpoint::VerifiedPermissionsEndpointProviderBase;
    using VerifiedPermissionsEndpointProvider = Aws::VerifiedPermissions::Endpoint::VerifiedPermissionsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in VerifiedPermissionsClient header */
      class BatchIsAuthorizedRequest;
      class CreateIdentitySourceRequest;
      class CreatePolicyRequest;
      class CreatePolicyStoreRequest;
      class CreatePolicyTemplateRequest;
      class DeleteIdentitySourceRequest;
      class DeletePolicyRequest;
      class DeletePolicyStoreRequest;
      class DeletePolicyTemplateRequest;
      class GetIdentitySourceRequest;
      class GetPolicyRequest;
      class GetPolicyStoreRequest;
      class GetPolicyTemplateRequest;
      class GetSchemaRequest;
      class IsAuthorizedRequest;
      class IsAuthorizedWithTokenRequest;
      class ListIdentitySourcesRequest;
      class ListPoliciesRequest;
      class ListPolicyStoresRequest;
      class ListPolicyTemplatesRequest;
      class PutSchemaRequest;
      class UpdateIdentitySourceRequest;
      class UpdatePolicyRequest;
      class UpdatePolicyStoreRequest;
      class UpdatePolicyTemplateRequest;
      /* End of service model forward declarations required in VerifiedPermissionsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchIsAuthorizedResult, VerifiedPermissionsError> BatchIsAuthorizedOutcome;
      typedef Aws::Utils::Outcome<CreateIdentitySourceResult, VerifiedPermissionsError> CreateIdentitySourceOutcome;
      typedef Aws::Utils::Outcome<CreatePolicyResult, VerifiedPermissionsError> CreatePolicyOutcome;
      typedef Aws::Utils::Outcome<CreatePolicyStoreResult, VerifiedPermissionsError> CreatePolicyStoreOutcome;
      typedef Aws::Utils::Outcome<CreatePolicyTemplateResult, VerifiedPermissionsError> CreatePolicyTemplateOutcome;
      typedef Aws::Utils::Outcome<DeleteIdentitySourceResult, VerifiedPermissionsError> DeleteIdentitySourceOutcome;
      typedef Aws::Utils::Outcome<DeletePolicyResult, VerifiedPermissionsError> DeletePolicyOutcome;
      typedef Aws::Utils::Outcome<DeletePolicyStoreResult, VerifiedPermissionsError> DeletePolicyStoreOutcome;
      typedef Aws::Utils::Outcome<DeletePolicyTemplateResult, VerifiedPermissionsError> DeletePolicyTemplateOutcome;
      typedef Aws::Utils::Outcome<GetIdentitySourceResult, VerifiedPermissionsError> GetIdentitySourceOutcome;
      typedef Aws::Utils::Outcome<GetPolicyResult, VerifiedPermissionsError> GetPolicyOutcome;
      typedef Aws::Utils::Outcome<GetPolicyStoreResult, VerifiedPermissionsError> GetPolicyStoreOutcome;
      typedef Aws::Utils::Outcome<GetPolicyTemplateResult, VerifiedPermissionsError> GetPolicyTemplateOutcome;
      typedef Aws::Utils::Outcome<GetSchemaResult, VerifiedPermissionsError> GetSchemaOutcome;
      typedef Aws::Utils::Outcome<IsAuthorizedResult, VerifiedPermissionsError> IsAuthorizedOutcome;
      typedef Aws::Utils::Outcome<IsAuthorizedWithTokenResult, VerifiedPermissionsError> IsAuthorizedWithTokenOutcome;
      typedef Aws::Utils::Outcome<ListIdentitySourcesResult, VerifiedPermissionsError> ListIdentitySourcesOutcome;
      typedef Aws::Utils::Outcome<ListPoliciesResult, VerifiedPermissionsError> ListPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListPolicyStoresResult, VerifiedPermissionsError> ListPolicyStoresOutcome;
      typedef Aws::Utils::Outcome<ListPolicyTemplatesResult, VerifiedPermissionsError> ListPolicyTemplatesOutcome;
      typedef Aws::Utils::Outcome<PutSchemaResult, VerifiedPermissionsError> PutSchemaOutcome;
      typedef Aws::Utils::Outcome<UpdateIdentitySourceResult, VerifiedPermissionsError> UpdateIdentitySourceOutcome;
      typedef Aws::Utils::Outcome<UpdatePolicyResult, VerifiedPermissionsError> UpdatePolicyOutcome;
      typedef Aws::Utils::Outcome<UpdatePolicyStoreResult, VerifiedPermissionsError> UpdatePolicyStoreOutcome;
      typedef Aws::Utils::Outcome<UpdatePolicyTemplateResult, VerifiedPermissionsError> UpdatePolicyTemplateOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchIsAuthorizedOutcome> BatchIsAuthorizedOutcomeCallable;
      typedef std::future<CreateIdentitySourceOutcome> CreateIdentitySourceOutcomeCallable;
      typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
      typedef std::future<CreatePolicyStoreOutcome> CreatePolicyStoreOutcomeCallable;
      typedef std::future<CreatePolicyTemplateOutcome> CreatePolicyTemplateOutcomeCallable;
      typedef std::future<DeleteIdentitySourceOutcome> DeleteIdentitySourceOutcomeCallable;
      typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
      typedef std::future<DeletePolicyStoreOutcome> DeletePolicyStoreOutcomeCallable;
      typedef std::future<DeletePolicyTemplateOutcome> DeletePolicyTemplateOutcomeCallable;
      typedef std::future<GetIdentitySourceOutcome> GetIdentitySourceOutcomeCallable;
      typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
      typedef std::future<GetPolicyStoreOutcome> GetPolicyStoreOutcomeCallable;
      typedef std::future<GetPolicyTemplateOutcome> GetPolicyTemplateOutcomeCallable;
      typedef std::future<GetSchemaOutcome> GetSchemaOutcomeCallable;
      typedef std::future<IsAuthorizedOutcome> IsAuthorizedOutcomeCallable;
      typedef std::future<IsAuthorizedWithTokenOutcome> IsAuthorizedWithTokenOutcomeCallable;
      typedef std::future<ListIdentitySourcesOutcome> ListIdentitySourcesOutcomeCallable;
      typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
      typedef std::future<ListPolicyStoresOutcome> ListPolicyStoresOutcomeCallable;
      typedef std::future<ListPolicyTemplatesOutcome> ListPolicyTemplatesOutcomeCallable;
      typedef std::future<PutSchemaOutcome> PutSchemaOutcomeCallable;
      typedef std::future<UpdateIdentitySourceOutcome> UpdateIdentitySourceOutcomeCallable;
      typedef std::future<UpdatePolicyOutcome> UpdatePolicyOutcomeCallable;
      typedef std::future<UpdatePolicyStoreOutcome> UpdatePolicyStoreOutcomeCallable;
      typedef std::future<UpdatePolicyTemplateOutcome> UpdatePolicyTemplateOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class VerifiedPermissionsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::BatchIsAuthorizedRequest&, const Model::BatchIsAuthorizedOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchIsAuthorizedResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::CreateIdentitySourceRequest&, const Model::CreateIdentitySourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIdentitySourceResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::CreatePolicyRequest&, const Model::CreatePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePolicyResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::CreatePolicyStoreRequest&, const Model::CreatePolicyStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePolicyStoreResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::CreatePolicyTemplateRequest&, const Model::CreatePolicyTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePolicyTemplateResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::DeleteIdentitySourceRequest&, const Model::DeleteIdentitySourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIdentitySourceResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::DeletePolicyRequest&, const Model::DeletePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::DeletePolicyStoreRequest&, const Model::DeletePolicyStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyStoreResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::DeletePolicyTemplateRequest&, const Model::DeletePolicyTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePolicyTemplateResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::GetIdentitySourceRequest&, const Model::GetIdentitySourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentitySourceResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::GetPolicyStoreRequest&, const Model::GetPolicyStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyStoreResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::GetPolicyTemplateRequest&, const Model::GetPolicyTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyTemplateResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::GetSchemaRequest&, const Model::GetSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSchemaResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::IsAuthorizedRequest&, const Model::IsAuthorizedOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > IsAuthorizedResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::IsAuthorizedWithTokenRequest&, const Model::IsAuthorizedWithTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > IsAuthorizedWithTokenResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::ListIdentitySourcesRequest&, const Model::ListIdentitySourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentitySourcesResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::ListPoliciesRequest&, const Model::ListPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPoliciesResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::ListPolicyStoresRequest&, const Model::ListPolicyStoresOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPolicyStoresResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::ListPolicyTemplatesRequest&, const Model::ListPolicyTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPolicyTemplatesResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::PutSchemaRequest&, const Model::PutSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutSchemaResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::UpdateIdentitySourceRequest&, const Model::UpdateIdentitySourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIdentitySourceResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::UpdatePolicyRequest&, const Model::UpdatePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePolicyResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::UpdatePolicyStoreRequest&, const Model::UpdatePolicyStoreOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePolicyStoreResponseReceivedHandler;
    typedef std::function<void(const VerifiedPermissionsClient*, const Model::UpdatePolicyTemplateRequest&, const Model::UpdatePolicyTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePolicyTemplateResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace VerifiedPermissions
} // namespace Aws
