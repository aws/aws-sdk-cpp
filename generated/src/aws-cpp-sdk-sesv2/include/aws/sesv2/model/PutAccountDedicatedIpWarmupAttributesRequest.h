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
   * <p>A request to enable or disable the automatic IP address warm-up
   * feature.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutAccountDedicatedIpWarmupAttributesRequest">AWS
   * API Reference</a></p>
   */
  class PutAccountDedicatedIpWarmupAttributesRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API PutAccountDedicatedIpWarmupAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountDedicatedIpWarmupAttributes"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p>Enables or disables the automatic warm-up feature for dedicated IP addresses
     * that are associated with your Amazon SES account in the current Amazon Web
     * Services Region. Set to <code>true</code> to enable the automatic warm-up
     * feature, or set to <code>false</code> to disable it.</p>
     */
    inline bool GetAutoWarmupEnabled() const{ return m_autoWarmupEnabled; }

    /**
     * <p>Enables or disables the automatic warm-up feature for dedicated IP addresses
     * that are associated with your Amazon SES account in the current Amazon Web
     * Services Region. Set to <code>true</code> to enable the automatic warm-up
     * feature, or set to <code>false</code> to disable it.</p>
     */
    inline bool AutoWarmupEnabledHasBeenSet() const { return m_autoWarmupEnabledHasBeenSet; }

    /**
     * <p>Enables or disables the automatic warm-up feature for dedicated IP addresses
     * that are associated with your Amazon SES account in the current Amazon Web
     * Services Region. Set to <code>true</code> to enable the automatic warm-up
     * feature, or set to <code>false</code> to disable it.</p>
     */
    inline void SetAutoWarmupEnabled(bool value) { m_autoWarmupEnabledHasBeenSet = true; m_autoWarmupEnabled = value; }

    /**
     * <p>Enables or disables the automatic warm-up feature for dedicated IP addresses
     * that are associated with your Amazon SES account in the current Amazon Web
     * Services Region. Set to <code>true</code> to enable the automatic warm-up
     * feature, or set to <code>false</code> to disable it.</p>
     */
    inline PutAccountDedicatedIpWarmupAttributesRequest& WithAutoWarmupEnabled(bool value) { SetAutoWarmupEnabled(value); return *this;}

  private:

    bool m_autoWarmupEnabled;
    bool m_autoWarmupEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
