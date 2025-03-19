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
    AWS_NETWORKMANAGER_API SiteToSiteVpnAttachment() = default;
    AWS_NETWORKMANAGER_API SiteToSiteVpnAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API SiteToSiteVpnAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides details about a site-to-site VPN attachment.</p>
     */
    inline const Attachment& GetAttachment() const { return m_attachment; }
    inline bool AttachmentHasBeenSet() const { return m_attachmentHasBeenSet; }
    template<typename AttachmentT = Attachment>
    void SetAttachment(AttachmentT&& value) { m_attachmentHasBeenSet = true; m_attachment = std::forward<AttachmentT>(value); }
    template<typename AttachmentT = Attachment>
    SiteToSiteVpnAttachment& WithAttachment(AttachmentT&& value) { SetAttachment(std::forward<AttachmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the site-to-site VPN attachment. </p>
     */
    inline const Aws::String& GetVpnConnectionArn() const { return m_vpnConnectionArn; }
    inline bool VpnConnectionArnHasBeenSet() const { return m_vpnConnectionArnHasBeenSet; }
    template<typename VpnConnectionArnT = Aws::String>
    void SetVpnConnectionArn(VpnConnectionArnT&& value) { m_vpnConnectionArnHasBeenSet = true; m_vpnConnectionArn = std::forward<VpnConnectionArnT>(value); }
    template<typename VpnConnectionArnT = Aws::String>
    SiteToSiteVpnAttachment& WithVpnConnectionArn(VpnConnectionArnT&& value) { SetVpnConnectionArn(std::forward<VpnConnectionArnT>(value)); return *this;}
    ///@}
  private:

    Attachment m_attachment;
    bool m_attachmentHasBeenSet = false;

    Aws::String m_vpnConnectionArn;
    bool m_vpnConnectionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
