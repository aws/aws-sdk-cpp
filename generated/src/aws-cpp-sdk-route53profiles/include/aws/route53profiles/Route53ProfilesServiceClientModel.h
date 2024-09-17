/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/route53profiles/Route53ProfilesErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/route53profiles/Route53ProfilesEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in Route53ProfilesClient header */
#include <aws/route53profiles/model/AssociateProfileResult.h>
#include <aws/route53profiles/model/AssociateResourceToProfileResult.h>
#include <aws/route53profiles/model/CreateProfileResult.h>
#include <aws/route53profiles/model/DeleteProfileResult.h>
#include <aws/route53profiles/model/DisassociateProfileResult.h>
#include <aws/route53profiles/model/DisassociateResourceFromProfileResult.h>
#include <aws/route53profiles/model/GetProfileResult.h>
#include <aws/route53profiles/model/GetProfileAssociationResult.h>
#include <aws/route53profiles/model/GetProfileResourceAssociationResult.h>
#include <aws/route53profiles/model/ListProfileAssociationsResult.h>
#include <aws/route53profiles/model/ListProfileResourceAssociationsResult.h>
#include <aws/route53profiles/model/ListProfilesResult.h>
#include <aws/route53profiles/model/ListTagsForResourceResult.h>
#include <aws/route53profiles/model/TagResourceResult.h>
#include <aws/route53profiles/model/UntagResourceResult.h>
#include <aws/route53profiles/model/UpdateProfileResourceAssociationResult.h>
#include <aws/route53profiles/model/ListProfileAssociationsRequest.h>
#include <aws/route53profiles/model/ListProfilesRequest.h>
/* End of service model headers required in Route53ProfilesClient header */

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

  namespace Route53Profiles
  {
    using Route53ProfilesClientConfiguration = Aws::Client::GenericClientConfiguration;
    using Route53ProfilesEndpointProviderBase = Aws::Route53Profiles::Endpoint::Route53ProfilesEndpointProviderBase;
    using Route53ProfilesEndpointProvider = Aws::Route53Profiles::Endpoint::Route53ProfilesEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in Route53ProfilesClient header */
      class AssociateProfileRequest;
      class AssociateResourceToProfileRequest;
      class CreateProfileRequest;
      class DeleteProfileRequest;
      class DisassociateProfileRequest;
      class DisassociateResourceFromProfileRequest;
      class GetProfileRequest;
      class GetProfileAssociationRequest;
      class GetProfileResourceAssociationRequest;
      class ListProfileAssociationsRequest;
      class ListProfileResourceAssociationsRequest;
      class ListProfilesRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateProfileResourceAssociationRequest;
      /* End of service model forward declarations required in Route53ProfilesClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateProfileResult, Route53ProfilesError> AssociateProfileOutcome;
      typedef Aws::Utils::Outcome<AssociateResourceToProfileResult, Route53ProfilesError> AssociateResourceToProfileOutcome;
      typedef Aws::Utils::Outcome<CreateProfileResult, Route53ProfilesError> CreateProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteProfileResult, Route53ProfilesError> DeleteProfileOutcome;
      typedef Aws::Utils::Outcome<DisassociateProfileResult, Route53ProfilesError> DisassociateProfileOutcome;
      typedef Aws::Utils::Outcome<DisassociateResourceFromProfileResult, Route53ProfilesError> DisassociateResourceFromProfileOutcome;
      typedef Aws::Utils::Outcome<GetProfileResult, Route53ProfilesError> GetProfileOutcome;
      typedef Aws::Utils::Outcome<GetProfileAssociationResult, Route53ProfilesError> GetProfileAssociationOutcome;
      typedef Aws::Utils::Outcome<GetProfileResourceAssociationResult, Route53ProfilesError> GetProfileResourceAssociationOutcome;
      typedef Aws::Utils::Outcome<ListProfileAssociationsResult, Route53ProfilesError> ListProfileAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListProfileResourceAssociationsResult, Route53ProfilesError> ListProfileResourceAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListProfilesResult, Route53ProfilesError> ListProfilesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, Route53ProfilesError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, Route53ProfilesError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, Route53ProfilesError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateProfileResourceAssociationResult, Route53ProfilesError> UpdateProfileResourceAssociationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateProfileOutcome> AssociateProfileOutcomeCallable;
      typedef std::future<AssociateResourceToProfileOutcome> AssociateResourceToProfileOutcomeCallable;
      typedef std::future<CreateProfileOutcome> CreateProfileOutcomeCallable;
      typedef std::future<DeleteProfileOutcome> DeleteProfileOutcomeCallable;
      typedef std::future<DisassociateProfileOutcome> DisassociateProfileOutcomeCallable;
      typedef std::future<DisassociateResourceFromProfileOutcome> DisassociateResourceFromProfileOutcomeCallable;
      typedef std::future<GetProfileOutcome> GetProfileOutcomeCallable;
      typedef std::future<GetProfileAssociationOutcome> GetProfileAssociationOutcomeCallable;
      typedef std::future<GetProfileResourceAssociationOutcome> GetProfileResourceAssociationOutcomeCallable;
      typedef std::future<ListProfileAssociationsOutcome> ListProfileAssociationsOutcomeCallable;
      typedef std::future<ListProfileResourceAssociationsOutcome> ListProfileResourceAssociationsOutcomeCallable;
      typedef std::future<ListProfilesOutcome> ListProfilesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateProfileResourceAssociationOutcome> UpdateProfileResourceAssociationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class Route53ProfilesClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const Route53ProfilesClient*, const Model::AssociateProfileRequest&, const Model::AssociateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateProfileResponseReceivedHandler;
    typedef std::function<void(const Route53ProfilesClient*, const Model::AssociateResourceToProfileRequest&, const Model::AssociateResourceToProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateResourceToProfileResponseReceivedHandler;
    typedef std::function<void(const Route53ProfilesClient*, const Model::CreateProfileRequest&, const Model::CreateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProfileResponseReceivedHandler;
    typedef std::function<void(const Route53ProfilesClient*, const Model::DeleteProfileRequest&, const Model::DeleteProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProfileResponseReceivedHandler;
    typedef std::function<void(const Route53ProfilesClient*, const Model::DisassociateProfileRequest&, const Model::DisassociateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateProfileResponseReceivedHandler;
    typedef std::function<void(const Route53ProfilesClient*, const Model::DisassociateResourceFromProfileRequest&, const Model::DisassociateResourceFromProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateResourceFromProfileResponseReceivedHandler;
    typedef std::function<void(const Route53ProfilesClient*, const Model::GetProfileRequest&, const Model::GetProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProfileResponseReceivedHandler;
    typedef std::function<void(const Route53ProfilesClient*, const Model::GetProfileAssociationRequest&, const Model::GetProfileAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProfileAssociationResponseReceivedHandler;
    typedef std::function<void(const Route53ProfilesClient*, const Model::GetProfileResourceAssociationRequest&, const Model::GetProfileResourceAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProfileResourceAssociationResponseReceivedHandler;
    typedef std::function<void(const Route53ProfilesClient*, const Model::ListProfileAssociationsRequest&, const Model::ListProfileAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfileAssociationsResponseReceivedHandler;
    typedef std::function<void(const Route53ProfilesClient*, const Model::ListProfileResourceAssociationsRequest&, const Model::ListProfileResourceAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfileResourceAssociationsResponseReceivedHandler;
    typedef std::function<void(const Route53ProfilesClient*, const Model::ListProfilesRequest&, const Model::ListProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProfilesResponseReceivedHandler;
    typedef std::function<void(const Route53ProfilesClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const Route53ProfilesClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const Route53ProfilesClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const Route53ProfilesClient*, const Model::UpdateProfileResourceAssociationRequest&, const Model::UpdateProfileResourceAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProfileResourceAssociationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Route53Profiles
} // namespace Aws
