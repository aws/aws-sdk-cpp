/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/PartnerCentralAccountPaginationBase.h>
#include <aws/partnercentral-account/PartnerCentralAccountServiceClientModel.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>

namespace Aws {
namespace PartnerCentralAccount {
/**
 * <p>AWS Partner Central Account service provides APIs for managing partner
 * accounts, connections, and profiles within the AWS Partner Network. This service
 * enables partners to create and manage their partner profiles, establish
 * connections with other partners, and maintain their account information.</p>
 */
class AWS_PARTNERCENTRALACCOUNT_API PartnerCentralAccountClient
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<PartnerCentralAccountClient>,
      public PartnerCentralAccountPaginationBase<PartnerCentralAccountClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef PartnerCentralAccountClientConfiguration ClientConfigurationType;
  typedef PartnerCentralAccountEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  PartnerCentralAccountClient(const Aws::PartnerCentralAccount::PartnerCentralAccountClientConfiguration& clientConfiguration =
                                  Aws::PartnerCentralAccount::PartnerCentralAccountClientConfiguration(),
                              std::shared_ptr<PartnerCentralAccountEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  PartnerCentralAccountClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<PartnerCentralAccountEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::PartnerCentralAccount::PartnerCentralAccountClientConfiguration& clientConfiguration =
                                  Aws::PartnerCentralAccount::PartnerCentralAccountClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  PartnerCentralAccountClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<PartnerCentralAccountEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::PartnerCentralAccount::PartnerCentralAccountClientConfiguration& clientConfiguration =
                                  Aws::PartnerCentralAccount::PartnerCentralAccountClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  PartnerCentralAccountClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  PartnerCentralAccountClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  PartnerCentralAccountClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~PartnerCentralAccountClient();

  /**
   * <p>Accepts a connection invitation from another partner, establishing a formal
   * partnership connection between the two parties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/AcceptConnectionInvitation">AWS
   * API Reference</a></p>
   */
  virtual Model::AcceptConnectionInvitationOutcome AcceptConnectionInvitation(
      const Model::AcceptConnectionInvitationRequest& request) const;

  /**
   * A Callable wrapper for AcceptConnectionInvitation that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename AcceptConnectionInvitationRequestT = Model::AcceptConnectionInvitationRequest>
  Model::AcceptConnectionInvitationOutcomeCallable AcceptConnectionInvitationCallable(
      const AcceptConnectionInvitationRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::AcceptConnectionInvitation, request);
  }

  /**
   * An Async wrapper for AcceptConnectionInvitation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename AcceptConnectionInvitationRequestT = Model::AcceptConnectionInvitationRequest>
  void AcceptConnectionInvitationAsync(const AcceptConnectionInvitationRequestT& request,
                                       const AcceptConnectionInvitationResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::AcceptConnectionInvitation, request, handler, context);
  }

  /**
   * <p>Associates an email domain with AWS training and certification for the
   * partner account, enabling automatic verification of employee
   * certifications.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/AssociateAwsTrainingCertificationEmailDomain">AWS
   * API Reference</a></p>
   */
  virtual Model::AssociateAwsTrainingCertificationEmailDomainOutcome AssociateAwsTrainingCertificationEmailDomain(
      const Model::AssociateAwsTrainingCertificationEmailDomainRequest& request) const;

  /**
   * A Callable wrapper for AssociateAwsTrainingCertificationEmailDomain that returns a future to the operation so that it can be executed
   * in parallel to other requests.
   */
  template <typename AssociateAwsTrainingCertificationEmailDomainRequestT = Model::AssociateAwsTrainingCertificationEmailDomainRequest>
  Model::AssociateAwsTrainingCertificationEmailDomainOutcomeCallable AssociateAwsTrainingCertificationEmailDomainCallable(
      const AssociateAwsTrainingCertificationEmailDomainRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::AssociateAwsTrainingCertificationEmailDomain, request);
  }

