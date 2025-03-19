/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/IpAccessSettingsSummary.h>
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
  class ListIpAccessSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API ListIpAccessSettingsResult() = default;
    AWS_WORKSPACESWEB_API ListIpAccessSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListIpAccessSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The IP access settings.</p>
     */
    inline const Aws::Vector<IpAccessSettingsSummary>& GetIpAccessSettings() const { return m_ipAccessSettings; }
    template<typename IpAccessSettingsT = Aws::Vector<IpAccessSettingsSummary>>
    void SetIpAccessSettings(IpAccessSettingsT&& value) { m_ipAccessSettingsHasBeenSet = true; m_ipAccessSettings = std::forward<IpAccessSettingsT>(value); }
    template<typename IpAccessSettingsT = Aws::Vector<IpAccessSettingsSummary>>
    ListIpAccessSettingsResult& WithIpAccessSettings(IpAccessSettingsT&& value) { SetIpAccessSettings(std::forward<IpAccessSettingsT>(value)); return *this;}
    template<typename IpAccessSettingsT = IpAccessSettingsSummary>
    ListIpAccessSettingsResult& AddIpAccessSettings(IpAccessSettingsT&& value) { m_ipAccessSettingsHasBeenSet = true; m_ipAccessSettings.emplace_back(std::forward<IpAccessSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIpAccessSettingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIpAccessSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<IpAccessSettingsSummary> m_ipAccessSettings;
    bool m_ipAccessSettingsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
