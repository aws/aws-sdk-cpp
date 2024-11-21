/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/RunCacheListItem.h>
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
namespace Omics
{
namespace Model
{
  class ListRunCachesResult
  {
  public:
    AWS_OMICS_API ListRunCachesResult();
    AWS_OMICS_API ListRunCachesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API ListRunCachesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about each run cache in the response.</p>
     */
    inline const Aws::Vector<RunCacheListItem>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<RunCacheListItem>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<RunCacheListItem>&& value) { m_items = std::move(value); }
    inline ListRunCachesResult& WithItems(const Aws::Vector<RunCacheListItem>& value) { SetItems(value); return *this;}
    inline ListRunCachesResult& WithItems(Aws::Vector<RunCacheListItem>&& value) { SetItems(std::move(value)); return *this;}
    inline ListRunCachesResult& AddItems(const RunCacheListItem& value) { m_items.push_back(value); return *this; }
    inline ListRunCachesResult& AddItems(RunCacheListItem&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token to retrieve additional run caches. If the response does not
     * have a <code>nextToken</code>value, you have reached to the end of the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRunCachesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRunCachesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRunCachesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRunCachesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRunCachesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRunCachesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RunCacheListItem> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
