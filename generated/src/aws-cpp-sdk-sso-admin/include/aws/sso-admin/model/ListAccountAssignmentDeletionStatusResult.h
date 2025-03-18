/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/AccountAssignmentOperationStatusMetadata.h>
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
  class ListAccountAssignmentDeletionStatusResult
  {
  public:
    AWS_SSOADMIN_API ListAccountAssignmentDeletionStatusResult() = default;
    AWS_SSOADMIN_API ListAccountAssignmentDeletionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListAccountAssignmentDeletionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status object for the account assignment deletion operation.</p>
     */
    inline const Aws::Vector<AccountAssignmentOperationStatusMetadata>& GetAccountAssignmentsDeletionStatus() const { return m_accountAssignmentsDeletionStatus; }
    template<typename AccountAssignmentsDeletionStatusT = Aws::Vector<AccountAssignmentOperationStatusMetadata>>
    void SetAccountAssignmentsDeletionStatus(AccountAssignmentsDeletionStatusT&& value) { m_accountAssignmentsDeletionStatusHasBeenSet = true; m_accountAssignmentsDeletionStatus = std::forward<AccountAssignmentsDeletionStatusT>(value); }
    template<typename AccountAssignmentsDeletionStatusT = Aws::Vector<AccountAssignmentOperationStatusMetadata>>
    ListAccountAssignmentDeletionStatusResult& WithAccountAssignmentsDeletionStatus(AccountAssignmentsDeletionStatusT&& value) { SetAccountAssignmentsDeletionStatus(std::forward<AccountAssignmentsDeletionStatusT>(value)); return *this;}
    template<typename AccountAssignmentsDeletionStatusT = AccountAssignmentOperationStatusMetadata>
    ListAccountAssignmentDeletionStatusResult& AddAccountAssignmentsDeletionStatus(AccountAssignmentsDeletionStatusT&& value) { m_accountAssignmentsDeletionStatusHasBeenSet = true; m_accountAssignmentsDeletionStatus.emplace_back(std::forward<AccountAssignmentsDeletionStatusT>(value)); return *this; }
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
    ListAccountAssignmentDeletionStatusResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAccountAssignmentDeletionStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountAssignmentOperationStatusMetadata> m_accountAssignmentsDeletionStatus;
    bool m_accountAssignmentsDeletionStatusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
