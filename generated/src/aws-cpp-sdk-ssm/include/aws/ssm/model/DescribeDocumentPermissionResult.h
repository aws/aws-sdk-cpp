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
    AWS_SSM_API DescribeDocumentPermissionResult();
    AWS_SSM_API DescribeDocumentPermissionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeDocumentPermissionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The account IDs that have permission to use this document. The ID can be
     * either an Amazon Web Services account or <i>All</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIds = value; }
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIds = std::move(value); }
    inline DescribeDocumentPermissionResult& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}
    inline DescribeDocumentPermissionResult& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}
    inline DescribeDocumentPermissionResult& AddAccountIds(const Aws::String& value) { m_accountIds.push_back(value); return *this; }
    inline DescribeDocumentPermissionResult& AddAccountIds(Aws::String&& value) { m_accountIds.push_back(std::move(value)); return *this; }
    inline DescribeDocumentPermissionResult& AddAccountIds(const char* value) { m_accountIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Web Services accounts where the current document is shared
     * and the version shared with each account.</p>
     */
    inline const Aws::Vector<AccountSharingInfo>& GetAccountSharingInfoList() const{ return m_accountSharingInfoList; }
    inline void SetAccountSharingInfoList(const Aws::Vector<AccountSharingInfo>& value) { m_accountSharingInfoList = value; }
    inline void SetAccountSharingInfoList(Aws::Vector<AccountSharingInfo>&& value) { m_accountSharingInfoList = std::move(value); }
    inline DescribeDocumentPermissionResult& WithAccountSharingInfoList(const Aws::Vector<AccountSharingInfo>& value) { SetAccountSharingInfoList(value); return *this;}
    inline DescribeDocumentPermissionResult& WithAccountSharingInfoList(Aws::Vector<AccountSharingInfo>&& value) { SetAccountSharingInfoList(std::move(value)); return *this;}
    inline DescribeDocumentPermissionResult& AddAccountSharingInfoList(const AccountSharingInfo& value) { m_accountSharingInfoList.push_back(value); return *this; }
    inline DescribeDocumentPermissionResult& AddAccountSharingInfoList(AccountSharingInfo&& value) { m_accountSharingInfoList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeDocumentPermissionResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeDocumentPermissionResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeDocumentPermissionResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeDocumentPermissionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeDocumentPermissionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeDocumentPermissionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accountIds;

    Aws::Vector<AccountSharingInfo> m_accountSharingInfoList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
