/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/UserSettingsSummary.h>
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
  class ListUserSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API ListUserSettingsResult() = default;
    AWS_WORKSPACESWEB_API ListUserSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListUserSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user settings.</p>
     */
    inline const Aws::Vector<UserSettingsSummary>& GetUserSettings() const { return m_userSettings; }
    template<typename UserSettingsT = Aws::Vector<UserSettingsSummary>>
    void SetUserSettings(UserSettingsT&& value) { m_userSettingsHasBeenSet = true; m_userSettings = std::forward<UserSettingsT>(value); }
    template<typename UserSettingsT = Aws::Vector<UserSettingsSummary>>
    ListUserSettingsResult& WithUserSettings(UserSettingsT&& value) { SetUserSettings(std::forward<UserSettingsT>(value)); return *this;}
    template<typename UserSettingsT = UserSettingsSummary>
    ListUserSettingsResult& AddUserSettings(UserSettingsT&& value) { m_userSettingsHasBeenSet = true; m_userSettings.emplace_back(std::forward<UserSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListUserSettingsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListUserSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserSettingsSummary> m_userSettings;
    bool m_userSettingsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
