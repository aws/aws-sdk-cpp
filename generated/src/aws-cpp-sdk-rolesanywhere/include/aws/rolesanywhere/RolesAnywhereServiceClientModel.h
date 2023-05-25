/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/rolesanywhere/RolesAnywhereErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/rolesanywhere/RolesAnywhereEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in RolesAnywhereClient header */
#include <aws/rolesanywhere/model/CreateProfileResult.h>
#include <aws/rolesanywhere/model/CreateTrustAnchorResult.h>
#include <aws/rolesanywhere/model/DeleteCrlResult.h>
#include <aws/rolesanywhere/model/DeleteProfileResult.h>
#include <aws/rolesanywhere/model/DeleteTrustAnchorResult.h>
#include <aws/rolesanywhere/model/DisableCrlResult.h>
#include <aws/rolesanywhere/model/DisableProfileResult.h>
#include <aws/rolesanywhere/model/DisableTrustAnchorResult.h>
#include <aws/rolesanywhere/model/EnableCrlResult.h>
#include <aws/rolesanywhere/model/EnableProfileResult.h>
#include <aws/rolesanywhere/model/EnableTrustAnchorResult.h>
#include <aws/rolesanywhere/model/GetCrlResult.h>
#include <aws/rolesanywhere/model/GetProfileResult.h>
#include <aws/rolesanywhere/model/GetSubjectResult.h>
#include <aws/rolesanywhere/model/GetTrustAnchorResult.h>
#include <aws/rolesanywhere/model/ImportCrlResult.h>
#include <aws/rolesanywhere/model/ListCrlsResult.h>
#include <aws/rolesanywhere/model/ListProfilesResult.h>
#include <aws/rolesanywhere/model/ListSubjectsResult.h>
#include <aws/rolesanywhere/model/ListTagsForResourceResult.h>
#include <aws/rolesanywhere/model/ListTrustAnchorsResult.h>
#include <aws/rolesanywhere/model/TagResourceResult.h>
#include <aws/rolesanywhere/model/UntagResourceResult.h>
#include <aws/rolesanywhere/model/UpdateCrlResult.h>
#include <aws/rolesanywhere/model/UpdateProfileResult.h>
#include <aws/rolesanywhere/model/UpdateTrustAnchorResult.h>
/* End of service model headers required in RolesAnywhereClient header */

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

  namespace RolesAnywhere
  {
    using RolesAnywhereClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using RolesAnywhereEndpointProviderBase = Aws::RolesAnywhere::Endpoint::RolesAnywhereEndpointProviderBase;
    using RolesAnywhereEndpointProvider = Aws::RolesAnywhere::Endpoint::RolesAnywhereEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in RolesAnywhereClient header */
      class CreateProfileRequest;
      class CreateTrustAnchorRequest;
      class DeleteCrlRequest;
      class DeleteProfileRequest;
      class DeleteTrustAnchorRequest;
      class DisableCrlRequest;
      class DisableProfileRequest;
      class DisableTrustAnchorRequest;
      class EnableCrlRequest;
      class EnableProfileRequest;
      class EnableTrustAnchorRequest;
      class GetCrlRequest;
      class GetProfileRequest;
      class GetSubjectRequest;
      class GetTrustAnchorRequest;
      class ImportCrlRequest;
      class ListCrlsRequest;
      class ListProfilesRequest;
      class ListSubjectsRequest;
      class ListTagsForResourceRequest;
      class ListTrustAnchorsRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateCrlRequest;
      class UpdateProfileRequest;
      class UpdateTrustAnchorRequest;
      /* End of service model forward declarations required in RolesAnywhereClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateProfileResult, RolesAnywhereError> CreateProfileOutcome;
      typedef Aws::Utils::Outcome<CreateTrustAnchorResult, RolesAnywhereError> CreateTrustAnchorOutcome;
      typedef Aws::Utils::Outcome<DeleteCrlResult, RolesAnywhereError> DeleteCrlOutcome;
      typedef Aws::Utils::Outcome<DeleteProfileResult, RolesAnywhereError> DeleteProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteTrustAnchorResult, RolesAnywhereError> DeleteTrustAnchorOutcome;
      typedef Aws::Utils::Outcome<DisableCrlResult, RolesAnywhereError> DisableCrlOutcome;
      typedef Aws::Utils::Outcome<DisableProfileResult, RolesAnywhereError> DisableProfileOutcome;
      typedef Aws::Utils::Outcome<DisableTrustAnchorResult, RolesAnywhereError> DisableTrustAnchorOutcome;
      typedef Aws::Utils::Outcome<EnableCrlResult, RolesAnywhereError> EnableCrlOutcome;
      typedef Aws::Utils::Outcome<EnableProfileResult, RolesAnywhereError> EnableProfileOutcome;
      typedef Aws::Utils::Outcome<EnableTrustAnchorResult, RolesAnywhereError> EnableTrustAnchorOutcome;
      typedef Aws::Utils::Outcome<GetCrlResult, RolesAnywhereError> GetCrlOutcome;
      typedef Aws::Utils::Outcome<GetProfileResult, RolesAnywhereError> GetProfileOutcome;
      typedef Aws::Utils::Outcome<GetSubjectResult, RolesAnywhereError> GetSubjectOutcome;
      typedef Aws::Utils::Outcome<GetTrustAnchorResult, RolesAnywhereError> GetTrustAnchorOutcome;
      typedef Aws::Utils::Outcome<ImportCrlResult, RolesAnywhereError> ImportCrlOutcome;
      typedef Aws::Utils::Outcome<ListCrlsResult, RolesAnywhereError> ListCrlsOutcome;
      typedef Aws::Utils::Outcome<ListProfilesResult, RolesAnywhereError> ListProfilesOutcome;
      typedef Aws::Utils::Outcome<ListSubjectsResult, RolesAnywhereError> ListSubjectsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, RolesAnywhereError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTrustAnchorsResult, RolesAnywhereError> ListTrustAnchorsOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, RolesAnywhereError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, RolesAnywhereError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateCrlResult, RolesAnywhereError> UpdateCrlOutcome;
      typedef Aws::Utils::Outcome<UpdateProfileResult, RolesAnywhereError> UpdateProfileOutcome;
      typedef Aws::Utils::Outcome<UpdateTrustAnchorResult, RolesAnywhereError> UpdateTrustAnchorOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateProfileOutcome> CreateProfileOutcomeCallable;
      typedef std::future<CreateTrustAnchorOutcome> CreateTrustAnchorOutcomeCallable;
      typedef std::future<DeleteCrlOutcome> DeleteCrlOutcomeCallable;
      typedef std::future<DeleteProfileOutcome> DeleteProfileOutcomeCallable;
      typedef std::future<DeleteTrustAnchorOutcome> DeleteTrustAnchorOutcomeCallable;
      typedef std::future<DisableCrlOutcome> DisableCrlOutcomeCallable;
      typedef std::future<DisableProfileOutcome> DisableProfileOutcomeCallable;
      typedef std::future<DisableTrustAnchorOutcome> DisableTrustAnchorOutcomeCallable;
      typedef std::future<EnableCrlOutcome> EnableCrlOutcomeCallable;
      typedef std::future<EnableProfileOutcome> EnableProfileOutcomeCallable;
      typedef std::future<EnableTrustAnchorOutcome> EnableTrustAnchorOutcomeCallable;
      typedef std::future<GetCrlOutcome> GetCrlOutcomeCallable;
      typedef std::future<GetProfileOutcome> GetProfileOutcomeCallable;
      typedef std::future<GetSubjectOutcome> GetSubjectOutcomeCallable;
      typedef std::future<GetTrustAnchorOutcome> GetTrustAnchorOutcomeCallable;
      typedef std::future<ImportCrlOutcome> ImportCrlOutcomeCallable;
      typedef std::future<ListCrlsOutcome> ListCrlsOutcomeCallable;
      typedef std::future<ListProfilesOutcome> ListProfilesOutcomeCallable;
      typedef std::future<ListSubjectsOutcome> ListSubjectsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTrustAnchorsOutcome> ListTrustAnchorsOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateCrlOutcome> UpdateCrlOutcomeCallable;
      typedef std::future<UpdateProfileOutcome> UpdateProfileOutcomeCallable;
      typedef std::future<UpdateTrustAnchorOutcome> UpdateTrustAnchorOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class RolesAnywhereClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const RolesAnywhereClient*, const Model::CreateProfileRequest&, const Model::CreateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProfileResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::CreateTrustAnchorRequest&, const Model::CreateTrustAnchorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrustAnchorResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::DeleteCrlRequest&, const Model::DeleteCrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCrlResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::DeleteProfileRequest&, const Model::DeleteProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::DeleteTrustAnchorRequest&, const Model::DeleteTrustAnchorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrustAnchorResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::DisableCrlRequest&, const Model::DisableCrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableCrlResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::DisableProfileRequest&, const Model::DisableProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableProfileResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::DisableTrustAnchorRequest&, const Model::DisableTrustAnchorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableTrustAnchorResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::EnableCrlRequest&, const Model::EnableCrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableCrlResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::EnableProfileRequest&, const Model::EnableProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableProfileResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::EnableTrustAnchorRequest&, const Model::EnableTrustAnchorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableTrustAnchorResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::GetCrlRequest&, const Model::GetCrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCrlResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::GetProfileRequest&, const Model::GetProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProfileResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::GetSubjectRequest&, const Model::GetSubjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubjectResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::GetTrustAnchorRequest&, const Model::GetTrustAnchorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTrustAnchorResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::ImportCrlRequest&, const Model::ImportCrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportCrlResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::ListCrlsRequest&, const Model::ListCrlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCrlsResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::ListProfilesRequest&, const Model::ListProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfilesResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::ListSubjectsRequest&, const Model::ListSubjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubjectsResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::ListTrustAnchorsRequest&, const Model::ListTrustAnchorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTrustAnchorsResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::UpdateCrlRequest&, const Model::UpdateCrlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCrlResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::UpdateProfileRequest&, const Model::UpdateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProfileResponseReceivedHandler;
    typedef std::function<void(const RolesAnywhereClient*, const Model::UpdateTrustAnchorRequest&, const Model::UpdateTrustAnchorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTrustAnchorResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace RolesAnywhere
} // namespace Aws
