/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/LibraryItemMember.h>
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
namespace QApps
{
namespace Model
{
  class ListLibraryItemsResult
  {
  public:
    AWS_QAPPS_API ListLibraryItemsResult();
    AWS_QAPPS_API ListLibraryItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API ListLibraryItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of library items meeting the request criteria.</p>
     */
    inline const Aws::Vector<LibraryItemMember>& GetLibraryItems() const{ return m_libraryItems; }
    inline void SetLibraryItems(const Aws::Vector<LibraryItemMember>& value) { m_libraryItems = value; }
    inline void SetLibraryItems(Aws::Vector<LibraryItemMember>&& value) { m_libraryItems = std::move(value); }
    inline ListLibraryItemsResult& WithLibraryItems(const Aws::Vector<LibraryItemMember>& value) { SetLibraryItems(value); return *this;}
    inline ListLibraryItemsResult& WithLibraryItems(Aws::Vector<LibraryItemMember>&& value) { SetLibraryItems(std::move(value)); return *this;}
    inline ListLibraryItemsResult& AddLibraryItems(const LibraryItemMember& value) { m_libraryItems.push_back(value); return *this; }
    inline ListLibraryItemsResult& AddLibraryItems(LibraryItemMember&& value) { m_libraryItems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListLibraryItemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLibraryItemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLibraryItemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListLibraryItemsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListLibraryItemsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListLibraryItemsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<LibraryItemMember> m_libraryItems;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
