/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AccountInfo.h>
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
  class DescribeAccountSubscriptionResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeAccountSubscriptionResult() = default;
    AWS_QUICKSIGHT_API DescribeAccountSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeAccountSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that contains the following elements:</p> <ul> <li> <p>Your
     * QuickSight account name.</p> </li> <li> <p>The edition of QuickSight that your
     * account is using.</p> </li> <li> <p>The notification email address that is
     * associated with the QuickSight account. </p> </li> <li> <p>The authentication
     * type of the QuickSight account.</p> </li> <li> <p>The status of the QuickSight
     * account's subscription.</p> </li> </ul>
     */
    inline const AccountInfo& GetAccountInfo() const { return m_accountInfo; }
    template<typename AccountInfoT = AccountInfo>
    void SetAccountInfo(AccountInfoT&& value) { m_accountInfoHasBeenSet = true; m_accountInfo = std::forward<AccountInfoT>(value); }
    template<typename AccountInfoT = AccountInfo>
    DescribeAccountSubscriptionResult& WithAccountInfo(AccountInfoT&& value) { SetAccountInfo(std::forward<AccountInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeAccountSubscriptionResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAccountSubscriptionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccountInfo m_accountInfo;
    bool m_accountInfoHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
