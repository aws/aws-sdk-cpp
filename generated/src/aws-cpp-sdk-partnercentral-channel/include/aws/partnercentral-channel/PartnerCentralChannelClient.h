/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/PartnerCentralChannelPaginationBase.h>
#include <aws/partnercentral-channel/PartnerCentralChannelServiceClientModel.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>

namespace Aws {
namespace PartnerCentralChannel {
/**
 * <p>AWS Partner Central Channel service for managing partner relationships,
 * handshakes, and program management accounts.</p>
 */
class AWS_PARTNERCENTRALCHANNEL_API PartnerCentralChannelClient
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<PartnerCentralChannelClient>,
      public PartnerCentralChannelPaginationBase<PartnerCentralChannelClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef PartnerCentralChannelClientConfiguration ClientConfigurationType;
  typedef PartnerCentralChannelEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  PartnerCentralChannelClient(const Aws::PartnerCentralChannel::PartnerCentralChannelClientConfiguration& clientConfiguration =
                                  Aws::PartnerCentralChannel::PartnerCentralChannelClientConfiguration(),
                              std::shared_ptr<PartnerCentralChannelEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  PartnerCentralChannelClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<PartnerCentralChannelEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::PartnerCentralChannel::PartnerCentralChannelClientConfiguration& clientConfiguration =
                                  Aws::PartnerCentralChannel::PartnerCentralChannelClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  PartnerCentralChannelClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<PartnerCentralChannelEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::PartnerCentralChannel::PartnerCentralChannelClientConfiguration& clientConfiguration =
                                  Aws::PartnerCentralChannel::PartnerCentralChannelClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  PartnerCentralChannelClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  PartnerCentralChannelClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  PartnerCentralChannelClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~PartnerCentralChannelClient();

  /**
   * <p>Accepts a pending channel handshake request from another AWS
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/AcceptChannelHandshake">AWS
   * API Reference</a></p>
   */
  virtual Model::AcceptChannelHandshakeOutcome AcceptChannelHandshake(const Model::AcceptChannelHandshakeRequest& request) const;

  /**
   * A Callable wrapper for AcceptChannelHandshake that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AcceptChannelHandshakeRequestT = Model::AcceptChannelHandshakeRequest>
  Model::AcceptChannelHandshakeOutcomeCallable AcceptChannelHandshakeCallable(const AcceptChannelHandshakeRequestT& request) const {
    return SubmitCallable(&PartnerCentralChannelClient::AcceptChannelHandshake, request);
  }

  /**
   * An Async wrapper for AcceptChannelHandshake that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename AcceptChannelHandshakeRequestT = Model::AcceptChannelHandshakeRequest>
  void AcceptChannelHandshakeAsync(const AcceptChannelHandshakeRequestT& request,
                                   const AcceptChannelHandshakeResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralChannelClient::AcceptChannelHandshake, request, handler, context);
  }

  /**
   * <p>Cancels a pending channel handshake request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/CancelChannelHandshake">AWS
   * API Reference</a></p>
   */
  virtual Model::CancelChannelHandshakeOutcome CancelChannelHandshake(const Model::CancelChannelHandshakeRequest& request) const;

  /**
   * A Callable wrapper for CancelChannelHandshake that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CancelChannelHandshakeRequestT = Model::CancelChannelHandshakeRequest>
  Model::CancelChannelHandshakeOutcomeCallable CancelChannelHandshakeCallable(const CancelChannelHandshakeRequestT& request) const {
    return SubmitCallable(&PartnerCentralChannelClient::CancelChannelHandshake, request);
  }

  /**
   * An Async wrapper for CancelChannelHandshake that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CancelChannelHandshakeRequestT = Model::CancelChannelHandshakeRequest>
  void CancelChannelHandshakeAsync(const CancelChannelHandshakeRequestT& request,
                                   const CancelChannelHandshakeResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralChannelClient::CancelChannelHandshake, request, handler, context);
  }

  /**
   * <p>Creates a new channel handshake request to establish a partnership with
   * another AWS account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/CreateChannelHandshake">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateChannelHandshakeOutcome CreateChannelHandshake(const Model::CreateChannelHandshakeRequest& request) const;

  /**
   * A Callable wrapper for CreateChannelHandshake that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateChannelHandshakeRequestT = Model::CreateChannelHandshakeRequest>
  Model::CreateChannelHandshakeOutcomeCallable CreateChannelHandshakeCallable(const CreateChannelHandshakeRequestT& request) const {
    return SubmitCallable(&PartnerCentralChannelClient::CreateChannelHandshake, request);
  }

  /**
   * An Async wrapper for CreateChannelHandshake that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateChannelHandshakeRequestT = Model::CreateChannelHandshakeRequest>
  void CreateChannelHandshakeAsync(const CreateChannelHandshakeRequestT& request,
                                   const CreateChannelHandshakeResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralChannelClient::CreateChannelHandshake, request, handler, context);
  }

  /**
   * <p>Creates a new program management account for managing partner
   * relationships.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/CreateProgramManagementAccount">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateProgramManagementAccountOutcome CreateProgramManagementAccount(
      const Model::CreateProgramManagementAccountRequest& request) const;

  /**
   * A Callable wrapper for CreateProgramManagementAccount that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateProgramManagementAccountRequestT = Model::CreateProgramManagementAccountRequest>
  Model::CreateProgramManagementAccountOutcomeCallable CreateProgramManagementAccountCallable(
      const CreateProgramManagementAccountRequestT& request) const {
    return SubmitCallable(&PartnerCentralChannelClient::CreateProgramManagementAccount, request);
  }

  /**
   * An Async wrapper for CreateProgramManagementAccount that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateProgramManagementAccountRequestT = Model::CreateProgramManagementAccountRequest>
  void CreateProgramManagementAccountAsync(const CreateProgramManagementAccountRequestT& request,
                                           const CreateProgramManagementAccountResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralChannelClient::CreateProgramManagementAccount, request, handler, context);
  }

  /**
   * <p>Creates a new partner relationship between accounts.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/CreateRelationship">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateRelationshipOutcome CreateRelationship(const Model::CreateRelationshipRequest& request) const;

  /**
   * A Callable wrapper for CreateRelationship that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateRelationshipRequestT = Model::CreateRelationshipRequest>
  Model::CreateRelationshipOutcomeCallable CreateRelationshipCallable(const CreateRelationshipRequestT& request) const {
    return SubmitCallable(&PartnerCentralChannelClient::CreateRelationship, request);
  }

  /**
   * An Async wrapper for CreateRelationship that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateRelationshipRequestT = Model::CreateRelationshipRequest>
  void CreateRelationshipAsync(const CreateRelationshipRequestT& request, const CreateRelationshipResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralChannelClient::CreateRelationship, request, handler, context);
  }

  /**
   * <p>Deletes a program management account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/DeleteProgramManagementAccount">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteProgramManagementAccountOutcome DeleteProgramManagementAccount(
      const Model::DeleteProgramManagementAccountRequest& request) const;

  /**
   * A Callable wrapper for DeleteProgramManagementAccount that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename DeleteProgramManagementAccountRequestT = Model::DeleteProgramManagementAccountRequest>
  Model::DeleteProgramManagementAccountOutcomeCallable DeleteProgramManagementAccountCallable(
      const DeleteProgramManagementAccountRequestT& request) const {
    return SubmitCallable(&PartnerCentralChannelClient::DeleteProgramManagementAccount, request);
  }

  /**
   * An Async wrapper for DeleteProgramManagementAccount that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename DeleteProgramManagementAccountRequestT = Model::DeleteProgramManagementAccountRequest>
  void DeleteProgramManagementAccountAsync(const DeleteProgramManagementAccountRequestT& request,
                                           const DeleteProgramManagementAccountResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralChannelClient::DeleteProgramManagementAccount, request, handler, context);
  }

  /**
   * <p>Deletes a partner relationship.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/DeleteRelationship">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteRelationshipOutcome DeleteRelationship(const Model::DeleteRelationshipRequest& request) const;

  /**
   * A Callable wrapper for DeleteRelationship that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteRelationshipRequestT = Model::DeleteRelationshipRequest>
  Model::DeleteRelationshipOutcomeCallable DeleteRelationshipCallable(const DeleteRelationshipRequestT& request) const {
    return SubmitCallable(&PartnerCentralChannelClient::DeleteRelationship, request);
  }

  /**
   * An Async wrapper for DeleteRelationship that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteRelationshipRequestT = Model::DeleteRelationshipRequest>
  void DeleteRelationshipAsync(const DeleteRelationshipRequestT& request, const DeleteRelationshipResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralChannelClient::DeleteRelationship, request, handler, context);
  }

  /**
   * <p>Retrieves details of a specific partner relationship.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/GetRelationship">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRelationshipOutcome GetRelationship(const Model::GetRelationshipRequest& request) const;

  /**
   * A Callable wrapper for GetRelationship that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetRelationshipRequestT = Model::GetRelationshipRequest>
  Model::GetRelationshipOutcomeCallable GetRelationshipCallable(const GetRelationshipRequestT& request) const {
    return SubmitCallable(&PartnerCentralChannelClient::GetRelationship, request);
  }

  /**
   * An Async wrapper for GetRelationship that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetRelationshipRequestT = Model::GetRelationshipRequest>
  void GetRelationshipAsync(const GetRelationshipRequestT& request, const GetRelationshipResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralChannelClient::GetRelationship, request, handler, context);
  }

  /**
   * <p>Lists channel handshakes based on specified criteria.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ListChannelHandshakes">AWS
   * API Reference</a></p>
   */
  virtual Model::ListChannelHandshakesOutcome ListChannelHandshakes(const Model::ListChannelHandshakesRequest& request) const;

  /**
   * A Callable wrapper for ListChannelHandshakes that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListChannelHandshakesRequestT = Model::ListChannelHandshakesRequest>
  Model::ListChannelHandshakesOutcomeCallable ListChannelHandshakesCallable(const ListChannelHandshakesRequestT& request) const {
    return SubmitCallable(&PartnerCentralChannelClient::ListChannelHandshakes, request);
  }

  /**
   * An Async wrapper for ListChannelHandshakes that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListChannelHandshakesRequestT = Model::ListChannelHandshakesRequest>
  void ListChannelHandshakesAsync(const ListChannelHandshakesRequestT& request, const ListChannelHandshakesResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralChannelClient::ListChannelHandshakes, request, handler, context);
  }

  /**
   * <p>Lists program management accounts based on specified criteria.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ListProgramManagementAccounts">AWS
   * API Reference</a></p>
   */
  virtual Model::ListProgramManagementAccountsOutcome ListProgramManagementAccounts(
      const Model::ListProgramManagementAccountsRequest& request) const;

  /**
   * A Callable wrapper for ListProgramManagementAccounts that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListProgramManagementAccountsRequestT = Model::ListProgramManagementAccountsRequest>
  Model::ListProgramManagementAccountsOutcomeCallable ListProgramManagementAccountsCallable(
      const ListProgramManagementAccountsRequestT& request) const {
    return SubmitCallable(&PartnerCentralChannelClient::ListProgramManagementAccounts, request);
  }

  /**
   * An Async wrapper for ListProgramManagementAccounts that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListProgramManagementAccountsRequestT = Model::ListProgramManagementAccountsRequest>
  void ListProgramManagementAccountsAsync(const ListProgramManagementAccountsRequestT& request,
                                          const ListProgramManagementAccountsResponseReceivedHandler& handler,
                                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralChannelClient::ListProgramManagementAccounts, request, handler, context);
  }

  /**
   * <p>Lists partner relationships based on specified criteria.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ListRelationships">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRelationshipsOutcome ListRelationships(const Model::ListRelationshipsRequest& request) const;

  /**
   * A Callable wrapper for ListRelationships that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListRelationshipsRequestT = Model::ListRelationshipsRequest>
  Model::ListRelationshipsOutcomeCallable ListRelationshipsCallable(const ListRelationshipsRequestT& request) const {
    return SubmitCallable(&PartnerCentralChannelClient::ListRelationships, request);
  }

  /**
   * An Async wrapper for ListRelationships that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListRelationshipsRequestT = Model::ListRelationshipsRequest>
  void ListRelationshipsAsync(const ListRelationshipsRequestT& request, const ListRelationshipsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralChannelClient::ListRelationships, request, handler, context);
  }

  /**
   * <p>Lists tags associated with a specific resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&PartnerCentralChannelClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralChannelClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Rejects a pending channel handshake request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/RejectChannelHandshake">AWS
   * API Reference</a></p>
   */
  virtual Model::RejectChannelHandshakeOutcome RejectChannelHandshake(const Model::RejectChannelHandshakeRequest& request) const;

  /**
   * A Callable wrapper for RejectChannelHandshake that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RejectChannelHandshakeRequestT = Model::RejectChannelHandshakeRequest>
  Model::RejectChannelHandshakeOutcomeCallable RejectChannelHandshakeCallable(const RejectChannelHandshakeRequestT& request) const {
    return SubmitCallable(&PartnerCentralChannelClient::RejectChannelHandshake, request);
  }

  /**
   * An Async wrapper for RejectChannelHandshake that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename RejectChannelHandshakeRequestT = Model::RejectChannelHandshakeRequest>
  void RejectChannelHandshakeAsync(const RejectChannelHandshakeRequestT& request,
                                   const RejectChannelHandshakeResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralChannelClient::RejectChannelHandshake, request, handler, context);
  }

  /**
   * <p>Adds or updates tags for a specified resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&PartnerCentralChannelClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralChannelClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes tags from a specified resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&PartnerCentralChannelClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralChannelClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates the properties of a program management account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/UpdateProgramManagementAccount">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateProgramManagementAccountOutcome UpdateProgramManagementAccount(
      const Model::UpdateProgramManagementAccountRequest& request) const;

  /**
   * A Callable wrapper for UpdateProgramManagementAccount that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateProgramManagementAccountRequestT = Model::UpdateProgramManagementAccountRequest>
  Model::UpdateProgramManagementAccountOutcomeCallable UpdateProgramManagementAccountCallable(
      const UpdateProgramManagementAccountRequestT& request) const {
    return SubmitCallable(&PartnerCentralChannelClient::UpdateProgramManagementAccount, request);
  }

  /**
   * An Async wrapper for UpdateProgramManagementAccount that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename UpdateProgramManagementAccountRequestT = Model::UpdateProgramManagementAccountRequest>
  void UpdateProgramManagementAccountAsync(const UpdateProgramManagementAccountRequestT& request,
                                           const UpdateProgramManagementAccountResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralChannelClient::UpdateProgramManagementAccount, request, handler, context);
  }

  /**
   * <p>Updates the properties of a partner relationship.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/UpdateRelationship">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateRelationshipOutcome UpdateRelationship(const Model::UpdateRelationshipRequest& request) const;

  /**
   * A Callable wrapper for UpdateRelationship that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateRelationshipRequestT = Model::UpdateRelationshipRequest>
  Model::UpdateRelationshipOutcomeCallable UpdateRelationshipCallable(const UpdateRelationshipRequestT& request) const {
    return SubmitCallable(&PartnerCentralChannelClient::UpdateRelationship, request);
  }

  /**
   * An Async wrapper for UpdateRelationship that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateRelationshipRequestT = Model::UpdateRelationshipRequest>
  void UpdateRelationshipAsync(const UpdateRelationshipRequestT& request, const UpdateRelationshipResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralChannelClient::UpdateRelationship, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<PartnerCentralChannelEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<PartnerCentralChannelClient>;
  void init(const PartnerCentralChannelClientConfiguration& clientConfiguration);

  PartnerCentralChannelClientConfiguration m_clientConfiguration;
  std::shared_ptr<PartnerCentralChannelEndpointProviderBase> m_endpointProvider;
};

}  // namespace PartnerCentralChannel
}  // namespace Aws
