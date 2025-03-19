/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/AccountAssignmentOperationStatus.h>
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
namespace SSOAdmin
{
namespace Model
{
  class DescribeAccountAssignmentDeletionStatusResult
  {
  public:
    AWS_SSOADMIN_API DescribeAccountAssignmentDeletionStatusResult() = default;
    AWS_SSOADMIN_API DescribeAccountAssignmentDeletionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribeAccountAssignmentDeletionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status object for the account assignment deletion operation.</p>
     */
    inline const AccountAssignmentOperationStatus& GetAccountAssignmentDeletionStatus() const { return m_accountAssignmentDeletionStatus; }
    template<typename AccountAssignmentDeletionStatusT = AccountAssignmentOperationStatus>
    void SetAccountAssignmentDeletionStatus(AccountAssignmentDeletionStatusT&& value) { m_accountAssignmentDeletionStatusHasBeenSet = true; m_accountAssignmentDeletionStatus = std::forward<AccountAssignmentDeletionStatusT>(value); }
    template<typename AccountAssignmentDeletionStatusT = AccountAssignmentOperationStatus>
    DescribeAccountAssignmentDeletionStatusResult& WithAccountAssignmentDeletionStatus(AccountAssignmentDeletionStatusT&& value) { SetAccountAssignmentDeletionStatus(std::forward<AccountAssignmentDeletionStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAccountAssignmentDeletionStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccountAssignmentOperationStatus m_accountAssignmentDeletionStatus;
    bool m_accountAssignmentDeletionStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
