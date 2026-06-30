/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/supportauthz/SupportAuthZPaginationBase.h>
#include <aws/supportauthz/SupportAuthZServiceClientModel.h>
#include <aws/supportauthz/SupportAuthZWaiter.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>

namespace Aws {
namespace SupportAuthZ {
/**
 * <p><fullname>AWS Support Authorization</fullname> <p>AWS SupportAuthZ enables
 * you to control and authorize the actions that AWS support operators can perform
 * on your resources. You create cryptographically signed support permits
 * specifying which actions operators can perform, on which resources, and under
 * what time-window conditions. Permits are signed using a customer-managed AWS KMS
 * key (ECC_NIST_P384, SIGN_VERIFY) to ensure non-repudiation.</p></p>
 */
class AWS_SUPPORTAUTHZ_API SupportAuthZClient : public Aws::Client::AWSJsonClient,
                                                public Aws::Client::ClientWithAsyncTemplateMethods<SupportAuthZClient>,
                                                public SupportAuthZPaginationBase<SupportAuthZClient>,
                                                public SupportAuthZWaiter<SupportAuthZClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef SupportAuthZClientConfiguration ClientConfigurationType;
  typedef SupportAuthZEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SupportAuthZClient(
      const Aws::SupportAuthZ::SupportAuthZClientConfiguration& clientConfiguration = Aws::SupportAuthZ::SupportAuthZClientConfiguration(),
      std::shared_ptr<SupportAuthZEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SupportAuthZClient(
      const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<SupportAuthZEndpointProviderBase> endpointProvider = nullptr,
      const Aws::SupportAuthZ::SupportAuthZClientConfiguration& clientConfiguration = Aws::SupportAuthZ::SupportAuthZClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SupportAuthZClient(
      const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
      std::shared_ptr<SupportAuthZEndpointProviderBase> endpointProvider = nullptr,
      const Aws::SupportAuthZ::SupportAuthZClientConfiguration& clientConfiguration = Aws::SupportAuthZ::SupportAuthZClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  SupportAuthZClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  SupportAuthZClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  SupportAuthZClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~SupportAuthZClient();

  /**
   * <p>Creates a support permit that authorizes an AWS support operator to perform
   * specified actions on specified resources. The permit is cryptographically signed
   * using a customer-managed AWS KMS key (ECC_NIST_P384, SIGN_VERIFY) to ensure
   * non-repudiation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/CreateSupportPermit">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateSupportPermitOutcome CreateSupportPermit(const Model::CreateSupportPermitRequest& request) const;

  /**
   * A Callable wrapper for CreateSupportPermit that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateSupportPermitRequestT = Model::CreateSupportPermitRequest>
  Model::CreateSupportPermitOutcomeCallable CreateSupportPermitCallable(const CreateSupportPermitRequestT& request) const {
    return SubmitCallable(&SupportAuthZClient::CreateSupportPermit, request);
  }

  /**
   * An Async wrapper for CreateSupportPermit that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateSupportPermitRequestT = Model::CreateSupportPermitRequest>
  void CreateSupportPermitAsync(const CreateSupportPermitRequestT& request, const CreateSupportPermitResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportAuthZClient::CreateSupportPermit, request, handler, context);
  }

  /**
   * <p>Deletes a support permit, revoking the authorization previously granted to
   * the AWS support operator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/DeleteSupportPermit">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteSupportPermitOutcome DeleteSupportPermit(const Model::DeleteSupportPermitRequest& request) const;

  /**
   * A Callable wrapper for DeleteSupportPermit that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteSupportPermitRequestT = Model::DeleteSupportPermitRequest>
  Model::DeleteSupportPermitOutcomeCallable DeleteSupportPermitCallable(const DeleteSupportPermitRequestT& request) const {
    return SubmitCallable(&SupportAuthZClient::DeleteSupportPermit, request);
  }

  /**
   * An Async wrapper for DeleteSupportPermit that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteSupportPermitRequestT = Model::DeleteSupportPermitRequest>
  void DeleteSupportPermitAsync(const DeleteSupportPermitRequestT& request, const DeleteSupportPermitResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportAuthZClient::DeleteSupportPermit, request, handler, context);
  }

  /**
   * <p>Retrieves the description of a specific support action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/GetAction">AWS
   * API Reference</a></p>
   */
  virtual Model::GetActionOutcome GetAction(const Model::GetActionRequest& request) const;

  /**
   * A Callable wrapper for GetAction that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetActionRequestT = Model::GetActionRequest>
  Model::GetActionOutcomeCallable GetActionCallable(const GetActionRequestT& request) const {
    return SubmitCallable(&SupportAuthZClient::GetAction, request);
  }

  /**
   * An Async wrapper for GetAction that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetActionRequestT = Model::GetActionRequest>
  void GetActionAsync(const GetActionRequestT& request, const GetActionResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportAuthZClient::GetAction, request, handler, context);
  }

  /**
   * <p>Retrieves the details of a support permit by its ARN or name.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/GetSupportPermit">AWS
   * API Reference</a></p>
   */
  virtual Model::GetSupportPermitOutcome GetSupportPermit(const Model::GetSupportPermitRequest& request) const;

  /**
   * A Callable wrapper for GetSupportPermit that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetSupportPermitRequestT = Model::GetSupportPermitRequest>
  Model::GetSupportPermitOutcomeCallable GetSupportPermitCallable(const GetSupportPermitRequestT& request) const {
    return SubmitCallable(&SupportAuthZClient::GetSupportPermit, request);
  }

  /**
   * An Async wrapper for GetSupportPermit that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetSupportPermitRequestT = Model::GetSupportPermitRequest>
  void GetSupportPermitAsync(const GetSupportPermitRequestT& request, const GetSupportPermitResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportAuthZClient::GetSupportPermit, request, handler, context);
  }

  /**
   * <p>Lists available support actions for a specified AWS service. Use pagination
   * to ensure that the operation returns quickly and successfully.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/ListActions">AWS
   * API Reference</a></p>
   */
  virtual Model::ListActionsOutcome ListActions(const Model::ListActionsRequest& request) const;

  /**
   * A Callable wrapper for ListActions that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListActionsRequestT = Model::ListActionsRequest>
  Model::ListActionsOutcomeCallable ListActionsCallable(const ListActionsRequestT& request) const {
    return SubmitCallable(&SupportAuthZClient::ListActions, request);
  }

  /**
   * An Async wrapper for ListActions that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListActionsRequestT = Model::ListActionsRequest>
  void ListActionsAsync(const ListActionsRequestT& request, const ListActionsResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportAuthZClient::ListActions, request, handler, context);
  }

  /**
   * <p>Lists permit requests from AWS support operators. Use pagination to ensure
   * that the operation returns quickly and successfully.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/ListSupportPermitRequests">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSupportPermitRequestsOutcome ListSupportPermitRequests(
      const Model::ListSupportPermitRequestsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListSupportPermitRequests that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListSupportPermitRequestsRequestT = Model::ListSupportPermitRequestsRequest>
  Model::ListSupportPermitRequestsOutcomeCallable ListSupportPermitRequestsCallable(
      const ListSupportPermitRequestsRequestT& request = {}) const {
    return SubmitCallable(&SupportAuthZClient::ListSupportPermitRequests, request);
  }

  /**
   * An Async wrapper for ListSupportPermitRequests that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListSupportPermitRequestsRequestT = Model::ListSupportPermitRequestsRequest>
  void ListSupportPermitRequestsAsync(const ListSupportPermitRequestsResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                      const ListSupportPermitRequestsRequestT& request = {}) const {
    return SubmitAsync(&SupportAuthZClient::ListSupportPermitRequests, request, handler, context);
  }

  /**
   * <p>Lists all support permits in the caller's account. Use pagination to ensure
   * that the operation returns quickly and successfully.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/ListSupportPermits">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSupportPermitsOutcome ListSupportPermits(const Model::ListSupportPermitsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListSupportPermits that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListSupportPermitsRequestT = Model::ListSupportPermitsRequest>
  Model::ListSupportPermitsOutcomeCallable ListSupportPermitsCallable(const ListSupportPermitsRequestT& request = {}) const {
    return SubmitCallable(&SupportAuthZClient::ListSupportPermits, request);
  }

  /**
   * An Async wrapper for ListSupportPermits that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListSupportPermitsRequestT = Model::ListSupportPermitsRequest>
  void ListSupportPermitsAsync(const ListSupportPermitsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                               const ListSupportPermitsRequestT& request = {}) const {
    return SubmitAsync(&SupportAuthZClient::ListSupportPermits, request, handler, context);
  }

  /**
   * <p>Lists the tags associated with a support permit resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&SupportAuthZClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportAuthZClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Rejects a permit request from an AWS support operator. The operator cannot
   * proceed with the requested action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/RejectSupportPermitRequest">AWS
   * API Reference</a></p>
   */
  virtual Model::RejectSupportPermitRequestOutcome RejectSupportPermitRequest(
      const Model::RejectSupportPermitRequestRequest& request) const;

  /**
   * A Callable wrapper for RejectSupportPermitRequest that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename RejectSupportPermitRequestRequestT = Model::RejectSupportPermitRequestRequest>
  Model::RejectSupportPermitRequestOutcomeCallable RejectSupportPermitRequestCallable(
      const RejectSupportPermitRequestRequestT& request) const {
    return SubmitCallable(&SupportAuthZClient::RejectSupportPermitRequest, request);
  }

  /**
   * An Async wrapper for RejectSupportPermitRequest that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename RejectSupportPermitRequestRequestT = Model::RejectSupportPermitRequestRequest>
  void RejectSupportPermitRequestAsync(const RejectSupportPermitRequestRequestT& request,
                                       const RejectSupportPermitRequestResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportAuthZClient::RejectSupportPermitRequest, request, handler, context);
  }

  /**
   * <p>Adds or overwrites one or more tags for a support permit
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&SupportAuthZClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportAuthZClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes one or more tags from a support permit resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supportauthz-2026-06-30/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&SupportAuthZClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&SupportAuthZClient::UntagResource, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<SupportAuthZEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<SupportAuthZClient>;
  void init(const SupportAuthZClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, SupportAuthZError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  SupportAuthZClientConfiguration m_clientConfiguration;
  std::shared_ptr<SupportAuthZEndpointProviderBase> m_endpointProvider;
};

}  // namespace SupportAuthZ
}  // namespace Aws
