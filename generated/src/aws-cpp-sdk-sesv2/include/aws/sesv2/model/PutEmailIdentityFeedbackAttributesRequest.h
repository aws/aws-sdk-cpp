/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to set the attributes that control how bounce and complaint events
   * are processed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutEmailIdentityFeedbackAttributesRequest">AWS
   * API Reference</a></p>
   */
  class PutEmailIdentityFeedbackAttributesRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API PutEmailIdentityFeedbackAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutEmailIdentityFeedbackAttributes"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The email identity.</p>
     */
    inline const Aws::String& GetEmailIdentity() const { return m_emailIdentity; }
    inline bool EmailIdentityHasBeenSet() const { return m_emailIdentityHasBeenSet; }
    template<typename EmailIdentityT = Aws::String>
    void SetEmailIdentity(EmailIdentityT&& value) { m_emailIdentityHasBeenSet = true; m_emailIdentity = std::forward<EmailIdentityT>(value); }
    template<typename EmailIdentityT = Aws::String>
    PutEmailIdentityFeedbackAttributesRequest& WithEmailIdentity(EmailIdentityT&& value) { SetEmailIdentity(std::forward<EmailIdentityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the feedback forwarding configuration for the identity.</p> <p>If the
     * value is <code>true</code>, you receive email notifications when bounce or
     * complaint events occur. These notifications are sent to the address that you
     * specified in the <code>Return-Path</code> header of the original email.</p>
     * <p>You're required to have a method of tracking bounces and complaints. If you
     * haven't set up another mechanism for receiving bounce or complaint notifications
     * (for example, by setting up an event destination), you receive an email
     * notification when these events occur (even if this setting is disabled).</p>
     */
    inline bool GetEmailForwardingEnabled() const { return m_emailForwardingEnabled; }
    inline bool EmailForwardingEnabledHasBeenSet() const { return m_emailForwardingEnabledHasBeenSet; }
    inline void SetEmailForwardingEnabled(bool value) { m_emailForwardingEnabledHasBeenSet = true; m_emailForwardingEnabled = value; }
    inline PutEmailIdentityFeedbackAttributesRequest& WithEmailForwardingEnabled(bool value) { SetEmailForwardingEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_emailIdentity;
    bool m_emailIdentityHasBeenSet = false;

    bool m_emailForwardingEnabled{false};
    bool m_emailForwardingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
