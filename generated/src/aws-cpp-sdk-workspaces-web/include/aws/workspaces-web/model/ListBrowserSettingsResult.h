/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/BrowserSettingsSummary.h>
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
  class ListBrowserSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API ListBrowserSettingsResult() = default;
    AWS_WORKSPACESWEB_API ListBrowserSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListBrowserSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The browser settings.</p>
     */
    inline const Aws::Vector<BrowserSettingsSummary>& GetBrowserSettings() const { return m_browserSettings; }
    template<typename BrowserSettingsT = Aws::Vector<BrowserSettingsSummary>>
    void SetBrowserSettings(BrowserSettingsT&& value) { m_browserSettingsHasBeenSet = true; m_browserSettings = std::forward<BrowserSettingsT>(value); }
    template<typename BrowserSettingsT = Aws::Vector<BrowserSettingsSummary>>
    ListBrowserSettingsResult& WithBrowserSettings(BrowserSettingsT&& value) { SetBrowserSettings(std::forward<BrowserSettingsT>(value)); return *this;}
    template<typename BrowserSettingsT = BrowserSettingsSummary>
    ListBrowserSettingsResult& AddBrowserSettings(BrowserSettingsT&& value) { m_browserSettingsHasBeenSet = true; m_browserSettings.emplace_back(std::forward<BrowserSettingsT>(value)); return *this; }
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
    ListBrowserSettingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBrowserSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BrowserSettingsSummary> m_browserSettings;
    bool m_browserSettingsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
