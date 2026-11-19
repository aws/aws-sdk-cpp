/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingPaginationBase.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingServiceClientModel.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingWaiter.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

namespace Aws {
namespace PartnerCentralMarketing {
/**
 * <p>AWS Partner Central Marketing API for campaign and asset management.</p>
 */
class AWS_PARTNERCENTRALMARKETING_API PartnerCentralMarketingClient
    : public Aws::Client::AWSRpcV2CborClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<PartnerCentralMarketingClient>,
      public PartnerCentralMarketingPaginationBase<PartnerCentralMarketingClient>,
      public PartnerCentralMarketingWaiter<PartnerCentralMarketingClient> {
 public:
  typedef Aws::Client::AWSRpcV2CborClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef PartnerCentralMarketingClientConfiguration ClientConfigurationType;
  typedef PartnerCentralMarketingEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  PartnerCentralMarketingClient(const Aws::PartnerCentralMarketing::PartnerCentralMarketingClientConfiguration& clientConfiguration =
                                    Aws::PartnerCentralMarketing::PartnerCentralMarketingClientConfiguration(),
                                std::shared_ptr<PartnerCentralMarketingEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  PartnerCentralMarketingClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<PartnerCentralMarketingEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::PartnerCentralMarketing::PartnerCentralMarketingClientConfiguration& clientConfiguration =
                                    Aws::PartnerCentralMarketing::PartnerCentralMarketingClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  PartnerCentralMarketingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<PartnerCentralMarketingEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::PartnerCentralMarketing::PartnerCentralMarketingClientConfiguration& clientConfiguration =
                                    Aws::PartnerCentralMarketing::PartnerCentralMarketingClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  PartnerCentralMarketingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  PartnerCentralMarketingClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  PartnerCentralMarketingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~PartnerCentralMarketingClient();

  /**
   * <p>Instantiates one or more of the campaign template's blueprints as assets of
   * this campaign.</p> <p>The only asset-create operation: DG-038 deleted the
   * singular CreateCampaignAsset, and AWS Batch Operations makes exposing a singular
   * alongside a batch optional (&quot;which MAY actually be exposed in
   * addition&quot;). It also replaced kit instantiation -- CreateCampaign creates
   * zero assets, so this is the only path by which an asset comes into
   * existence.</p> <p>Errors here are whole-request only, and nothing is written
   * when one is thrown. Per-entry failures ride in the response's
   * <code>Errors</code> list with a 200. ServiceQuotaExceededException is
   * deliberately absent: a campaign holds at most one asset per blueprint (I-15), so
   * the ceiling is the size of the bound kit and a request of unique valid entries
   * cannot exceed it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/BatchCreateCampaignAsset">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchCreateCampaignAssetOutcome BatchCreateCampaignAsset(const Model::BatchCreateCampaignAssetRequest& request) const;

  /**
   * A Callable wrapper for BatchCreateCampaignAsset that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchCreateCampaignAssetRequestT = Model::BatchCreateCampaignAssetRequest>
  Model::BatchCreateCampaignAssetOutcomeCallable BatchCreateCampaignAssetCallable(const BatchCreateCampaignAssetRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::BatchCreateCampaignAsset, request);
  }

  /**
   * An Async wrapper for BatchCreateCampaignAsset that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchCreateCampaignAssetRequestT = Model::BatchCreateCampaignAssetRequest>
  void BatchCreateCampaignAssetAsync(const BatchCreateCampaignAssetRequestT& request,
                                     const BatchCreateCampaignAssetResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::BatchCreateCampaignAsset, request, handler, context);
  }

  /**
   * <p>Creates a new marketing campaign.</p> <p>Returns the identity of the new
   * campaign, not the campaign. Growing a response is backward compatible and
   * shrinking one is not, and the caller's next step is a <code>GetCampaign</code>
   * anyway — a write that supplies an audience cannot report its scan verdict,
   * because that is decided after it commits.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/CreateCampaign">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateCampaignOutcome CreateCampaign(const Model::CreateCampaignRequest& request) const;

  /**
   * A Callable wrapper for CreateCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateCampaignRequestT = Model::CreateCampaignRequest>
  Model::CreateCampaignOutcomeCallable CreateCampaignCallable(const CreateCampaignRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::CreateCampaign, request);
  }

  /**
   * An Async wrapper for CreateCampaign that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateCampaignRequestT = Model::CreateCampaignRequest>
  void CreateCampaignAsync(const CreateCampaignRequestT& request, const CreateCampaignResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::CreateCampaign, request, handler, context);
  }

  /**
   * <p>Creates a single-use URL the partner visits to authorize publishing on a
   * platform. Serves a first connect, connecting a further account, and
   * re-authorizing an expired one: consenting with an account that is already
   * connected re-authorizes that connection and keeps its id; any other account adds
   * a connection. Poll ListSocialConnections for the outcome. Deliberately not
   * idempotent and takes no client token: every call must mint a fresh single-use
   * URL, so replaying a cached response would hand back a dead one.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/CreateSocialConnectionAuthorizationUrl">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateSocialConnectionAuthorizationUrlOutcome CreateSocialConnectionAuthorizationUrl(
      const Model::CreateSocialConnectionAuthorizationUrlRequest& request) const;

  /**
   * A Callable wrapper for CreateSocialConnectionAuthorizationUrl that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename CreateSocialConnectionAuthorizationUrlRequestT = Model::CreateSocialConnectionAuthorizationUrlRequest>
  Model::CreateSocialConnectionAuthorizationUrlOutcomeCallable CreateSocialConnectionAuthorizationUrlCallable(
      const CreateSocialConnectionAuthorizationUrlRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::CreateSocialConnectionAuthorizationUrl, request);
  }

  /**
   * An Async wrapper for CreateSocialConnectionAuthorizationUrl that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename CreateSocialConnectionAuthorizationUrlRequestT = Model::CreateSocialConnectionAuthorizationUrlRequest>
  void CreateSocialConnectionAuthorizationUrlAsync(const CreateSocialConnectionAuthorizationUrlRequestT& request,
                                                   const CreateSocialConnectionAuthorizationUrlResponseReceivedHandler& handler,
                                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::CreateSocialConnectionAuthorizationUrl, request, handler, context);
  }

  /**
   * <p>Stops a live campaign asset: an email's scheduled send is withdrawn, a social
   * post is removed before it publishes. On a completed campaign, it also removes a
   * published document, banner or landing page.</p> <p>Synchronous, and safe to
   * repeat. Does not delete the asset record, so a stopped email or social post can
   * be started again.</p> <p>Not every asset can be stopped, and the reasons differ
   * in kind. An email that has begun sending <strong>cannot</strong> be recalled:
   * the send is gone. A document, a banner or a landing page is
   * <strong>refused</strong> with <code>ASSET_NOT_DEACTIVATABLE</code> until the
   * campaign has completed (the UTC date is after its <code>EndOn</code>). Until
   * then the partner fixes one in place by updating it and activating it again,
   * which keeps its URL, so every email that already linked to it keeps working.</p>
   * <p>Once the campaign has completed, the removal is permanent, because a
   * completed campaign can't activate anything again:</p> <ul> <li>A document's
   * published PDF is deleted. Its URL stops serving within about a minute (the CDN
   * revalidates), and <code>PublicUrl</code> is no longer returned. Anything that
   * linked to it, such as a landing page's download button or a sent email, reaches
   * an error page. The export still contains the document.</li> <li>A banner's or
   * landing page's published object is taken down at the delivery platform, and the
   * images the partner put on it are deleted. A landing page stops capturing leads,
   * and its <code>PublicUrl</code> is no longer returned. A partner site that
   * embedded a banner shows nothing there. The platform's own CDN can keep serving a
   * copy a visitor already cached, which collects nothing.</li> </ul> <p>A landing
   * page and a document it links to can be removed in either order.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/DeactivateCampaignAsset">AWS
   * API Reference</a></p>
   */
  virtual Model::DeactivateCampaignAssetOutcome DeactivateCampaignAsset(const Model::DeactivateCampaignAssetRequest& request) const;

  /**
   * A Callable wrapper for DeactivateCampaignAsset that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeactivateCampaignAssetRequestT = Model::DeactivateCampaignAssetRequest>
  Model::DeactivateCampaignAssetOutcomeCallable DeactivateCampaignAssetCallable(const DeactivateCampaignAssetRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::DeactivateCampaignAsset, request);
  }

  /**
   * An Async wrapper for DeactivateCampaignAsset that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeactivateCampaignAssetRequestT = Model::DeactivateCampaignAssetRequest>
  void DeactivateCampaignAssetAsync(const DeactivateCampaignAssetRequestT& request,
                                    const DeactivateCampaignAssetResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::DeactivateCampaignAsset, request, handler, context);
  }

  /**
   * <p>Permanently deletes a campaign, its assets and their stored files.</p> <p>A
   * hard delete with no undo: the campaign leaves ListCampaigns and every read of it
   * returns ResourceNotFoundException. Its tags are removed with it.</p> <p>Refused
   * with ConflictException while the campaign has a live asset
   * (<code>CAMPAIGN_HAS_ACTIVE_ASSETS</code>), because deleting the record would
   * orphan what the delivery platform still serves or sends: deactivate those assets
   * first. Also refused while an activation task is running
   * (<code>CAMPAIGN_ACTIVATION_IN_PROGRESS</code>). A completed campaign can be
   * deleted.</p> <p>Idempotent in effect: deleting a campaign that is already gone
   * returns ResourceNotFoundException, and nothing is left behind by a
   * retry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/DeleteCampaign">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteCampaignOutcome DeleteCampaign(const Model::DeleteCampaignRequest& request) const;

  /**
   * A Callable wrapper for DeleteCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteCampaignRequestT = Model::DeleteCampaignRequest>
  Model::DeleteCampaignOutcomeCallable DeleteCampaignCallable(const DeleteCampaignRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::DeleteCampaign, request);
  }

  /**
   * An Async wrapper for DeleteCampaign that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteCampaignRequestT = Model::DeleteCampaignRequest>
  void DeleteCampaignAsync(const DeleteCampaignRequestT& request, const DeleteCampaignResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::DeleteCampaign, request, handler, context);
  }

  /**
   * <p>Permanently deletes a campaign asset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/DeleteCampaignAsset">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteCampaignAssetOutcome DeleteCampaignAsset(const Model::DeleteCampaignAssetRequest& request) const;

  /**
   * A Callable wrapper for DeleteCampaignAsset that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteCampaignAssetRequestT = Model::DeleteCampaignAssetRequest>
  Model::DeleteCampaignAssetOutcomeCallable DeleteCampaignAssetCallable(const DeleteCampaignAssetRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::DeleteCampaignAsset, request);
  }

  /**
   * An Async wrapper for DeleteCampaignAsset that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteCampaignAssetRequestT = Model::DeleteCampaignAssetRequest>
  void DeleteCampaignAssetAsync(const DeleteCampaignAssetRequestT& request, const DeleteCampaignAssetResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::DeleteCampaignAsset, request, handler, context);
  }

  /**
   * <p>Revokes and deletes one social connection; other connections on the same
   * platform are untouched. Idempotent: deleting an unknown or already-deleted
   * connection succeeds rather than returning a not-found error.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/DeleteSocialConnection">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteSocialConnectionOutcome DeleteSocialConnection(const Model::DeleteSocialConnectionRequest& request) const;

  /**
   * A Callable wrapper for DeleteSocialConnection that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteSocialConnectionRequestT = Model::DeleteSocialConnectionRequest>
  Model::DeleteSocialConnectionOutcomeCallable DeleteSocialConnectionCallable(const DeleteSocialConnectionRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::DeleteSocialConnection, request);
  }

  /**
   * An Async wrapper for DeleteSocialConnection that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteSocialConnectionRequestT = Model::DeleteSocialConnectionRequest>
  void DeleteSocialConnectionAsync(const DeleteSocialConnectionRequestT& request,
                                   const DeleteSocialConnectionResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::DeleteSocialConnection, request, handler, context);
  }

  /**
   * <p>Retrieves a campaign by its identifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/GetCampaign">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCampaignOutcome GetCampaign(const Model::GetCampaignRequest& request) const;

  /**
   * A Callable wrapper for GetCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetCampaignRequestT = Model::GetCampaignRequest>
  Model::GetCampaignOutcomeCallable GetCampaignCallable(const GetCampaignRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::GetCampaign, request);
  }

  /**
   * An Async wrapper for GetCampaign that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetCampaignRequestT = Model::GetCampaignRequest>
  void GetCampaignAsync(const GetCampaignRequestT& request, const GetCampaignResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::GetCampaign, request, handler, context);
  }

  /**
   * <p>Retrieves an asset by its identifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/GetCampaignAsset">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCampaignAssetOutcome GetCampaignAsset(const Model::GetCampaignAssetRequest& request) const;

  /**
   * A Callable wrapper for GetCampaignAsset that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetCampaignAssetRequestT = Model::GetCampaignAssetRequest>
  Model::GetCampaignAssetOutcomeCallable GetCampaignAssetCallable(const GetCampaignAssetRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::GetCampaignAsset, request);
  }

  /**
   * An Async wrapper for GetCampaignAsset that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetCampaignAssetRequestT = Model::GetCampaignAssetRequest>
  void GetCampaignAssetAsync(const GetCampaignAssetRequestT& request, const GetCampaignAssetResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::GetCampaignAsset, request, handler, context);
  }

  /**
   * <p>Reads a campaign's current activation task.</p> <p>Keyed on the
   * <strong>campaign</strong>, with no task identifier, because a campaign has at
   * most one activation task: runs are serialised, so there is no collection to
   * address into. The caller always holds the task id anyway, because Start returned
   * it — the id is a correlation value, not an address.</p> <p>Returns the
   * campaign's most recent task. A new task overwrites the previous one, so this is
   * not a history: the durable per-asset record is on the assets themselves. Returns
   * ResourceNotFoundException when the campaign has never had a task, or when its
   * last one has expired.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/GetCampaignAssetActivationTask">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCampaignAssetActivationTaskOutcome GetCampaignAssetActivationTask(
      const Model::GetCampaignAssetActivationTaskRequest& request) const;

  /**
   * A Callable wrapper for GetCampaignAssetActivationTask that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetCampaignAssetActivationTaskRequestT = Model::GetCampaignAssetActivationTaskRequest>
  Model::GetCampaignAssetActivationTaskOutcomeCallable GetCampaignAssetActivationTaskCallable(
      const GetCampaignAssetActivationTaskRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::GetCampaignAssetActivationTask, request);
  }

  /**
   * An Async wrapper for GetCampaignAssetActivationTask that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename GetCampaignAssetActivationTaskRequestT = Model::GetCampaignAssetActivationTaskRequest>
  void GetCampaignAssetActivationTaskAsync(const GetCampaignAssetActivationTaskRequestT& request,
                                           const GetCampaignAssetActivationTaskResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::GetCampaignAssetActivationTask, request, handler, context);
  }

  /**
   * <p>Retrieves a campaign asset export task by its identifier, reporting its
   * status and, when the task is COMPLETED, a freshly minted short-lived presigned
   * URL for downloading the ZIP archive.</p> <p>The download URL is minted on each
   * call and is valid for at most 15 minutes; clients should download promptly
   * rather than caching it. When the task has FAILED, FailureReason explains why.
   * Poll this operation (roughly every 2-5 seconds) until the task reaches a
   * terminal state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/GetCampaignAssetExportTask">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCampaignAssetExportTaskOutcome GetCampaignAssetExportTask(
      const Model::GetCampaignAssetExportTaskRequest& request) const;

  /**
   * A Callable wrapper for GetCampaignAssetExportTask that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetCampaignAssetExportTaskRequestT = Model::GetCampaignAssetExportTaskRequest>
  Model::GetCampaignAssetExportTaskOutcomeCallable GetCampaignAssetExportTaskCallable(
      const GetCampaignAssetExportTaskRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::GetCampaignAssetExportTask, request);
  }

  /**
   * An Async wrapper for GetCampaignAssetExportTask that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetCampaignAssetExportTaskRequestT = Model::GetCampaignAssetExportTaskRequest>
  void GetCampaignAssetExportTaskAsync(const GetCampaignAssetExportTaskRequestT& request,
                                       const GetCampaignAssetExportTaskResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::GetCampaignAssetExportTask, request, handler, context);
  }

  /**
   * <p>Retrieves full detail of one campaign template, including its ordered asset
   * templates with their field schema and layout previews.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/GetCampaignTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::GetCampaignTemplateOutcome GetCampaignTemplate(const Model::GetCampaignTemplateRequest& request) const;

  /**
   * A Callable wrapper for GetCampaignTemplate that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetCampaignTemplateRequestT = Model::GetCampaignTemplateRequest>
  Model::GetCampaignTemplateOutcomeCallable GetCampaignTemplateCallable(const GetCampaignTemplateRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::GetCampaignTemplate, request);
  }

  /**
   * An Async wrapper for GetCampaignTemplate that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetCampaignTemplateRequestT = Model::GetCampaignTemplateRequest>
  void GetCampaignTemplateAsync(const GetCampaignTemplateRequestT& request, const GetCampaignTemplateResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::GetCampaignTemplate, request, handler, context);
  }

  /**
   * <p>Lists assets for a campaign with pagination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/ListCampaignAssets">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCampaignAssetsOutcome ListCampaignAssets(const Model::ListCampaignAssetsRequest& request) const;

  /**
   * A Callable wrapper for ListCampaignAssets that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListCampaignAssetsRequestT = Model::ListCampaignAssetsRequest>
  Model::ListCampaignAssetsOutcomeCallable ListCampaignAssetsCallable(const ListCampaignAssetsRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::ListCampaignAssets, request);
  }

  /**
   * An Async wrapper for ListCampaignAssets that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListCampaignAssetsRequestT = Model::ListCampaignAssetsRequest>
  void ListCampaignAssetsAsync(const ListCampaignAssetsRequestT& request, const ListCampaignAssetsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::ListCampaignAssets, request, handler, context);
  }

  /**
   * <p>Lists campaigns with optional filters and pagination.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/ListCampaigns">AWS
   * API Reference</a></p>
   */
  virtual Model::ListCampaignsOutcome ListCampaigns(const Model::ListCampaignsRequest& request) const;

  /**
   * A Callable wrapper for ListCampaigns that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListCampaignsRequestT = Model::ListCampaignsRequest>
  Model::ListCampaignsOutcomeCallable ListCampaignsCallable(const ListCampaignsRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::ListCampaigns, request);
  }

  /**
   * An Async wrapper for ListCampaigns that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListCampaignsRequestT = Model::ListCampaignsRequest>
  void ListCampaignsAsync(const ListCampaignsRequestT& request, const ListCampaignsResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::ListCampaigns, request, handler, context);
  }

  /**
   * <p>Lists the partner's social connections, optionally filtered by
   * platform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/ListSocialConnections">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSocialConnectionsOutcome ListSocialConnections(const Model::ListSocialConnectionsRequest& request) const;

  /**
   * A Callable wrapper for ListSocialConnections that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListSocialConnectionsRequestT = Model::ListSocialConnectionsRequest>
  Model::ListSocialConnectionsOutcomeCallable ListSocialConnectionsCallable(const ListSocialConnectionsRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::ListSocialConnections, request);
  }

  /**
   * An Async wrapper for ListSocialConnections that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListSocialConnectionsRequestT = Model::ListSocialConnectionsRequest>
  void ListSocialConnectionsAsync(const ListSocialConnectionsRequestT& request, const ListSocialConnectionsResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::ListSocialConnections, request, handler, context);
  }

  /**
   * <p>Lists the tags applied to a Partner Central Marketing resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Searches and browses the AWS-authored campaign template catalog. With no
   * SearchText it returns the whole catalog in the default order, so browse and
   * keyword search share one shape; GetCampaignTemplate reads one
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/SearchCampaignTemplates">AWS
   * API Reference</a></p>
   */
  virtual Model::SearchCampaignTemplatesOutcome SearchCampaignTemplates(const Model::SearchCampaignTemplatesRequest& request) const;

  /**
   * A Callable wrapper for SearchCampaignTemplates that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename SearchCampaignTemplatesRequestT = Model::SearchCampaignTemplatesRequest>
  Model::SearchCampaignTemplatesOutcomeCallable SearchCampaignTemplatesCallable(const SearchCampaignTemplatesRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::SearchCampaignTemplates, request);
  }

  /**
   * An Async wrapper for SearchCampaignTemplates that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename SearchCampaignTemplatesRequestT = Model::SearchCampaignTemplatesRequest>
  void SearchCampaignTemplatesAsync(const SearchCampaignTemplatesRequestT& request,
                                    const SearchCampaignTemplatesResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::SearchCampaignTemplates, request, handler, context);
  }

  /**
   * <p>Activates 1–25 of a campaign's assets as one ordered unit, and returns a task
   * to poll.</p> <p>Takes a <strong>list</strong> because the service owns the
   * ordering. Assets link to one another by URL — an email's call-to-action carries
   * the landing page's URL, the landing page's download field carries the document's
   * — and a URL does not exist until the asset it points at is activated. Those
   * edges are derived by the service from the campaign's pinned template, so
   * reconstructing and topologically sorting them is work the service has already
   * done, and getting it wrong arms an email with a dead link. Name every asset you
   * want live and the service sequences them; &quot;activate everything&quot; is the
   * list with every id in it, which ListCampaignAssets already gave you.</p>
   * <p>Asynchronous, because activating an asset installs or arms behaviour that
   * runs later and an email activation bulk-loads its audience into the delivery
   * platform. Everything decidable <strong>without</strong> a write to the delivery
   * platform is evaluated before this returns; everything else lands on the
   * task.</p> <p>A refusal that applies to one asset does not fail the request: that
   * asset is on the task already FAILED, with its reason, and the rest run. A
   * refusal that applies to the whole request — a malformed list, an unknown
   * campaign, another task already running on this campaign, this service's
   * service-linked role being deleted (ConflictException
   * <code>SERVICE_LINKED_ROLE_DELETION_IN_PROGRESS</code>), a campaign setting an
   * asset in the request needs (ValidationException
   * <code>CAMPAIGN_INCOMPLETE</code>), a campaign sender that no longer passes
   * <code>CreateCampaign</code>'s sender rules while the request names an email
   * (ValidationException with no <code>FieldList</code>, whose message ends with one
   * <code>Reason: &lt;code&gt;</code> token per failed rule:
   * <code>PATTERN_MISMATCH</code>, <code>SENDER_DOMAIN_NOT_ALLIANCE_LEAD</code>, or
   * <code>SENDER_DOMAIN_DKIM_MISSING</code> and/or
   * <code>SENDER_DOMAIN_DMARC_MISSING</code>) — is thrown, and nothing starts.</p>
   * <p>One task runs on a campaign at a time. A second concurrent call is refused
   * with ConflictException / CAMPAIGN_ACTIVATION_IN_PROGRESS, whose
   * <code>ResourceId</code> names the task already holding the campaign. Two tasks
   * over <em>disjoint</em> asset sets are refused too: the guard is deliberately
   * campaign-wide, because overlapping runs made the per-asset status misleading
   * rather than merely contended.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/StartCampaignAssetActivationTask">AWS
   * API Reference</a></p>
   */
  virtual Model::StartCampaignAssetActivationTaskOutcome StartCampaignAssetActivationTask(
      const Model::StartCampaignAssetActivationTaskRequest& request) const;

  /**
   * A Callable wrapper for StartCampaignAssetActivationTask that returns a future to the operation so that it can be executed in parallel
   * to other requests.
   */
  template <typename StartCampaignAssetActivationTaskRequestT = Model::StartCampaignAssetActivationTaskRequest>
  Model::StartCampaignAssetActivationTaskOutcomeCallable StartCampaignAssetActivationTaskCallable(
      const StartCampaignAssetActivationTaskRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::StartCampaignAssetActivationTask, request);
  }

  /**
   * An Async wrapper for StartCampaignAssetActivationTask that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename StartCampaignAssetActivationTaskRequestT = Model::StartCampaignAssetActivationTaskRequest>
  void StartCampaignAssetActivationTaskAsync(const StartCampaignAssetActivationTaskRequestT& request,
                                             const StartCampaignAssetActivationTaskResponseReceivedHandler& handler,
                                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::StartCampaignAssetActivationTask, request, handler, context);
  }

  /**
   * <p>Starts an asynchronous task that packages a campaign's assets into a single
   * downloadable ZIP archive.</p> <p>Fire-and-return: the campaign is validated (it
   * must exist and not be cancelled), a task record is persisted, an asynchronous
   * execution is started, and the task id is returned with status IN_PROGRESS. This
   * operation does not inspect assets — all resolution, exclusion, and failure are
   * determined by the execution and surfaced only by GetCampaignAssetExportTask.</p>
   * <p>Every campaign is exportable, including one never activated, because
   * renderable assets are composed on demand at export time rather than requiring
   * finished, launched deliverables.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/StartCampaignAssetExportTask">AWS
   * API Reference</a></p>
   */
  virtual Model::StartCampaignAssetExportTaskOutcome StartCampaignAssetExportTask(
      const Model::StartCampaignAssetExportTaskRequest& request) const;

  /**
   * A Callable wrapper for StartCampaignAssetExportTask that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename StartCampaignAssetExportTaskRequestT = Model::StartCampaignAssetExportTaskRequest>
  Model::StartCampaignAssetExportTaskOutcomeCallable StartCampaignAssetExportTaskCallable(
      const StartCampaignAssetExportTaskRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::StartCampaignAssetExportTask, request);
  }

  /**
   * An Async wrapper for StartCampaignAssetExportTask that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename StartCampaignAssetExportTaskRequestT = Model::StartCampaignAssetExportTaskRequest>
  void StartCampaignAssetExportTaskAsync(const StartCampaignAssetExportTaskRequestT& request,
                                         const StartCampaignAssetExportTaskResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::StartCampaignAssetExportTask, request, handler, context);
  }

  /**
   * <p>Adds or replaces tags on a Partner Central Marketing resource.</p>
   * <p>Idempotent: applying a tag that is already present with the same value is a
   * no-op, and supplying a key that already exists replaces its value.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes tags from a Partner Central Marketing resource.</p> <p>Idempotent:
   * removing a key that is not present succeeds.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Edits a campaign in place.</p> <p>Partial update: an omitted field is left
   * unchanged, which is the standard meaning of an <code>Update</code> verb — a full
   * replacement would be a <code>Put</code>. Change-only, with no way to clear a
   * field back to empty, because the campaign's file members cannot round-trip: they
   * are written as an <code>s3://</code> reference and read back as a URL or as
   * metadata, so a replacement payload could not resend an unchanged recipient list
   * without re-uploading it.</p> <p>Refused while an activation task runs
   * (<code>CAMPAIGN_ACTIVATION_IN_PROGRESS</code>) and once the campaign is
   * completed (<code>CAMPAIGN_COMPLETED</code>, the UTC date is after its
   * <code>EndOn</code>).</p> <p>Last-writer-wins, with no concurrency token: this is
   * low-contention metadata owned by one partner.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/UpdateCampaign">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateCampaignOutcome UpdateCampaign(const Model::UpdateCampaignRequest& request) const;

  /**
   * A Callable wrapper for UpdateCampaign that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateCampaignRequestT = Model::UpdateCampaignRequest>
  Model::UpdateCampaignOutcomeCallable UpdateCampaignCallable(const UpdateCampaignRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::UpdateCampaign, request);
  }

  /**
   * An Async wrapper for UpdateCampaign that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateCampaignRequestT = Model::UpdateCampaignRequest>
  void UpdateCampaignAsync(const UpdateCampaignRequestT& request, const UpdateCampaignResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::UpdateCampaign, request, handler, context);
  }

  /**
   * <p>Updates an asset's field values, layout or send time. Refused with
   * <code>ConflictException</code> while the campaign's running activation task
   * still owns the asset (<code>ASSET_START_IN_PROGRESS</code>), and for a live
   * email or social post (<code>ASSET_ALREADY_ACTIVE</code>): deactivate it
   * first.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/UpdateCampaignAsset">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateCampaignAssetOutcome UpdateCampaignAsset(const Model::UpdateCampaignAssetRequest& request) const;

  /**
   * A Callable wrapper for UpdateCampaignAsset that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateCampaignAssetRequestT = Model::UpdateCampaignAssetRequest>
  Model::UpdateCampaignAssetOutcomeCallable UpdateCampaignAssetCallable(const UpdateCampaignAssetRequestT& request) const {
    return SubmitCallable(&PartnerCentralMarketingClient::UpdateCampaignAsset, request);
  }

  /**
   * An Async wrapper for UpdateCampaignAsset that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateCampaignAssetRequestT = Model::UpdateCampaignAssetRequest>
  void UpdateCampaignAssetAsync(const UpdateCampaignAssetRequestT& request, const UpdateCampaignAssetResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&PartnerCentralMarketingClient::UpdateCampaignAsset, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<PartnerCentralMarketingEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<PartnerCentralMarketingClient>;
  void init(const PartnerCentralMarketingClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, PartnerCentralMarketingError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const;

  PartnerCentralMarketingClientConfiguration m_clientConfiguration;
  std::shared_ptr<PartnerCentralMarketingEndpointProviderBase> m_endpointProvider;
};

}  // namespace PartnerCentralMarketing
}  // namespace Aws
