/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/SiteToSiteVpnAttachment.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace NetworkManager
{
namespace Model
{
  class GetSiteToSiteVpnAttachmentResult
  {
  public:
    AWS_NETWORKMANAGER_API GetSiteToSiteVpnAttachmentResult() = default;
    AWS_NETWORKMANAGER_API GetSiteToSiteVpnAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetSiteToSiteVpnAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes the site-to-site attachment.</p>
     */
    inline const SiteToSiteVpnAttachment& GetSiteToSiteVpnAttachment() const { return m_siteToSiteVpnAttachment; }
    template<typename SiteToSiteVpnAttachmentT = SiteToSiteVpnAttachment>
    void SetSiteToSiteVpnAttachment(SiteToSiteVpnAttachmentT&& value) { m_siteToSiteVpnAttachmentHasBeenSet = true; m_siteToSiteVpnAttachment = std::forward<SiteToSiteVpnAttachmentT>(value); }
    template<typename SiteToSiteVpnAttachmentT = SiteToSiteVpnAttachment>
    GetSiteToSiteVpnAttachmentResult& WithSiteToSiteVpnAttachment(SiteToSiteVpnAttachmentT&& value) { SetSiteToSiteVpnAttachment(std::forward<SiteToSiteVpnAttachmentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSiteToSiteVpnAttachmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SiteToSiteVpnAttachment m_siteToSiteVpnAttachment;
    bool m_siteToSiteVpnAttachmentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
