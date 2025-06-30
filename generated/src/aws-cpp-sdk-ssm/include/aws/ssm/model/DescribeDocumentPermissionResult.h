/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/AccountSharingInfo.h>
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
namespace SSM
{
namespace Model
{
  class DescribeDocumentPermissionResult
  {
  public:
    AWS_SSM_API DescribeDocumentPermissionResult() = default;
    AWS_SSM_API DescribeDocumentPermissionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeDocumentPermissionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The account IDs that have permission to use this document. The ID can be
     * either an Amazon Web Services account number or <code>all</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    DescribeDocumentPermissionResult& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    DescribeDocumentPermissionResult& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Web Services accounts where the current document is shared
     * and the version shared with each account.</p>
     */
    inline const Aws::Vector<AccountSharingInfo>& GetAccountSharingInfoList() const { return m_accountSharingInfoList; }
    template<typename AccountSharingInfoListT = Aws::Vector<AccountSharingInfo>>
    void SetAccountSharingInfoList(AccountSharingInfoListT&& value) { m_accountSharingInfoListHasBeenSet = true; m_accountSharingInfoList = std::forward<AccountSharingInfoListT>(value); }
    template<typename AccountSharingInfoListT = Aws::Vector<AccountSharingInfo>>
    DescribeDocumentPermissionResult& WithAccountSharingInfoList(AccountSharingInfoListT&& value) { SetAccountSharingInfoList(std::forward<AccountSharingInfoListT>(value)); return *this;}
    template<typename AccountSharingInfoListT = AccountSharingInfo>
    DescribeDocumentPermissionResult& AddAccountSharingInfoList(AccountSharingInfoListT&& value) { m_accountSharingInfoListHasBeenSet = true; m_accountSharingInfoList.emplace_back(std::forward<AccountSharingInfoListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeDocumentPermissionResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDocumentPermissionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<AccountSharingInfo> m_accountSharingInfoList;
    bool m_accountSharingInfoListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
