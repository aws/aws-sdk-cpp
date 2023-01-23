/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/Attachment.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Creates a site-to-site VPN attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/SiteToSiteVpnAttachment">AWS
   * API Reference</a></p>
   */
  class SiteToSiteVpnAttachment
  {
  public:
    AWS_NETWORKMANAGER_API SiteToSiteVpnAttachment();
    AWS_NETWORKMANAGER_API SiteToSiteVpnAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API SiteToSiteVpnAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides details about a site-to-site VPN attachment.</p>
     */
    inline const Attachment& GetAttachment() const{ return m_attachment; }

    /**
     * <p>Provides details about a site-to-site VPN attachment.</p>
     */
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }

    /**
     * <p>Provides details about a site-to-site VPN attachment.</p>
     */
    inline void SetAttachment(const Attachment& value) { m_attachmentHasBeenSet = true; m_attachment = value; }

    /**
     * <p>Provides details about a site-to-site VPN attachment.</p>
     */
    inline void SetAttachment(Attachment&& value) { m_attachmentHasBeenSet = true; m_attachment = std::move(value); }

    /**
     * <p>Provides details about a site-to-site VPN attachment.</p>
     */
    inline SiteToSiteVpnAttachment& WithAttachment(const Attachment& value) { SetAttachment(value); return *this;}

    /**
     * <p>Provides details about a site-to-site VPN attachment.</p>
     */
    inline SiteToSiteVpnAttachment& WithAttachment(Attachment&& value) { SetAttachment(std::move(value)); return *this;}


    /**
     * <p>The ARN of the site-to-site VPN attachment. </p>
     */
    inline const Aws::String& GetVpnConnectionArn() const{ return m_vpnConnectionArn; }

    /**
     * <p>The ARN of the site-to-site VPN attachment. </p>
     */
    inline bool VpnConnectionArnHasBeenSet() const { return m_vpnConnectionArnHasBeenSet; }

    /**
     * <p>The ARN of the site-to-site VPN attachment. </p>
     */
    inline void SetVpnConnectionArn(const Aws::String& value) { m_vpnConnectionArnHasBeenSet = true; m_vpnConnectionArn = value; }

    /**
     * <p>The ARN of the site-to-site VPN attachment. </p>
     */
    inline void SetVpnConnectionArn(Aws::String&& value) { m_vpnConnectionArnHasBeenSet = true; m_vpnConnectionArn = std::move(value); }

    /**
     * <p>The ARN of the site-to-site VPN attachment. </p>
     */
    inline void SetVpnConnectionArn(const char* value) { m_vpnConnectionArnHasBeenSet = true; m_vpnConnectionArn.assign(value); }

    /**
     * <p>The ARN of the site-to-site VPN attachment. </p>
     */
    inline SiteToSiteVpnAttachment& WithVpnConnectionArn(const Aws::String& value) { SetVpnConnectionArn(value); return *this;}

    /**
     * <p>The ARN of the site-to-site VPN attachment. </p>
     */
    inline SiteToSiteVpnAttachment& WithVpnConnectionArn(Aws::String&& value) { SetVpnConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the site-to-site VPN attachment. </p>
     */
    inline SiteToSiteVpnAttachment& WithVpnConnectionArn(const char* value) { SetVpnConnectionArn(value); return *this;}

  private:

    Attachment m_attachment;
    bool m_attachmentHasBeenSet = false;

    Aws::String m_vpnConnectionArn;
    bool m_vpnConnectionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
