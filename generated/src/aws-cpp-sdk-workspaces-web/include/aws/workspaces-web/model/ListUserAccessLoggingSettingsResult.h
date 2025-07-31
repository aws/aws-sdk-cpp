/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/UserAccessLoggingSettingsSummary.h>
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
  class ListUserAccessLoggingSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API ListUserAccessLoggingSettingsResult() = default;
    AWS_WORKSPACESWEB_API ListUserAccessLoggingSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListUserAccessLoggingSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user access logging settings.</p>
     */
    inline const Aws::Vector<UserAccessLoggingSettingsSummary>& GetUserAccessLoggingSettings() const { return m_userAccessLoggingSettings; }
    template<typename UserAccessLoggingSettingsT = Aws::Vector<UserAccessLoggingSettingsSummary>>
    void SetUserAccessLoggingSettings(UserAccessLoggingSettingsT&& value) { m_userAccessLoggingSettingsHasBeenSet = true; m_userAccessLoggingSettings = std::forward<UserAccessLoggingSettingsT>(value); }
    template<typename UserAccessLoggingSettingsT = Aws::Vector<UserAccessLoggingSettingsSummary>>
    ListUserAccessLoggingSettingsResult& WithUserAccessLoggingSettings(UserAccessLoggingSettingsT&& value) { SetUserAccessLoggingSettings(std::forward<UserAccessLoggingSettingsT>(value)); return *this;}
    template<typename UserAccessLoggingSettingsT = UserAccessLoggingSettingsSummary>
    ListUserAccessLoggingSettingsResult& AddUserAccessLoggingSettings(UserAccessLoggingSettingsT&& value) { m_userAccessLoggingSettingsHasBeenSet = true; m_userAccessLoggingSettings.emplace_back(std::forward<UserAccessLoggingSettingsT>(value)); return *this; }
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
    ListUserAccessLoggingSettingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListUserAccessLoggingSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserAccessLoggingSettingsSummary> m_userAccessLoggingSettings;
    bool m_userAccessLoggingSettingsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
