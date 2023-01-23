/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to change the ability of your account to send email.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountSendingAttributesRequest">AWS
   * API Reference</a></p>
   */
  class PutAccountSendingAttributesRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API PutAccountSendingAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountSendingAttributes"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p>Enables or disables your account's ability to send email. Set to
     * <code>true</code> to enable email sending, or set to <code>false</code> to
     * disable email sending.</p>  <p>If Amazon Web Services paused your
     * account's ability to send email, you can't use this operation to resume your
     * account's ability to send email.</p> 
     */
    inline bool GetSendingEnabled() const{ return m_sendingEnabled; }

    /**
     * <p>Enables or disables your account's ability to send email. Set to
     * <code>true</code> to enable email sending, or set to <code>false</code> to
     * disable email sending.</p>  <p>If Amazon Web Services paused your
     * account's ability to send email, you can't use this operation to resume your
     * account's ability to send email.</p> 
     */
    inline bool SendingEnabledHasBeenSet() const { return m_sendingEnabledHasBeenSet; }

    /**
     * <p>Enables or disables your account's ability to send email. Set to
     * <code>true</code> to enable email sending, or set to <code>false</code> to
     * disable email sending.</p>  <p>If Amazon Web Services paused your
     * account's ability to send email, you can't use this operation to resume your
     * account's ability to send email.</p> 
     */
    inline void SetSendingEnabled(bool value) { m_sendingEnabledHasBeenSet = true; m_sendingEnabled = value; }

    /**
     * <p>Enables or disables your account's ability to send email. Set to
     * <code>true</code> to enable email sending, or set to <code>false</code> to
     * disable email sending.</p>  <p>If Amazon Web Services paused your
     * account's ability to send email, you can't use this operation to resume your
     * account's ability to send email.</p> 
     */
    inline PutAccountSendingAttributesRequest& WithSendingEnabled(bool value) { SetSendingEnabled(value); return *this;}

  private:

    bool m_sendingEnabled;
    bool m_sendingEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
