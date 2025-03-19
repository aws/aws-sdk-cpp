/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Encryption.h>
#include <aws/mediaconnect/model/EntitlementStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaConnect
{
namespace Model
{

  /**
   * <p> The settings for a flow entitlement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Entitlement">AWS
   * API Reference</a></p>
   */
  class Entitlement
  {
  public:
    AWS_MEDIACONNECT_API Entitlement() = default;
    AWS_MEDIACONNECT_API Entitlement(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Entitlement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Percentage from 0-100 of the data transfer cost to be billed to the
     * subscriber.</p>
     */
    inline int GetDataTransferSubscriberFeePercent() const { return m_dataTransferSubscriberFeePercent; }
    inline bool DataTransferSubscriberFeePercentHasBeenSet() const { return m_dataTransferSubscriberFeePercentHasBeenSet; }
    inline void SetDataTransferSubscriberFeePercent(int value) { m_dataTransferSubscriberFeePercentHasBeenSet = true; m_dataTransferSubscriberFeePercent = value; }
    inline Entitlement& WithDataTransferSubscriberFeePercent(int value) { SetDataTransferSubscriberFeePercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the entitlement.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Entitlement& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of encryption that will be used on the output that is associated
     * with this entitlement.</p>
     */
    inline const Encryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = Encryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = Encryption>
    Entitlement& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the entitlement. </p>
     */
    inline const Aws::String& GetEntitlementArn() const { return m_entitlementArn; }
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }
    template<typename EntitlementArnT = Aws::String>
    void SetEntitlementArn(EntitlementArnT&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::forward<EntitlementArnT>(value); }
    template<typename EntitlementArnT = Aws::String>
    Entitlement& WithEntitlementArn(EntitlementArnT&& value) { SetEntitlementArn(std::forward<EntitlementArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An indication of whether the entitlement is enabled. </p>
     */
    inline EntitlementStatus GetEntitlementStatus() const { return m_entitlementStatus; }
    inline bool EntitlementStatusHasBeenSet() const { return m_entitlementStatusHasBeenSet; }
    inline void SetEntitlementStatus(EntitlementStatus value) { m_entitlementStatusHasBeenSet = true; m_entitlementStatus = value; }
    inline Entitlement& WithEntitlementStatus(EntitlementStatus value) { SetEntitlementStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the entitlement. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Entitlement& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services account IDs that you want to share your content
     * with. The receiving accounts (subscribers) will be allowed to create their own
     * flow using your content as the source. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubscribers() const { return m_subscribers; }
    inline bool SubscribersHasBeenSet() const { return m_subscribersHasBeenSet; }
    template<typename SubscribersT = Aws::Vector<Aws::String>>
    void SetSubscribers(SubscribersT&& value) { m_subscribersHasBeenSet = true; m_subscribers = std::forward<SubscribersT>(value); }
    template<typename SubscribersT = Aws::Vector<Aws::String>>
    Entitlement& WithSubscribers(SubscribersT&& value) { SetSubscribers(std::forward<SubscribersT>(value)); return *this;}
    template<typename SubscribersT = Aws::String>
    Entitlement& AddSubscribers(SubscribersT&& value) { m_subscribersHasBeenSet = true; m_subscribers.emplace_back(std::forward<SubscribersT>(value)); return *this; }
    ///@}
  private:

    int m_dataTransferSubscriberFeePercent{0};
    bool m_dataTransferSubscriberFeePercentHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet = false;

    EntitlementStatus m_entitlementStatus{EntitlementStatus::NOT_SET};
    bool m_entitlementStatusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_subscribers;
    bool m_subscribersHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
