/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/BrowserSettings.h>
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
  class UpdateBrowserSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API UpdateBrowserSettingsResult() = default;
    AWS_WORKSPACESWEB_API UpdateBrowserSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API UpdateBrowserSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The browser settings.</p>
     */
    inline const BrowserSettings& GetBrowserSettings() const { return m_browserSettings; }
    template<typename BrowserSettingsT = BrowserSettings>
    void SetBrowserSettings(BrowserSettingsT&& value) { m_browserSettingsHasBeenSet = true; m_browserSettings = std::forward<BrowserSettingsT>(value); }
    template<typename BrowserSettingsT = BrowserSettings>
    UpdateBrowserSettingsResult& WithBrowserSettings(BrowserSettingsT&& value) { SetBrowserSettings(std::forward<BrowserSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateBrowserSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BrowserSettings m_browserSettings;
    bool m_browserSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
