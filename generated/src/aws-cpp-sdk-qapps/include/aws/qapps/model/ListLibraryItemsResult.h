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
    AWS_QAPPS_API ListLibraryItemsResult() = default;
    AWS_QAPPS_API ListLibraryItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API ListLibraryItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of library items meeting the request criteria.</p>
     */
    inline const Aws::Vector<LibraryItemMember>& GetLibraryItems() const { return m_libraryItems; }
    template<typename LibraryItemsT = Aws::Vector<LibraryItemMember>>
    void SetLibraryItems(LibraryItemsT&& value) { m_libraryItemsHasBeenSet = true; m_libraryItems = std::forward<LibraryItemsT>(value); }
    template<typename LibraryItemsT = Aws::Vector<LibraryItemMember>>
    ListLibraryItemsResult& WithLibraryItems(LibraryItemsT&& value) { SetLibraryItems(std::forward<LibraryItemsT>(value)); return *this;}
    template<typename LibraryItemsT = LibraryItemMember>
    ListLibraryItemsResult& AddLibraryItems(LibraryItemsT&& value) { m_libraryItemsHasBeenSet = true; m_libraryItems.emplace_back(std::forward<LibraryItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLibraryItemsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLibraryItemsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LibraryItemMember> m_libraryItems;
    bool m_libraryItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