  /**
   * An Async wrapper for AssociateAwsTrainingCertificationEmailDomain that queues the request into a thread executor and triggers
   * associated callback when operation has finished.
   */
  template <typename AssociateAwsTrainingCertificationEmailDomainRequestT = Model::AssociateAwsTrainingCertificationEmailDomainRequest>
  void AssociateAwsTrainingCertificationEmailDomainAsync(
      const AssociateAwsTrainingCertificationEmailDomainRequestT& request,
      const AssociateAwsTrainingCertificationEmailDomainResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::AssociateAwsTrainingCertificationEmailDomain, request, handler, context);
  }

  /**
   * <p>Cancels an existing connection between partners, terminating the partnership
   * relationship.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/CancelConnection">AWS
   * API Reference</a></p>
   */
  virtual Model::CancelConnectionOutcome CancelConnection(const Model::CancelConnectionRequest& request) const;

  /**
   * A Callable wrapper for CancelConnection that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CancelConnectionRequestT = Model::CancelConnectionRequest>
  Model::CancelConnectionOutcomeCallable CancelConnectionCallable(const CancelConnectionRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::CancelConnection, request);
  }

  /**
   * An Async wrapper for CancelConnection that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CancelConnectionRequestT = Model::CancelConnectionRequest>
  void CancelConnectionAsync(const CancelConnectionRequestT& request, const CancelConnectionResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::CancelConnection, request, handler, context);
  }

  /**
   * <p>Cancels a pending connection invitation before it has been accepted or
   * rejected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/CancelConnectionInvitation">AWS
   * API Reference</a></p>
   */
  virtual Model::CancelConnectionInvitationOutcome CancelConnectionInvitation(
      const Model::CancelConnectionInvitationRequest& request) const;

  /**
   * A Callable wrapper for CancelConnectionInvitation that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CancelConnectionInvitationRequestT = Model::CancelConnectionInvitationRequest>
  Model::CancelConnectionInvitationOutcomeCallable CancelConnectionInvitationCallable(
      const CancelConnectionInvitationRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::CancelConnectionInvitation, request);
  }

  /**
   * An Async wrapper for CancelConnectionInvitation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CancelConnectionInvitationRequestT = Model::CancelConnectionInvitationRequest>
  void CancelConnectionInvitationAsync(const CancelConnectionInvitationRequestT& request,
                                       const CancelConnectionInvitationResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::CancelConnectionInvitation, request, handler, context);
  }

  /**
   * <p>Cancels an in-progress profile update task, stopping any pending changes to
   * the partner profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/CancelProfileUpdateTask">AWS
   * API Reference</a></p>
   */
  virtual Model::CancelProfileUpdateTaskOutcome CancelProfileUpdateTask(const Model::CancelProfileUpdateTaskRequest& request) const;

  /**
   * A Callable wrapper for CancelProfileUpdateTask that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CancelProfileUpdateTaskRequestT = Model::CancelProfileUpdateTaskRequest>
  Model::CancelProfileUpdateTaskOutcomeCallable CancelProfileUpdateTaskCallable(const CancelProfileUpdateTaskRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::CancelProfileUpdateTask, request);
  }

  /**
   * An Async wrapper for CancelProfileUpdateTask that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CancelProfileUpdateTaskRequestT = Model::CancelProfileUpdateTaskRequest>
  void CancelProfileUpdateTaskAsync(const CancelProfileUpdateTaskRequestT& request,
                                    const CancelProfileUpdateTaskResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::CancelProfileUpdateTask, request, handler, context);
  }

  /**
   * <p>Creates a new connection invitation to establish a partnership with another
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/CreateConnectionInvitation">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateConnectionInvitationOutcome CreateConnectionInvitation(
      const Model::CreateConnectionInvitationRequest& request) const;

  /**
   * A Callable wrapper for CreateConnectionInvitation that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateConnectionInvitationRequestT = Model::CreateConnectionInvitationRequest>
  Model::CreateConnectionInvitationOutcomeCallable CreateConnectionInvitationCallable(
      const CreateConnectionInvitationRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::CreateConnectionInvitation, request);
  }

  /**
   * An Async wrapper for CreateConnectionInvitation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateConnectionInvitationRequestT = Model::CreateConnectionInvitationRequest>
  void CreateConnectionInvitationAsync(const CreateConnectionInvitationRequestT& request,
                                       const CreateConnectionInvitationResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::CreateConnectionInvitation, request, handler, context);
  }

  /**
   * <p>Creates a new partner account in the AWS Partner Network with the specified
   * details and configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/CreatePartner">AWS
   * API Reference</a></p>
   */
  virtual Model::CreatePartnerOutcome CreatePartner(const Model::CreatePartnerRequest& request) const;

