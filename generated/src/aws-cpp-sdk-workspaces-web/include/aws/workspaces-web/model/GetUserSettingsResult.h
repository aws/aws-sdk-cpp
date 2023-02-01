/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/UserSettings.h>
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
  class GetUserSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API GetUserSettingsResult();
    AWS_WORKSPACESWEB_API GetUserSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API GetUserSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user settings.</p>
     */
    inline const UserSettings& GetUserSettings() const{ return m_userSettings; }

    /**
     * <p>The user settings.</p>
     */
    inline void SetUserSettings(const UserSettings& value) { m_userSettings = value; }

    /**
     * <p>The user settings.</p>
     */
    inline void SetUserSettings(UserSettings&& value) { m_userSettings = std::move(value); }

    /**
     * <p>The user settings.</p>
     */
    inline GetUserSettingsResult& WithUserSettings(const UserSettings& value) { SetUserSettings(value); return *this;}

    /**
     * <p>The user settings.</p>
     */
    inline GetUserSettingsResult& WithUserSettings(UserSettings&& value) { SetUserSettings(std::move(value)); return *this;}

  private:

    UserSettings m_userSettings;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
