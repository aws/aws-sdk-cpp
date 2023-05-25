/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/ResponseItem.h>
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
namespace WorkDocs
{
namespace Model
{
  class SearchResourcesResult
  {
  public:
    AWS_WORKDOCS_API SearchResourcesResult();
    AWS_WORKDOCS_API SearchResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKDOCS_API SearchResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of Documents, Folders, Comments, and Document Versions matching the
     * query.</p>
     */
    inline const Aws::Vector<ResponseItem>& GetItems() const{ return m_items; }

    /**
     * <p>List of Documents, Folders, Comments, and Document Versions matching the
     * query.</p>
     */
    inline void SetItems(const Aws::Vector<ResponseItem>& value) { m_items = value; }

    /**
     * <p>List of Documents, Folders, Comments, and Document Versions matching the
     * query.</p>
     */
    inline void SetItems(Aws::Vector<ResponseItem>&& value) { m_items = std::move(value); }

    /**
     * <p>List of Documents, Folders, Comments, and Document Versions matching the
     * query.</p>
     */
    inline SearchResourcesResult& WithItems(const Aws::Vector<ResponseItem>& value) { SetItems(value); return *this;}

    /**
     * <p>List of Documents, Folders, Comments, and Document Versions matching the
     * query.</p>
     */
    inline SearchResourcesResult& WithItems(Aws::Vector<ResponseItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>List of Documents, Folders, Comments, and Document Versions matching the
     * query.</p>
     */
    inline SearchResourcesResult& AddItems(const ResponseItem& value) { m_items.push_back(value); return *this; }

    /**
     * <p>List of Documents, Folders, Comments, and Document Versions matching the
     * query.</p>
     */
    inline SearchResourcesResult& AddItems(ResponseItem&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline SearchResourcesResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline SearchResourcesResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker to use when requesting the next set of results. If there are no
     * additional results, the string is empty.</p>
     */
    inline SearchResourcesResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ResponseItem> m_items;

    Aws::String m_marker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
