/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/UserAccessLoggingSettings.h>
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
  class UpdateUserAccessLoggingSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API UpdateUserAccessLoggingSettingsResult() = default;
    AWS_WORKSPACESWEB_API UpdateUserAccessLoggingSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API UpdateUserAccessLoggingSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user access logging settings.</p>
     */
    inline const UserAccessLoggingSettings& GetUserAccessLoggingSettings() const { return m_userAccessLoggingSettings; }
    template<typename UserAccessLoggingSettingsT = UserAccessLoggingSettings>
    void SetUserAccessLoggingSettings(UserAccessLoggingSettingsT&& value) { m_userAccessLoggingSettingsHasBeenSet = true; m_userAccessLoggingSettings = std::forward<UserAccessLoggingSettingsT>(value); }
    template<typename UserAccessLoggingSettingsT = UserAccessLoggingSettings>
    UpdateUserAccessLoggingSettingsResult& WithUserAccessLoggingSettings(UserAccessLoggingSettingsT&& value) { SetUserAccessLoggingSettings(std::forward<UserAccessLoggingSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateUserAccessLoggingSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    UserAccessLoggingSettings m_userAccessLoggingSettings;
    bool m_userAccessLoggingSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
