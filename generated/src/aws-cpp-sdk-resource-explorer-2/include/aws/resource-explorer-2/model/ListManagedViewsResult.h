/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ResourceExplorer2
{
namespace Model
{
  class ListManagedViewsResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API ListManagedViewsResult();
    AWS_RESOURCEEXPLORER2_API ListManagedViewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API ListManagedViewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of managed views available in the Amazon Web Services Region in
     * which you called this operation. </p>
     */
    inline const Aws::Vector<Aws::String>& GetManagedViews() const{ return m_managedViews; }
    inline void SetManagedViews(const Aws::Vector<Aws::String>& value) { m_managedViews = value; }
    inline void SetManagedViews(Aws::Vector<Aws::String>&& value) { m_managedViews = std::move(value); }
    inline ListManagedViewsResult& WithManagedViews(const Aws::Vector<Aws::String>& value) { SetManagedViews(value); return *this;}
    inline ListManagedViewsResult& WithManagedViews(Aws::Vector<Aws::String>&& value) { SetManagedViews(std::move(value)); return *this;}
    inline ListManagedViewsResult& AddManagedViews(const Aws::String& value) { m_managedViews.push_back(value); return *this; }
    inline ListManagedViewsResult& AddManagedViews(Aws::String&& value) { m_managedViews.push_back(std::move(value)); return *this; }
    inline ListManagedViewsResult& AddManagedViews(const char* value) { m_managedViews.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>. The pagination tokens expire after 24 hours.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListManagedViewsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListManagedViewsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListManagedViewsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListManagedViewsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListManagedViewsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListManagedViewsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_managedViews;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
