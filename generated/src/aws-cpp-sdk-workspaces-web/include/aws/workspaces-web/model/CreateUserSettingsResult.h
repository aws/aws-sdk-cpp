﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
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
  class CreateUserSettingsResult
  {
  public:
    AWS_WORKSPACESWEB_API CreateUserSettingsResult();
    AWS_WORKSPACESWEB_API CreateUserSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API CreateUserSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the user settings.</p>
     */
    inline const Aws::String& GetUserSettingsArn() const{ return m_userSettingsArn; }
    inline void SetUserSettingsArn(const Aws::String& value) { m_userSettingsArn = value; }
    inline void SetUserSettingsArn(Aws::String&& value) { m_userSettingsArn = std::move(value); }
    inline void SetUserSettingsArn(const char* value) { m_userSettingsArn.assign(value); }
    inline CreateUserSettingsResult& WithUserSettingsArn(const Aws::String& value) { SetUserSettingsArn(value); return *this;}
    inline CreateUserSettingsResult& WithUserSettingsArn(Aws::String&& value) { SetUserSettingsArn(std::move(value)); return *this;}
    inline CreateUserSettingsResult& WithUserSettingsArn(const char* value) { SetUserSettingsArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateUserSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateUserSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateUserSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_userSettingsArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
