/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/Child.h>
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
  class ListChildrenResult
  {
  public:
    AWS_ORGANIZATIONS_API ListChildrenResult();
    AWS_ORGANIZATIONS_API ListChildrenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ORGANIZATIONS_API ListChildrenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of children of the specified parent container.</p>
     */
    inline const Aws::Vector<Child>& GetChildren() const{ return m_children; }

    /**
     * <p>The list of children of the specified parent container.</p>
     */
    inline void SetChildren(const Aws::Vector<Child>& value) { m_children = value; }

    /**
     * <p>The list of children of the specified parent container.</p>
     */
    inline void SetChildren(Aws::Vector<Child>&& value) { m_children = std::move(value); }

    /**
     * <p>The list of children of the specified parent container.</p>
     */
    inline ListChildrenResult& WithChildren(const Aws::Vector<Child>& value) { SetChildren(value); return *this;}

    /**
     * <p>The list of children of the specified parent container.</p>
     */
    inline ListChildrenResult& WithChildren(Aws::Vector<Child>&& value) { SetChildren(std::move(value)); return *this;}

    /**
     * <p>The list of children of the specified parent container.</p>
     */
    inline ListChildrenResult& AddChildren(const Child& value) { m_children.push_back(value); return *this; }

    /**
     * <p>The list of children of the specified parent container.</p>
     */
    inline ListChildrenResult& AddChildren(Child&& value) { m_children.push_back(std::move(value)); return *this; }


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
    inline ListChildrenResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListChildrenResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListChildrenResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Child> m_children;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
