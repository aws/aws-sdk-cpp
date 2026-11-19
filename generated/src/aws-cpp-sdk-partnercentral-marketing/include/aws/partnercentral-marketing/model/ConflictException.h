/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketing_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace PartnerCentralMarketing {
namespace Model {

/**
 * <p>The request conflicts with the current state of the resource.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-marketing-2026-05-31/ConflictException">AWS
 * API Reference</a></p>
 */
class ConflictException {
 public:
  AWS_PARTNERCENTRALMARKETING_API ConflictException() = default;
  AWS_PARTNERCENTRALMARKETING_API ConflictException(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API ConflictException& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_PARTNERCENTRALMARKETING_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Error message.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ConflictException& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The affected resource identifier. For a uniqueness conflict this is the
   * identifier of the <em>existing</em> resource, so the caller can act on it
   * without a separate lookup.</p>
   */
  inline const Aws::String& GetResourceId() const { return m_resourceId; }
  inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
  template <typename ResourceIdT = Aws::String>
  void SetResourceId(ResourceIdT&& value) {
    m_resourceIdHasBeenSet = true;
    m_resourceId = std::forward<ResourceIdT>(value);
  }
  template <typename ResourceIdT = Aws::String>
  ConflictException& WithResourceId(ResourceIdT&& value) {
    SetResourceId(std::forward<ResourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The affected resource type.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  ConflictException& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Machine-readable cause, for clients that branch on it.</p> <p>An open set of
   * <code>SCREAMING_SNAKE_CASE</code> tokens, deliberately typed as a string rather
   * than an enum. <code>ConflictException</code> is shared by every resource in this
   * service, so an enum here would accumulate values that are meaningful for one
   * resource and inapplicable to the rest — the cohesiveness problem the Backward
   * Compatibility standard describes under &quot;Sharing enums&quot; — and each new
   * value would force an SDK regeneration on callers who can never encounter it.
   * Clients MUST treat an unrecognised value as an unspecified conflict and fall
   * back to <code>Message</code>.</p> <p>Values in use today:</p> <p>From the
   * campaign asset activation path. Every one of these is decided before the
   * operation returns, so a caller that receives one knows nothing was started.</p>
   * <p>These two are thrown by <code>DeactivateCampaignAsset</code>, which refuses
   * one asset outright. <code>StartCampaignAssetActivationTask</code> reports the
   * same two causes <strong>per asset</strong> as a FAILED task entry instead of
   * throwing, because one bad identifier must not refuse the twenty-four good ones
   * beside it — so the spellings are deliberately identical to
   * <code>CampaignAssetStateReason</code>'s, letting a client match one string
   * whichever way the refusal arrived. The two types evolve independently on
   * purpose: this is an open string shared by every resource, that is a closed enum
   * owned by one operation.</p> <ul> <li><code>ASSET_START_IN_PROGRESS</code> — the
   * asset is already being started, or another caller changed it during this
   * request. Retryable once the outcome is visible.</li>
   * <li><code>PREREQUISITE_ASSET_NOT_ACTIVE</code> — this asset embeds output from
   * another asset that is not live. <code>ResourceId</code> carries that asset's
   * identifier.</li> </ul> <p>From the prerequisite edges between a campaign's
   * assets — an email that embeds its landing page's URL. Both refuse the whole
   * request and write nothing.</p> <ul> <li><code>PREREQUISITE_ASSET_MISSING</code>
   * — from <code>BatchCreateCampaignAsset</code>: an entry's blueprint embeds
   * another blueprint's output, and that blueprint is neither named in the same
   * request nor already an asset on the campaign. Retry with it in the request.
   * <code>ResourceId</code> carries the missing blueprint's identifier.</li>
   * <li><code>ASSET_HAS_DEPENDENTS</code> — from <code>DeleteCampaignAsset</code>:
   * another asset on the campaign embeds this asset's output, so deleting it would
   * leave that asset unactivatable. Delete the dependents first. The message names
   * them.</li> </ul> <p><code>CAMPAIGN_COMPLETED</code> — the campaign is complete
   * (the UTC date is after its <code>EndOn</code>), so it and its assets are
   * read-only. Refuses <code>UpdateCampaign</code>,
   * <code>BatchCreateCampaignAsset</code>, <code>UpdateCampaignAsset</code>,
   * <code>DeleteCampaignAsset</code> and
   * <code>StartCampaignAssetActivationTask</code>; never
   * <code>DeactivateCampaignAsset</code>. <strong>Not retryable, and not
   * fixable</strong> — <code>EndOn</code> cannot be moved once it has passed, so
   * nothing the caller does will make the write succeed. <code>ResourceId</code>
   * carries the campaign identifier.</p> <p>⚠️ This is the one conflict reason whose
   * condition <strong>never clears</strong>, which sits awkwardly with
   * <code>ConflictException</code> promising a state that may change. It is a
   * conflict rather than a validation failure because the request is well formed and
   * would have succeeded a moment earlier — the resource's state is what refuses it,
   * which is what this exception is for. Contrast <code>ASSET_NOT_STARTABLE</code>,
   * which moved to <code>ValidationException</code> precisely because it is a
   * property of the asset's <em>type</em> rather than of its state.</p> <p>⚠️
   * <strong><code>COMPLETED</code> also exists as a
   * <code>CampaignAssetExportTaskStatus</code> value, on a different axis.</strong>
   * That one means an export archive finished assembling. The two are unrelated and
   * must not be unified.</p> <p><code>CAMPAIGN_HAS_ACTIVE_ASSETS</code> — from
   * <code>DeleteCampaign</code>: at least one of the campaign's assets is live, and
   * deleting the campaign would orphan what the delivery platform still serves or
   * sends. Deactivate those assets with <code>DeactivateCampaignAsset</code>, then
   * retry. The message names them. <code>ResourceId</code> carries the campaign
   * identifier.</p> <p><code>CAMPAIGN_ACTIVATION_IN_PROGRESS</code> — from
   * <code>StartCampaignAssetActivationTask</code> and <code>DeleteCampaign</code>,
   * refusing the whole request: one activation task runs on a campaign at a time.
   * <code>ResourceId</code> carries the <strong>holding task's id</strong>, so a
   * caller can poll <code>GetCampaignAssetActivationTask</code> rather than guess.
   * Retryable once that task reaches a terminal status.</p>
   * <p><code>SERVICE_LINKED_ROLE_DELETION_IN_PROGRESS</code> — from
   * <code>StartCampaignAssetActivationTask</code>, refusing the whole request: this
   * service's service-linked role is being deleted, so no asset may go live. Not a
   * lease conflict: <code>ResourceId</code> is unset and there is no task to poll.
   * Retryable after a short wait; if the role was deleted, the next activation
   * recreates it.</p> <p><code>LAYOUT_LOCKED_AFTER_ACTIVATION</code> — from
   * <code>UpdateCampaignAsset</code>, refusing a <code>Layout</code> change on a
   * multi-layout asset that has activated successfully at least once (DG-044). The
   * published object is that layout's, so switching would leave the asset describing
   * a layout that is not the one live. <strong>Not fixable</strong>: the asset keeps
   * its layout for life. A failed activation does not lock it. Re-sending the layout
   * already selected is not a change and is accepted. <code>ResourceId</code>
   * carries the asset identifier.</p> <p><code>ASSET_START_IN_PROGRESS</code> — also
   * from <code>UpdateCampaignAsset</code>, refusing any edit to an asset the
   * campaign's running activation task has accepted and not yet finished: the run
   * publishes the content it read, so an edit accepted mid-run would either be
   * published unvalidated or never published. Nothing is written. Retryable once the
   * asset's outcome on the task (<code>GetCampaignAssetActivationTask</code>) is
   * terminal; the asset's siblings may still be running. <code>ResourceId</code>
   * carries the asset identifier.</p> <p><code>ASSET_ALREADY_ACTIVE</code> — from
   * <code>UpdateCampaignAsset</code>, refusing any change to a live email or social
   * post, content or schedule. Deactivate it first; the next activation sends
   * everything current. Landing pages and documents are edited live and converge by
   * re-activation. <code>ResourceId</code> carries the asset identifier.</p>
   * <p><code>ASSET_NOT_DEACTIVATABLE</code> — from
   * <code>DeactivateCampaignAsset</code>, for an asset that can't be stopped: a
   * document, banner or landing page until the campaign has completed, when it
   * becomes removable. Until then, update it and activate it again.
   * <code>ResourceId</code> carries the asset identifier.</p>
   * <p><code>ASSET_HAS_LOCKED_SENDS</code> — from
   * <code>DeactivateCampaignAsset</code>, within an hour of the asset's send (a
   * social post's publish), when it can no longer be withdrawn.
   * <code>ASSET_ALREADY_DELIVERED</code> — the same, once that time has passed: a
   * sent email or a published post cannot be recalled. Neither is retryable.</p>
   * <p>Three values were removed with the campaign lifecycle and the singular
   * activate, and none should be re-added here:</p> <ul>
   * <li><code>CAMPAIGN_NOT_STARTED</code> — a campaign has no state to be started
   * out of.</li> <li><code>ASSET_NOT_STARTABLE</code> — moved to
   * <code>ValidationException</code>, with no reason. The value's own documentation
   * said it was &quot;not retryable and not fixable: it is a property of the asset's
   * type&quot;, and <code>ConflictException</code> promises a state that may change.
   * The gate itself stays — deleting it lets a download-only asset into a task with
   * no dispatch arm, which would succeed and do nothing.</li>
   * <li><code>ASSET_START_UNCONFIRMED</code> — described a state that no longer
   * occurs. DG cannot be more idempotent than a platform whose social create has no
   * idempotency key, so an ambiguous hand-over is now an ordinary failure carrying
   * <code>INTERNAL_ERROR</code>. Holding the asset in a distinct state bought a
   * guarantee that was never real, and had no exit.</li> </ul>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  ConflictException& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::String m_resourceId;

  Aws::String m_resourceType;

  Aws::String m_reason;
  bool m_messageHasBeenSet = false;
  bool m_resourceIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws
