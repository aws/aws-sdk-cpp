/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/AccountSettings.h>
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
  class UpdateAccountSettingsResult
  {
  public:
    AWS_RESOURCEGROUPS_API UpdateAccountSettingsResult();
    AWS_RESOURCEGROUPS_API UpdateAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEGROUPS_API UpdateAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that displays the status of the optional features in the
     * account.</p>
     */
    inline const AccountSettings& GetAccountSettings() const{ return m_accountSettings; }

    /**
     * <p>A structure that displays the status of the optional features in the
     * account.</p>
     */
    inline void SetAccountSettings(const AccountSettings& value) { m_accountSettings = value; }

    /**
     * <p>A structure that displays the status of the optional features in the
     * account.</p>
     */
    inline void SetAccountSettings(AccountSettings&& value) { m_accountSettings = std::move(value); }

    /**
     * <p>A structure that displays the status of the optional features in the
     * account.</p>
     */
    inline UpdateAccountSettingsResult& WithAccountSettings(const AccountSettings& value) { SetAccountSettings(value); return *this;}

    /**
     * <p>A structure that displays the status of the optional features in the
     * account.</p>
     */
    inline UpdateAccountSettingsResult& WithAccountSettings(AccountSettings&& value) { SetAccountSettings(std::move(value)); return *this;}

  private:

    AccountSettings m_accountSettings;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
