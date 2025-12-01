/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccountEndpointProvider.h>
#include <aws/partnercentral-account/PartnerCentralAccountErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in PartnerCentralAccountClient header */
#include <aws/partnercentral-account/model/AcceptConnectionInvitationResult.h>
#include <aws/partnercentral-account/model/AssociateAwsTrainingCertificationEmailDomainResult.h>
#include <aws/partnercentral-account/model/CancelConnectionInvitationResult.h>
#include <aws/partnercentral-account/model/CancelConnectionResult.h>
#include <aws/partnercentral-account/model/CancelProfileUpdateTaskResult.h>
#include <aws/partnercentral-account/model/CreateConnectionInvitationResult.h>
#include <aws/partnercentral-account/model/CreatePartnerResult.h>
#include <aws/partnercentral-account/model/DisassociateAwsTrainingCertificationEmailDomainResult.h>
#include <aws/partnercentral-account/model/GetAllianceLeadContactResult.h>
#include <aws/partnercentral-account/model/GetConnectionInvitationResult.h>
#include <aws/partnercentral-account/model/GetConnectionPreferencesResult.h>
#include <aws/partnercentral-account/model/GetConnectionResult.h>
#include <aws/partnercentral-account/model/GetPartnerResult.h>
#include <aws/partnercentral-account/model/GetProfileUpdateTaskResult.h>
#include <aws/partnercentral-account/model/GetProfileVisibilityResult.h>
#include <aws/partnercentral-account/model/ListConnectionInvitationsResult.h>
#include <aws/partnercentral-account/model/ListConnectionsResult.h>
#include <aws/partnercentral-account/model/ListPartnersResult.h>
#include <aws/partnercentral-account/model/ListTagsForResourceResult.h>
#include <aws/partnercentral-account/model/PutAllianceLeadContactResult.h>
#include <aws/partnercentral-account/model/PutProfileVisibilityResult.h>
#include <aws/partnercentral-account/model/RejectConnectionInvitationResult.h>
#include <aws/partnercentral-account/model/SendEmailVerificationCodeResult.h>
#include <aws/partnercentral-account/model/StartProfileUpdateTaskResult.h>
#include <aws/partnercentral-account/model/TagResourceResult.h>
#include <aws/partnercentral-account/model/UntagResourceResult.h>
#include <aws/partnercentral-account/model/UpdateConnectionPreferencesResult.h>
/* End of service model headers required in PartnerCentralAccountClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace PartnerCentralAccount {
using PartnerCentralAccountClientConfiguration = Aws::Client::GenericClientConfiguration;
using PartnerCentralAccountEndpointProviderBase = Aws::PartnerCentralAccount::Endpoint::PartnerCentralAccountEndpointProviderBase;
using PartnerCentralAccountEndpointProvider = Aws::PartnerCentralAccount::Endpoint::PartnerCentralAccountEndpointProvider;

namespace Model {
/* Service model forward declarations required in PartnerCentralAccountClient header */
class AcceptConnectionInvitationRequest;
class AssociateAwsTrainingCertificationEmailDomainRequest;
class CancelConnectionRequest;
class CancelConnectionInvitationRequest;
class CancelProfileUpdateTaskRequest;
class CreateConnectionInvitationRequest;
class CreatePartnerRequest;
class DisassociateAwsTrainingCertificationEmailDomainRequest;
class GetAllianceLeadContactRequest;
class GetConnectionRequest;
class GetConnectionInvitationRequest;
class GetConnectionPreferencesRequest;
class GetPartnerRequest;
class GetProfileUpdateTaskRequest;
class GetProfileVisibilityRequest;
class ListConnectionInvitationsRequest;
class ListConnectionsRequest;
class ListPartnersRequest;
class ListTagsForResourceRequest;
class PutAllianceLeadContactRequest;
class PutProfileVisibilityRequest;
class RejectConnectionInvitationRequest;
class SendEmailVerificationCodeRequest;
class StartProfileUpdateTaskRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateConnectionPreferencesRequest;
/* End of service model forward declarations required in PartnerCentralAccountClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<AcceptConnectionInvitationResult, PartnerCentralAccountError> AcceptConnectionInvitationOutcome;
typedef Aws::Utils::Outcome<AssociateAwsTrainingCertificationEmailDomainResult, PartnerCentralAccountError>
    AssociateAwsTrainingCertificationEmailDomainOutcome;
typedef Aws::Utils::Outcome<CancelConnectionResult, PartnerCentralAccountError> CancelConnectionOutcome;
typedef Aws::Utils::Outcome<CancelConnectionInvitationResult, PartnerCentralAccountError> CancelConnectionInvitationOutcome;
typedef Aws::Utils::Outcome<CancelProfileUpdateTaskResult, PartnerCentralAccountError> CancelProfileUpdateTaskOutcome;
typedef Aws::Utils::Outcome<CreateConnectionInvitationResult, PartnerCentralAccountError> CreateConnectionInvitationOutcome;
typedef Aws::Utils::Outcome<CreatePartnerResult, PartnerCentralAccountError> CreatePartnerOutcome;
typedef Aws::Utils::Outcome<DisassociateAwsTrainingCertificationEmailDomainResult, PartnerCentralAccountError>
    DisassociateAwsTrainingCertificationEmailDomainOutcome;
typedef Aws::Utils::Outcome<GetAllianceLeadContactResult, PartnerCentralAccountError> GetAllianceLeadContactOutcome;
typedef Aws::Utils::Outcome<GetConnectionResult, PartnerCentralAccountError> GetConnectionOutcome;
typedef Aws::Utils::Outcome<GetConnectionInvitationResult, PartnerCentralAccountError> GetConnectionInvitationOutcome;
typedef Aws::Utils::Outcome<GetConnectionPreferencesResult, PartnerCentralAccountError> GetConnectionPreferencesOutcome;
typedef Aws::Utils::Outcome<GetPartnerResult, PartnerCentralAccountError> GetPartnerOutcome;
typedef Aws::Utils::Outcome<GetProfileUpdateTaskResult, PartnerCentralAccountError> GetProfileUpdateTaskOutcome;
typedef Aws::Utils::Outcome<GetProfileVisibilityResult, PartnerCentralAccountError> GetProfileVisibilityOutcome;
typedef Aws::Utils::Outcome<ListConnectionInvitationsResult, PartnerCentralAccountError> ListConnectionInvitationsOutcome;
typedef Aws::Utils::Outcome<ListConnectionsResult, PartnerCentralAccountError> ListConnectionsOutcome;
typedef Aws::Utils::Outcome<ListPartnersResult, PartnerCentralAccountError> ListPartnersOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, PartnerCentralAccountError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<PutAllianceLeadContactResult, PartnerCentralAccountError> PutAllianceLeadContactOutcome;
typedef Aws::Utils::Outcome<PutProfileVisibilityResult, PartnerCentralAccountError> PutProfileVisibilityOutcome;
typedef Aws::Utils::Outcome<RejectConnectionInvitationResult, PartnerCentralAccountError> RejectConnectionInvitationOutcome;
typedef Aws::Utils::Outcome<SendEmailVerificationCodeResult, PartnerCentralAccountError> SendEmailVerificationCodeOutcome;
typedef Aws::Utils::Outcome<StartProfileUpdateTaskResult, PartnerCentralAccountError> StartProfileUpdateTaskOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, PartnerCentralAccountError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, PartnerCentralAccountError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateConnectionPreferencesResult, PartnerCentralAccountError> UpdateConnectionPreferencesOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<AcceptConnectionInvitationOutcome> AcceptConnectionInvitationOutcomeCallable;
typedef std::future<AssociateAwsTrainingCertificationEmailDomainOutcome> AssociateAwsTrainingCertificationEmailDomainOutcomeCallable;
typedef std::future<CancelConnectionOutcome> CancelConnectionOutcomeCallable;
typedef std::future<CancelConnectionInvitationOutcome> CancelConnectionInvitationOutcomeCallable;
typedef std::future<CancelProfileUpdateTaskOutcome> CancelProfileUpdateTaskOutcomeCallable;
typedef std::future<CreateConnectionInvitationOutcome> CreateConnectionInvitationOutcomeCallable;
typedef std::future<CreatePartnerOutcome> CreatePartnerOutcomeCallable;
typedef std::future<DisassociateAwsTrainingCertificationEmailDomainOutcome> DisassociateAwsTrainingCertificationEmailDomainOutcomeCallable;
typedef std::future<GetAllianceLeadContactOutcome> GetAllianceLeadContactOutcomeCallable;
typedef std::future<GetConnectionOutcome> GetConnectionOutcomeCallable;
typedef std::future<GetConnectionInvitationOutcome> GetConnectionInvitationOutcomeCallable;
typedef std::future<GetConnectionPreferencesOutcome> GetConnectionPreferencesOutcomeCallable;
typedef std::future<GetPartnerOutcome> GetPartnerOutcomeCallable;
typedef std::future<GetProfileUpdateTaskOutcome> GetProfileUpdateTaskOutcomeCallable;
typedef std::future<GetProfileVisibilityOutcome> GetProfileVisibilityOutcomeCallable;
typedef std::future<ListConnectionInvitationsOutcome> ListConnectionInvitationsOutcomeCallable;
typedef std::future<ListConnectionsOutcome> ListConnectionsOutcomeCallable;
typedef std::future<ListPartnersOutcome> ListPartnersOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<PutAllianceLeadContactOutcome> PutAllianceLeadContactOutcomeCallable;
typedef std::future<PutProfileVisibilityOutcome> PutProfileVisibilityOutcomeCallable;
typedef std::future<RejectConnectionInvitationOutcome> RejectConnectionInvitationOutcomeCallable;
typedef std::future<SendEmailVerificationCodeOutcome> SendEmailVerificationCodeOutcomeCallable;
typedef std::future<StartProfileUpdateTaskOutcome> StartProfileUpdateTaskOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateConnectionPreferencesOutcome> UpdateConnectionPreferencesOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class PartnerCentralAccountClient;

/* Service model async handlers definitions */
typedef std::function<void(const PartnerCentralAccountClient*, const Model::AcceptConnectionInvitationRequest&,
                           const Model::AcceptConnectionInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AcceptConnectionInvitationResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::AssociateAwsTrainingCertificationEmailDomainRequest&,
                           const Model::AssociateAwsTrainingCertificationEmailDomainOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    AssociateAwsTrainingCertificationEmailDomainResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::CancelConnectionRequest&, const Model::CancelConnectionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CancelConnectionResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::CancelConnectionInvitationRequest&,
                           const Model::CancelConnectionInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CancelConnectionInvitationResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::CancelProfileUpdateTaskRequest&,
                           const Model::CancelProfileUpdateTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CancelProfileUpdateTaskResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::CreateConnectionInvitationRequest&,
                           const Model::CreateConnectionInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateConnectionInvitationResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::CreatePartnerRequest&, const Model::CreatePartnerOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreatePartnerResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::DisassociateAwsTrainingCertificationEmailDomainRequest&,
                           const Model::DisassociateAwsTrainingCertificationEmailDomainOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisassociateAwsTrainingCertificationEmailDomainResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::GetAllianceLeadContactRequest&,
                           const Model::GetAllianceLeadContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAllianceLeadContactResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::GetConnectionRequest&, const Model::GetConnectionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetConnectionResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::GetConnectionInvitationRequest&,
                           const Model::GetConnectionInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetConnectionInvitationResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::GetConnectionPreferencesRequest&,
                           const Model::GetConnectionPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetConnectionPreferencesResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::GetPartnerRequest&, const Model::GetPartnerOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetPartnerResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::GetProfileUpdateTaskRequest&,
                           const Model::GetProfileUpdateTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetProfileUpdateTaskResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::GetProfileVisibilityRequest&,
                           const Model::GetProfileVisibilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetProfileVisibilityResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::ListConnectionInvitationsRequest&,
                           const Model::ListConnectionInvitationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListConnectionInvitationsResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::ListConnectionsRequest&, const Model::ListConnectionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListConnectionsResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::ListPartnersRequest&, const Model::ListPartnersOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPartnersResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::ListTagsForResourceRequest&,
                           const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::PutAllianceLeadContactRequest&,
                           const Model::PutAllianceLeadContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutAllianceLeadContactResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::PutProfileVisibilityRequest&,
                           const Model::PutProfileVisibilityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutProfileVisibilityResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::RejectConnectionInvitationRequest&,
                           const Model::RejectConnectionInvitationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RejectConnectionInvitationResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::SendEmailVerificationCodeRequest&,
                           const Model::SendEmailVerificationCodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SendEmailVerificationCodeResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::StartProfileUpdateTaskRequest&,
                           const Model::StartProfileUpdateTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartProfileUpdateTaskResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const PartnerCentralAccountClient*, const Model::UpdateConnectionPreferencesRequest&,
                           const Model::UpdateConnectionPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateConnectionPreferencesResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace PartnerCentralAccount
}  // namespace Aws
