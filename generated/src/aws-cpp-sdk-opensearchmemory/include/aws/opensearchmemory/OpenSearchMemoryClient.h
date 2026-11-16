/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/OpenSearchMemoryPaginationBase.h>
#include <aws/opensearchmemory/OpenSearchMemoryServiceClientModel.h>
#include <aws/opensearchmemory/OpenSearchMemoryWaiter.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

namespace Aws {
namespace OpenSearchMemory {
/**
 * <p>Amazon OpenSearch Memory lets your AI agents and applications recall facts
 * and summaries across sessions. Your agents send events, such as conversation
 * turns, and search the memories derived from them.</p> <p>A space groups related
 * events and memories, and holds the memory strategies that you configure for
 * them. Use the space operations to create, get, list, update, and delete spaces.
 * Use the event and memory operations to write, read, list, search, update, and
 * delete a space's events and memories.</p>
 */
class AWS_OPENSEARCHMEMORY_API OpenSearchMemoryClient : public Aws::Client::AWSJsonClient,
                                                        public Aws::Client::ClientWithAsyncTemplateMethods<OpenSearchMemoryClient>,
                                                        public OpenSearchMemoryPaginationBase<OpenSearchMemoryClient>,
                                                        public OpenSearchMemoryWaiter<OpenSearchMemoryClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef OpenSearchMemoryClientConfiguration ClientConfigurationType;
  typedef OpenSearchMemoryEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  OpenSearchMemoryClient(const Aws::OpenSearchMemory::OpenSearchMemoryClientConfiguration& clientConfiguration =
                             Aws::OpenSearchMemory::OpenSearchMemoryClientConfiguration(),
                         std::shared_ptr<OpenSearchMemoryEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  OpenSearchMemoryClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<OpenSearchMemoryEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::OpenSearchMemory::OpenSearchMemoryClientConfiguration& clientConfiguration =
                             Aws::OpenSearchMemory::OpenSearchMemoryClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  OpenSearchMemoryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<OpenSearchMemoryEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::OpenSearchMemory::OpenSearchMemoryClientConfiguration& clientConfiguration =
                             Aws::OpenSearchMemory::OpenSearchMemoryClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  OpenSearchMemoryClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  OpenSearchMemoryClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  OpenSearchMemoryClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~OpenSearchMemoryClient();

  /**
   * <p>Gets up to 10 events by ID, each as <code>GetEvent</code> returns it,
   * including its payload.</p> <p>If you supply <code>actorId</code> or
   * <code>sessionId</code>, every requested event must match it. Each event has its
   * own outcome. The operation reports an event that it can't return in
   * <code>errors</code> instead of failing, with an error code named for the
   * exception that <code>GetEvent</code> would return for it. The operation reports
   * both an event that doesn't exist and an event outside the supplied scope as
   * <code>RESOURCE_NOT_FOUND</code>.</p> <p>The exception is the space's customer
   * managed AWS KMS key: if it is disabled, pending deletion, can't be used for
   * decryption, or was deleted, the whole call fails with
   * <code>ValidationException</code>, as <code>GetEvent</code> does.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/BatchGetEvent">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchGetEventOutcome BatchGetEvent(const Model::BatchGetEventRequest& request) const;

  /**
   * A Callable wrapper for BatchGetEvent that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename BatchGetEventRequestT = Model::BatchGetEventRequest>
  Model::BatchGetEventOutcomeCallable BatchGetEventCallable(const BatchGetEventRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::BatchGetEvent, request);
  }

  /**
   * An Async wrapper for BatchGetEvent that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename BatchGetEventRequestT = Model::BatchGetEventRequest>
  void BatchGetEventAsync(const BatchGetEventRequestT& request, const BatchGetEventResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::BatchGetEvent, request, handler, context);
  }

  /**
   * <p>Submits an event (conversation turns, structured data, or a PDF document
   * stored in Amazon S3) to a session in a space.</p> <p>The operation returns as
   * soon as the event is saved. <code>GetEvent</code> and <code>ListEvents</code>
   * return it immediately. <code>SearchEvents</code> returns it after it's indexed.
   * <code>SearchMemories</code> returns memories extracted from it only after a
   * strategy's extraction trigger fires and the memories are indexed.</p> <p>If the
   * space uses a customer managed AWS KMS key, the call can also fail because of the
   * key. It fails with <code>AccessDeniedException</code> if you aren't allowed to
   * use the key, and with <code>ThrottlingException</code> if AWS KMS throttles the
   * request. It fails with <code>ValidationException</code> if the key is disabled,
   * pending deletion, or deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/CreateEvent">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateEventOutcome CreateEvent(const Model::CreateEventRequest& request) const;

  /**
   * A Callable wrapper for CreateEvent that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateEventRequestT = Model::CreateEventRequest>
  Model::CreateEventOutcomeCallable CreateEventCallable(const CreateEventRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::CreateEvent, request);
  }

  /**
   * An Async wrapper for CreateEvent that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateEventRequestT = Model::CreateEventRequest>
  void CreateEventAsync(const CreateEventRequestT& request, const CreateEventResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::CreateEvent, request, handler, context);
  }

  /**
   * <p>Writes a memory that you have already formed, without extracting it from
   * events. The service embeds the text as given and stores it as a memory of the
   * named strategy. To have the service extract memories from conversation turns,
   * use <code>CreateEvent</code> instead.</p> <p>The operation returns before the
   * memory is searchable. The returned <code>memoryId</code> is final, but until the
   * memory is indexed, <code>GetMemory</code>, <code>UpdateMemory</code>, and
   * <code>DeleteMemory</code> return <code>ResourceNotFoundException</code> for
   * it.</p> <p>If the request would exceed the service's rate for embedding
   * requests, it fails with <code>ThrottlingException</code>. Retry with exponential
   * backoff.</p> <p>If the space uses a customer managed AWS KMS key, the call can
   * also fail because of the key. It fails with <code>AccessDeniedException</code>
   * if you aren't allowed to use the key, and with <code>ThrottlingException</code>
   * if AWS KMS throttles the request. It fails with <code>ValidationException</code>
   * if the key is disabled, pending deletion, or deleted.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/CreateMemory">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateMemoryOutcome CreateMemory(const Model::CreateMemoryRequest& request) const;

  /**
   * A Callable wrapper for CreateMemory that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateMemoryRequestT = Model::CreateMemoryRequest>
  Model::CreateMemoryOutcomeCallable CreateMemoryCallable(const CreateMemoryRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::CreateMemory, request);
  }

  /**
   * An Async wrapper for CreateMemory that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateMemoryRequestT = Model::CreateMemoryRequest>
  void CreateMemoryAsync(const CreateMemoryRequestT& request, const CreateMemoryResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::CreateMemory, request, handler, context);
  }

  /**
   * <p>Creates a space. A space is an AWS resource that stores the events you send
   * and the memories extracted from them, and defines the memory strategies that
   * extract those memories.</p> <p>The operation returns before provisioning
   * finishes, with <code>status</code> <code>CREATING</code>. Call
   * <code>GetSpace</code> until the status is <code>ACTIVE</code>, and then use the
   * space. If provisioning fails, the status becomes <code>FAILED</code> and
   * <code>statusReason</code> says why.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/CreateSpace">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateSpaceOutcome CreateSpace(const Model::CreateSpaceRequest& request) const;

  /**
   * A Callable wrapper for CreateSpace that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateSpaceRequestT = Model::CreateSpaceRequest>
  Model::CreateSpaceOutcomeCallable CreateSpaceCallable(const CreateSpaceRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::CreateSpace, request);
  }

  /**
   * An Async wrapper for CreateSpace that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateSpaceRequestT = Model::CreateSpaceRequest>
  void CreateSpaceAsync(const CreateSpaceRequestT& request, const CreateSpaceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::CreateSpace, request, handler, context);
  }

  /**
   * <p>Deletes an event. Deletion can't be undone. The event stops appearing in
   * <code>SearchEvents</code> results shortly after you delete it. Deleting an event
   * that doesn't exist returns <code>ResourceNotFoundException</code>.</p>
   * <p>Deleting an event doesn't delete the memories derived from it, because a
   * memory can combine content from several events. To remove them, use
   * <code>DeleteMemory</code>.</p> <p>If the space uses a customer managed AWS KMS
   * key, the call can also fail because of the key. It fails with
   * <code>AccessDeniedException</code> if you aren't allowed to use the key, and
   * with <code>ThrottlingException</code> if AWS KMS throttles the request. It fails
   * with <code>ValidationException</code> if the key is disabled, pending deletion,
   * or deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/DeleteEvent">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteEventOutcome DeleteEvent(const Model::DeleteEventRequest& request) const;

  /**
   * A Callable wrapper for DeleteEvent that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteEventRequestT = Model::DeleteEventRequest>
  Model::DeleteEventOutcomeCallable DeleteEventCallable(const DeleteEventRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::DeleteEvent, request);
  }

  /**
   * An Async wrapper for DeleteEvent that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteEventRequestT = Model::DeleteEventRequest>
  void DeleteEventAsync(const DeleteEventRequestT& request, const DeleteEventResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::DeleteEvent, request, handler, context);
  }

  /**
   * <p>Deletes a memory, including its content and embedding. Deletion can't be
   * undone. Searches stop returning the memory shortly after you delete it.</p>
   * <p>Deleting a memory that no longer exists returns
   * <code>ResourceNotFoundException</code>, so the operation is not idempotent. If
   * you retry deletes, treat that error as success.</p> <p>A memory past its expiry
   * (set from the space's <code>memoryExpiryDays</code> when the memory is written)
   * reads as not found: the operation returns
   * <code>ResourceNotFoundException</code>, as for a memory that was already
   * deleted.</p> <p>If the space uses a customer managed AWS KMS key, the call can
   * also fail because of the key. It fails with <code>AccessDeniedException</code>
   * if you aren't allowed to use the key, and with <code>ThrottlingException</code>
   * if AWS KMS throttles the request. It fails with <code>ValidationException</code>
   * if the key is disabled, pending deletion, or deleted.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/DeleteMemory">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteMemoryOutcome DeleteMemory(const Model::DeleteMemoryRequest& request) const;

  /**
   * A Callable wrapper for DeleteMemory that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteMemoryRequestT = Model::DeleteMemoryRequest>
  Model::DeleteMemoryOutcomeCallable DeleteMemoryCallable(const DeleteMemoryRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::DeleteMemory, request);
  }

  /**
   * An Async wrapper for DeleteMemory that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteMemoryRequestT = Model::DeleteMemoryRequest>
  void DeleteMemoryAsync(const DeleteMemoryRequestT& request, const DeleteMemoryResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::DeleteMemory, request, handler, context);
  }

  /**
   * <p>Deletes a space and its memories. Deletion can't be undone. After you delete
   * the space, you can't retrieve its events, and the service removes them when they
   * reach their expiry.</p> <p>The operation returns with <code>status</code>
   * <code>DELETING</code>. When deletion finishes, <code>GetSpace</code> returns
   * <code>ResourceNotFoundException</code>. If deletion fails, the status becomes
   * <code>FAILED</code>. A space that is <code>CREATING</code> or
   * <code>UPDATING</code> can't be deleted until that finishes: the request fails
   * with <code>ConflictException</code>. Deleting a space that is already
   * <code>DELETING</code> returns <code>DELETING</code> again.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/DeleteSpace">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteSpaceOutcome DeleteSpace(const Model::DeleteSpaceRequest& request) const;

  /**
   * A Callable wrapper for DeleteSpace that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteSpaceRequestT = Model::DeleteSpaceRequest>
  Model::DeleteSpaceOutcomeCallable DeleteSpaceCallable(const DeleteSpaceRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::DeleteSpace, request);
  }

  /**
   * An Async wrapper for DeleteSpace that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteSpaceRequestT = Model::DeleteSpaceRequest>
  void DeleteSpaceAsync(const DeleteSpaceRequestT& request, const DeleteSpaceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::DeleteSpace, request, handler, context);
  }

  /**
   * <p>Gets an event by ID, including its payload.</p> <p>If the space uses a
   * customer managed AWS KMS key, the call can also fail because of the key. It
   * fails with <code>AccessDeniedException</code> if you aren't allowed to use the
   * key, and with <code>ThrottlingException</code> if AWS KMS throttles the request.
   * It fails with <code>ValidationException</code> if the key is disabled, pending
   * deletion, or deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/GetEvent">AWS
   * API Reference</a></p>
   */
  virtual Model::GetEventOutcome GetEvent(const Model::GetEventRequest& request) const;

  /**
   * A Callable wrapper for GetEvent that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetEventRequestT = Model::GetEventRequest>
  Model::GetEventOutcomeCallable GetEventCallable(const GetEventRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::GetEvent, request);
  }

  /**
   * An Async wrapper for GetEvent that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetEventRequestT = Model::GetEventRequest>
  void GetEventAsync(const GetEventRequestT& request, const GetEventResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::GetEvent, request, handler, context);
  }

  /**
   * <p>Gets a memory by ID, as returned by <code>SearchMemories</code> or
   * <code>ListMemories</code>. A memory that doesn't exist returns
   * <code>ResourceNotFoundException</code>. Unlike <code>SearchMemories</code>, this
   * operation also returns memories that consolidation has superseded.</p> <p>A
   * memory past its expiry (set from the space's <code>memoryExpiryDays</code> when
   * the memory is written) reads as not found:
   * <code>ResourceNotFoundException</code>, the same answer as for an ID that does
   * not exist.</p> <p>If the space uses a customer managed AWS KMS key, the call can
   * also fail because of the key. It fails with <code>AccessDeniedException</code>
   * if you aren't allowed to use the key, and with <code>ThrottlingException</code>
   * if AWS KMS throttles the request. It fails with <code>ValidationException</code>
   * if the key is disabled, pending deletion, or deleted.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/GetMemory">AWS
   * API Reference</a></p>
   */
  virtual Model::GetMemoryOutcome GetMemory(const Model::GetMemoryRequest& request) const;

  /**
   * A Callable wrapper for GetMemory that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetMemoryRequestT = Model::GetMemoryRequest>
  Model::GetMemoryOutcomeCallable GetMemoryCallable(const GetMemoryRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::GetMemory, request);
  }

  /**
   * An Async wrapper for GetMemory that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetMemoryRequestT = Model::GetMemoryRequest>
  void GetMemoryAsync(const GetMemoryRequestT& request, const GetMemoryResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::GetMemory, request, handler, context);
  }

  /**
   * <p>Returns a space's configuration and status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/GetSpace">AWS
   * API Reference</a></p>
   */
  virtual Model::GetSpaceOutcome GetSpace(const Model::GetSpaceRequest& request) const;

  /**
   * A Callable wrapper for GetSpace that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetSpaceRequestT = Model::GetSpaceRequest>
  Model::GetSpaceOutcomeCallable GetSpaceCallable(const GetSpaceRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::GetSpace, request);
  }

  /**
   * An Async wrapper for GetSpace that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetSpaceRequestT = Model::GetSpaceRequest>
  void GetSpaceAsync(const GetSpaceRequestT& request, const GetSpaceResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::GetSpace, request, handler, context);
  }

  /**
   * <p>Lists the events in a session, sorted by time. Optionally limit the results
   * to events whose <code>eventTimestamp</code> falls between
   * <code>eventTimestampAfter</code> and <code>eventTimestampBefore</code>. Returns
   * event metadata only. Call <code>GetEvent</code> for the payload. For full-text
   * or relevance search, use <code>SearchEvents</code>.</p> <p>If the space uses a
   * customer managed AWS KMS key, the call can also fail because of the key. It
   * fails with <code>AccessDeniedException</code> if you aren't allowed to use the
   * key, and with <code>ThrottlingException</code> if AWS KMS throttles the request.
   * It fails with <code>ValidationException</code> if the key is disabled, pending
   * deletion, or deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/ListEvents">AWS
   * API Reference</a></p>
   */
  virtual Model::ListEventsOutcome ListEvents(const Model::ListEventsRequest& request) const;

  /**
   * A Callable wrapper for ListEvents that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListEventsRequestT = Model::ListEventsRequest>
  Model::ListEventsOutcomeCallable ListEventsCallable(const ListEventsRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::ListEvents, request);
  }

  /**
   * An Async wrapper for ListEvents that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListEventsRequestT = Model::ListEventsRequest>
  void ListEventsAsync(const ListEventsRequestT& request, const ListEventsResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::ListEvents, request, handler, context);
  }

  /**
   * <p>Lists a space's memories without a query, for example the most recent
   * memories or the memories of one strategy. Filter by strategy and optionally by
   * owning actor or session, sort by creation or update time, and page through the
   * results. Results have no relevance score. To query or filter by metadata, use
   * <code>SearchMemories</code>.</p> <p>If memories are written or deleted while you
   * page, the results can skip a memory or return it twice. You can page through
   * only a limited number of results. A request past that limit fails with
   * <code>ValidationException</code> (reason <code>invalidNextToken</code>), and the
   * message gives the limit.</p> <p>Memories past their expiry (set from the space's
   * <code>memoryExpiryDays</code> when each memory is written) are left out. Unlike
   * <code>SearchMemories</code>, this operation also returns memories that
   * consolidation has superseded.</p> <p>If the space uses a customer managed AWS
   * KMS key, the call can also fail because of the key. It fails with
   * <code>AccessDeniedException</code> if you aren't allowed to use the key, and
   * with <code>ThrottlingException</code> if AWS KMS throttles the request. It fails
   * with <code>ValidationException</code> if the key is disabled, pending deletion,
   * or deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/ListMemories">AWS
   * API Reference</a></p>
   */
  virtual Model::ListMemoriesOutcome ListMemories(const Model::ListMemoriesRequest& request) const;

  /**
   * A Callable wrapper for ListMemories that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListMemoriesRequestT = Model::ListMemoriesRequest>
  Model::ListMemoriesOutcomeCallable ListMemoriesCallable(const ListMemoriesRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::ListMemories, request);
  }

  /**
   * An Async wrapper for ListMemories that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListMemoriesRequestT = Model::ListMemoriesRequest>
  void ListMemoriesAsync(const ListMemoriesRequestT& request, const ListMemoriesResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::ListMemories, request, handler, context);
  }

  /**
   * <p>Lists the spaces in your account in the current Region.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/ListSpaces">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSpacesOutcome ListSpaces(const Model::ListSpacesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListSpaces that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListSpacesRequestT = Model::ListSpacesRequest>
  Model::ListSpacesOutcomeCallable ListSpacesCallable(const ListSpacesRequestT& request = {}) const {
    return SubmitCallable(&OpenSearchMemoryClient::ListSpaces, request);
  }

  /**
   * An Async wrapper for ListSpaces that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListSpacesRequestT = Model::ListSpacesRequest>
  void ListSpacesAsync(const ListSpacesResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                       const ListSpacesRequestT& request = {}) const {
    return SubmitAsync(&OpenSearchMemoryClient::ListSpaces, request, handler, context);
  }

  /**
   * <p>Lists the tags for the specified space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Searches a space's events by relevance. It works like
   * <code>SearchMemories</code> without the memory type and strategy selector. The
   * query is a subset of the OpenSearch Query DSL. The service validates it, limits
   * the search to the actor in <code>actorId</code> and the sessions in
   * <code>sessionIds</code>, and returns ranked results. Each result is the matching
   * chunk of an event, not the whole event. You can page through only a limited
   * number of results. A request past that limit fails with
   * <code>ValidationException</code> (reason <code>invalidNextToken</code>), and the
   * message gives the limit.</p> <p>If the results are larger than 5 MiB, the
   * request fails with <code>ValidationException</code> (reason
   * <code>queryBodyTooLarge</code>). Lower <code>maxResults</code>.</p> <p>If the
   * request would exceed the service's rate for embedding requests, it fails with
   * <code>ThrottlingException</code>. Retry with exponential backoff.</p> <p>If the
   * space uses a customer managed AWS KMS key, the call can also fail because of the
   * key. It fails with <code>AccessDeniedException</code> if you aren't allowed to
   * use the key, and with <code>ThrottlingException</code> if AWS KMS throttles the
   * request. It fails with <code>ValidationException</code> if the key is disabled,
   * pending deletion, or deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/SearchEvents">AWS
   * API Reference</a></p>
   */
  virtual Model::SearchEventsOutcome SearchEvents(const Model::SearchEventsRequest& request) const;

  /**
   * A Callable wrapper for SearchEvents that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename SearchEventsRequestT = Model::SearchEventsRequest>
  Model::SearchEventsOutcomeCallable SearchEventsCallable(const SearchEventsRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::SearchEvents, request);
  }

  /**
   * An Async wrapper for SearchEvents that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename SearchEventsRequestT = Model::SearchEventsRequest>
  void SearchEventsAsync(const SearchEventsRequestT& request, const SearchEventsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::SearchEvents, request, handler, context);
  }

  /**
   * <p>Searches a space's memories by relevance. The query is a subset of the
   * OpenSearch Query DSL. The service validates it, limits the search to the
   * requested strategies and to the actor in <code>actorId</code>, and returns one
   * ranked list of memories. You can page through only a limited number of results.
   * A request past that limit fails with <code>ValidationException</code> (reason
   * <code>invalidNextToken</code>), and the message gives the limit.</p> <p>Memories
   * past their expiry (set from the space's <code>memoryExpiryDays</code> when each
   * memory is written) are left out of the results. Only current memories are
   * returned: a memory that consolidation has superseded (an older version of a fact
   * that a newer memory replaced) is left out.</p> <p>If the results are larger than
   * 5 MiB, the request fails with <code>ValidationException</code> (reason
   * <code>queryBodyTooLarge</code>). Lower <code>maxResults</code>.</p> <p>If the
   * request would exceed the service's rate for embedding requests, it fails with
   * <code>ThrottlingException</code>. Retry with exponential backoff.</p> <p>If the
   * space uses a customer managed AWS KMS key, the call can also fail because of the
   * key. It fails with <code>AccessDeniedException</code> if you aren't allowed to
   * use the key, and with <code>ThrottlingException</code> if AWS KMS throttles the
   * request. It fails with <code>ValidationException</code> if the key is disabled,
   * pending deletion, or deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/SearchMemories">AWS
   * API Reference</a></p>
   */
  virtual Model::SearchMemoriesOutcome SearchMemories(const Model::SearchMemoriesRequest& request) const;

  /**
   * A Callable wrapper for SearchMemories that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename SearchMemoriesRequestT = Model::SearchMemoriesRequest>
  Model::SearchMemoriesOutcomeCallable SearchMemoriesCallable(const SearchMemoriesRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::SearchMemories, request);
  }

  /**
   * An Async wrapper for SearchMemories that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename SearchMemoriesRequestT = Model::SearchMemoriesRequest>
  void SearchMemoriesAsync(const SearchMemoriesRequestT& request, const SearchMemoriesResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::SearchMemories, request, handler, context);
  }

  /**
   * <p>Adds the specified tags to the specified space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes the specified tags from the specified space.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates a memory in place. Supply only the fields to change. Omitted fields
   * keep their stored values. A request must supply <code>content</code> or
   * <code>metadata</code>, or it fails with <code>ValidationException</code>.
   * Supplying <code>content</code> re-embeds the memory. A change to metadata alone
   * doesn't.</p> <p>The memory keeps its <code>memoryId</code> across updates.
   * Shortly after an update, searches stop returning the previous content.</p> <p>
   * <code>memoryType</code> can't be changed. To change it, delete the memory and
   * create a new one.</p> <p>A memory past its expiry (set from the space's
   * <code>memoryExpiryDays</code> when the memory is written) reads as not found:
   * the operation fails with <code>ResourceNotFoundException</code> and changes
   * nothing. An update does not move the expiry.</p> <p>Concurrent updates to one
   * memory are last-writer-wins. There is no version check. To avoid lost updates,
   * serialize your updates to a memory.</p> <p>If you supply <code>content</code>
   * and the request would exceed the service's rate for embedding requests, it fails
   * with <code>ThrottlingException</code>. Retry with exponential backoff.</p> <p>If
   * the space uses a customer managed AWS KMS key, the call can also fail because of
   * the key. It fails with <code>AccessDeniedException</code> if you aren't allowed
   * to use the key, and with <code>ThrottlingException</code> if AWS KMS throttles
   * the request. It fails with <code>ValidationException</code> if the key is
   * disabled, pending deletion, or deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/UpdateMemory">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateMemoryOutcome UpdateMemory(const Model::UpdateMemoryRequest& request) const;

  /**
   * A Callable wrapper for UpdateMemory that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateMemoryRequestT = Model::UpdateMemoryRequest>
  Model::UpdateMemoryOutcomeCallable UpdateMemoryCallable(const UpdateMemoryRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::UpdateMemory, request);
  }

  /**
   * An Async wrapper for UpdateMemory that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateMemoryRequestT = Model::UpdateMemoryRequest>
  void UpdateMemoryAsync(const UpdateMemoryRequestT& request, const UpdateMemoryResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::UpdateMemory, request, handler, context);
  }

  /**
   * <p>Updates a space's memory strategies, retention settings, or extraction model.
   * Supply only the fields to change. Omitted fields keep their current values.</p>
   * <p>If the request changes the set of strategies, a strategy's configuration, a
   * retention setting, or the extraction model, the space moves to
   * <code>UPDATING</code>. When the change is complete, the space returns to
   * <code>ACTIVE</code>, or moves to <code>FAILED</code> if the change can't be
   * applied. While the space is <code>UPDATING</code>, <code>GetSpace</code> returns
   * the previous configuration. A request that only changes strategy descriptions or
   * repeats the values the space has stored is applied immediately and doesn't
   * change the status. Sending a retention value that the space never set also moves
   * the space to <code>UPDATING</code>, even one that matches the behavior without
   * it, such as 90 for <code>eventExpiryDays</code> or 0 for
   * <code>memoryExpiryDays</code>. A space that is <code>CREATING</code>,
   * <code>UPDATING</code>, or <code>DELETING</code> can't be updated: the request
   * fails with <code>ConflictException</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/UpdateSpace">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateSpaceOutcome UpdateSpace(const Model::UpdateSpaceRequest& request) const;

  /**
   * A Callable wrapper for UpdateSpace that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateSpaceRequestT = Model::UpdateSpaceRequest>
  Model::UpdateSpaceOutcomeCallable UpdateSpaceCallable(const UpdateSpaceRequestT& request) const {
    return SubmitCallable(&OpenSearchMemoryClient::UpdateSpace, request);
  }

  /**
   * An Async wrapper for UpdateSpace that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateSpaceRequestT = Model::UpdateSpaceRequest>
  void UpdateSpaceAsync(const UpdateSpaceRequestT& request, const UpdateSpaceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&OpenSearchMemoryClient::UpdateSpace, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<OpenSearchMemoryEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<OpenSearchMemoryClient>;
  void init(const OpenSearchMemoryClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, OpenSearchMemoryError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;

  OpenSearchMemoryClientConfiguration m_clientConfiguration;
  std::shared_ptr<OpenSearchMemoryEndpointProviderBase> m_endpointProvider;
};

}  // namespace OpenSearchMemory
}  // namespace Aws
