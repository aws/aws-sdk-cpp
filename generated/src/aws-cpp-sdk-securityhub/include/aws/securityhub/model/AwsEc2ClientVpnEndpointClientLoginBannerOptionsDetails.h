/**
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
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails();
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Current state of text banner feature. </p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p> Current state of text banner feature. </p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p> Current state of text banner feature. </p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p> Current state of text banner feature. </p>
     */
    inline AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p> Customizable text that will be displayed in a banner on Amazon Web Services
     * provided clients when a VPN session is established. </p>
     */
    inline const Aws::String& GetBannerText() const{ return m_bannerText; }

    /**
     * <p> Customizable text that will be displayed in a banner on Amazon Web Services
     * provided clients when a VPN session is established. </p>
     */
    inline bool BannerTextHasBeenSet() const { return m_bannerTextHasBeenSet; }

    /**
     * <p> Customizable text that will be displayed in a banner on Amazon Web Services
     * provided clients when a VPN session is established. </p>
     */
    inline void SetBannerText(const Aws::String& value) { m_bannerTextHasBeenSet = true; m_bannerText = value; }

    /**
     * <p> Customizable text that will be displayed in a banner on Amazon Web Services
     * provided clients when a VPN session is established. </p>
     */
    inline void SetBannerText(Aws::String&& value) { m_bannerTextHasBeenSet = true; m_bannerText = std::move(value); }

    /**
     * <p> Customizable text that will be displayed in a banner on Amazon Web Services
     * provided clients when a VPN session is established. </p>
     */
    inline void SetBannerText(const char* value) { m_bannerTextHasBeenSet = true; m_bannerText.assign(value); }

    /**
     * <p> Customizable text that will be displayed in a banner on Amazon Web Services
     * provided clients when a VPN session is established. </p>
     */
    inline AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails& WithBannerText(const Aws::String& value) { SetBannerText(value); return *this;}

    /**
     * <p> Customizable text that will be displayed in a banner on Amazon Web Services
     * provided clients when a VPN session is established. </p>
     */
    inline AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails& WithBannerText(Aws::String&& value) { SetBannerText(std::move(value)); return *this;}

    /**
     * <p> Customizable text that will be displayed in a banner on Amazon Web Services
     * provided clients when a VPN session is established. </p>
     */
    inline AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails& WithBannerText(const char* value) { SetBannerText(value); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_bannerText;
    bool m_bannerTextHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
