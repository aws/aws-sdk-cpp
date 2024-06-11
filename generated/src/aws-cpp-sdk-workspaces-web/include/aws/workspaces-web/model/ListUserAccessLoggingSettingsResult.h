﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_WORKSPACESWEB_API ListUserAccessLoggingSettingsResult();
    AWS_WORKSPACESWEB_API ListUserAccessLoggingSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListUserAccessLoggingSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListUserAccessLoggingSettingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListUserAccessLoggingSettingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListUserAccessLoggingSettingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user access logging settings.</p>
     */
    inline const Aws::Vector<UserAccessLoggingSettingsSummary>& GetUserAccessLoggingSettings() const{ return m_userAccessLoggingSettings; }
    inline void SetUserAccessLoggingSettings(const Aws::Vector<UserAccessLoggingSettingsSummary>& value) { m_userAccessLoggingSettings = value; }
    inline void SetUserAccessLoggingSettings(Aws::Vector<UserAccessLoggingSettingsSummary>&& value) { m_userAccessLoggingSettings = std::move(value); }
    inline ListUserAccessLoggingSettingsResult& WithUserAccessLoggingSettings(const Aws::Vector<UserAccessLoggingSettingsSummary>& value) { SetUserAccessLoggingSettings(value); return *this;}
    inline ListUserAccessLoggingSettingsResult& WithUserAccessLoggingSettings(Aws::Vector<UserAccessLoggingSettingsSummary>&& value) { SetUserAccessLoggingSettings(std::move(value)); return *this;}
    inline ListUserAccessLoggingSettingsResult& AddUserAccessLoggingSettings(const UserAccessLoggingSettingsSummary& value) { m_userAccessLoggingSettings.push_back(value); return *this; }
    inline ListUserAccessLoggingSettingsResult& AddUserAccessLoggingSettings(UserAccessLoggingSettingsSummary&& value) { m_userAccessLoggingSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListUserAccessLoggingSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListUserAccessLoggingSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListUserAccessLoggingSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<UserAccessLoggingSettingsSummary> m_userAccessLoggingSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
