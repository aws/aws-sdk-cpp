﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Options for enabling a customizable text banner that will be displayed on
   * Amazon Web Services provided clients when a VPN session is established.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails() = default;
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Current state of text banner feature. </p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Customizable text that will be displayed in a banner on Amazon Web Services
     * provided clients when a VPN session is established. </p>
     */
    inline const Aws::String& GetBannerText() const { return m_bannerText; }
    inline bool BannerTextHasBeenSet() const { return m_bannerTextHasBeenSet; }
    template<typename BannerTextT = Aws::String>
    void SetBannerText(BannerTextT&& value) { m_bannerTextHasBeenSet = true; m_bannerText = std::forward<BannerTextT>(value); }
    template<typename BannerTextT = Aws::String>
    AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails& WithBannerText(BannerTextT&& value) { SetBannerText(std::forward<BannerTextT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_bannerText;
    bool m_bannerTextHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
