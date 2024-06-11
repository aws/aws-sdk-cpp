﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to enable or disable DKIM signing of email that you send from an
   * email identity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutEmailIdentityDkimAttributesRequest">AWS
   * API Reference</a></p>
   */
  class PutEmailIdentityDkimAttributesRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API PutEmailIdentityDkimAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEmailIdentityDkimAttributes"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The email identity that you want to change the DKIM settings for.</p>
     */
    inline const Aws::String& GetEmailIdentity() const{ return m_emailIdentity; }
    inline bool EmailIdentityHasBeenSet() const { return m_emailIdentityHasBeenSet; }
    inline void SetEmailIdentity(const Aws::String& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = value; }
    inline void SetEmailIdentity(Aws::String&& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = std::move(value); }
    inline void SetEmailIdentity(const char* value) { m_emailIdentityHasBeenSet = true; m_emailIdentity.assign(value); }
    inline PutEmailIdentityDkimAttributesRequest& WithEmailIdentity(const Aws::String& value) { SetEmailIdentity(value); return *this;}
    inline PutEmailIdentityDkimAttributesRequest& WithEmailIdentity(Aws::String&& value) { SetEmailIdentity(std::move(value)); return *this;}
    inline PutEmailIdentityDkimAttributesRequest& WithEmailIdentity(const char* value) { SetEmailIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the DKIM signing configuration for the identity.</p> <p>When you set
     * this value <code>true</code>, then the messages that Amazon Pinpoint sends from
     * the identity are DKIM-signed. When you set this value to <code>false</code>,
     * then the messages that Amazon Pinpoint sends from the identity aren't
     * DKIM-signed.</p>
     */
    inline bool GetSigningEnabled() const{ return m_signingEnabled; }
    inline bool SigningEnabledHasBeenSet() const { return m_signingEnabledHasBeenSet; }
    inline void SetSigningEnabled(bool value) { m_signingEnabledHasBeenSet = true; m_signingEnabled = value; }
    inline PutEmailIdentityDkimAttributesRequest& WithSigningEnabled(bool value) { SetSigningEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_emailIdentity;
    bool m_emailIdentityHasBeenSet = false;

    bool m_signingEnabled;
    bool m_signingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
