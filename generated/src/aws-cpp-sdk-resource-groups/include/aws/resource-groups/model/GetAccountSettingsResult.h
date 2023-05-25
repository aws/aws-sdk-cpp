/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/AccountSettings.h>
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
namespace ResourceGroups
{
namespace Model
{
  class GetAccountSettingsResult
  {
  public:
    AWS_RESOURCEGROUPS_API GetAccountSettingsResult();
    AWS_RESOURCEGROUPS_API GetAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API GetAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current settings for the optional features in Resource Groups.</p>
     */
    inline const AccountSettings& GetAccountSettings() const{ return m_accountSettings; }

    /**
     * <p>The current settings for the optional features in Resource Groups.</p>
     */
    inline void SetAccountSettings(const AccountSettings& value) { m_accountSettings = value; }

    /**
     * <p>The current settings for the optional features in Resource Groups.</p>
     */
    inline void SetAccountSettings(AccountSettings&& value) { m_accountSettings = std::move(value); }

    /**
     * <p>The current settings for the optional features in Resource Groups.</p>
     */
    inline GetAccountSettingsResult& WithAccountSettings(const AccountSettings& value) { SetAccountSettings(value); return *this;}

    /**
     * <p>The current settings for the optional features in Resource Groups.</p>
     */
    inline GetAccountSettingsResult& WithAccountSettings(AccountSettings&& value) { SetAccountSettings(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAccountSettingsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAccountSettingsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAccountSettingsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AccountSettings m_accountSettings;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
