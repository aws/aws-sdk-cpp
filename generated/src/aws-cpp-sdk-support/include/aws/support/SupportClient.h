/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/support/SupportPaginationBase.h>
#include <aws/support/SupportServiceClientModel.h>
#include <aws/support/SupportWaiter.h>
#include <aws/support/Support_EXPORTS.h>

namespace Aws {
namespace Support {
/**
 * <fullname>Amazon Web Services Support</fullname> <p>The <i>Amazon Web Services
 * Support API Reference</i> is intended for programmers who need detailed
 * information about the Amazon Web Services Support operations and data types. You
 * can use the API to manage your support cases programmatically. The Amazon Web
 * Services Support API uses HTTP methods that return results in JSON format.</p>
 *  <ul> <li> <p>You must have an Amazon Web Services Business Support+,
 * Amazon Web Services Enterprise Support, or Amazon Web Services Unified
 * Operations plan to use the Amazon Web Services Support API. If you're in an
 * Amazon Web Services Region that doesn't offer one of these Amazon Web Services
 * Support plans, or if you haven't transitioned to one of these plans, you can use
 * the Amazon Web Services Support API with a Business, Enterprise On-Ramp, or
 * Enterprise Support plan.</p> </li> <li> <p>If you call the Amazon Web Services
 * Support API from an account that doesn't have an Amazon Web Services Business
 * Support+, Amazon Web Services Enterprise Support, or Amazon Web Services Unified
 * Operations plan, the <code>SubscriptionRequiredException</code> error message
 * appears. For information about changing your support plan, see <a
 * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
 * Support</a>.</p> </li> </ul>  <p>You can also use the Amazon Web Services
 * Support API to access features for <a
 * href="http://aws.amazon.com/premiumsupport/trustedadvisor/">Trusted Advisor</a>.
 * You can return a list of checks and their descriptions, get check results,
 * specify checks to refresh, and get the refresh status of checks.</p> <p>You can
 * manage your support cases with the following Amazon Web Services Support API
 * operations:</p> <ul> <li> <p>The <a>CreateCase</a>, <a>DescribeCases</a>,
 * <a>DescribeAttachment</a>, and <a>ResolveCase</a> operations create Amazon Web
 * Services Support cases, retrieve information about cases, and resolve cases.</p>
 * </li> <li> <p>The <a>DescribeCommunications</a>, <a>AddCommunicationToCase</a>,
 * and <a>AddAttachmentsToSet</a> operations retrieve and add communications and
 * attachments to Amazon Web Services Support cases.</p> </li> <li> <p>The
 * <a>DescribeServices</a> and <a>DescribeSeverityLevels</a> operations return
 * Amazon Web Services service names, service codes, service categories, and
 * problem severity levels. You use these values when you call the
 * <a>CreateCase</a> operation.</p> </li> </ul> <p>You can also use the Amazon Web
 * Services Support API to call the Trusted Advisor operations. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/awssupport/latest/user/trusted-advisor.html">Trusted
 * Advisor</a> in the <i>Amazon Web Services Support User Guide</i>.</p> <p>For
 * authentication of requests, Amazon Web Services Support uses <a
 * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
 * Version 4 Signing Process</a>.</p> <p>For more information about this service
 * and the endpoints to use, see <a
 * href="https://docs.aws.amazon.com/awssupport/latest/user/about-support-api.html">About
 * the Amazon Web Services Support API</a> in the <i>Amazon Web Services Support
 * User Guide</i>.</p>
 */
class AWS_SUPPORT_API SupportClient : public Aws::Client::AWSJsonClient,
                                      public Aws::Client::ClientWithAsyncTemplateMethods<SupportClient>,
                                      public SupportPaginationBase<SupportClient>,
                                      public SupportWaiter<SupportClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef SupportClientConfiguration ClientConfigurationType;
  typedef SupportEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SupportClient(const Aws::Support::SupportClientConfiguration& clientConfiguration = Aws::Support::SupportClientConfiguration(),
                std::shared_ptr<SupportEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SupportClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<SupportEndpointProviderBase> endpointProvider = nullptr,
                const Aws::Support::SupportClientConfiguration& clientConfiguration = Aws::Support::SupportClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SupportClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                std::shared_ptr<SupportEndpointProviderBase> endpointProvider = nullptr,
                const Aws::Support::SupportClientConfiguration& clientConfiguration = Aws::Support::SupportClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SupportClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SupportClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SupportClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~SupportClient();

  /**
   * <p>Adds one or more attachments to an attachment set. </p> <p>An attachment set
   * is a temporary container for attachments that you add to a case or case
   * communication. The set is available for 1 hour after it's created. The
   * <code>expiryTime</code> returned in the response is when the set expires. </p>
   *  <ul> <li> <p>You must have an Amazon Web Services Business Support+,
   * Amazon Web Services Enterprise Support, or Amazon Web Services Unified
   * Operations plan to use the Amazon Web Services Support API. If you're in an
   * Amazon Web Services Region that doesn't offer one of these Amazon Web Services
   * Support plans, or if you haven't transitioned to one of these plans, you can use
   * the Amazon Web Services Support API with a Business, Enterprise On-Ramp, or
   * Enterprise Support plan.</p> </li> <li> <p>If you call the Amazon Web Services
   * Support API from an account that doesn't have an Amazon Web Services Business
   * Support+, Amazon Web Services Enterprise Support, or Amazon Web Services Unified
   * Operations plan, the <code>SubscriptionRequiredException</code> error message
   * appears. For information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/AddAttachmentsToSet">AWS
   * API Reference</a></p>
   */
  virtual Model::AddAttachmentsToSetOutcome AddAttachmentsToSet(const Model::AddAttachmentsToSetRequest& request) const;

  /**
   * A Callable wrapper for AddAttachmentsToSet that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AddAttachmentsToSetRequestT = Model::AddAttachmentsToSetRequest>
  Model::AddAttachmentsToSetOutcomeCallable AddAttachmentsToSetCallable(const AddAttachmentsToSetRequestT& request) const {
    return SubmitCallable(&SupportClient::AddAttachmentsToSet, request);
  }

  /**
   * An Async wrapper for AddAttachmentsToSet that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename AddAttachmentsToSetRequestT = Model::AddAttachmentsToSetRequest>
  void AddAttachmentsToSetAsync(const AddAttachmentsToSetRequestT& request, const AddAttachmentsToSetResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportClient::AddAttachmentsToSet, request, handler, context);
  }

  /**
   * <p>Adds additional customer communication to a Amazon Web Services Support case.
   * Use the <code>caseId</code> parameter to identify the case to which to add
   * communication. To list a set of email addresses to copy on the communication,
   * use the <code>ccEmailAddresses</code> parameter. The
   * <code>communicationBody</code> value contains the text of the communication.</p>
   * <p>To attach files larger than 5 MB to the communication, use the
   * <code>uploadIds</code> parameter.</p>  <p>Amazon Web Services Support
   * automatically redacts sensitive information from support cases to protect your
   * data. The following information is replaced with <code>[REDACTED_BY_Amazon Web
   * Services]</code> and is not stored:</p> <ul> <li> <p>Amazon Web Services secret
   * keys - The complete key is replaced. Example: <code>[REDACTED_BY_Amazon Web
   * Services]</code> </p> </li> <li> <p>Private keys - The complete key is replaced.
   * Example: <code>[REDACTED_BY_Amazon Web Services]</code> </p> </li> <li>
   * <p>Credit card numbers - The number is redacted, but the last 4 digits remain.
   * Example: <code>[REDACTED_BY_Amazon Web Services]-7016</code> </p> </li> </ul>
   * <p>This sensitive information is never required by Amazon Web Services
   * Support.</p>   <ul> <li> <p>You must have an Amazon Web
   * Services Business Support+, Amazon Web Services Enterprise Support, or Amazon
   * Web Services Unified Operations plan to use the Amazon Web Services Support API.
   * If you're in an Amazon Web Services Region that doesn't offer one of these
   * Amazon Web Services Support plans, or if you haven't transitioned to one of
   * these plans, you can use the Amazon Web Services Support API with a Business,
   * Enterprise On-Ramp, or Enterprise Support plan.</p> </li> <li> <p>If you call
   * the Amazon Web Services Support API from an account that doesn't have an Amazon
   * Web Services Business Support+, Amazon Web Services Enterprise Support, or
   * Amazon Web Services Unified Operations plan, the
   * <code>SubscriptionRequiredException</code> error message appears. For
   * information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/AddCommunicationToCase">AWS
   * API Reference</a></p>
   */
  virtual Model::AddCommunicationToCaseOutcome AddCommunicationToCase(const Model::AddCommunicationToCaseRequest& request) const;

  /**
   * A Callable wrapper for AddCommunicationToCase that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AddCommunicationToCaseRequestT = Model::AddCommunicationToCaseRequest>
  Model::AddCommunicationToCaseOutcomeCallable AddCommunicationToCaseCallable(const AddCommunicationToCaseRequestT& request) const {
    return SubmitCallable(&SupportClient::AddCommunicationToCase, request);
  }

  /**
   * An Async wrapper for AddCommunicationToCase that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename AddCommunicationToCaseRequestT = Model::AddCommunicationToCaseRequest>
  void AddCommunicationToCaseAsync(const AddCommunicationToCaseRequestT& request,
                                   const AddCommunicationToCaseResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportClient::AddCommunicationToCase, request, handler, context);
  }

  /**
   * <p>Completes an attachment upload that was started with
   * <a>GetAttachmentUploadLinks</a>. After you upload a part of the file to its
   * presigned Amazon S3 URL, call <code>CompleteAttachmentUpload</code> with the
   * <code>partIndex</code> and <code>eTag</code> of that part. You can include one
   * part per call, or multiple parts in a single call. After
   * <code>CompleteAttachmentUpload</code> has been called for every part of the
   * file, the service processes the upload asynchronously. The
   * <code>attachment-ready</code> status might not be reflected immediately. Use
   * <a>DescribeAttachmentUploadStatus</a> to poll for the <code>uploadStatus</code>
   * to become <code>attachment-ready</code> before passing the <code>uploadId</code>
   * to <a>CreateCase</a> or <a>AddCommunicationToCase</a>.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/CompleteAttachmentUpload">AWS
   * API Reference</a></p>
   */
  virtual Model::CompleteAttachmentUploadOutcome CompleteAttachmentUpload(const Model::CompleteAttachmentUploadRequest& request) const;

  /**
   * A Callable wrapper for CompleteAttachmentUpload that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CompleteAttachmentUploadRequestT = Model::CompleteAttachmentUploadRequest>
  Model::CompleteAttachmentUploadOutcomeCallable CompleteAttachmentUploadCallable(const CompleteAttachmentUploadRequestT& request) const {
    return SubmitCallable(&SupportClient::CompleteAttachmentUpload, request);
  }

  /**
   * An Async wrapper for CompleteAttachmentUpload that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CompleteAttachmentUploadRequestT = Model::CompleteAttachmentUploadRequest>
  void CompleteAttachmentUploadAsync(const CompleteAttachmentUploadRequestT& request,
                                     const CompleteAttachmentUploadResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportClient::CompleteAttachmentUpload, request, handler, context);
  }

  /**
   * <p>Creates a case in the Amazon Web Services Support Center. This operation is
   * similar to how you create a case in the Amazon Web Services Support Center <a
   * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
   * page.</p> <p>The Amazon Web Services Support API doesn't support requesting
   * service limit increases. You can submit a service limit increase in the
   * following ways: </p> <ul> <li> <p>Submit a request from the Amazon Web Services
   * Support Center <a
   * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
   * page.</p> </li> <li> <p>Use the Service Quotas <a
   * href="https://docs.aws.amazon.com/servicequotas/2019-06-24/apireference/API_RequestServiceQuotaIncrease.html">RequestServiceQuotaIncrease</a>
   * operation.</p> </li> </ul>  <p>Amazon Web Services Support
   * automatically redacts sensitive information from support cases to protect your
   * data. The following information is replaced with <code>[REDACTED_BY_Amazon Web
   * Services]</code> and is not stored:</p> <ul> <li> <p>Amazon Web Services secret
   * keys - The complete key is replaced. Example: <code>[REDACTED_BY_Amazon Web
   * Services]</code> </p> </li> <li> <p>Private keys - The complete key is replaced.
   * Example: <code>[REDACTED_BY_Amazon Web Services]</code> </p> </li> <li>
   * <p>Credit card numbers - The number is redacted, but the last 4 digits remain.
   * Example: <code>[REDACTED_BY_Amazon Web Services]-7016</code> </p> </li> </ul>
   * <p>This sensitive information is never required by Amazon Web Services
   * Support.</p>  <p>A successful <code>CreateCase</code> request
   * returns a Amazon Web Services Support case number. You can use the
   * <a>DescribeCases</a> operation and specify the case number to get existing
   * Amazon Web Services Support cases. After you create a case, use the
   * <a>AddCommunicationToCase</a> operation to add additional communication or
   * attachments to an existing case.</p> <p>The <code>caseId</code> is separate from
   * the <code>displayId</code> that appears in the <a
   * href="https://console.aws.amazon.com/support">Amazon Web Services Support
   * Center</a>. Use the <a>DescribeCases</a> operation to get the
   * <code>displayId</code>.</p>  <ul> <li> <p>You must have an Amazon Web
   * Services Business Support+, Amazon Web Services Enterprise Support, or Amazon
   * Web Services Unified Operations plan to use the Amazon Web Services Support API.
   * If you're in an Amazon Web Services Region that doesn't offer one of these
   * Amazon Web Services Support plans, or if you haven't transitioned to one of
   * these plans, you can use the Amazon Web Services Support API with a Business,
   * Enterprise On-Ramp, or Enterprise Support plan.</p> </li> <li> <p>If you call
   * the Amazon Web Services Support API from an account that doesn't have an Amazon
   * Web Services Business Support+, Amazon Web Services Enterprise Support, or
   * Amazon Web Services Unified Operations plan, the
   * <code>SubscriptionRequiredException</code> error message appears. For
   * information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/CreateCase">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateCaseOutcome CreateCase(const Model::CreateCaseRequest& request) const;

  /**
   * A Callable wrapper for CreateCase that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateCaseRequestT = Model::CreateCaseRequest>
  Model::CreateCaseOutcomeCallable CreateCaseCallable(const CreateCaseRequestT& request) const {
    return SubmitCallable(&SupportClient::CreateCase, request);
  }

  /**
   * An Async wrapper for CreateCase that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateCaseRequestT = Model::CreateCaseRequest>
  void CreateCaseAsync(const CreateCaseRequestT& request, const CreateCaseResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportClient::CreateCase, request, handler, context);
  }

  /**
   * <p>Returns the attachment that has the specified ID. Attachments can include
   * screenshots, error logs, or other files that describe your issue. Attachment IDs
   * are generated by the case management system when you add an attachment to a case
   * or case communication. Attachment IDs are returned in the
   * <a>AttachmentDetails</a> objects that are returned by the
   * <a>DescribeCommunications</a> operation.</p>  <ul> <li> <p>You must have
   * an Amazon Web Services Business Support+, Amazon Web Services Enterprise
   * Support, or Amazon Web Services Unified Operations plan to use the Amazon Web
   * Services Support API. If you're in an Amazon Web Services Region that doesn't
   * offer one of these Amazon Web Services Support plans, or if you haven't
   * transitioned to one of these plans, you can use the Amazon Web Services Support
   * API with a Business, Enterprise On-Ramp, or Enterprise Support plan.</p> </li>
   * <li> <p>If you call the Amazon Web Services Support API from an account that
   * doesn't have an Amazon Web Services Business Support+, Amazon Web Services
   * Enterprise Support, or Amazon Web Services Unified Operations plan, the
   * <code>SubscriptionRequiredException</code> error message appears. For
   * information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul>   <p>
   * <code>DescribeAttachment</code> can't return attachments larger than 5 MB. If
   * the specified <code>attachmentId</code> refers to an attachment larger than 5
   * MB, the request fails with <code>InvalidParameterValueException</code>.</p>
   * <p>To download an attachment of any size, including attachments larger than 5
   * MB, use <a>GetAttachmentDownloadLink</a>. <code>GetAttachmentDownloadLink</code>
   * returns an Amazon S3 presigned URL that you can use to download the attachment
   * directly.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeAttachment">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeAttachmentOutcome DescribeAttachment(const Model::DescribeAttachmentRequest& request) const;

  /**
   * A Callable wrapper for DescribeAttachment that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeAttachmentRequestT = Model::DescribeAttachmentRequest>
  Model::DescribeAttachmentOutcomeCallable DescribeAttachmentCallable(const DescribeAttachmentRequestT& request) const {
    return SubmitCallable(&SupportClient::DescribeAttachment, request);
  }

  /**
   * An Async wrapper for DescribeAttachment that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DescribeAttachmentRequestT = Model::DescribeAttachmentRequest>
  void DescribeAttachmentAsync(const DescribeAttachmentRequestT& request, const DescribeAttachmentResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportClient::DescribeAttachment, request, handler, context);
  }

  /**
   * <p>Returns the current status, file name, and progress of a multipart attachment
   * upload that was started with <a>GetAttachmentUploadLinks</a>. Use this operation
   * to track where an upload is in the workflow. While parts are still being
   * uploaded and reported through <a>CompleteAttachmentUpload</a>, the
   * <code>uploadStatus</code> is <code>attachment-not-ready</code> and
   * <code>uploadProgress</code> reports the total number of parts and how many have
   * been completed so far. After every part has been reported and the service
   * finishes processing the upload asynchronously, the <code>uploadStatus</code>
   * becomes <code>attachment-ready</code> and the <code>uploadId</code> can be
   * attached to a case through <a>CreateCase</a> or
   * <a>AddCommunicationToCase</a>.</p>  <ul> <li> <p>You must have an Amazon
   * Web Services Business Support+, Amazon Web Services Enterprise Support, or
   * Amazon Web Services Unified Operations plan to use the Amazon Web Services
   * Support API. If you're in an Amazon Web Services Region that doesn't offer one
   * of these Amazon Web Services Support plans, or if you haven't transitioned to
   * one of these plans, you can use the Amazon Web Services Support API with a
   * Business, Enterprise On-Ramp, or Enterprise Support plan.</p> </li> <li> <p>If
   * you call the Amazon Web Services Support API from an account that doesn't have
   * an Amazon Web Services Business Support+, Amazon Web Services Enterprise
   * Support, or Amazon Web Services Unified Operations plan, the
   * <code>SubscriptionRequiredException</code> error message appears. For
   * information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeAttachmentUploadStatus">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeAttachmentUploadStatusOutcome DescribeAttachmentUploadStatus(
      const Model::DescribeAttachmentUploadStatusRequest& request) const;

  /**
   * A Callable wrapper for DescribeAttachmentUploadStatus that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DescribeAttachmentUploadStatusRequestT = Model::DescribeAttachmentUploadStatusRequest>
  Model::DescribeAttachmentUploadStatusOutcomeCallable DescribeAttachmentUploadStatusCallable(
      const DescribeAttachmentUploadStatusRequestT& request) const {
    return SubmitCallable(&SupportClient::DescribeAttachmentUploadStatus, request);
  }

  /**
   * An Async wrapper for DescribeAttachmentUploadStatus that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DescribeAttachmentUploadStatusRequestT = Model::DescribeAttachmentUploadStatusRequest>
  void DescribeAttachmentUploadStatusAsync(const DescribeAttachmentUploadStatusRequestT& request,
                                           const DescribeAttachmentUploadStatusResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportClient::DescribeAttachmentUploadStatus, request, handler, context);
  }

  /**
   * <p>Returns a list of cases that you specify by passing one or more case IDs. You
   * can use the <code>afterTime</code> and <code>beforeTime</code> parameters to
   * filter the cases by date. You can set values for the
   * <code>includeResolvedCases</code> and <code>includeCommunications</code>
   * parameters to specify how much information to return.</p> <p>The response
   * returns the following in JSON format:</p> <ul> <li> <p>One or more <a
   * href="https://docs.aws.amazon.com/awssupport/latest/APIReference/API_CaseDetails.html">CaseDetails</a>
   * data types.</p> </li> <li> <p>One or more <code>nextToken</code> values, which
   * specify where to paginate the returned records represented by the
   * <code>CaseDetails</code> objects.</p> </li> </ul> <p>Case data is available for
   * 24 months after creation. If a case was created more than 24 months ago, a
   * request might return an error.</p>  <ul> <li> <p>You must have an Amazon
   * Web Services Business Support+, Amazon Web Services Enterprise Support, or
   * Amazon Web Services Unified Operations plan to use the Amazon Web Services
   * Support API. If you're in an Amazon Web Services Region that doesn't offer one
   * of these Amazon Web Services Support plans, or if you haven't transitioned to
   * one of these plans, you can use the Amazon Web Services Support API with a
   * Business, Enterprise On-Ramp, or Enterprise Support plan.</p> </li> <li> <p>If
   * you call the Amazon Web Services Support API from an account that doesn't have
   * an Amazon Web Services Business Support+, Amazon Web Services Enterprise
   * Support, or Amazon Web Services Unified Operations plan, the
   * <code>SubscriptionRequiredException</code> error message appears. For
   * information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul>   <p>Each <a>Communication</a>
   * returned by this operation includes attachment information in two fields:</p>
   * <ul> <li> <p> <code>attachmentSet</code>: returns only attachments that are 5 MB
   * or smaller. Attachments larger than 5 MB are not included in this field.</p>
   * </li> <li> <p> <code>attachments</code>: returns all attachments regardless of
   * size.</p> </li> </ul> <p>Amazon Web Services recommends that you use the
   * <code>attachments</code> field and download each attachment with
   * <a>GetAttachmentDownloadLink</a>, which supports attachments of any size. The
   * <code>attachmentSet</code> field and <a>DescribeAttachment</a> return only
   * attachments that are 5 MB or smaller.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeCases">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeCasesOutcome DescribeCases(const Model::DescribeCasesRequest& request = {}) const;

  /**
   * A Callable wrapper for DescribeCases that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DescribeCasesRequestT = Model::DescribeCasesRequest>
  Model::DescribeCasesOutcomeCallable DescribeCasesCallable(const DescribeCasesRequestT& request = {}) const {
    return SubmitCallable(&SupportClient::DescribeCases, request);
  }

  /**
   * An Async wrapper for DescribeCases that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DescribeCasesRequestT = Model::DescribeCasesRequest>
  void DescribeCasesAsync(const DescribeCasesResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                          const DescribeCasesRequestT& request = {}) const {
    return SubmitAsync(&SupportClient::DescribeCases, request, handler, context);
  }

  /**
   * <p>Returns communications and attachments for one or more support cases. Use the
   * <code>afterTime</code> and <code>beforeTime</code> parameters to filter by date.
   * You can use the <code>caseId</code> parameter to restrict the results to a
   * specific case.</p> <p>Case data is available for 24 months after creation. If a
   * case was created more than 24 months ago, a request for data might cause an
   * error.</p> <p>You can use the <code>maxResults</code> and <code>nextToken</code>
   * parameters to control the pagination of the results. Set <code>maxResults</code>
   * to the number of cases that you want to display on each page, and use
   * <code>nextToken</code> to specify the resumption of pagination.</p>  <ul>
   * <li> <p>You must have an Amazon Web Services Business Support+, Amazon Web
   * Services Enterprise Support, or Amazon Web Services Unified Operations plan to
   * use the Amazon Web Services Support API. If you're in an Amazon Web Services
   * Region that doesn't offer one of these Amazon Web Services Support plans, or if
   * you haven't transitioned to one of these plans, you can use the Amazon Web
   * Services Support API with a Business, Enterprise On-Ramp, or Enterprise Support
   * plan.</p> </li> <li> <p>If you call the Amazon Web Services Support API from an
   * account that doesn't have an Amazon Web Services Business Support+, Amazon Web
   * Services Enterprise Support, or Amazon Web Services Unified Operations plan, the
   * <code>SubscriptionRequiredException</code> error message appears. For
   * information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul>   <p>Each <a>Communication</a>
   * returned by this operation includes attachment information in two fields:</p>
   * <ul> <li> <p> <code>attachmentSet</code>: returns only attachments that are 5 MB
   * or smaller. Attachments larger than 5 MB are not included in this field.</p>
   * </li> <li> <p> <code>attachments</code>: returns all attachments regardless of
   * size.</p> </li> </ul> <p>Amazon Web Services recommends that you use the
   * <code>attachments</code> field and download each attachment with
   * <a>GetAttachmentDownloadLink</a>, which supports attachments of any size. The
   * <code>attachmentSet</code> field and <a>DescribeAttachment</a> return only
   * attachments that are 5 MB or smaller.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeCommunications">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeCommunicationsOutcome DescribeCommunications(const Model::DescribeCommunicationsRequest& request) const;

  /**
   * A Callable wrapper for DescribeCommunications that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeCommunicationsRequestT = Model::DescribeCommunicationsRequest>
  Model::DescribeCommunicationsOutcomeCallable DescribeCommunicationsCallable(const DescribeCommunicationsRequestT& request) const {
    return SubmitCallable(&SupportClient::DescribeCommunications, request);
  }

  /**
   * An Async wrapper for DescribeCommunications that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeCommunicationsRequestT = Model::DescribeCommunicationsRequest>
  void DescribeCommunicationsAsync(const DescribeCommunicationsRequestT& request,
                                   const DescribeCommunicationsResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportClient::DescribeCommunications, request, handler, context);
  }

  /**
   * <p>Returns a list of CreateCaseOption types along with the corresponding
   * supported hours and language availability. You can specify the
   * <code>language</code> <code>categoryCode</code>, <code>issueType</code> and
   * <code>serviceCode</code> used to retrieve the CreateCaseOptions.</p>  <ul>
   * <li> <p>You must have an Amazon Web Services Business Support+, Amazon Web
   * Services Enterprise Support, or Amazon Web Services Unified Operations plan to
   * use the Amazon Web Services Support API. If you're in an Amazon Web Services
   * Region that doesn't offer one of these Amazon Web Services Support plans, or if
   * you haven't transitioned to one of these plans, you can use the Amazon Web
   * Services Support API with a Business, Enterprise On-Ramp, or Enterprise Support
   * plan.</p> </li> <li> <p>If you call the Amazon Web Services Support API from an
   * account that doesn't have an Amazon Web Services Business Support+, Amazon Web
   * Services Enterprise Support, or Amazon Web Services Unified Operations plan, the
   * <code>SubscriptionRequiredException</code> error message appears. For
   * information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeCreateCaseOptions">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeCreateCaseOptionsOutcome DescribeCreateCaseOptions(const Model::DescribeCreateCaseOptionsRequest& request) const;

  /**
   * A Callable wrapper for DescribeCreateCaseOptions that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeCreateCaseOptionsRequestT = Model::DescribeCreateCaseOptionsRequest>
  Model::DescribeCreateCaseOptionsOutcomeCallable DescribeCreateCaseOptionsCallable(
      const DescribeCreateCaseOptionsRequestT& request) const {
    return SubmitCallable(&SupportClient::DescribeCreateCaseOptions, request);
  }

  /**
   * An Async wrapper for DescribeCreateCaseOptions that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeCreateCaseOptionsRequestT = Model::DescribeCreateCaseOptionsRequest>
  void DescribeCreateCaseOptionsAsync(const DescribeCreateCaseOptionsRequestT& request,
                                      const DescribeCreateCaseOptionsResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportClient::DescribeCreateCaseOptions, request, handler, context);
  }

  /**
   * <p>Returns the current list of Amazon Web Services services and a list of
   * service categories for each service. You then use service names and categories
   * in your <a>CreateCase</a> requests. Each Amazon Web Services service has its own
   * set of categories.</p> <p>The service codes and category codes correspond to the
   * values that appear in the <b>Service</b> and <b>Category</b> lists on the Amazon
   * Web Services Support Center <a
   * href="https://console.aws.amazon.com/support/home#/case/create">Create Case</a>
   * page. The values in those fields don't necessarily match the service codes and
   * categories returned by the <code>DescribeServices</code> operation. Always use
   * the service codes and categories that the <code>DescribeServices</code>
   * operation returns, so that you have the most recent set of service and category
   * codes.</p>  <ul> <li> <p>You must have an Amazon Web Services Business
   * Support+, Amazon Web Services Enterprise Support, or Amazon Web Services Unified
   * Operations plan to use the Amazon Web Services Support API. If you're in an
   * Amazon Web Services Region that doesn't offer one of these Amazon Web Services
   * Support plans, or if you haven't transitioned to one of these plans, you can use
   * the Amazon Web Services Support API with a Business, Enterprise On-Ramp, or
   * Enterprise Support plan.</p> </li> <li> <p>If you call the Amazon Web Services
   * Support API from an account that doesn't have an Amazon Web Services Business
   * Support+, Amazon Web Services Enterprise Support, or Amazon Web Services Unified
   * Operations plan, the <code>SubscriptionRequiredException</code> error message
   * appears. For information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeServices">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeServicesOutcome DescribeServices(const Model::DescribeServicesRequest& request = {}) const;

  /**
   * A Callable wrapper for DescribeServices that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeServicesRequestT = Model::DescribeServicesRequest>
  Model::DescribeServicesOutcomeCallable DescribeServicesCallable(const DescribeServicesRequestT& request = {}) const {
    return SubmitCallable(&SupportClient::DescribeServices, request);
  }

  /**
   * An Async wrapper for DescribeServices that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DescribeServicesRequestT = Model::DescribeServicesRequest>
  void DescribeServicesAsync(const DescribeServicesResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                             const DescribeServicesRequestT& request = {}) const {
    return SubmitAsync(&SupportClient::DescribeServices, request, handler, context);
  }

  /**
   * <p>Returns the list of severity levels that you can assign to a support case.
   * The severity level for a case is also a field in the <a>CaseDetails</a> data
   * type that you include for a <a>CreateCase</a> request.</p>  <ul> <li>
   * <p>You must have an Amazon Web Services Business Support+, Amazon Web Services
   * Enterprise Support, or Amazon Web Services Unified Operations plan to use the
   * Amazon Web Services Support API. If you're in an Amazon Web Services Region that
   * doesn't offer one of these Amazon Web Services Support plans, or if you haven't
   * transitioned to one of these plans, you can use the Amazon Web Services Support
   * API with a Business, Enterprise On-Ramp, or Enterprise Support plan.</p> </li>
   * <li> <p>If you call the Amazon Web Services Support API from an account that
   * doesn't have an Amazon Web Services Business Support+, Amazon Web Services
   * Enterprise Support, or Amazon Web Services Unified Operations plan, the
   * <code>SubscriptionRequiredException</code> error message appears. For
   * information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeSeverityLevels">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeSeverityLevelsOutcome DescribeSeverityLevels(const Model::DescribeSeverityLevelsRequest& request = {}) const;

  /**
   * A Callable wrapper for DescribeSeverityLevels that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DescribeSeverityLevelsRequestT = Model::DescribeSeverityLevelsRequest>
  Model::DescribeSeverityLevelsOutcomeCallable DescribeSeverityLevelsCallable(const DescribeSeverityLevelsRequestT& request = {}) const {
    return SubmitCallable(&SupportClient::DescribeSeverityLevels, request);
  }

  /**
   * An Async wrapper for DescribeSeverityLevels that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeSeverityLevelsRequestT = Model::DescribeSeverityLevelsRequest>
  void DescribeSeverityLevelsAsync(const DescribeSeverityLevelsResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                   const DescribeSeverityLevelsRequestT& request = {}) const {
    return SubmitAsync(&SupportClient::DescribeSeverityLevels, request, handler, context);
  }

  /**
   * <p>Returns a list of supported languages for a specified
   * <code>categoryCode</code>, <code>issueType</code> and <code>serviceCode</code>.
   * The returned supported languages will include a ISO 639-1 code for the
   * <code>language</code>, and the language display name.</p>  <ul> <li>
   * <p>You must have an Amazon Web Services Business Support+, Amazon Web Services
   * Enterprise Support, or Amazon Web Services Unified Operations plan to use the
   * Amazon Web Services Support API. If you're in an Amazon Web Services Region that
   * doesn't offer one of these Amazon Web Services Support plans, or if you haven't
   * transitioned to one of these plans, you can use the Amazon Web Services Support
   * API with a Business, Enterprise On-Ramp, or Enterprise Support plan.</p> </li>
   * <li> <p>If you call the Amazon Web Services Support API from an account that
   * doesn't have an Amazon Web Services Business Support+, Amazon Web Services
   * Enterprise Support, or Amazon Web Services Unified Operations plan, the
   * <code>SubscriptionRequiredException</code> error message appears. For
   * information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeSupportedLanguages">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeSupportedLanguagesOutcome DescribeSupportedLanguages(
      const Model::DescribeSupportedLanguagesRequest& request) const;

  /**
   * A Callable wrapper for DescribeSupportedLanguages that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DescribeSupportedLanguagesRequestT = Model::DescribeSupportedLanguagesRequest>
  Model::DescribeSupportedLanguagesOutcomeCallable DescribeSupportedLanguagesCallable(
      const DescribeSupportedLanguagesRequestT& request) const {
    return SubmitCallable(&SupportClient::DescribeSupportedLanguages, request);
  }

  /**
   * An Async wrapper for DescribeSupportedLanguages that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeSupportedLanguagesRequestT = Model::DescribeSupportedLanguagesRequest>
  void DescribeSupportedLanguagesAsync(const DescribeSupportedLanguagesRequestT& request,
                                       const DescribeSupportedLanguagesResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportClient::DescribeSupportedLanguages, request, handler, context);
  }

  /**
   * <p>Returns the refresh status of the Trusted Advisor checks that have the
   * specified check IDs. You can get the check IDs by calling the
   * <a>DescribeTrustedAdvisorChecks</a> operation.</p> <p>Some checks are refreshed
   * automatically, and you can't return their refresh statuses by using the
   * <code>DescribeTrustedAdvisorCheckRefreshStatuses</code> operation. If you call
   * this operation for these checks, you might see an
   * <code>InvalidParameterValue</code> error.</p>  <ul> <li> <p>You must have
   * an Amazon Web Services Business Support+, Amazon Web Services Enterprise
   * Support, or Amazon Web Services Unified Operations plan to use the Amazon Web
   * Services Support API. If you're in an Amazon Web Services Region that doesn't
   * offer one of these Amazon Web Services Support plans, or if you haven't
   * transitioned to one of these plans, you can use the Amazon Web Services Support
   * API with a Business, Enterprise On-Ramp, or Enterprise Support plan.</p> </li>
   * <li> <p>If you call the Amazon Web Services Support API from an account that
   * doesn't have an Amazon Web Services Business Support+, Amazon Web Services
   * Enterprise Support, or Amazon Web Services Unified Operations plan, the
   * <code>SubscriptionRequiredException</code> error message appears. For
   * information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul>  <p>To call the Trusted Advisor operations
   * in the Amazon Web Services Support API, you must use the US East (N. Virginia)
   * endpoint. Currently, the US West (Oregon) and Europe (Ireland) endpoints don't
   * support the Trusted Advisor operations. For more information, see <a
   * href="https://docs.aws.amazon.com/awssupport/latest/user/about-support-api.html#endpoint">About
   * the Amazon Web Services Support API</a> in the <i>Amazon Web Services Support
   * User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckRefreshStatuses">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeTrustedAdvisorCheckRefreshStatusesOutcome DescribeTrustedAdvisorCheckRefreshStatuses(
      const Model::DescribeTrustedAdvisorCheckRefreshStatusesRequest& request) const;

  /**
   * A Callable wrapper for DescribeTrustedAdvisorCheckRefreshStatuses that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DescribeTrustedAdvisorCheckRefreshStatusesRequestT = Model::DescribeTrustedAdvisorCheckRefreshStatusesRequest>
  Model::DescribeTrustedAdvisorCheckRefreshStatusesOutcomeCallable DescribeTrustedAdvisorCheckRefreshStatusesCallable(
      const DescribeTrustedAdvisorCheckRefreshStatusesRequestT& request) const {
    return SubmitCallable(&SupportClient::DescribeTrustedAdvisorCheckRefreshStatuses, request);
  }

  /**
   * An Async wrapper for DescribeTrustedAdvisorCheckRefreshStatuses that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DescribeTrustedAdvisorCheckRefreshStatusesRequestT = Model::DescribeTrustedAdvisorCheckRefreshStatusesRequest>
  void DescribeTrustedAdvisorCheckRefreshStatusesAsync(
      const DescribeTrustedAdvisorCheckRefreshStatusesRequestT& request,
      const DescribeTrustedAdvisorCheckRefreshStatusesResponseReceivedHandler& handler,
      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportClient::DescribeTrustedAdvisorCheckRefreshStatuses, request, handler, context);
  }

  /**
   * <p>Returns the results of the Trusted Advisor check that has the specified check
   * ID. You can get the check IDs by calling the <a>DescribeTrustedAdvisorChecks</a>
   * operation.</p> <p>The response contains a <a>TrustedAdvisorCheckResult</a>
   * object, which contains these three objects:</p> <ul> <li> <p>
   * <a>TrustedAdvisorCategorySpecificSummary</a> </p> </li> <li> <p>
   * <a>TrustedAdvisorResourceDetail</a> </p> </li> <li> <p>
   * <a>TrustedAdvisorResourcesSummary</a> </p> </li> </ul> <p>In addition, the
   * response contains these fields:</p> <ul> <li> <p> <b>status</b> - The alert
   * status of the check can be <code>ok</code> (green), <code>warning</code>
   * (yellow), <code>error</code> (red), or <code>not_available</code>.</p> </li>
   * <li> <p> <b>timestamp</b> - The time of the last refresh of the check.</p> </li>
   * <li> <p> <b>checkId</b> - The unique identifier for the check.</p> </li> </ul>
   *  <ul> <li> <p>You must have an Amazon Web Services Business Support+,
   * Amazon Web Services Enterprise Support, or Amazon Web Services Unified
   * Operations plan to use the Amazon Web Services Support API. If you're in an
   * Amazon Web Services Region that doesn't offer one of these Amazon Web Services
   * Support plans, or if you haven't transitioned to one of these plans, you can use
   * the Amazon Web Services Support API with a Business, Enterprise On-Ramp, or
   * Enterprise Support plan.</p> </li> <li> <p>If you call the Amazon Web Services
   * Support API from an account that doesn't have an Amazon Web Services Business
   * Support+, Amazon Web Services Enterprise Support, or Amazon Web Services Unified
   * Operations plan, the <code>SubscriptionRequiredException</code> error message
   * appears. For information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul>  <p>To call the Trusted Advisor operations
   * in the Amazon Web Services Support API, you must use the US East (N. Virginia)
   * endpoint. Currently, the US West (Oregon) and Europe (Ireland) endpoints don't
   * support the Trusted Advisor operations. For more information, see <a
   * href="https://docs.aws.amazon.com/awssupport/latest/user/about-support-api.html#endpoint">About
   * the Amazon Web Services Support API</a> in the <i>Amazon Web Services Support
   * User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckResult">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeTrustedAdvisorCheckResultOutcome DescribeTrustedAdvisorCheckResult(
      const Model::DescribeTrustedAdvisorCheckResultRequest& request) const;

  /**
   * A Callable wrapper for DescribeTrustedAdvisorCheckResult that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename DescribeTrustedAdvisorCheckResultRequestT = Model::DescribeTrustedAdvisorCheckResultRequest>
  Model::DescribeTrustedAdvisorCheckResultOutcomeCallable DescribeTrustedAdvisorCheckResultCallable(
      const DescribeTrustedAdvisorCheckResultRequestT& request) const {
    return SubmitCallable(&SupportClient::DescribeTrustedAdvisorCheckResult, request);
  }

  /**
   * An Async wrapper for DescribeTrustedAdvisorCheckResult that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DescribeTrustedAdvisorCheckResultRequestT = Model::DescribeTrustedAdvisorCheckResultRequest>
  void DescribeTrustedAdvisorCheckResultAsync(const DescribeTrustedAdvisorCheckResultRequestT& request,
                                              const DescribeTrustedAdvisorCheckResultResponseReceivedHandler& handler,
                                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportClient::DescribeTrustedAdvisorCheckResult, request, handler, context);
  }

  /**
   * <p>Returns the results for the Trusted Advisor check summaries for the check IDs
   * that you specified. You can get the check IDs by calling the
   * <a>DescribeTrustedAdvisorChecks</a> operation.</p> <p>The response contains an
   * array of <a>TrustedAdvisorCheckSummary</a> objects.</p>  <ul> <li> <p>You
   * must have an Amazon Web Services Business Support+, Amazon Web Services
   * Enterprise Support, or Amazon Web Services Unified Operations plan to use the
   * Amazon Web Services Support API. If you're in an Amazon Web Services Region that
   * doesn't offer one of these Amazon Web Services Support plans, or if you haven't
   * transitioned to one of these plans, you can use the Amazon Web Services Support
   * API with a Business, Enterprise On-Ramp, or Enterprise Support plan.</p> </li>
   * <li> <p>If you call the Amazon Web Services Support API from an account that
   * doesn't have an Amazon Web Services Business Support+, Amazon Web Services
   * Enterprise Support, or Amazon Web Services Unified Operations plan, the
   * <code>SubscriptionRequiredException</code> error message appears. For
   * information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul>  <p>To call the Trusted Advisor operations
   * in the Amazon Web Services Support API, you must use the US East (N. Virginia)
   * endpoint. Currently, the US West (Oregon) and Europe (Ireland) endpoints don't
   * support the Trusted Advisor operations. For more information, see <a
   * href="https://docs.aws.amazon.com/awssupport/latest/user/about-support-api.html#endpoint">About
   * the Amazon Web Services Support API</a> in the <i>Amazon Web Services Support
   * User Guide</i>.</p> <p> <b>Understanding the Trusted Advisor Resources processed
   * value</b> </p> <p>The <b>Resources processed</b> value,
   * <code>resourcesProcessed</code>, usually shows both flagged resources (those
   * with warnings or errors) and resources in good standing (ok status resources).
   * However, some checks report flagged resources only. To understand what a
   * specific check reports, review the detailed check information in the <a
   * href="https://docs.aws.amazon.com/awssupport/latest/user/trusted-advisor-check-reference.html">Trusted
   * Advisor check reference</a>. If you see a <b>Green</b> criterion listed in the
   * <b>Alert criteria</b>, then the check reports all resources. If there's no
   * <b>Green</b> criterion listed in the <b>Alert criteria</b>, then the check
   * reports only flagged resources. For example, the <a
   * href="https://docs.aws.amazon.com/awssupport/latest/user/cost-optimization-checks.html#amazon-ec2-reserved-instances-optimization">Amazon
   * EC2 Reserved Instance optimization check (cX3c2R1chu)</a> doesn't list a
   * <b>Green</b> criterion in the <b>Alert criteria</b>. So, this check only reports
   * flagged resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckSummaries">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeTrustedAdvisorCheckSummariesOutcome DescribeTrustedAdvisorCheckSummaries(
      const Model::DescribeTrustedAdvisorCheckSummariesRequest& request) const;

  /**
   * A Callable wrapper for DescribeTrustedAdvisorCheckSummaries that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename DescribeTrustedAdvisorCheckSummariesRequestT = Model::DescribeTrustedAdvisorCheckSummariesRequest>
  Model::DescribeTrustedAdvisorCheckSummariesOutcomeCallable DescribeTrustedAdvisorCheckSummariesCallable(
      const DescribeTrustedAdvisorCheckSummariesRequestT& request) const {
    return SubmitCallable(&SupportClient::DescribeTrustedAdvisorCheckSummaries, request);
  }

  /**
   * An Async wrapper for DescribeTrustedAdvisorCheckSummaries that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename DescribeTrustedAdvisorCheckSummariesRequestT = Model::DescribeTrustedAdvisorCheckSummariesRequest>
  void DescribeTrustedAdvisorCheckSummariesAsync(const DescribeTrustedAdvisorCheckSummariesRequestT& request,
                                                 const DescribeTrustedAdvisorCheckSummariesResponseReceivedHandler& handler,
                                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportClient::DescribeTrustedAdvisorCheckSummaries, request, handler, context);
  }

  /**
   * <p>Returns information about all available Trusted Advisor checks, including the
   * name, ID, category, description, and metadata. You must specify a language
   * code.</p> <p>The response contains a <a>TrustedAdvisorCheckDescription</a>
   * object for each check. You must set the Amazon Web Services Region to
   * us-east-1.</p>  <ul> <li> <p>You must have a Amazon Web Services Business
   * Support+, Amazon Web Services Enterprise Support, or Amazon Web Services Unified
   * Operations plan to use the Amazon Web Services Support API. </p> </li> <li>
   * <p>If you call the Amazon Web Services Support API from an account that doesn't
   * have a Amazon Web Services Business Support+, Amazon Web Services Enterprise
   * Support, or Amazon Web Services Unified Operations plan, the
   * <code>SubscriptionRequiredException</code> error message appears. For
   * information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> <li> <p>The names and descriptions for Trusted Advisor
   * checks are subject to change. We recommend that you specify the check ID in your
   * code to uniquely identify a check.</p> </li> </ul>  <p>To call the
   * Trusted Advisor operations in the Amazon Web Services Support API, you must use
   * the US East (N. Virginia) endpoint. Currently, the US West (Oregon) and Europe
   * (Ireland) endpoints don't support the Trusted Advisor operations. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/awssupport/latest/user/about-support-api.html#endpoint">About
   * the Amazon Web Services Support API</a> in the <i>Amazon Web Services Support
   * User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorChecks">AWS
   * API Reference</a></p>
   */
  virtual Model::DescribeTrustedAdvisorChecksOutcome DescribeTrustedAdvisorChecks(
      const Model::DescribeTrustedAdvisorChecksRequest& request) const;

  /**
   * A Callable wrapper for DescribeTrustedAdvisorChecks that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DescribeTrustedAdvisorChecksRequestT = Model::DescribeTrustedAdvisorChecksRequest>
  Model::DescribeTrustedAdvisorChecksOutcomeCallable DescribeTrustedAdvisorChecksCallable(
      const DescribeTrustedAdvisorChecksRequestT& request) const {
    return SubmitCallable(&SupportClient::DescribeTrustedAdvisorChecks, request);
  }

  /**
   * An Async wrapper for DescribeTrustedAdvisorChecks that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DescribeTrustedAdvisorChecksRequestT = Model::DescribeTrustedAdvisorChecksRequest>
  void DescribeTrustedAdvisorChecksAsync(const DescribeTrustedAdvisorChecksRequestT& request,
                                         const DescribeTrustedAdvisorChecksResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportClient::DescribeTrustedAdvisorChecks, request, handler, context);
  }

  /**
   * <p>Returns a presigned download URL for an attachment that is associated with a
   * case communication. The download link works for an attachment of any size,
   * including attachments added through <code>AddAttachmentsToSet</code> and
   * attachments uploaded through <a>GetAttachmentUploadLinks</a>. The download URL
   * is time-limited and expires at the date and time indicated in the
   * <code>downloadUrl</code> response field. Download the attachment from the URL
   * before it expires.</p>  <ul> <li> <p>You must have an Amazon Web Services
   * Business Support+, Amazon Web Services Enterprise Support, or Amazon Web
   * Services Unified Operations plan to use the Amazon Web Services Support API. If
   * you're in an Amazon Web Services Region that doesn't offer one of these Amazon
   * Web Services Support plans, or if you haven't transitioned to one of these
   * plans, you can use the Amazon Web Services Support API with a Business,
   * Enterprise On-Ramp, or Enterprise Support plan.</p> </li> <li> <p>If you call
   * the Amazon Web Services Support API from an account that doesn't have an Amazon
   * Web Services Business Support+, Amazon Web Services Enterprise Support, or
   * Amazon Web Services Unified Operations plan, the
   * <code>SubscriptionRequiredException</code> error message appears. For
   * information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/GetAttachmentDownloadLink">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAttachmentDownloadLinkOutcome GetAttachmentDownloadLink(const Model::GetAttachmentDownloadLinkRequest& request) const;

  /**
   * A Callable wrapper for GetAttachmentDownloadLink that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetAttachmentDownloadLinkRequestT = Model::GetAttachmentDownloadLinkRequest>
  Model::GetAttachmentDownloadLinkOutcomeCallable GetAttachmentDownloadLinkCallable(
      const GetAttachmentDownloadLinkRequestT& request) const {
    return SubmitCallable(&SupportClient::GetAttachmentDownloadLink, request);
  }

  /**
   * An Async wrapper for GetAttachmentDownloadLink that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetAttachmentDownloadLinkRequestT = Model::GetAttachmentDownloadLinkRequest>
  void GetAttachmentDownloadLinkAsync(const GetAttachmentDownloadLinkRequestT& request,
                                      const GetAttachmentDownloadLinkResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportClient::GetAttachmentDownloadLink, request, handler, context);
  }

  /**
   * <p>Returns one or more presigned upload URLs for uploading a large file
   * attachment to a support case by using a multipart upload workflow. The maximum
   * file size that you can upload with this workflow is 150 MB, and parts can be up
   * to 100 MB each. Initiate a new upload by providing <code>fileName</code> and
   * <code>fileSizeBytes</code>; the response returns a unique <code>uploadId</code>,
   * the part size, the total number of parts, and a list of presigned upload URLs
   * for the requested range of parts. A maximum of 10 upload URLs are returned per
   * call. To retrieve more upload URLs for an upload that's already in progress,
   * call <code>GetAttachmentUploadLinks</code> again with the existing
   * <code>uploadId</code> and a new <code>uploadRange</code>.</p> <p>Upload each
   * part to its presigned URL by using HTTP <code>PUT</code> and capture the ETag
   * from the response. After you upload all parts, call
   * <a>CompleteAttachmentUpload</a> with the <code>uploadId</code> and the list of
   * part indexes and ETags to finalize the upload. You can then attach the upload to
   * a case by passing the <code>uploadId</code> in the <code>uploadIds</code>
   * parameter of <a>CreateCase</a> or <a>AddCommunicationToCase</a>. To monitor
   * progress before completion, call <a>DescribeAttachmentUploadStatus</a>.</p>
   *  <ul> <li> <p>You must have an Amazon Web Services Business Support+,
   * Amazon Web Services Enterprise Support, or Amazon Web Services Unified
   * Operations plan to use the Amazon Web Services Support API. If you're in an
   * Amazon Web Services Region that doesn't offer one of these Amazon Web Services
   * Support plans, or if you haven't transitioned to one of these plans, you can use
   * the Amazon Web Services Support API with a Business, Enterprise On-Ramp, or
   * Enterprise Support plan.</p> </li> <li> <p>If you call the Amazon Web Services
   * Support API from an account that doesn't have an Amazon Web Services Business
   * Support+, Amazon Web Services Enterprise Support, or Amazon Web Services Unified
   * Operations plan, the <code>SubscriptionRequiredException</code> error message
   * appears. For information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/GetAttachmentUploadLinks">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAttachmentUploadLinksOutcome GetAttachmentUploadLinks(const Model::GetAttachmentUploadLinksRequest& request) const;

  /**
   * A Callable wrapper for GetAttachmentUploadLinks that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetAttachmentUploadLinksRequestT = Model::GetAttachmentUploadLinksRequest>
  Model::GetAttachmentUploadLinksOutcomeCallable GetAttachmentUploadLinksCallable(const GetAttachmentUploadLinksRequestT& request) const {
    return SubmitCallable(&SupportClient::GetAttachmentUploadLinks, request);
  }

  /**
   * An Async wrapper for GetAttachmentUploadLinks that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetAttachmentUploadLinksRequestT = Model::GetAttachmentUploadLinksRequest>
  void GetAttachmentUploadLinksAsync(const GetAttachmentUploadLinksRequestT& request,
                                     const GetAttachmentUploadLinksResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportClient::GetAttachmentUploadLinks, request, handler, context);
  }

  /**
   * <p>Refreshes the Trusted Advisor check that you specify using the check ID. You
   * can get the check IDs by calling the <a>DescribeTrustedAdvisorChecks</a>
   * operation.</p> <p>Some checks are refreshed automatically. If you call the
   * <code>RefreshTrustedAdvisorCheck</code> operation to refresh them, you might see
   * the <code>InvalidParameterValue</code> error.</p> <p>The response contains a
   * <a>TrustedAdvisorCheckRefreshStatus</a> object.</p>  <ul> <li> <p>You must
   * have an Amazon Web Services Business Support+, Amazon Web Services Enterprise
   * Support, or Amazon Web Services Unified Operations plan to use the Amazon Web
   * Services Support API. If you're in an Amazon Web Services Region that doesn't
   * offer one of these Amazon Web Services Support plans, or if you haven't
   * transitioned to one of these plans, you can use the Amazon Web Services Support
   * API with a Business, Enterprise On-Ramp, or Enterprise Support plan.</p> </li>
   * <li> <p>If you call the Amazon Web Services Support API from an account that
   * doesn't have an Amazon Web Services Business Support+, Amazon Web Services
   * Enterprise Support, or Amazon Web Services Unified Operations plan, the
   * <code>SubscriptionRequiredException</code> error message appears. For
   * information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul>  <p>To call the Trusted Advisor operations
   * in the Amazon Web Services Support API, you must use the US East (N. Virginia)
   * endpoint. Currently, the US West (Oregon) and Europe (Ireland) endpoints don't
   * support the Trusted Advisor operations. For more information, see <a
   * href="https://docs.aws.amazon.com/awssupport/latest/user/about-support-api.html#endpoint">About
   * the Amazon Web Services Support API</a> in the <i>Amazon Web Services Support
   * User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/RefreshTrustedAdvisorCheck">AWS
   * API Reference</a></p>
   */
  virtual Model::RefreshTrustedAdvisorCheckOutcome RefreshTrustedAdvisorCheck(
      const Model::RefreshTrustedAdvisorCheckRequest& request) const;

  /**
   * A Callable wrapper for RefreshTrustedAdvisorCheck that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename RefreshTrustedAdvisorCheckRequestT = Model::RefreshTrustedAdvisorCheckRequest>
  Model::RefreshTrustedAdvisorCheckOutcomeCallable RefreshTrustedAdvisorCheckCallable(
      const RefreshTrustedAdvisorCheckRequestT& request) const {
    return SubmitCallable(&SupportClient::RefreshTrustedAdvisorCheck, request);
  }

  /**
   * An Async wrapper for RefreshTrustedAdvisorCheck that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename RefreshTrustedAdvisorCheckRequestT = Model::RefreshTrustedAdvisorCheckRequest>
  void RefreshTrustedAdvisorCheckAsync(const RefreshTrustedAdvisorCheckRequestT& request,
                                       const RefreshTrustedAdvisorCheckResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportClient::RefreshTrustedAdvisorCheck, request, handler, context);
  }

  /**
   * <p>Resolves a support case. This operation takes a <code>caseId</code> and
   * returns the initial and final state of the case.</p>  <ul> <li> <p>You
   * must have an Amazon Web Services Business Support+, Amazon Web Services
   * Enterprise Support, or Amazon Web Services Unified Operations plan to use the
   * Amazon Web Services Support API. If you're in an Amazon Web Services Region that
   * doesn't offer one of these Amazon Web Services Support plans, or if you haven't
   * transitioned to one of these plans, you can use the Amazon Web Services Support
   * API with a Business, Enterprise On-Ramp, or Enterprise Support plan.</p> </li>
   * <li> <p>If you call the Amazon Web Services Support API from an account that
   * doesn't have an Amazon Web Services Business Support+, Amazon Web Services
   * Enterprise Support, or Amazon Web Services Unified Operations plan, the
   * <code>SubscriptionRequiredException</code> error message appears. For
   * information about changing your support plan, see <a
   * href="http://aws.amazon.com/premiumsupport/">Amazon Web Services
   * Support</a>.</p> </li> </ul> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/ResolveCase">AWS
   * API Reference</a></p>
   */
  virtual Model::ResolveCaseOutcome ResolveCase(const Model::ResolveCaseRequest& request = {}) const;

  /**
   * A Callable wrapper for ResolveCase that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ResolveCaseRequestT = Model::ResolveCaseRequest>
  Model::ResolveCaseOutcomeCallable ResolveCaseCallable(const ResolveCaseRequestT& request = {}) const {
    return SubmitCallable(&SupportClient::ResolveCase, request);
  }

  /**
   * An Async wrapper for ResolveCase that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ResolveCaseRequestT = Model::ResolveCaseRequest>
  void ResolveCaseAsync(const ResolveCaseResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                        const ResolveCaseRequestT& request = {}) const {
    return SubmitAsync(&SupportClient::ResolveCase, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<SupportEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<SupportClient>;
  void init(const SupportClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, SupportError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;

  SupportClientConfiguration m_clientConfiguration;
  std::shared_ptr<SupportEndpointProviderBase> m_endpointProvider;
};

}  // namespace Support
}  // namespace Aws
