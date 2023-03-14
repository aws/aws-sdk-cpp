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
  class CreateSiteToSiteVpnAttachmentResult
  {
  public:
    AWS_NETWORKMANAGER_API CreateSiteToSiteVpnAttachmentResult();
    AWS_NETWORKMANAGER_API CreateSiteToSiteVpnAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API CreateSiteToSiteVpnAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about a site-to-site VPN attachment.</p>
     */
    inline const SiteToSiteVpnAttachment& GetSiteToSiteVpnAttachment() const{ return m_siteToSiteVpnAttachment; }

    /**
     * <p>Details about a site-to-site VPN attachment.</p>
     */
    inline void SetSiteToSiteVpnAttachment(const SiteToSiteVpnAttachment& value) { m_siteToSiteVpnAttachment = value; }

    /**
     * <p>Details about a site-to-site VPN attachment.</p>
     */
    inline void SetSiteToSiteVpnAttachment(SiteToSiteVpnAttachment&& value) { m_siteToSiteVpnAttachment = std::move(value); }

    /**
     * <p>Details about a site-to-site VPN attachment.</p>
     */
    inline CreateSiteToSiteVpnAttachmentResult& WithSiteToSiteVpnAttachment(const SiteToSiteVpnAttachment& value) { SetSiteToSiteVpnAttachment(value); return *this;}

    /**
     * <p>Details about a site-to-site VPN attachment.</p>
     */
    inline CreateSiteToSiteVpnAttachmentResult& WithSiteToSiteVpnAttachment(SiteToSiteVpnAttachment&& value) { SetSiteToSiteVpnAttachment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSiteToSiteVpnAttachmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSiteToSiteVpnAttachmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSiteToSiteVpnAttachmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SiteToSiteVpnAttachment m_siteToSiteVpnAttachment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
