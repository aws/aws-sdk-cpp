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
  class ListAccountAssignmentDeletionStatusResult
  {
  public:
    AWS_SSOADMIN_API ListAccountAssignmentDeletionStatusResult();
    AWS_SSOADMIN_API ListAccountAssignmentDeletionStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListAccountAssignmentDeletionStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status object for the account assignment deletion operation.</p>
     */
    inline const Aws::Vector<AccountAssignmentOperationStatusMetadata>& GetAccountAssignmentsDeletionStatus() const{ return m_accountAssignmentsDeletionStatus; }
    inline void SetAccountAssignmentsDeletionStatus(const Aws::Vector<AccountAssignmentOperationStatusMetadata>& value) { m_accountAssignmentsDeletionStatus = value; }
    inline void SetAccountAssignmentsDeletionStatus(Aws::Vector<AccountAssignmentOperationStatusMetadata>&& value) { m_accountAssignmentsDeletionStatus = std::move(value); }
    inline ListAccountAssignmentDeletionStatusResult& WithAccountAssignmentsDeletionStatus(const Aws::Vector<AccountAssignmentOperationStatusMetadata>& value) { SetAccountAssignmentsDeletionStatus(value); return *this;}
    inline ListAccountAssignmentDeletionStatusResult& WithAccountAssignmentsDeletionStatus(Aws::Vector<AccountAssignmentOperationStatusMetadata>&& value) { SetAccountAssignmentsDeletionStatus(std::move(value)); return *this;}
    inline ListAccountAssignmentDeletionStatusResult& AddAccountAssignmentsDeletionStatus(const AccountAssignmentOperationStatusMetadata& value) { m_accountAssignmentsDeletionStatus.push_back(value); return *this; }
    inline ListAccountAssignmentDeletionStatusResult& AddAccountAssignmentsDeletionStatus(AccountAssignmentOperationStatusMetadata&& value) { m_accountAssignmentsDeletionStatus.push_back(std::move(value)); return *this; }
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
    inline ListAccountAssignmentDeletionStatusResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAccountAssignmentDeletionStatusResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAccountAssignmentDeletionStatusResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAccountAssignmentDeletionStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAccountAssignmentDeletionStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAccountAssignmentDeletionStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AccountAssignmentOperationStatusMetadata> m_accountAssignmentsDeletionStatus;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
