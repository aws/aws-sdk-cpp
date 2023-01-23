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
    AWS_SSOADMIN_API ListAccountAssignmentsResult();
    AWS_SSOADMIN_API ListAccountAssignmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API ListAccountAssignmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of assignments that match the input AWS account and permission
     * set.</p>
     */
    inline const Aws::Vector<AccountAssignment>& GetAccountAssignments() const{ return m_accountAssignments; }

    /**
     * <p>The list of assignments that match the input AWS account and permission
     * set.</p>
     */
    inline void SetAccountAssignments(const Aws::Vector<AccountAssignment>& value) { m_accountAssignments = value; }

    /**
     * <p>The list of assignments that match the input AWS account and permission
     * set.</p>
     */
    inline void SetAccountAssignments(Aws::Vector<AccountAssignment>&& value) { m_accountAssignments = std::move(value); }

    /**
     * <p>The list of assignments that match the input AWS account and permission
     * set.</p>
     */
    inline ListAccountAssignmentsResult& WithAccountAssignments(const Aws::Vector<AccountAssignment>& value) { SetAccountAssignments(value); return *this;}

    /**
     * <p>The list of assignments that match the input AWS account and permission
     * set.</p>
     */
    inline ListAccountAssignmentsResult& WithAccountAssignments(Aws::Vector<AccountAssignment>&& value) { SetAccountAssignments(std::move(value)); return *this;}

    /**
     * <p>The list of assignments that match the input AWS account and permission
     * set.</p>
     */
    inline ListAccountAssignmentsResult& AddAccountAssignments(const AccountAssignment& value) { m_accountAssignments.push_back(value); return *this; }

    /**
     * <p>The list of assignments that match the input AWS account and permission
     * set.</p>
     */
    inline ListAccountAssignmentsResult& AddAccountAssignments(AccountAssignment&& value) { m_accountAssignments.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline ListAccountAssignmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline ListAccountAssignmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token for the list API. Initially the value is null. Use the
     * output of previous API calls to make subsequent calls.</p>
     */
    inline ListAccountAssignmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AccountAssignment> m_accountAssignments;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
