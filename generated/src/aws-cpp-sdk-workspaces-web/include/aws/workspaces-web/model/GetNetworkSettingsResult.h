/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/NetworkSettings.h>
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
  class GetNetworkSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API GetNetworkSettingsResult() = default;
    AWS_WORKSPACESWEB_API GetNetworkSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API GetNetworkSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The network settings.</p>
     */
    inline const NetworkSettings& GetNetworkSettings() const { return m_networkSettings; }
    template<typename NetworkSettingsT = NetworkSettings>
    void SetNetworkSettings(NetworkSettingsT&& value) { m_networkSettingsHasBeenSet = true; m_networkSettings = std::forward<NetworkSettingsT>(value); }
    template<typename NetworkSettingsT = NetworkSettings>
    GetNetworkSettingsResult& WithNetworkSettings(NetworkSettingsT&& value) { SetNetworkSettings(std::forward<NetworkSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetNetworkSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    NetworkSettings m_networkSettings;
    bool m_networkSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
