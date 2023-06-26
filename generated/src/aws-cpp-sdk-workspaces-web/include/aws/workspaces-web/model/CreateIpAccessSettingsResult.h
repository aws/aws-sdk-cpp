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
  class CreateIpAccessSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API CreateIpAccessSettingsResult();
    AWS_WORKSPACESWEB_API CreateIpAccessSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API CreateIpAccessSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateIpAccessSettingsResult& WithIpAccessSettingsArn(const Aws::String& value) { SetIpAccessSettingsArn(value); return *this;}

    /**
     * <p>The ARN of the IP access settings resource.</p>
     */
    inline CreateIpAccessSettingsResult& WithIpAccessSettingsArn(Aws::String&& value) { SetIpAccessSettingsArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IP access settings resource.</p>
     */
    inline CreateIpAccessSettingsResult& WithIpAccessSettingsArn(const char* value) { SetIpAccessSettingsArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateIpAccessSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateIpAccessSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateIpAccessSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_ipAccessSettingsArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
