/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AccountSettings.h>
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
namespace QuickSight
{
namespace Model
{
  class DescribeAccountSettingsResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeAccountSettingsResult() = default;
    AWS_QUICKSIGHT_API DescribeAccountSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeAccountSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The QuickSight settings for this Amazon Web Services account. This
     * information includes the edition of Amazon QuickSight that you subscribed to
     * (Standard or Enterprise) and the notification email for the QuickSight
     * subscription. </p> <p>In the QuickSight console, the QuickSight subscription is
     * sometimes referred to as a QuickSight "account" even though it's technically not
     * an account by itself. Instead, it's a subscription to the QuickSight service for
     * your Amazon Web Services account. The edition that you subscribe to applies to
     * QuickSight in every Amazon Web Services Region where you use it.</p>
     */
    inline const AccountSettings& GetAccountSettings() const { return m_accountSettings; }
    template<typename AccountSettingsT = AccountSettings>
    void SetAccountSettings(AccountSettingsT&& value) { m_accountSettingsHasBeenSet = true; m_accountSettings = std::forward<AccountSettingsT>(value); }
    template<typename AccountSettingsT = AccountSettings>
    DescribeAccountSettingsResult& WithAccountSettings(AccountSettingsT&& value) { SetAccountSettings(std::forward<AccountSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAccountSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeAccountSettingsResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    AccountSettings m_accountSettings;
    bool m_accountSettingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
