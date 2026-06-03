/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/socialmessaging/SocialMessagingPaginationBase.h>
#include <aws/socialmessaging/SocialMessagingServiceClientModel.h>
#include <aws/socialmessaging/SocialMessagingWaiter.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>

namespace Aws {
namespace SocialMessaging {
/**
 * <p> <i>Amazon Web Services End User Messaging Social</i>, also referred to as
 * Social messaging, is a messaging service that enables application developers to
 * incorporate WhatsApp into their existing workflows. The <i>Amazon Web Services
 * End User Messaging Social API</i> provides information about the <i>Amazon Web
 * Services End User Messaging Social API</i> resources, including supported HTTP
 * methods, parameters, and schemas.</p> <p>The <i>Amazon Web Services End User
 * Messaging Social API</i> provides programmatic access to options that are unique
 * to the WhatsApp Business Platform.</p> <p>If you're new to the <i>Amazon Web
 * Services End User Messaging Social API</i>, it's also helpful to review <a
 * href="https://docs.aws.amazon.com/sms-voice/latest/userguide/what-is-service.html">What
 * is Amazon Web Services End User Messaging Social</a> in the <i>Amazon Web
 * Services End User Messaging Social User Guide</i>. The <i>Amazon Web Services
 * End User Messaging Social User Guide</i> provides tutorials, code samples, and
 * procedures that demonstrate how to use <i>Amazon Web Services End User Messaging
 * Social API</i> features programmatically and how to integrate functionality into
 * applications. The guide also provides key information, such as integration with
 * other Amazon Web Services services, and the quotas that apply to use of the
 * service.</p> <p> <b>Regional availability</b> </p> <p>The <i>Amazon Web Services
 * End User Messaging Social API</i> is available across several Amazon Web
 * Services Regions and it provides a dedicated endpoint for each of these Regions.
 * For a list of all the Regions and endpoints where the API is currently
 * available, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#pinpoint_region">Amazon
 * Web Services Service Endpoints</a> and <a
 * href="https://docs.aws.amazon.com/general/latest/gr/end-user-messaging.html">Amazon
 * Web Services End User Messaging endpoints and quotas</a> in the Amazon Web
 * Services General Reference. To learn more about Amazon Web Services Regions, see
 * <a
 * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html">Managing
 * Amazon Web Services Regions</a> in the Amazon Web Services General
 * Reference.</p> <p>In each Region, Amazon Web Services maintains multiple
 * Availability Zones. These Availability Zones are physically isolated from each
 * other, but are united by private, low-latency, high-throughput, and highly
 * redundant network connections. These Availability Zones enable us to provide
 * very high levels of availability and redundancy, while also minimizing latency.
 * To learn more about the number of Availability Zones that are available in each
 * Region, see <a
 * href="https://aws.amazon.com/about-aws/global-infrastructure/">Amazon Web
 * Services Global Infrastructure.</a> </p>
 */
class AWS_SOCIALMESSAGING_API SocialMessagingClient : public Aws::Client::AWSJsonClient,
                                                      public Aws::Client::ClientWithAsyncTemplateMethods<SocialMessagingClient>,
                                                      public SocialMessagingPaginationBase<SocialMessagingClient>,
                                                      public SocialMessagingWaiter<SocialMessagingClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef SocialMessagingClientConfiguration ClientConfigurationType;
  typedef SocialMessagingEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SocialMessagingClient(const Aws::SocialMessaging::SocialMessagingClientConfiguration& clientConfiguration =
                            Aws::SocialMessaging::SocialMessagingClientConfiguration(),
                        std::shared_ptr<SocialMessagingEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SocialMessagingClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<SocialMessagingEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::SocialMessaging::SocialMessagingClientConfiguration& clientConfiguration =
                            Aws::SocialMessaging::SocialMessagingClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SocialMessagingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<SocialMessagingEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::SocialMessaging::SocialMessagingClientConfiguration& clientConfiguration =
                            Aws::SocialMessaging::SocialMessagingClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SocialMessagingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SocialMessagingClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SocialMessagingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~SocialMessagingClient();

  /**
   * <p>This is only used through the Amazon Web Services console during sign-up to
   * associate your WhatsApp Business Account to your Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/AssociateWhatsAppBusinessAccount">AWS
   * API Reference</a></p>
   */
  virtual Model::AssociateWhatsAppBusinessAccountOutcome AssociateWhatsAppBusinessAccount(
      const Model::AssociateWhatsAppBusinessAccountRequest& request = {}) const;

  /**
   * A Callable wrapper for AssociateWhatsAppBusinessAccount that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename AssociateWhatsAppBusinessAccountRequestT = Model::AssociateWhatsAppBusinessAccountRequest>
  Model::AssociateWhatsAppBusinessAccountOutcomeCallable AssociateWhatsAppBusinessAccountCallable(
      const AssociateWhatsAppBusinessAccountRequestT& request = {}) const {
    return SubmitCallable(&SocialMessagingClient::AssociateWhatsAppBusinessAccount, request);
  }

  /**
   * An Async wrapper for AssociateWhatsAppBusinessAccount that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename AssociateWhatsAppBusinessAccountRequestT = Model::AssociateWhatsAppBusinessAccountRequest>
  void AssociateWhatsAppBusinessAccountAsync(const AssociateWhatsAppBusinessAccountResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                             const AssociateWhatsAppBusinessAccountRequestT& request = {}) const {
    return SubmitAsync(&SocialMessagingClient::AssociateWhatsAppBusinessAccount, request, handler, context);
  }

  /**
   * <p>Creates a new WhatsApp Flow. Flows enable businesses to create rich,
   * interactive forms and experiences that users can complete without leaving
   * WhatsApp. The Flow is created in DRAFT status. If <code>publish</code> is set to
   * <code>true</code> and a valid <code>flowJson</code> is provided, the Flow is
   * published immediately.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/CreateWhatsAppFlow">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateWhatsAppFlowOutcome CreateWhatsAppFlow(const Model::CreateWhatsAppFlowRequest& request) const;

  /**
   * A Callable wrapper for CreateWhatsAppFlow that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateWhatsAppFlowRequestT = Model::CreateWhatsAppFlowRequest>
  Model::CreateWhatsAppFlowOutcomeCallable CreateWhatsAppFlowCallable(const CreateWhatsAppFlowRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::CreateWhatsAppFlow, request);
  }

  /**
   * An Async wrapper for CreateWhatsAppFlow that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateWhatsAppFlowRequestT = Model::CreateWhatsAppFlowRequest>
  void CreateWhatsAppFlowAsync(const CreateWhatsAppFlowRequestT& request, const CreateWhatsAppFlowResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::CreateWhatsAppFlow, request, handler, context);
  }

  /**
   * <p>Creates a new WhatsApp message template from a custom definition.</p>
   * <p>Amazon Web Services End User Messaging Social does not store any WhatsApp
   * message template content.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/CreateWhatsAppMessageTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateWhatsAppMessageTemplateOutcome CreateWhatsAppMessageTemplate(
      const Model::CreateWhatsAppMessageTemplateRequest& request) const;

  /**
   * A Callable wrapper for CreateWhatsAppMessageTemplate that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateWhatsAppMessageTemplateRequestT = Model::CreateWhatsAppMessageTemplateRequest>
  Model::CreateWhatsAppMessageTemplateOutcomeCallable CreateWhatsAppMessageTemplateCallable(
      const CreateWhatsAppMessageTemplateRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::CreateWhatsAppMessageTemplate, request);
  }

  /**
   * An Async wrapper for CreateWhatsAppMessageTemplate that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateWhatsAppMessageTemplateRequestT = Model::CreateWhatsAppMessageTemplateRequest>
  void CreateWhatsAppMessageTemplateAsync(const CreateWhatsAppMessageTemplateRequestT& request,
                                          const CreateWhatsAppMessageTemplateResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::CreateWhatsAppMessageTemplate, request, handler, context);
  }

  /**
   * <p>Creates a new WhatsApp message template using a template from Meta's template
   * library.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/CreateWhatsAppMessageTemplateFromLibrary">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateWhatsAppMessageTemplateFromLibraryOutcome CreateWhatsAppMessageTemplateFromLibrary(
      const Model::CreateWhatsAppMessageTemplateFromLibraryRequest& request) const;

  /**
   * A Callable wrapper for CreateWhatsAppMessageTemplateFromLibrary that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename CreateWhatsAppMessageTemplateFromLibraryRequestT = Model::CreateWhatsAppMessageTemplateFromLibraryRequest>
  Model::CreateWhatsAppMessageTemplateFromLibraryOutcomeCallable CreateWhatsAppMessageTemplateFromLibraryCallable(
      const CreateWhatsAppMessageTemplateFromLibraryRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::CreateWhatsAppMessageTemplateFromLibrary, request);
  }

  /**
   * An Async wrapper for CreateWhatsAppMessageTemplateFromLibrary that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename CreateWhatsAppMessageTemplateFromLibraryRequestT = Model::CreateWhatsAppMessageTemplateFromLibraryRequest>
  void CreateWhatsAppMessageTemplateFromLibraryAsync(
      const CreateWhatsAppMessageTemplateFromLibraryRequestT& request,
      const CreateWhatsAppMessageTemplateFromLibraryResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::CreateWhatsAppMessageTemplateFromLibrary, request, handler, context);
  }

  /**
   * <p>Uploads media for use in a WhatsApp message template.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/CreateWhatsAppMessageTemplateMedia">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateWhatsAppMessageTemplateMediaOutcome CreateWhatsAppMessageTemplateMedia(
      const Model::CreateWhatsAppMessageTemplateMediaRequest& request) const;

  /**
   * A Callable wrapper for CreateWhatsAppMessageTemplateMedia that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename CreateWhatsAppMessageTemplateMediaRequestT = Model::CreateWhatsAppMessageTemplateMediaRequest>
  Model::CreateWhatsAppMessageTemplateMediaOutcomeCallable CreateWhatsAppMessageTemplateMediaCallable(
      const CreateWhatsAppMessageTemplateMediaRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::CreateWhatsAppMessageTemplateMedia, request);
  }

  /**
   * An Async wrapper for CreateWhatsAppMessageTemplateMedia that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateWhatsAppMessageTemplateMediaRequestT = Model::CreateWhatsAppMessageTemplateMediaRequest>
  void CreateWhatsAppMessageTemplateMediaAsync(const CreateWhatsAppMessageTemplateMediaRequestT& request,
                                               const CreateWhatsAppMessageTemplateMediaResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::CreateWhatsAppMessageTemplateMedia, request, handler, context);
  }

  /**
   * <p>Deletes a WhatsApp Flow permanently. Only Flows in DRAFT status can be
   * deleted. Published or deprecated Flows cannot be deleted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/DeleteWhatsAppFlow">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteWhatsAppFlowOutcome DeleteWhatsAppFlow(const Model::DeleteWhatsAppFlowRequest& request) const;

  /**
   * A Callable wrapper for DeleteWhatsAppFlow that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteWhatsAppFlowRequestT = Model::DeleteWhatsAppFlowRequest>
  Model::DeleteWhatsAppFlowOutcomeCallable DeleteWhatsAppFlowCallable(const DeleteWhatsAppFlowRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::DeleteWhatsAppFlow, request);
  }

  /**
   * An Async wrapper for DeleteWhatsAppFlow that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteWhatsAppFlowRequestT = Model::DeleteWhatsAppFlowRequest>
  void DeleteWhatsAppFlowAsync(const DeleteWhatsAppFlowRequestT& request, const DeleteWhatsAppFlowResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::DeleteWhatsAppFlow, request, handler, context);
  }

  /**
   * <p>Delete a media object from the WhatsApp service. If the object is still in an
   * Amazon S3 bucket you should delete it from there too.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/DeleteWhatsAppMessageMedia">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteWhatsAppMessageMediaOutcome DeleteWhatsAppMessageMedia(
      const Model::DeleteWhatsAppMessageMediaRequest& request) const;

  /**
   * A Callable wrapper for DeleteWhatsAppMessageMedia that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteWhatsAppMessageMediaRequestT = Model::DeleteWhatsAppMessageMediaRequest>
  Model::DeleteWhatsAppMessageMediaOutcomeCallable DeleteWhatsAppMessageMediaCallable(
      const DeleteWhatsAppMessageMediaRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::DeleteWhatsAppMessageMedia, request);
  }

  /**
   * An Async wrapper for DeleteWhatsAppMessageMedia that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteWhatsAppMessageMediaRequestT = Model::DeleteWhatsAppMessageMediaRequest>
  void DeleteWhatsAppMessageMediaAsync(const DeleteWhatsAppMessageMediaRequestT& request,
                                       const DeleteWhatsAppMessageMediaResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::DeleteWhatsAppMessageMedia, request, handler, context);
  }

  /**
   * <p>Deletes a WhatsApp message template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/DeleteWhatsAppMessageTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteWhatsAppMessageTemplateOutcome DeleteWhatsAppMessageTemplate(
      const Model::DeleteWhatsAppMessageTemplateRequest& request) const;

  /**
   * A Callable wrapper for DeleteWhatsAppMessageTemplate that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteWhatsAppMessageTemplateRequestT = Model::DeleteWhatsAppMessageTemplateRequest>
  Model::DeleteWhatsAppMessageTemplateOutcomeCallable DeleteWhatsAppMessageTemplateCallable(
      const DeleteWhatsAppMessageTemplateRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::DeleteWhatsAppMessageTemplate, request);
  }

  /**
   * An Async wrapper for DeleteWhatsAppMessageTemplate that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteWhatsAppMessageTemplateRequestT = Model::DeleteWhatsAppMessageTemplateRequest>
  void DeleteWhatsAppMessageTemplateAsync(const DeleteWhatsAppMessageTemplateRequestT& request,
                                          const DeleteWhatsAppMessageTemplateResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::DeleteWhatsAppMessageTemplate, request, handler, context);
  }

  /**
   * <p>Deprecates a published WhatsApp Flow, marking it as no longer recommended for
   * use. The Flow must be in PUBLISHED status. This is an irreversible
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/DeprecateWhatsAppFlow">AWS
   * API Reference</a></p>
   */
  virtual Model::DeprecateWhatsAppFlowOutcome DeprecateWhatsAppFlow(const Model::DeprecateWhatsAppFlowRequest& request) const;

  /**
   * A Callable wrapper for DeprecateWhatsAppFlow that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeprecateWhatsAppFlowRequestT = Model::DeprecateWhatsAppFlowRequest>
  Model::DeprecateWhatsAppFlowOutcomeCallable DeprecateWhatsAppFlowCallable(const DeprecateWhatsAppFlowRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::DeprecateWhatsAppFlow, request);
  }

  /**
   * An Async wrapper for DeprecateWhatsAppFlow that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeprecateWhatsAppFlowRequestT = Model::DeprecateWhatsAppFlowRequest>
  void DeprecateWhatsAppFlowAsync(const DeprecateWhatsAppFlowRequestT& request, const DeprecateWhatsAppFlowResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::DeprecateWhatsAppFlow, request, handler, context);
  }

  /**
   * <p>Disassociate a WhatsApp Business Account (WABA) from your Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/DisassociateWhatsAppBusinessAccount">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociateWhatsAppBusinessAccountOutcome DisassociateWhatsAppBusinessAccount(
      const Model::DisassociateWhatsAppBusinessAccountRequest& request) const;

  /**
   * A Callable wrapper for DisassociateWhatsAppBusinessAccount that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DisassociateWhatsAppBusinessAccountRequestT = Model::DisassociateWhatsAppBusinessAccountRequest>
  Model::DisassociateWhatsAppBusinessAccountOutcomeCallable DisassociateWhatsAppBusinessAccountCallable(
      const DisassociateWhatsAppBusinessAccountRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::DisassociateWhatsAppBusinessAccount, request);
  }

  /**
   * An Async wrapper for DisassociateWhatsAppBusinessAccount that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DisassociateWhatsAppBusinessAccountRequestT = Model::DisassociateWhatsAppBusinessAccountRequest>
  void DisassociateWhatsAppBusinessAccountAsync(const DisassociateWhatsAppBusinessAccountRequestT& request,
                                                const DisassociateWhatsAppBusinessAccountResponseReceivedHandler& handler,
                                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::DisassociateWhatsAppBusinessAccount, request, handler, context);
  }

  /**
   * <p>Get the details of your linked WhatsApp Business Account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/GetLinkedWhatsAppBusinessAccount">AWS
   * API Reference</a></p>
   */
  virtual Model::GetLinkedWhatsAppBusinessAccountOutcome GetLinkedWhatsAppBusinessAccount(
      const Model::GetLinkedWhatsAppBusinessAccountRequest& request) const;

  /**
   * A Callable wrapper for GetLinkedWhatsAppBusinessAccount that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename GetLinkedWhatsAppBusinessAccountRequestT = Model::GetLinkedWhatsAppBusinessAccountRequest>
  Model::GetLinkedWhatsAppBusinessAccountOutcomeCallable GetLinkedWhatsAppBusinessAccountCallable(
      const GetLinkedWhatsAppBusinessAccountRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::GetLinkedWhatsAppBusinessAccount, request);
  }

  /**
   * An Async wrapper for GetLinkedWhatsAppBusinessAccount that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename GetLinkedWhatsAppBusinessAccountRequestT = Model::GetLinkedWhatsAppBusinessAccountRequest>
  void GetLinkedWhatsAppBusinessAccountAsync(const GetLinkedWhatsAppBusinessAccountRequestT& request,
                                             const GetLinkedWhatsAppBusinessAccountResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::GetLinkedWhatsAppBusinessAccount, request, handler, context);
  }

  /**
   * <p>Retrieve the WABA account id and phone number details of a WhatsApp business
   * account phone number.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/GetLinkedWhatsAppBusinessAccountPhoneNumber">AWS
   * API Reference</a></p>
   */
  virtual Model::GetLinkedWhatsAppBusinessAccountPhoneNumberOutcome GetLinkedWhatsAppBusinessAccountPhoneNumber(
      const Model::GetLinkedWhatsAppBusinessAccountPhoneNumberRequest& request) const;

  /**
   * A Callable wrapper for GetLinkedWhatsAppBusinessAccountPhoneNumber that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename GetLinkedWhatsAppBusinessAccountPhoneNumberRequestT = Model::GetLinkedWhatsAppBusinessAccountPhoneNumberRequest>
  Model::GetLinkedWhatsAppBusinessAccountPhoneNumberOutcomeCallable GetLinkedWhatsAppBusinessAccountPhoneNumberCallable(
      const GetLinkedWhatsAppBusinessAccountPhoneNumberRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::GetLinkedWhatsAppBusinessAccountPhoneNumber, request);
  }

  /**
   * An Async wrapper for GetLinkedWhatsAppBusinessAccountPhoneNumber that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename GetLinkedWhatsAppBusinessAccountPhoneNumberRequestT = Model::GetLinkedWhatsAppBusinessAccountPhoneNumberRequest>
  void GetLinkedWhatsAppBusinessAccountPhoneNumberAsync(
      const GetLinkedWhatsAppBusinessAccountPhoneNumberRequestT& request,
      const GetLinkedWhatsAppBusinessAccountPhoneNumberResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::GetLinkedWhatsAppBusinessAccountPhoneNumber, request, handler, context);
  }

  /**
   * <p>Retrieves the metadata and status of a WhatsApp Flow, including validation
   * errors, preview information, and health status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/GetWhatsAppFlow">AWS
   * API Reference</a></p>
   */
  virtual Model::GetWhatsAppFlowOutcome GetWhatsAppFlow(const Model::GetWhatsAppFlowRequest& request) const;

  /**
   * A Callable wrapper for GetWhatsAppFlow that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetWhatsAppFlowRequestT = Model::GetWhatsAppFlowRequest>
  Model::GetWhatsAppFlowOutcomeCallable GetWhatsAppFlowCallable(const GetWhatsAppFlowRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::GetWhatsAppFlow, request);
  }

  /**
   * An Async wrapper for GetWhatsAppFlow that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetWhatsAppFlowRequestT = Model::GetWhatsAppFlowRequest>
  void GetWhatsAppFlowAsync(const GetWhatsAppFlowRequestT& request, const GetWhatsAppFlowResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::GetWhatsAppFlow, request, handler, context);
  }

  /**
   * <p>Generates a web preview URL for testing a WhatsApp Flow before publishing.
   * Preview URLs expire in 30 days and can be shared with stakeholders for
   * review.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/GetWhatsAppFlowPreview">AWS
   * API Reference</a></p>
   */
  virtual Model::GetWhatsAppFlowPreviewOutcome GetWhatsAppFlowPreview(const Model::GetWhatsAppFlowPreviewRequest& request) const;

  /**
   * A Callable wrapper for GetWhatsAppFlowPreview that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetWhatsAppFlowPreviewRequestT = Model::GetWhatsAppFlowPreviewRequest>
  Model::GetWhatsAppFlowPreviewOutcomeCallable GetWhatsAppFlowPreviewCallable(const GetWhatsAppFlowPreviewRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::GetWhatsAppFlowPreview, request);
  }

  /**
   * An Async wrapper for GetWhatsAppFlowPreview that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetWhatsAppFlowPreviewRequestT = Model::GetWhatsAppFlowPreviewRequest>
  void GetWhatsAppFlowPreviewAsync(const GetWhatsAppFlowPreviewRequestT& request,
                                   const GetWhatsAppFlowPreviewResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::GetWhatsAppFlowPreview, request, handler, context);
  }

  /**
   * <p>Get a media file from the WhatsApp service. On successful completion the
   * media file is retrieved from Meta and stored in the specified Amazon S3 bucket.
   * Use either <code>destinationS3File</code> or
   * <code>destinationS3PresignedUrl</code> for the destination. If both are used
   * then an <code>InvalidParameterException</code> is returned.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/GetWhatsAppMessageMedia">AWS
   * API Reference</a></p>
   */
  virtual Model::GetWhatsAppMessageMediaOutcome GetWhatsAppMessageMedia(const Model::GetWhatsAppMessageMediaRequest& request) const;

  /**
   * A Callable wrapper for GetWhatsAppMessageMedia that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetWhatsAppMessageMediaRequestT = Model::GetWhatsAppMessageMediaRequest>
  Model::GetWhatsAppMessageMediaOutcomeCallable GetWhatsAppMessageMediaCallable(const GetWhatsAppMessageMediaRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::GetWhatsAppMessageMedia, request);
  }

  /**
   * An Async wrapper for GetWhatsAppMessageMedia that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetWhatsAppMessageMediaRequestT = Model::GetWhatsAppMessageMediaRequest>
  void GetWhatsAppMessageMediaAsync(const GetWhatsAppMessageMediaRequestT& request,
                                    const GetWhatsAppMessageMediaResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::GetWhatsAppMessageMedia, request, handler, context);
  }

  /**
   * <p>Retrieves a specific WhatsApp message template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/GetWhatsAppMessageTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::GetWhatsAppMessageTemplateOutcome GetWhatsAppMessageTemplate(
      const Model::GetWhatsAppMessageTemplateRequest& request) const;

  /**
   * A Callable wrapper for GetWhatsAppMessageTemplate that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetWhatsAppMessageTemplateRequestT = Model::GetWhatsAppMessageTemplateRequest>
  Model::GetWhatsAppMessageTemplateOutcomeCallable GetWhatsAppMessageTemplateCallable(
      const GetWhatsAppMessageTemplateRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::GetWhatsAppMessageTemplate, request);
  }

  /**
   * An Async wrapper for GetWhatsAppMessageTemplate that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetWhatsAppMessageTemplateRequestT = Model::GetWhatsAppMessageTemplateRequest>
  void GetWhatsAppMessageTemplateAsync(const GetWhatsAppMessageTemplateRequestT& request,
                                       const GetWhatsAppMessageTemplateResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::GetWhatsAppMessageTemplate, request, handler, context);
  }

  /**
   * <p>List all WhatsApp Business Accounts linked to your Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/ListLinkedWhatsAppBusinessAccounts">AWS
   * API Reference</a></p>
   */
  virtual Model::ListLinkedWhatsAppBusinessAccountsOutcome ListLinkedWhatsAppBusinessAccounts(
      const Model::ListLinkedWhatsAppBusinessAccountsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListLinkedWhatsAppBusinessAccounts that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename ListLinkedWhatsAppBusinessAccountsRequestT = Model::ListLinkedWhatsAppBusinessAccountsRequest>
  Model::ListLinkedWhatsAppBusinessAccountsOutcomeCallable ListLinkedWhatsAppBusinessAccountsCallable(
      const ListLinkedWhatsAppBusinessAccountsRequestT& request = {}) const {
    return SubmitCallable(&SocialMessagingClient::ListLinkedWhatsAppBusinessAccounts, request);
  }

  /**
   * An Async wrapper for ListLinkedWhatsAppBusinessAccounts that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListLinkedWhatsAppBusinessAccountsRequestT = Model::ListLinkedWhatsAppBusinessAccountsRequest>
  void ListLinkedWhatsAppBusinessAccountsAsync(const ListLinkedWhatsAppBusinessAccountsResponseReceivedHandler& handler,
                                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                               const ListLinkedWhatsAppBusinessAccountsRequestT& request = {}) const {
    return SubmitAsync(&SocialMessagingClient::ListLinkedWhatsAppBusinessAccounts, request, handler, context);
  }

  /**
   * <p>List all tags associated with a resource, such as a phone number or
   * WABA.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Lists the assets (Flow JSON definition) of a WhatsApp Flow with presigned
   * download URLs. Download URLs are generated by Meta and expire after a short
   * period.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/ListWhatsAppFlowAssets">AWS
   * API Reference</a></p>
   */
  virtual Model::ListWhatsAppFlowAssetsOutcome ListWhatsAppFlowAssets(const Model::ListWhatsAppFlowAssetsRequest& request) const;

  /**
   * A Callable wrapper for ListWhatsAppFlowAssets that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListWhatsAppFlowAssetsRequestT = Model::ListWhatsAppFlowAssetsRequest>
  Model::ListWhatsAppFlowAssetsOutcomeCallable ListWhatsAppFlowAssetsCallable(const ListWhatsAppFlowAssetsRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::ListWhatsAppFlowAssets, request);
  }

  /**
   * An Async wrapper for ListWhatsAppFlowAssets that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListWhatsAppFlowAssetsRequestT = Model::ListWhatsAppFlowAssetsRequest>
  void ListWhatsAppFlowAssetsAsync(const ListWhatsAppFlowAssetsRequestT& request,
                                   const ListWhatsAppFlowAssetsResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::ListWhatsAppFlowAssets, request, handler, context);
  }

  /**
   * <p>Lists all WhatsApp Flows for a WhatsApp Business Account. Returns summary
   * information including Flow ID, name, status, and categories.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/ListWhatsAppFlows">AWS
   * API Reference</a></p>
   */
  virtual Model::ListWhatsAppFlowsOutcome ListWhatsAppFlows(const Model::ListWhatsAppFlowsRequest& request) const;

  /**
   * A Callable wrapper for ListWhatsAppFlows that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListWhatsAppFlowsRequestT = Model::ListWhatsAppFlowsRequest>
  Model::ListWhatsAppFlowsOutcomeCallable ListWhatsAppFlowsCallable(const ListWhatsAppFlowsRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::ListWhatsAppFlows, request);
  }

  /**
   * An Async wrapper for ListWhatsAppFlows that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListWhatsAppFlowsRequestT = Model::ListWhatsAppFlowsRequest>
  void ListWhatsAppFlowsAsync(const ListWhatsAppFlowsRequestT& request, const ListWhatsAppFlowsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::ListWhatsAppFlows, request, handler, context);
  }

  /**
   * <p>Lists WhatsApp message templates for a specific WhatsApp Business
   * Account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/ListWhatsAppMessageTemplates">AWS
   * API Reference</a></p>
   */
  virtual Model::ListWhatsAppMessageTemplatesOutcome ListWhatsAppMessageTemplates(
      const Model::ListWhatsAppMessageTemplatesRequest& request) const;

  /**
   * A Callable wrapper for ListWhatsAppMessageTemplates that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListWhatsAppMessageTemplatesRequestT = Model::ListWhatsAppMessageTemplatesRequest>
  Model::ListWhatsAppMessageTemplatesOutcomeCallable ListWhatsAppMessageTemplatesCallable(
      const ListWhatsAppMessageTemplatesRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::ListWhatsAppMessageTemplates, request);
  }

  /**
   * An Async wrapper for ListWhatsAppMessageTemplates that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListWhatsAppMessageTemplatesRequestT = Model::ListWhatsAppMessageTemplatesRequest>
  void ListWhatsAppMessageTemplatesAsync(const ListWhatsAppMessageTemplatesRequestT& request,
                                         const ListWhatsAppMessageTemplatesResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::ListWhatsAppMessageTemplates, request, handler, context);
  }

  /**
   * <p>Lists templates available in Meta's template library for WhatsApp
   * messaging.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/ListWhatsAppTemplateLibrary">AWS
   * API Reference</a></p>
   */
  virtual Model::ListWhatsAppTemplateLibraryOutcome ListWhatsAppTemplateLibrary(
      const Model::ListWhatsAppTemplateLibraryRequest& request) const;

  /**
   * A Callable wrapper for ListWhatsAppTemplateLibrary that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListWhatsAppTemplateLibraryRequestT = Model::ListWhatsAppTemplateLibraryRequest>
  Model::ListWhatsAppTemplateLibraryOutcomeCallable ListWhatsAppTemplateLibraryCallable(
      const ListWhatsAppTemplateLibraryRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::ListWhatsAppTemplateLibrary, request);
  }

  /**
   * An Async wrapper for ListWhatsAppTemplateLibrary that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListWhatsAppTemplateLibraryRequestT = Model::ListWhatsAppTemplateLibraryRequest>
  void ListWhatsAppTemplateLibraryAsync(const ListWhatsAppTemplateLibraryRequestT& request,
                                        const ListWhatsAppTemplateLibraryResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::ListWhatsAppTemplateLibrary, request, handler, context);
  }

  /**
   * <p>Upload a media file to the WhatsApp service. Only the specified
   * <code>originationPhoneNumberId</code> has the permissions to send the media file
   * when using <a
   * href="https://docs.aws.amazon.com/social-messaging/latest/APIReference/API_SendWhatsAppMessage.html">SendWhatsAppMessage</a>.
   * You must use either <code>sourceS3File</code> or
   * <code>sourceS3PresignedUrl</code> for the source. If both or neither are
   * specified then an <code>InvalidParameterException</code> is
   * returned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/PostWhatsAppMessageMedia">AWS
   * API Reference</a></p>
   */
  virtual Model::PostWhatsAppMessageMediaOutcome PostWhatsAppMessageMedia(const Model::PostWhatsAppMessageMediaRequest& request) const;

  /**
   * A Callable wrapper for PostWhatsAppMessageMedia that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PostWhatsAppMessageMediaRequestT = Model::PostWhatsAppMessageMediaRequest>
  Model::PostWhatsAppMessageMediaOutcomeCallable PostWhatsAppMessageMediaCallable(const PostWhatsAppMessageMediaRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::PostWhatsAppMessageMedia, request);
  }

  /**
   * An Async wrapper for PostWhatsAppMessageMedia that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename PostWhatsAppMessageMediaRequestT = Model::PostWhatsAppMessageMediaRequest>
  void PostWhatsAppMessageMediaAsync(const PostWhatsAppMessageMediaRequestT& request,
                                     const PostWhatsAppMessageMediaResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::PostWhatsAppMessageMedia, request, handler, context);
  }

  /**
   * <p>Publishes a WhatsApp Flow, making it available for use in template messages.
   * The Flow must be in DRAFT status with valid Flow JSON that passes Meta's
   * validation. This is an irreversible operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/PublishWhatsAppFlow">AWS
   * API Reference</a></p>
   */
  virtual Model::PublishWhatsAppFlowOutcome PublishWhatsAppFlow(const Model::PublishWhatsAppFlowRequest& request) const;

  /**
   * A Callable wrapper for PublishWhatsAppFlow that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename PublishWhatsAppFlowRequestT = Model::PublishWhatsAppFlowRequest>
  Model::PublishWhatsAppFlowOutcomeCallable PublishWhatsAppFlowCallable(const PublishWhatsAppFlowRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::PublishWhatsAppFlow, request);
  }

  /**
   * An Async wrapper for PublishWhatsAppFlow that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename PublishWhatsAppFlowRequestT = Model::PublishWhatsAppFlowRequest>
  void PublishWhatsAppFlowAsync(const PublishWhatsAppFlowRequestT& request, const PublishWhatsAppFlowResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::PublishWhatsAppFlow, request, handler, context);
  }

  /**
   * <p>Add an event destination to log event data from WhatsApp for a WhatsApp
   * Business Account (WABA). A WABA can only have one event destination at a time.
   * All resources associated with the WABA use the same event
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/PutWhatsAppBusinessAccountEventDestinations">AWS
   * API Reference</a></p>
   */
  virtual Model::PutWhatsAppBusinessAccountEventDestinationsOutcome PutWhatsAppBusinessAccountEventDestinations(
      const Model::PutWhatsAppBusinessAccountEventDestinationsRequest& request) const;

  /**
   * A Callable wrapper for PutWhatsAppBusinessAccountEventDestinations that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename PutWhatsAppBusinessAccountEventDestinationsRequestT = Model::PutWhatsAppBusinessAccountEventDestinationsRequest>
  Model::PutWhatsAppBusinessAccountEventDestinationsOutcomeCallable PutWhatsAppBusinessAccountEventDestinationsCallable(
      const PutWhatsAppBusinessAccountEventDestinationsRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::PutWhatsAppBusinessAccountEventDestinations, request);
  }

  /**
   * An Async wrapper for PutWhatsAppBusinessAccountEventDestinations that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename PutWhatsAppBusinessAccountEventDestinationsRequestT = Model::PutWhatsAppBusinessAccountEventDestinationsRequest>
  void PutWhatsAppBusinessAccountEventDestinationsAsync(
      const PutWhatsAppBusinessAccountEventDestinationsRequestT& request,
      const PutWhatsAppBusinessAccountEventDestinationsResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::PutWhatsAppBusinessAccountEventDestinations, request, handler, context);
  }

  /**
   * <p>Send a WhatsApp message. For examples of sending a message using the Amazon
   * Web Services CLI, see <a
   * href="https://docs.aws.amazon.com/social-messaging/latest/userguide/send-message.html">Sending
   * messages</a> in the <i> <i>Amazon Web Services End User Messaging Social User
   * Guide</i> </i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/SendWhatsAppMessage">AWS
   * API Reference</a></p>
   */
  virtual Model::SendWhatsAppMessageOutcome SendWhatsAppMessage(const Model::SendWhatsAppMessageRequest& request) const;

  /**
   * A Callable wrapper for SendWhatsAppMessage that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename SendWhatsAppMessageRequestT = Model::SendWhatsAppMessageRequest>
  Model::SendWhatsAppMessageOutcomeCallable SendWhatsAppMessageCallable(const SendWhatsAppMessageRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::SendWhatsAppMessage, request);
  }

  /**
   * An Async wrapper for SendWhatsAppMessage that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename SendWhatsAppMessageRequestT = Model::SendWhatsAppMessageRequest>
  void SendWhatsAppMessageAsync(const SendWhatsAppMessageRequestT& request, const SendWhatsAppMessageResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::SendWhatsAppMessage, request, handler, context);
  }

  /**
   * <p>Adds or overwrites only the specified tags for the specified resource. When
   * you specify an existing tag key, the value is overwritten with the new
   * value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes the specified tags from a resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates the metadata of a WhatsApp Flow, such as its name or categories. This
   * does not update the Flow JSON definition. Use <a
   * href="https://docs.aws.amazon.com/social-messaging/latest/APIReference/API_UpdateWhatsAppFlowAssets.html">UpdateWhatsAppFlowAssets</a>
   * to update the Flow JSON.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/UpdateWhatsAppFlow">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateWhatsAppFlowOutcome UpdateWhatsAppFlow(const Model::UpdateWhatsAppFlowRequest& request) const;

  /**
   * A Callable wrapper for UpdateWhatsAppFlow that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateWhatsAppFlowRequestT = Model::UpdateWhatsAppFlowRequest>
  Model::UpdateWhatsAppFlowOutcomeCallable UpdateWhatsAppFlowCallable(const UpdateWhatsAppFlowRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::UpdateWhatsAppFlow, request);
  }

  /**
   * An Async wrapper for UpdateWhatsAppFlow that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateWhatsAppFlowRequestT = Model::UpdateWhatsAppFlowRequest>
  void UpdateWhatsAppFlowAsync(const UpdateWhatsAppFlowRequestT& request, const UpdateWhatsAppFlowResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::UpdateWhatsAppFlow, request, handler, context);
  }

  /**
   * <p>Updates the Flow JSON definition (assets) of a WhatsApp Flow. Updating a
   * published Flow's assets reverts it to DRAFT status, requiring
   * re-publishing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/UpdateWhatsAppFlowAssets">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateWhatsAppFlowAssetsOutcome UpdateWhatsAppFlowAssets(const Model::UpdateWhatsAppFlowAssetsRequest& request) const;

  /**
   * A Callable wrapper for UpdateWhatsAppFlowAssets that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateWhatsAppFlowAssetsRequestT = Model::UpdateWhatsAppFlowAssetsRequest>
  Model::UpdateWhatsAppFlowAssetsOutcomeCallable UpdateWhatsAppFlowAssetsCallable(const UpdateWhatsAppFlowAssetsRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::UpdateWhatsAppFlowAssets, request);
  }

  /**
   * An Async wrapper for UpdateWhatsAppFlowAssets that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateWhatsAppFlowAssetsRequestT = Model::UpdateWhatsAppFlowAssetsRequest>
  void UpdateWhatsAppFlowAssetsAsync(const UpdateWhatsAppFlowAssetsRequestT& request,
                                     const UpdateWhatsAppFlowAssetsResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::UpdateWhatsAppFlowAssets, request, handler, context);
  }

  /**
   * <p>Updates an existing WhatsApp message template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/UpdateWhatsAppMessageTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateWhatsAppMessageTemplateOutcome UpdateWhatsAppMessageTemplate(
      const Model::UpdateWhatsAppMessageTemplateRequest& request) const;

  /**
   * A Callable wrapper for UpdateWhatsAppMessageTemplate that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateWhatsAppMessageTemplateRequestT = Model::UpdateWhatsAppMessageTemplateRequest>
  Model::UpdateWhatsAppMessageTemplateOutcomeCallable UpdateWhatsAppMessageTemplateCallable(
      const UpdateWhatsAppMessageTemplateRequestT& request) const {
    return SubmitCallable(&SocialMessagingClient::UpdateWhatsAppMessageTemplate, request);
  }

  /**
   * An Async wrapper for UpdateWhatsAppMessageTemplate that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateWhatsAppMessageTemplateRequestT = Model::UpdateWhatsAppMessageTemplateRequest>
  void UpdateWhatsAppMessageTemplateAsync(const UpdateWhatsAppMessageTemplateRequestT& request,
                                          const UpdateWhatsAppMessageTemplateResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SocialMessagingClient::UpdateWhatsAppMessageTemplate, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<SocialMessagingEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<SocialMessagingClient>;
  void init(const SocialMessagingClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, SocialMessagingError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  SocialMessagingClientConfiguration m_clientConfiguration;
  std::shared_ptr<SocialMessagingEndpointProviderBase> m_endpointProvider;
};

}  // namespace SocialMessaging
}  // namespace Aws
