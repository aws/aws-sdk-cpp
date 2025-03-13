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
  class DescribeAccountAssignmentCreationStatusResult
  {
  public:
    AWS_SSOADMIN_API DescribeAccountAssignmentCreationStatusResult() = default;
    AWS_SSOADMIN_API DescribeAccountAssignmentCreationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribeAccountAssignmentCreationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status object for the account assignment creation operation.</p>
     */
    inline const AccountAssignmentOperationStatus& GetAccountAssignmentCreationStatus() const { return m_accountAssignmentCreationStatus; }
    template<typename AccountAssignmentCreationStatusT = AccountAssignmentOperationStatus>
    void SetAccountAssignmentCreationStatus(AccountAssignmentCreationStatusT&& value) { m_accountAssignmentCreationStatusHasBeenSet = true; m_accountAssignmentCreationStatus = std::forward<AccountAssignmentCreationStatusT>(value); }
    template<typename AccountAssignmentCreationStatusT = AccountAssignmentOperationStatus>
    DescribeAccountAssignmentCreationStatusResult& WithAccountAssignmentCreationStatus(AccountAssignmentCreationStatusT&& value) { SetAccountAssignmentCreationStatus(std::forward<AccountAssignmentCreationStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAccountAssignmentCreationStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccountAssignmentOperationStatus m_accountAssignmentCreationStatus;
    bool m_accountAssignmentCreationStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
