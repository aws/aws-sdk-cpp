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
   * <p>A request to set the attributes that control how bounce and complaint events
   * are processed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutEmailIdentityFeedbackAttributesRequest">AWS
   * API Reference</a></p>
   */
  class PutEmailIdentityFeedbackAttributesRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API PutEmailIdentityFeedbackAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEmailIdentityFeedbackAttributes"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The email identity that you want to configure bounce and complaint feedback
     * forwarding for.</p>
     */
    inline const Aws::String& GetEmailIdentity() const{ return m_emailIdentity; }
    inline bool EmailIdentityHasBeenSet() const { return m_emailIdentityHasBeenSet; }
    inline void SetEmailIdentity(const Aws::String& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = value; }
    inline void SetEmailIdentity(Aws::String&& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = std::move(value); }
    inline void SetEmailIdentity(const char* value) { m_emailIdentityHasBeenSet = true; m_emailIdentity.assign(value); }
    inline PutEmailIdentityFeedbackAttributesRequest& WithEmailIdentity(const Aws::String& value) { SetEmailIdentity(value); return *this;}
    inline PutEmailIdentityFeedbackAttributesRequest& WithEmailIdentity(Aws::String&& value) { SetEmailIdentity(std::move(value)); return *this;}
    inline PutEmailIdentityFeedbackAttributesRequest& WithEmailIdentity(const char* value) { SetEmailIdentity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the feedback forwarding configuration for the identity.</p> <p>If the
     * value is <code>true</code>, Amazon Pinpoint sends you email notifications when
     * bounce or complaint events occur. Amazon Pinpoint sends this notification to the
     * address that you specified in the Return-Path header of the original email.</p>
     * <p>When you set this value to <code>false</code>, Amazon Pinpoint sends
     * notifications through other mechanisms, such as by notifying an Amazon SNS topic
     * or another event destination. You're required to have a method of tracking
     * bounces and complaints. If you haven't set up another mechanism for receiving
     * bounce or complaint notifications, Amazon Pinpoint sends an email notification
     * when these events occur (even if this setting is disabled).</p>
     */
    inline bool GetEmailForwardingEnabled() const{ return m_emailForwardingEnabled; }
    inline bool EmailForwardingEnabledHasBeenSet() const { return m_emailForwardingEnabledHasBeenSet; }
    inline void SetEmailForwardingEnabled(bool value) { m_emailForwardingEnabledHasBeenSet = true; m_emailForwardingEnabled = value; }
    inline PutEmailIdentityFeedbackAttributesRequest& WithEmailForwardingEnabled(bool value) { SetEmailForwardingEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_emailIdentity;
    bool m_emailIdentityHasBeenSet = false;

    bool m_emailForwardingEnabled;
    bool m_emailForwardingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
