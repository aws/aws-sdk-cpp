/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ResourceExplorer2
{
namespace Model
{
  class ListViewsResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API ListViewsResult();
    AWS_RESOURCEEXPLORER2_API ListViewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API ListViewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListViewsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListViewsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline ListViewsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of views available in the Amazon Web Services Region in which you
     * called this operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetViews() const{ return m_views; }

    /**
     * <p>The list of views available in the Amazon Web Services Region in which you
     * called this operation.</p>
     */
    inline void SetViews(const Aws::Vector<Aws::String>& value) { m_views = value; }

    /**
     * <p>The list of views available in the Amazon Web Services Region in which you
     * called this operation.</p>
     */
    inline void SetViews(Aws::Vector<Aws::String>&& value) { m_views = std::move(value); }

    /**
     * <p>The list of views available in the Amazon Web Services Region in which you
     * called this operation.</p>
     */
    inline ListViewsResult& WithViews(const Aws::Vector<Aws::String>& value) { SetViews(value); return *this;}

    /**
     * <p>The list of views available in the Amazon Web Services Region in which you
     * called this operation.</p>
     */
    inline ListViewsResult& WithViews(Aws::Vector<Aws::String>&& value) { SetViews(std::move(value)); return *this;}

    /**
     * <p>The list of views available in the Amazon Web Services Region in which you
     * called this operation.</p>
     */
    inline ListViewsResult& AddViews(const Aws::String& value) { m_views.push_back(value); return *this; }

    /**
     * <p>The list of views available in the Amazon Web Services Region in which you
     * called this operation.</p>
     */
    inline ListViewsResult& AddViews(Aws::String&& value) { m_views.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of views available in the Amazon Web Services Region in which you
     * called this operation.</p>
     */
    inline ListViewsResult& AddViews(const char* value) { m_views.push_back(value); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Aws::String> m_views;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
