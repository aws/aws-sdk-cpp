﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to enable or disable the automatic IP address warm-up
   * feature.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutAccountDedicatedIpWarmupAttributesRequest">AWS
   * API Reference</a></p>
   */
  class PutAccountDedicatedIpWarmupAttributesRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API PutAccountDedicatedIpWarmupAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountDedicatedIpWarmupAttributes"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Enables or disables the automatic warm-up feature for dedicated IP addresses
     * that are associated with your Amazon Pinpoint account in the current AWS Region.
     * Set to <code>true</code> to enable the automatic warm-up feature, or set to
     * <code>false</code> to disable it.</p>
     */
    inline bool GetAutoWarmupEnabled() const { return m_autoWarmupEnabled; }
    inline bool AutoWarmupEnabledHasBeenSet() const { return m_autoWarmupEnabledHasBeenSet; }
    inline void SetAutoWarmupEnabled(bool value) { m_autoWarmupEnabledHasBeenSet = true; m_autoWarmupEnabled = value; }
    inline PutAccountDedicatedIpWarmupAttributesRequest& WithAutoWarmupEnabled(bool value) { SetAutoWarmupEnabled(value); return *this;}
    ///@}
  private:

    bool m_autoWarmupEnabled{false};
    bool m_autoWarmupEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
