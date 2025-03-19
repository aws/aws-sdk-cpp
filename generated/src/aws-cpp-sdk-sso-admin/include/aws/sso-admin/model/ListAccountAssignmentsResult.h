/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/AccountAssignment.h>
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
namespace SSOAdmin
{
namespace Model
{
  class ListAccountAssignmentsResult
  {
  public:
    AWS_SSOADMIN_API ListAccountAssignmentsResult() = default;
    AWS_SSOADMIN_API ListAccountAssignmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListAccountAssignmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of assignments that match the input Amazon Web Services account and
     * permission set.</p>
     */
    inline const Aws::Vector<AccountAssignment>& GetAccountAssignments() const { return m_accountAssignments; }
    template<typename AccountAssignmentsT = Aws::Vector<AccountAssignment>>
    void SetAccountAssignments(AccountAssignmentsT&& value) { m_accountAssignmentsHasBeenSet = true; m_accountAssignments = std::forward<AccountAssignmentsT>(value); }
    template<typename AccountAssignmentsT = Aws::Vector<AccountAssignment>>
    ListAccountAssignmentsResult& WithAccountAssignments(AccountAssignmentsT&& value) { SetAccountAssignments(std::forward<AccountAssignmentsT>(value)); return *this;}
    template<typename AccountAssignmentsT = AccountAssignment>
    ListAccountAssignmentsResult& AddAccountAssignments(AccountAssignmentsT&& value) { m_accountAssignmentsHasBeenSet = true; m_accountAssignments.emplace_back(std::forward<AccountAssignmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAccountAssignmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAccountAssignmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountAssignment> m_accountAssignments;
    bool m_accountAssignmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
