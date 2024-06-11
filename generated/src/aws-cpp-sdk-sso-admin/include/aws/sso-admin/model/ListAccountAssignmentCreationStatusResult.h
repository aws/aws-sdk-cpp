﻿/**
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
    AWS_SSOADMIN_API ListAccountAssignmentCreationStatusResult();
    AWS_SSOADMIN_API ListAccountAssignmentCreationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListAccountAssignmentCreationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status object for the account assignment creation operation.</p>
     */
    inline const Aws::Vector<AccountAssignmentOperationStatusMetadata>& GetAccountAssignmentsCreationStatus() const{ return m_accountAssignmentsCreationStatus; }
    inline void SetAccountAssignmentsCreationStatus(const Aws::Vector<AccountAssignmentOperationStatusMetadata>& value) { m_accountAssignmentsCreationStatus = value; }
    inline void SetAccountAssignmentsCreationStatus(Aws::Vector<AccountAssignmentOperationStatusMetadata>&& value) { m_accountAssignmentsCreationStatus = std::move(value); }
    inline ListAccountAssignmentCreationStatusResult& WithAccountAssignmentsCreationStatus(const Aws::Vector<AccountAssignmentOperationStatusMetadata>& value) { SetAccountAssignmentsCreationStatus(value); return *this;}
    inline ListAccountAssignmentCreationStatusResult& WithAccountAssignmentsCreationStatus(Aws::Vector<AccountAssignmentOperationStatusMetadata>&& value) { SetAccountAssignmentsCreationStatus(std::move(value)); return *this;}
    inline ListAccountAssignmentCreationStatusResult& AddAccountAssignmentsCreationStatus(const AccountAssignmentOperationStatusMetadata& value) { m_accountAssignmentsCreationStatus.push_back(value); return *this; }
    inline ListAccountAssignmentCreationStatusResult& AddAccountAssignmentsCreationStatus(AccountAssignmentOperationStatusMetadata&& value) { m_accountAssignmentsCreationStatus.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAccountAssignmentCreationStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAccountAssignmentCreationStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAccountAssignmentCreationStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAccountAssignmentCreationStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAccountAssignmentCreationStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAccountAssignmentCreationStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AccountAssignmentOperationStatusMetadata> m_accountAssignmentsCreationStatus;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
