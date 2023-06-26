/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class AssociateIpAccessSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API AssociateIpAccessSettingsResult();
    AWS_WORKSPACESWEB_API AssociateIpAccessSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API AssociateIpAccessSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the IP access settings resource.</p>
     */
    inline const Aws::String& GetIpAccessSettingsArn() const{ return m_ipAccessSettingsArn; }

    /**
     * <p>The ARN of the IP access settings resource.</p>
     */
    inline void SetIpAccessSettingsArn(const Aws::String& value) { m_ipAccessSettingsArn = value; }

    /**
     * <p>The ARN of the IP access settings resource.</p>
     */
    inline void SetIpAccessSettingsArn(Aws::String&& value) { m_ipAccessSettingsArn = std::move(value); }

    /**
     * <p>The ARN of the IP access settings resource.</p>
     */
    inline void SetIpAccessSettingsArn(const char* value) { m_ipAccessSettingsArn.assign(value); }

    /**
     * <p>The ARN of the IP access settings resource.</p>
     */
    inline AssociateIpAccessSettingsResult& WithIpAccessSettingsArn(const Aws::String& value) { SetIpAccessSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the IP access settings resource.</p>
     */
    inline AssociateIpAccessSettingsResult& WithIpAccessSettingsArn(Aws::String&& value) { SetIpAccessSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IP access settings resource.</p>
     */
    inline AssociateIpAccessSettingsResult& WithIpAccessSettingsArn(const char* value) { SetIpAccessSettingsArn(value); return *this;}


    /**
     * <p>The ARN of the web portal.</p>
     */
    inline const Aws::String& GetPortalArn() const{ return m_portalArn; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(const Aws::String& value) { m_portalArn = value; }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(Aws::String&& value) { m_portalArn = std::move(value); }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline void SetPortalArn(const char* value) { m_portalArn.assign(value); }

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline AssociateIpAccessSettingsResult& WithPortalArn(const Aws::String& value) { SetPortalArn(value); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline AssociateIpAccessSettingsResult& WithPortalArn(Aws::String&& value) { SetPortalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the web portal.</p>
     */
    inline AssociateIpAccessSettingsResult& WithPortalArn(const char* value) { SetPortalArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociateIpAccessSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociateIpAccessSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociateIpAccessSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_ipAccessSettingsArn;

    Aws::String m_portalArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
