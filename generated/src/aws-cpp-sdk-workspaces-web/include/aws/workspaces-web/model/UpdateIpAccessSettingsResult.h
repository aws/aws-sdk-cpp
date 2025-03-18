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
    AWS_WORKSPACESWEB_API UpdateIpAccessSettingsResult() = default;
    AWS_WORKSPACESWEB_API UpdateIpAccessSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API UpdateIpAccessSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The IP access settings.</p>
     */
    inline const IpAccessSettings& GetIpAccessSettings() const { return m_ipAccessSettings; }
    template<typename IpAccessSettingsT = IpAccessSettings>
    void SetIpAccessSettings(IpAccessSettingsT&& value) { m_ipAccessSettingsHasBeenSet = true; m_ipAccessSettings = std::forward<IpAccessSettingsT>(value); }
    template<typename IpAccessSettingsT = IpAccessSettings>
    UpdateIpAccessSettingsResult& WithIpAccessSettings(IpAccessSettingsT&& value) { SetIpAccessSettings(std::forward<IpAccessSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateIpAccessSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IpAccessSettings m_ipAccessSettings;
    bool m_ipAccessSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
