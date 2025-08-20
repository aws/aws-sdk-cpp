/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class UpdatePhoneNumberRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API UpdatePhoneNumberRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePhoneNumber"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the phone number. Valid values for this field can be
     * either the PhoneNumberId or PhoneNumberArn.</p>  <p>If you are using
     * a shared AWS End User Messaging SMS and Voice resource then you must use the
     * full Amazon Resource Name(ARN).</p> 
     */
    inline const Aws::String& GetPhoneNumberId() const { return m_phoneNumberId; }
    inline bool PhoneNumberIdHasBeenSet() const { return m_phoneNumberIdHasBeenSet; }
    template<typename PhoneNumberIdT = Aws::String>
    void SetPhoneNumberId(PhoneNumberIdT&& value) { m_phoneNumberIdHasBeenSet = true; m_phoneNumberId = std::forward<PhoneNumberIdT>(value); }
    template<typename PhoneNumberIdT = Aws::String>
    UpdatePhoneNumberRequest& WithPhoneNumberId(PhoneNumberIdT&& value) { SetPhoneNumberId(std::forward<PhoneNumberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default this is set to false. When set to true you can receive incoming
     * text messages from your end recipients.</p>
     */
    inline bool GetTwoWayEnabled() const { return m_twoWayEnabled; }
    inline bool TwoWayEnabledHasBeenSet() const { return m_twoWayEnabledHasBeenSet; }
    inline void SetTwoWayEnabled(bool value) { m_twoWayEnabledHasBeenSet = true; m_twoWayEnabled = value; }
    inline UpdatePhoneNumberRequest& WithTwoWayEnabled(bool value) { SetTwoWayEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the two way channel.</p>
     */
    inline const Aws::String& GetTwoWayChannelArn() const { return m_twoWayChannelArn; }
    inline bool TwoWayChannelArnHasBeenSet() const { return m_twoWayChannelArnHasBeenSet; }
    template<typename TwoWayChannelArnT = Aws::String>
    void SetTwoWayChannelArn(TwoWayChannelArnT&& value) { m_twoWayChannelArnHasBeenSet = true; m_twoWayChannelArn = std::forward<TwoWayChannelArnT>(value); }
    template<typename TwoWayChannelArnT = Aws::String>
    UpdatePhoneNumberRequest& WithTwoWayChannelArn(TwoWayChannelArnT&& value) { SetTwoWayChannelArn(std::forward<TwoWayChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional IAM Role Arn for a service to assume, to be able to post inbound
     * SMS messages.</p>
     */
    inline const Aws::String& GetTwoWayChannelRole() const { return m_twoWayChannelRole; }
    inline bool TwoWayChannelRoleHasBeenSet() const { return m_twoWayChannelRoleHasBeenSet; }
    template<typename TwoWayChannelRoleT = Aws::String>
    void SetTwoWayChannelRole(TwoWayChannelRoleT&& value) { m_twoWayChannelRoleHasBeenSet = true; m_twoWayChannelRole = std::forward<TwoWayChannelRoleT>(value); }
    template<typename TwoWayChannelRoleT = Aws::String>
    UpdatePhoneNumberRequest& WithTwoWayChannelRole(TwoWayChannelRoleT&& value) { SetTwoWayChannelRole(std::forward<TwoWayChannelRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default this is set to false. When an end recipient sends a message that
     * begins with HELP or STOP to one of your dedicated numbers, AWS End User
     * Messaging SMS and Voice automatically replies with a customizable message and
     * adds the end recipient to the OptOutList. When set to true you're responsible
     * for responding to HELP and STOP requests. You're also responsible for tracking
     * and honoring opt-out requests.</p>
     */
    inline bool GetSelfManagedOptOutsEnabled() const { return m_selfManagedOptOutsEnabled; }
    inline bool SelfManagedOptOutsEnabledHasBeenSet() const { return m_selfManagedOptOutsEnabledHasBeenSet; }
    inline void SetSelfManagedOptOutsEnabled(bool value) { m_selfManagedOptOutsEnabledHasBeenSet = true; m_selfManagedOptOutsEnabled = value; }
    inline UpdatePhoneNumberRequest& WithSelfManagedOptOutsEnabled(bool value) { SetSelfManagedOptOutsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OptOutList to add the phone number to. Valid values for this field can be
     * either the OutOutListName or OutOutListArn.</p>
     */
    inline const Aws::String& GetOptOutListName() const { return m_optOutListName; }
    inline bool OptOutListNameHasBeenSet() const { return m_optOutListNameHasBeenSet; }
    template<typename OptOutListNameT = Aws::String>
    void SetOptOutListName(OptOutListNameT&& value) { m_optOutListNameHasBeenSet = true; m_optOutListName = std::forward<OptOutListNameT>(value); }
    template<typename OptOutListNameT = Aws::String>
    UpdatePhoneNumberRequest& WithOptOutListName(OptOutListNameT&& value) { SetOptOutListName(std::forward<OptOutListNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default this is set to false. When set to true the international sending
     * of phone number is Enabled. </p>
     */
    inline bool GetInternationalSendingEnabled() const { return m_internationalSendingEnabled; }
    inline bool InternationalSendingEnabledHasBeenSet() const { return m_internationalSendingEnabledHasBeenSet; }
    inline void SetInternationalSendingEnabled(bool value) { m_internationalSendingEnabledHasBeenSet = true; m_internationalSendingEnabled = value; }
    inline UpdatePhoneNumberRequest& WithInternationalSendingEnabled(bool value) { SetInternationalSendingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default this is set to false. When set to true the phone number can't be
     * deleted. </p>
     */
    inline bool GetDeletionProtectionEnabled() const { return m_deletionProtectionEnabled; }
    inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }
    inline UpdatePhoneNumberRequest& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_phoneNumberId;
    bool m_phoneNumberIdHasBeenSet = false;

    bool m_twoWayEnabled{false};
    bool m_twoWayEnabledHasBeenSet = false;

    Aws::String m_twoWayChannelArn;
    bool m_twoWayChannelArnHasBeenSet = false;

    Aws::String m_twoWayChannelRole;
    bool m_twoWayChannelRoleHasBeenSet = false;

    bool m_selfManagedOptOutsEnabled{false};
    bool m_selfManagedOptOutsEnabledHasBeenSet = false;

    Aws::String m_optOutListName;
    bool m_optOutListNameHasBeenSet = false;

    bool m_internationalSendingEnabled{false};
    bool m_internationalSendingEnabledHasBeenSet = false;

    bool m_deletionProtectionEnabled{false};
    bool m_deletionProtectionEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
