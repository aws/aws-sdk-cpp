/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/DelegatedAdministrator.h>
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
namespace Organizations
{
namespace Model
{
  class ListDelegatedAdministratorsResult
  {
  public:
    AWS_ORGANIZATIONS_API ListDelegatedAdministratorsResult();
    AWS_ORGANIZATIONS_API ListDelegatedAdministratorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API ListDelegatedAdministratorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of delegated administrators in your organization.</p>
     */
    inline const Aws::Vector<DelegatedAdministrator>& GetDelegatedAdministrators() const{ return m_delegatedAdministrators; }

    /**
     * <p>The list of delegated administrators in your organization.</p>
     */
    inline void SetDelegatedAdministrators(const Aws::Vector<DelegatedAdministrator>& value) { m_delegatedAdministrators = value; }

    /**
     * <p>The list of delegated administrators in your organization.</p>
     */
    inline void SetDelegatedAdministrators(Aws::Vector<DelegatedAdministrator>&& value) { m_delegatedAdministrators = std::move(value); }

    /**
     * <p>The list of delegated administrators in your organization.</p>
     */
    inline ListDelegatedAdministratorsResult& WithDelegatedAdministrators(const Aws::Vector<DelegatedAdministrator>& value) { SetDelegatedAdministrators(value); return *this;}

    /**
     * <p>The list of delegated administrators in your organization.</p>
     */
    inline ListDelegatedAdministratorsResult& WithDelegatedAdministrators(Aws::Vector<DelegatedAdministrator>&& value) { SetDelegatedAdministrators(std::move(value)); return *this;}

    /**
     * <p>The list of delegated administrators in your organization.</p>
     */
    inline ListDelegatedAdministratorsResult& AddDelegatedAdministrators(const DelegatedAdministrator& value) { m_delegatedAdministrators.push_back(value); return *this; }

    /**
     * <p>The list of delegated administrators in your organization.</p>
     */
    inline ListDelegatedAdministratorsResult& AddDelegatedAdministrators(DelegatedAdministrator&& value) { m_delegatedAdministrators.push_back(std::move(value)); return *this; }


    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListDelegatedAdministratorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListDelegatedAdministratorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListDelegatedAdministratorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DelegatedAdministrator> m_delegatedAdministrators;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
