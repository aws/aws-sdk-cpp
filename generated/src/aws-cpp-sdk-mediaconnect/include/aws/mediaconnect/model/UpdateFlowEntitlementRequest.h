/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/UpdateEncryption.h>
#include <aws/mediaconnect/model/EntitlementStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class UpdateFlowEntitlementRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateFlowEntitlementRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFlowEntitlement"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> A description of the entitlement. This description appears only on the
     * MediaConnect console and will not be seen by the subscriber or end user.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateFlowEntitlementRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of encryption that will be used on the output associated with this
     * entitlement. Allowable encryption types: static-key, speke.</p>
     */
    inline const UpdateEncryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = UpdateEncryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = UpdateEncryption>
    UpdateFlowEntitlementRequest& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the entitlement that you want to
     * update.</p>
     */
    inline const Aws::String& GetEntitlementArn() const { return m_entitlementArn; }
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }
    template<typename EntitlementArnT = Aws::String>
    void SetEntitlementArn(EntitlementArnT&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::forward<EntitlementArnT>(value); }
    template<typename EntitlementArnT = Aws::String>
    UpdateFlowEntitlementRequest& WithEntitlementArn(EntitlementArnT&& value) { SetEntitlementArn(std::forward<EntitlementArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An indication of whether you want to enable the entitlement to allow access,
     * or disable it to stop streaming content to the subscriber’s flow temporarily. If
     * you don’t specify the <code>entitlementStatus</code> field in your request,
     * MediaConnect leaves the value unchanged.</p>
     */
    inline EntitlementStatus GetEntitlementStatus() const { return m_entitlementStatus; }
    inline bool EntitlementStatusHasBeenSet() const { return m_entitlementStatusHasBeenSet; }
    inline void SetEntitlementStatus(EntitlementStatus value) { m_entitlementStatusHasBeenSet = true; m_entitlementStatus = value; }
    inline UpdateFlowEntitlementRequest& WithEntitlementStatus(EntitlementStatus value) { SetEntitlementStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the flow that is associated with the entitlement that you want to
     * update.</p>
     */
    inline const Aws::String& GetFlowArn() const { return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    template<typename FlowArnT = Aws::String>
    void SetFlowArn(FlowArnT&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::forward<FlowArnT>(value); }
    template<typename FlowArnT = Aws::String>
    UpdateFlowEntitlementRequest& WithFlowArn(FlowArnT&& value) { SetFlowArn(std::forward<FlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account IDs that you want to share your content
     * with. The receiving accounts (subscribers) will be allowed to create their own
     * flow using your content as the source.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubscribers() const { return m_subscribers; }
    inline bool SubscribersHasBeenSet() const { return m_subscribersHasBeenSet; }
    template<typename SubscribersT = Aws::Vector<Aws::String>>
    void SetSubscribers(SubscribersT&& value) { m_subscribersHasBeenSet = true; m_subscribers = std::forward<SubscribersT>(value); }
    template<typename SubscribersT = Aws::Vector<Aws::String>>
    UpdateFlowEntitlementRequest& WithSubscribers(SubscribersT&& value) { SetSubscribers(std::forward<SubscribersT>(value)); return *this;}
    template<typename SubscribersT = Aws::String>
    UpdateFlowEntitlementRequest& AddSubscribers(SubscribersT&& value) { m_subscribersHasBeenSet = true; m_subscribers.emplace_back(std::forward<SubscribersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    UpdateEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet = false;

    EntitlementStatus m_entitlementStatus{EntitlementStatus::NOT_SET};
    bool m_entitlementStatusHasBeenSet = false;

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_subscribers;
    bool m_subscribersHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
