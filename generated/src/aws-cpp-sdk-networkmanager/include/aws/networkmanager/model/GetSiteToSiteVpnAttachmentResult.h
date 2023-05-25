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
    AWS_NETWORKMANAGER_API GetSiteToSiteVpnAttachmentResult();
    AWS_NETWORKMANAGER_API GetSiteToSiteVpnAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetSiteToSiteVpnAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Describes the site-to-site attachment.</p>
     */
    inline const SiteToSiteVpnAttachment& GetSiteToSiteVpnAttachment() const{ return m_siteToSiteVpnAttachment; }

    /**
     * <p>Describes the site-to-site attachment.</p>
     */
    inline void SetSiteToSiteVpnAttachment(const SiteToSiteVpnAttachment& value) { m_siteToSiteVpnAttachment = value; }

    /**
     * <p>Describes the site-to-site attachment.</p>
     */
    inline void SetSiteToSiteVpnAttachment(SiteToSiteVpnAttachment&& value) { m_siteToSiteVpnAttachment = std::move(value); }

    /**
     * <p>Describes the site-to-site attachment.</p>
     */
    inline GetSiteToSiteVpnAttachmentResult& WithSiteToSiteVpnAttachment(const SiteToSiteVpnAttachment& value) { SetSiteToSiteVpnAttachment(value); return *this;}

    /**
     * <p>Describes the site-to-site attachment.</p>
     */
    inline GetSiteToSiteVpnAttachmentResult& WithSiteToSiteVpnAttachment(SiteToSiteVpnAttachment&& value) { SetSiteToSiteVpnAttachment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSiteToSiteVpnAttachmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSiteToSiteVpnAttachmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSiteToSiteVpnAttachmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SiteToSiteVpnAttachment m_siteToSiteVpnAttachment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
