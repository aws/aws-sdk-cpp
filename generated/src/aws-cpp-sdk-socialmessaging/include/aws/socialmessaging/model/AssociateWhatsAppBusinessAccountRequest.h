/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/SocialMessagingRequest.h>
#include <aws/socialmessaging/model/WhatsAppSignupCallback.h>
#include <aws/socialmessaging/model/WhatsAppSetupFinalization.h>
#include <utility>

namespace Aws
{
namespace SocialMessaging
{
namespace Model
{

  /**
   */
  class AssociateWhatsAppBusinessAccountRequest : public SocialMessagingRequest
  {
  public:
    AWS_SOCIALMESSAGING_API AssociateWhatsAppBusinessAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateWhatsAppBusinessAccount"; }

    AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Contains the callback access token.</p>
     */
    inline const WhatsAppSignupCallback& GetSignupCallback() const{ return m_signupCallback; }
    inline bool SignupCallbackHasBeenSet() const { return m_signupCallbackHasBeenSet; }
    inline void SetSignupCallback(const WhatsAppSignupCallback& value) { m_signupCallbackHasBeenSet = true; m_signupCallback = value; }
    inline void SetSignupCallback(WhatsAppSignupCallback&& value) { m_signupCallbackHasBeenSet = true; m_signupCallback = std::move(value); }
    inline AssociateWhatsAppBusinessAccountRequest& WithSignupCallback(const WhatsAppSignupCallback& value) { SetSignupCallback(value); return *this;}
    inline AssociateWhatsAppBusinessAccountRequest& WithSignupCallback(WhatsAppSignupCallback&& value) { SetSignupCallback(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON object that contains the phone numbers and WhatsApp Business Account
     * to link to your account.</p>
     */
    inline const WhatsAppSetupFinalization& GetSetupFinalization() const{ return m_setupFinalization; }
    inline bool SetupFinalizationHasBeenSet() const { return m_setupFinalizationHasBeenSet; }
    inline void SetSetupFinalization(const WhatsAppSetupFinalization& value) { m_setupFinalizationHasBeenSet = true; m_setupFinalization = value; }
    inline void SetSetupFinalization(WhatsAppSetupFinalization&& value) { m_setupFinalizationHasBeenSet = true; m_setupFinalization = std::move(value); }
    inline AssociateWhatsAppBusinessAccountRequest& WithSetupFinalization(const WhatsAppSetupFinalization& value) { SetSetupFinalization(value); return *this;}
    inline AssociateWhatsAppBusinessAccountRequest& WithSetupFinalization(WhatsAppSetupFinalization&& value) { SetSetupFinalization(std::move(value)); return *this;}
    ///@}
  private:

    WhatsAppSignupCallback m_signupCallback;
    bool m_signupCallbackHasBeenSet = false;

    WhatsAppSetupFinalization m_setupFinalization;
    bool m_setupFinalizationHasBeenSet = false;
  };

} // namespace Model
} // namespace SocialMessaging
} // namespace Aws
