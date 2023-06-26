/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/IpAccessSettings.h>
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
  class UpdateIpAccessSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API UpdateIpAccessSettingsResult();
    AWS_WORKSPACESWEB_API UpdateIpAccessSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API UpdateIpAccessSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The IP access settings.</p>
     */
    inline const IpAccessSettings& GetIpAccessSettings() const{ return m_ipAccessSettings; }

    /**
     * <p>The IP access settings.</p>
     */
    inline void SetIpAccessSettings(const IpAccessSettings& value) { m_ipAccessSettings = value; }

    /**
     * <p>The IP access settings.</p>
     */
    inline void SetIpAccessSettings(IpAccessSettings&& value) { m_ipAccessSettings = std::move(value); }

    /**
     * <p>The IP access settings.</p>
     */
    inline UpdateIpAccessSettingsResult& WithIpAccessSettings(const IpAccessSettings& value) { SetIpAccessSettings(value); return *this;}

    /**
     * <p>The IP access settings.</p>
     */
    inline UpdateIpAccessSettingsResult& WithIpAccessSettings(IpAccessSettings&& value) { SetIpAccessSettings(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateIpAccessSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateIpAccessSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateIpAccessSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    IpAccessSettings m_ipAccessSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