  /**
   * A Callable wrapper for CreatePartner that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreatePartnerRequestT = Model::CreatePartnerRequest>
  Model::CreatePartnerOutcomeCallable CreatePartnerCallable(const CreatePartnerRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::CreatePartner, request);
  }

  /**
   * An Async wrapper for CreatePartner that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreatePartnerRequestT = Model::CreatePartnerRequest>
  void CreatePartnerAsync(const CreatePartnerRequestT& request, const CreatePartnerResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::CreatePartner, request, handler, context);
  }

  /**
   * <p>Removes the association between an email domain and AWS training and
   * certification for the partner account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/DisassociateAwsTrainingCertificationEmailDomain">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociateAwsTrainingCertificationEmailDomainOutcome DisassociateAwsTrainingCertificationEmailDomain(
      const Model::DisassociateAwsTrainingCertificationEmailDomainRequest& request) const;

  /**
   * A Callable wrapper for DisassociateAwsTrainingCertificationEmailDomain that returns a future to the operation so that it can be
   * executed in parallel to other requests.
   */
  template <
      typename DisassociateAwsTrainingCertificationEmailDomainRequestT = Model::DisassociateAwsTrainingCertificationEmailDomainRequest>
  Model::DisassociateAwsTrainingCertificationEmailDomainOutcomeCallable DisassociateAwsTrainingCertificationEmailDomainCallable(
      const DisassociateAwsTrainingCertificationEmailDomainRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::DisassociateAwsTrainingCertificationEmailDomain, request);
  }

  /**
   * An Async wrapper for DisassociateAwsTrainingCertificationEmailDomain that queues the request into a thread executor and triggers
   * associated callback when operation has finished.
   */
  template <
      typename DisassociateAwsTrainingCertificationEmailDomainRequestT = Model::DisassociateAwsTrainingCertificationEmailDomainRequest>
  void DisassociateAwsTrainingCertificationEmailDomainAsync(
      const DisassociateAwsTrainingCertificationEmailDomainRequestT& request,
      const DisassociateAwsTrainingCertificationEmailDomainResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::DisassociateAwsTrainingCertificationEmailDomain, request, handler, context);
  }

  /**
   * <p>Retrieves the alliance lead contact information for a partner
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/GetAllianceLeadContact">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAllianceLeadContactOutcome GetAllianceLeadContact(const Model::GetAllianceLeadContactRequest& request) const;

  /**
   * A Callable wrapper for GetAllianceLeadContact that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetAllianceLeadContactRequestT = Model::GetAllianceLeadContactRequest>
  Model::GetAllianceLeadContactOutcomeCallable GetAllianceLeadContactCallable(const GetAllianceLeadContactRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::GetAllianceLeadContact, request);
  }

  /**
   * An Async wrapper for GetAllianceLeadContact that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetAllianceLeadContactRequestT = Model::GetAllianceLeadContactRequest>
  void GetAllianceLeadContactAsync(const GetAllianceLeadContactRequestT& request,
                                   const GetAllianceLeadContactResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::GetAllianceLeadContact, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific connection between
   * partners.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/GetConnection">AWS
   * API Reference</a></p>
   */
  virtual Model::GetConnectionOutcome GetConnection(const Model::GetConnectionRequest& request) const;

  /**
   * A Callable wrapper for GetConnection that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetConnectionRequestT = Model::GetConnectionRequest>
  Model::GetConnectionOutcomeCallable GetConnectionCallable(const GetConnectionRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::GetConnection, request);
  }

  /**
   * An Async wrapper for GetConnection that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetConnectionRequestT = Model::GetConnectionRequest>
  void GetConnectionAsync(const GetConnectionRequestT& request, const GetConnectionResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::GetConnection, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific connection
   * invitation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/GetConnectionInvitation">AWS
   * API Reference</a></p>
   */
  virtual Model::GetConnectionInvitationOutcome GetConnectionInvitation(const Model::GetConnectionInvitationRequest& request) const;

  /**
   * A Callable wrapper for GetConnectionInvitation that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetConnectionInvitationRequestT = Model::GetConnectionInvitationRequest>
  Model::GetConnectionInvitationOutcomeCallable GetConnectionInvitationCallable(const GetConnectionInvitationRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::GetConnectionInvitation, request);
  }

  /**
   * An Async wrapper for GetConnectionInvitation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetConnectionInvitationRequestT = Model::GetConnectionInvitationRequest>
  void GetConnectionInvitationAsync(const GetConnectionInvitationRequestT& request,
                                    const GetConnectionInvitationResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::GetConnectionInvitation, request, handler, context);
  }

  /**
   * <p>Retrieves the connection preferences for a partner account, including access
   * settings and exclusions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/GetConnectionPreferences">AWS
   * API Reference</a></p>
   */
  virtual Model::GetConnectionPreferencesOutcome GetConnectionPreferences(const Model::GetConnectionPreferencesRequest& request) const;

  /**
   * A Callable wrapper for GetConnectionPreferences that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetConnectionPreferencesRequestT = Model::GetConnectionPreferencesRequest>
  Model::GetConnectionPreferencesOutcomeCallable GetConnectionPreferencesCallable(const GetConnectionPreferencesRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::GetConnectionPreferences, request);
  }

  /**
   * An Async wrapper for GetConnectionPreferences that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetConnectionPreferencesRequestT = Model::GetConnectionPreferencesRequest>
  void GetConnectionPreferencesAsync(const GetConnectionPreferencesRequestT& request,
                                     const GetConnectionPreferencesResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::GetConnectionPreferences, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific partner
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/GetPartner">AWS
   * API Reference</a></p>
   */
  virtual Model::GetPartnerOutcome GetPartner(const Model::GetPartnerRequest& request) const;

  /**
   * A Callable wrapper for GetPartner that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetPartnerRequestT = Model::GetPartnerRequest>
  Model::GetPartnerOutcomeCallable GetPartnerCallable(const GetPartnerRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::GetPartner, request);
  }

  /**
   * An Async wrapper for GetPartner that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetPartnerRequestT = Model::GetPartnerRequest>
  void GetPartnerAsync(const GetPartnerRequestT& request, const GetPartnerResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::GetPartner, request, handler, context);
  }

  /**
   * <p>Retrieves information about a specific profile update task.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/GetProfileUpdateTask">AWS
   * API Reference</a></p>
   */
  virtual Model::GetProfileUpdateTaskOutcome GetProfileUpdateTask(const Model::GetProfileUpdateTaskRequest& request) const;

  /**
   * A Callable wrapper for GetProfileUpdateTask that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetProfileUpdateTaskRequestT = Model::GetProfileUpdateTaskRequest>
  Model::GetProfileUpdateTaskOutcomeCallable GetProfileUpdateTaskCallable(const GetProfileUpdateTaskRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::GetProfileUpdateTask, request);
  }

  /**
   * An Async wrapper for GetProfileUpdateTask that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetProfileUpdateTaskRequestT = Model::GetProfileUpdateTaskRequest>
  void GetProfileUpdateTaskAsync(const GetProfileUpdateTaskRequestT& request, const GetProfileUpdateTaskResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::GetProfileUpdateTask, request, handler, context);
  }

  /**
   * <p>Retrieves the visibility settings for a partner profile, determining who can
   * see the profile information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/GetProfileVisibility">AWS
   * API Reference</a></p>
   */
  virtual Model::GetProfileVisibilityOutcome GetProfileVisibility(const Model::GetProfileVisibilityRequest& request) const;

  /**
   * A Callable wrapper for GetProfileVisibility that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetProfileVisibilityRequestT = Model::GetProfileVisibilityRequest>
  Model::GetProfileVisibilityOutcomeCallable GetProfileVisibilityCallable(const GetProfileVisibilityRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::GetProfileVisibility, request);
  }

  /**
   * An Async wrapper for GetProfileVisibility that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetProfileVisibilityRequestT = Model::GetProfileVisibilityRequest>
  void GetProfileVisibilityAsync(const GetProfileVisibilityRequestT& request, const GetProfileVisibilityResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::GetProfileVisibility, request, handler, context);
  }

  /**
   * <p>Retrieves the current status and details of a verification process for a
   * partner account. This operation allows partners to check the progress and
   * results of business or registrant verification processes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/GetVerification">AWS
   * API Reference</a></p>
   */
  virtual Model::GetVerificationOutcome GetVerification(const Model::GetVerificationRequest& request) const;

  /**
   * A Callable wrapper for GetVerification that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetVerificationRequestT = Model::GetVerificationRequest>
  Model::GetVerificationOutcomeCallable GetVerificationCallable(const GetVerificationRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::GetVerification, request);
  }

  /**
   * An Async wrapper for GetVerification that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetVerificationRequestT = Model::GetVerificationRequest>
  void GetVerificationAsync(const GetVerificationRequestT& request, const GetVerificationResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::GetVerification, request, handler, context);
  }

  /**
   * <p>Lists connection invitations for the partner account, with optional filtering
   * by status, type, and other criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/ListConnectionInvitations">AWS
   * API Reference</a></p>
   */
  virtual Model::ListConnectionInvitationsOutcome ListConnectionInvitations(const Model::ListConnectionInvitationsRequest& request) const;

  /**
   * A Callable wrapper for ListConnectionInvitations that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListConnectionInvitationsRequestT = Model::ListConnectionInvitationsRequest>
  Model::ListConnectionInvitationsOutcomeCallable ListConnectionInvitationsCallable(
      const ListConnectionInvitationsRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::ListConnectionInvitations, request);
  }

  /**
   * An Async wrapper for ListConnectionInvitations that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListConnectionInvitationsRequestT = Model::ListConnectionInvitationsRequest>
  void ListConnectionInvitationsAsync(const ListConnectionInvitationsRequestT& request,
                                      const ListConnectionInvitationsResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::ListConnectionInvitations, request, handler, context);
  }

  /**
   * <p>Lists active connections for the partner account, with optional filtering by
   * connection type and participant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/ListConnections">AWS
   * API Reference</a></p>
   */
  virtual Model::ListConnectionsOutcome ListConnections(const Model::ListConnectionsRequest& request) const;

  /**
   * A Callable wrapper for ListConnections that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListConnectionsRequestT = Model::ListConnectionsRequest>
  Model::ListConnectionsOutcomeCallable ListConnectionsCallable(const ListConnectionsRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::ListConnections, request);
  }

  /**
   * An Async wrapper for ListConnections that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListConnectionsRequestT = Model::ListConnectionsRequest>
  void ListConnectionsAsync(const ListConnectionsRequestT& request, const ListConnectionsResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::ListConnections, request, handler, context);
  }

  /**
   * <p>Lists partner accounts in the catalog, providing a summary view of all
   * partners.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/ListPartners">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPartnersOutcome ListPartners(const Model::ListPartnersRequest& request) const;

  /**
   * A Callable wrapper for ListPartners that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListPartnersRequestT = Model::ListPartnersRequest>
  Model::ListPartnersOutcomeCallable ListPartnersCallable(const ListPartnersRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::ListPartners, request);
  }

  /**
   * An Async wrapper for ListPartners that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListPartnersRequestT = Model::ListPartnersRequest>
  void ListPartnersAsync(const ListPartnersRequestT& request, const ListPartnersResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::ListPartners, request, handler, context);
  }

  /**
   * <p>Lists all tags associated with a specific AWS Partner Central Account
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Creates or updates the alliance lead contact information for a partner
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/PutAllianceLeadContact">AWS
   * API Reference</a></p>
   */
  virtual Model::PutAllianceLeadContactOutcome PutAllianceLeadContact(const Model::PutAllianceLeadContactRequest& request) const;

  /**
   * A Callable wrapper for PutAllianceLeadContact that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutAllianceLeadContactRequestT = Model::PutAllianceLeadContactRequest>
  Model::PutAllianceLeadContactOutcomeCallable PutAllianceLeadContactCallable(const PutAllianceLeadContactRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::PutAllianceLeadContact, request);
  }

  /**
   * An Async wrapper for PutAllianceLeadContact that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PutAllianceLeadContactRequestT = Model::PutAllianceLeadContactRequest>
  void PutAllianceLeadContactAsync(const PutAllianceLeadContactRequestT& request,
                                   const PutAllianceLeadContactResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::PutAllianceLeadContact, request, handler, context);
  }

  /**
   * <p>Sets the visibility level for a partner profile, controlling who can view the
   * profile information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/PutProfileVisibility">AWS
   * API Reference</a></p>
   */
  virtual Model::PutProfileVisibilityOutcome PutProfileVisibility(const Model::PutProfileVisibilityRequest& request) const;

  /**
   * A Callable wrapper for PutProfileVisibility that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PutProfileVisibilityRequestT = Model::PutProfileVisibilityRequest>
  Model::PutProfileVisibilityOutcomeCallable PutProfileVisibilityCallable(const PutProfileVisibilityRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::PutProfileVisibility, request);
  }

  /**
   * An Async wrapper for PutProfileVisibility that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PutProfileVisibilityRequestT = Model::PutProfileVisibilityRequest>
  void PutProfileVisibilityAsync(const PutProfileVisibilityRequestT& request, const PutProfileVisibilityResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::PutProfileVisibility, request, handler, context);
  }

  /**
   * <p>Rejects a connection invitation from another partner, declining the
   * partnership request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/RejectConnectionInvitation">AWS
   * API Reference</a></p>
   */
  virtual Model::RejectConnectionInvitationOutcome RejectConnectionInvitation(
      const Model::RejectConnectionInvitationRequest& request) const;

  /**
   * A Callable wrapper for RejectConnectionInvitation that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename RejectConnectionInvitationRequestT = Model::RejectConnectionInvitationRequest>
  Model::RejectConnectionInvitationOutcomeCallable RejectConnectionInvitationCallable(
      const RejectConnectionInvitationRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::RejectConnectionInvitation, request);
  }

  /**
   * An Async wrapper for RejectConnectionInvitation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename RejectConnectionInvitationRequestT = Model::RejectConnectionInvitationRequest>
  void RejectConnectionInvitationAsync(const RejectConnectionInvitationRequestT& request,
                                       const RejectConnectionInvitationResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::RejectConnectionInvitation, request, handler, context);
  }

  /**
   * <p>Sends an email verification code to the specified email address for account
   * verification purposes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/SendEmailVerificationCode">AWS
   * API Reference</a></p>
   */
  virtual Model::SendEmailVerificationCodeOutcome SendEmailVerificationCode(const Model::SendEmailVerificationCodeRequest& request) const;

  /**
   * A Callable wrapper for SendEmailVerificationCode that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename SendEmailVerificationCodeRequestT = Model::SendEmailVerificationCodeRequest>
  Model::SendEmailVerificationCodeOutcomeCallable SendEmailVerificationCodeCallable(
      const SendEmailVerificationCodeRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::SendEmailVerificationCode, request);
  }

  /**
   * An Async wrapper for SendEmailVerificationCode that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename SendEmailVerificationCodeRequestT = Model::SendEmailVerificationCodeRequest>
  void SendEmailVerificationCodeAsync(const SendEmailVerificationCodeRequestT& request,
                                      const SendEmailVerificationCodeResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::SendEmailVerificationCode, request, handler, context);
  }

  /**
   * <p>Initiates a profile update task to modify partner profile information
   * asynchronously.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/StartProfileUpdateTask">AWS
   * API Reference</a></p>
   */
  virtual Model::StartProfileUpdateTaskOutcome StartProfileUpdateTask(const Model::StartProfileUpdateTaskRequest& request) const;

  /**
   * A Callable wrapper for StartProfileUpdateTask that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartProfileUpdateTaskRequestT = Model::StartProfileUpdateTaskRequest>
  Model::StartProfileUpdateTaskOutcomeCallable StartProfileUpdateTaskCallable(const StartProfileUpdateTaskRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::StartProfileUpdateTask, request);
  }

  /**
   * An Async wrapper for StartProfileUpdateTask that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartProfileUpdateTaskRequestT = Model::StartProfileUpdateTaskRequest>
  void StartProfileUpdateTaskAsync(const StartProfileUpdateTaskRequestT& request,
                                   const StartProfileUpdateTaskResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::StartProfileUpdateTask, request, handler, context);
  }

  /**
   * <p>Initiates a new verification process for a partner account. This operation
   * begins the verification workflow for either business registration or individual
   * registrant identity verification as required by AWS Partner
   * Central.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/StartVerification">AWS
   * API Reference</a></p>
   */
  virtual Model::StartVerificationOutcome StartVerification(const Model::StartVerificationRequest& request = {}) const;

  /**
   * A Callable wrapper for StartVerification that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename StartVerificationRequestT = Model::StartVerificationRequest>
  Model::StartVerificationOutcomeCallable StartVerificationCallable(const StartVerificationRequestT& request = {}) const {
    return SubmitCallable(&PartnerCentralAccountClient::StartVerification, request);
  }

  /**
   * An Async wrapper for StartVerification that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename StartVerificationRequestT = Model::StartVerificationRequest>
  void StartVerificationAsync(const StartVerificationResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const StartVerificationRequestT& request = {}) const {
    return SubmitAsync(&PartnerCentralAccountClient::StartVerification, request, handler, context);
  }

  /**
   * <p>Adds or updates tags for a specified AWS Partner Central Account
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes specified tags from an AWS Partner Central Account
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates the connection preferences for a partner account, modifying access
   * settings and exclusions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/UpdateConnectionPreferences">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateConnectionPreferencesOutcome UpdateConnectionPreferences(
      const Model::UpdateConnectionPreferencesRequest& request) const;

  /**
   * A Callable wrapper for UpdateConnectionPreferences that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateConnectionPreferencesRequestT = Model::UpdateConnectionPreferencesRequest>
  Model::UpdateConnectionPreferencesOutcomeCallable UpdateConnectionPreferencesCallable(
      const UpdateConnectionPreferencesRequestT& request) const {
    return SubmitCallable(&PartnerCentralAccountClient::UpdateConnectionPreferences, request);
  }

  /**
   * An Async wrapper for UpdateConnectionPreferences that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateConnectionPreferencesRequestT = Model::UpdateConnectionPreferencesRequest>
  void UpdateConnectionPreferencesAsync(const UpdateConnectionPreferencesRequestT& request,
                                        const UpdateConnectionPreferencesResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralAccountClient::UpdateConnectionPreferences, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<PartnerCentralAccountEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<PartnerCentralAccountClient>;
  void init(const PartnerCentralAccountClientConfiguration& clientConfiguration);

  PartnerCentralAccountClientConfiguration m_clientConfiguration;
  std::shared_ptr<PartnerCentralAccountEndpointProviderBase> m_endpointProvider;
};

}  // namespace PartnerCentralAccount
}  // namespace Aws
