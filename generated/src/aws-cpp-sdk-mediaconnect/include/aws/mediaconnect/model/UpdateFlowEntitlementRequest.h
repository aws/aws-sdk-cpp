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
   * The entitlement fields that you want to update.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/UpdateFlowEntitlementRequest">AWS
   * API Reference</a></p>
   */
  class UpdateFlowEntitlementRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API UpdateFlowEntitlementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFlowEntitlement"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * A description of the entitlement. This description appears only on the AWS
     * Elemental MediaConnect console and will not be seen by the subscriber or end
     * user.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateFlowEntitlementRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateFlowEntitlementRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateFlowEntitlementRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * The type of encryption that will be used on the output associated with this
     * entitlement. Allowable encryption types: static-key, speke.
     */
    inline const UpdateEncryption& GetEncryption() const{ return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    inline void SetEncryption(const UpdateEncryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }
    inline void SetEncryption(UpdateEncryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }
    inline UpdateFlowEntitlementRequest& WithEncryption(const UpdateEncryption& value) { SetEncryption(value); return *this;}
    inline UpdateFlowEntitlementRequest& WithEncryption(UpdateEncryption&& value) { SetEncryption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the entitlement that you want to update.
     */
    inline const Aws::String& GetEntitlementArn() const{ return m_entitlementArn; }
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }
    inline void SetEntitlementArn(const Aws::String& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = value; }
    inline void SetEntitlementArn(Aws::String&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::move(value); }
    inline void SetEntitlementArn(const char* value) { m_entitlementArnHasBeenSet = true; m_entitlementArn.assign(value); }
    inline UpdateFlowEntitlementRequest& WithEntitlementArn(const Aws::String& value) { SetEntitlementArn(value); return *this;}
    inline UpdateFlowEntitlementRequest& WithEntitlementArn(Aws::String&& value) { SetEntitlementArn(std::move(value)); return *this;}
    inline UpdateFlowEntitlementRequest& WithEntitlementArn(const char* value) { SetEntitlementArn(value); return *this;}
    ///@}

    ///@{
    /**
     * An indication of whether you want to enable the entitlement to allow access, or
     * disable it to stop streaming content to the subscriber’s flow temporarily. If
     * you don’t specify the entitlementStatus field in your request, MediaConnect
     * leaves the value unchanged.
     */
    inline const EntitlementStatus& GetEntitlementStatus() const{ return m_entitlementStatus; }
    inline bool EntitlementStatusHasBeenSet() const { return m_entitlementStatusHasBeenSet; }
    inline void SetEntitlementStatus(const EntitlementStatus& value) { m_entitlementStatusHasBeenSet = true; m_entitlementStatus = value; }
    inline void SetEntitlementStatus(EntitlementStatus&& value) { m_entitlementStatusHasBeenSet = true; m_entitlementStatus = std::move(value); }
    inline UpdateFlowEntitlementRequest& WithEntitlementStatus(const EntitlementStatus& value) { SetEntitlementStatus(value); return *this;}
    inline UpdateFlowEntitlementRequest& WithEntitlementStatus(EntitlementStatus&& value) { SetEntitlementStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The flow that is associated with the entitlement that you want to update.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }
    inline UpdateFlowEntitlementRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline UpdateFlowEntitlementRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline UpdateFlowEntitlementRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The AWS account IDs that you want to share your content with. The receiving
     * accounts (subscribers) will be allowed to create their own flow using your
     * content as the source.
     */
    inline const Aws::Vector<Aws::String>& GetSubscribers() const{ return m_subscribers; }
    inline bool SubscribersHasBeenSet() const { return m_subscribersHasBeenSet; }
    inline void SetSubscribers(const Aws::Vector<Aws::String>& value) { m_subscribersHasBeenSet = true; m_subscribers = value; }
    inline void SetSubscribers(Aws::Vector<Aws::String>&& value) { m_subscribersHasBeenSet = true; m_subscribers = std::move(value); }
    inline UpdateFlowEntitlementRequest& WithSubscribers(const Aws::Vector<Aws::String>& value) { SetSubscribers(value); return *this;}
    inline UpdateFlowEntitlementRequest& WithSubscribers(Aws::Vector<Aws::String>&& value) { SetSubscribers(std::move(value)); return *this;}
    inline UpdateFlowEntitlementRequest& AddSubscribers(const Aws::String& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(value); return *this; }
    inline UpdateFlowEntitlementRequest& AddSubscribers(Aws::String&& value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(std::move(value)); return *this; }
    inline UpdateFlowEntitlementRequest& AddSubscribers(const char* value) { m_subscribersHasBeenSet = true; m_subscribers.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    UpdateEncryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet = false;

    EntitlementStatus m_entitlementStatus;
    bool m_entitlementStatusHasBeenSet = false;

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_subscribers;
    bool m_subscribersHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
