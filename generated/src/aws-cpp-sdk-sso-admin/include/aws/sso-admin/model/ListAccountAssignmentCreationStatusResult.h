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
  class ListAccountAssignmentCreationStatusResult
  {
  public:
    AWS_SSOADMIN_API ListAccountAssignmentCreationStatusResult() = default;
    AWS_SSOADMIN_API ListAccountAssignmentCreationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListAccountAssignmentCreationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status object for the account assignment creation operation.</p>
     */
    inline const Aws::Vector<AccountAssignmentOperationStatusMetadata>& GetAccountAssignmentsCreationStatus() const { return m_accountAssignmentsCreationStatus; }
    template<typename AccountAssignmentsCreationStatusT = Aws::Vector<AccountAssignmentOperationStatusMetadata>>
    void SetAccountAssignmentsCreationStatus(AccountAssignmentsCreationStatusT&& value) { m_accountAssignmentsCreationStatusHasBeenSet = true; m_accountAssignmentsCreationStatus = std::forward<AccountAssignmentsCreationStatusT>(value); }
    template<typename AccountAssignmentsCreationStatusT = Aws::Vector<AccountAssignmentOperationStatusMetadata>>
    ListAccountAssignmentCreationStatusResult& WithAccountAssignmentsCreationStatus(AccountAssignmentsCreationStatusT&& value) { SetAccountAssignmentsCreationStatus(std::forward<AccountAssignmentsCreationStatusT>(value)); return *this;}
    template<typename AccountAssignmentsCreationStatusT = AccountAssignmentOperationStatusMetadata>
    ListAccountAssignmentCreationStatusResult& AddAccountAssignmentsCreationStatus(AccountAssignmentsCreationStatusT&& value) { m_accountAssignmentsCreationStatusHasBeenSet = true; m_accountAssignmentsCreationStatus.emplace_back(std::forward<AccountAssignmentsCreationStatusT>(value)); return *this; }
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
    ListAccountAssignmentCreationStatusResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAccountAssignmentCreationStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountAssignmentOperationStatusMetadata> m_accountAssignmentsCreationStatus;
    bool m_accountAssignmentsCreationStatusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
