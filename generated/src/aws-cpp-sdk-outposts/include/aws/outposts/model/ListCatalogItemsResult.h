/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/CatalogItem.h>
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
namespace Outposts
{
namespace Model
{
  class ListCatalogItemsResult
  {
  public:
    AWS_OUTPOSTS_API ListCatalogItemsResult() = default;
    AWS_OUTPOSTS_API ListCatalogItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API ListCatalogItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the catalog items.</p>
     */
    inline const Aws::Vector<CatalogItem>& GetCatalogItems() const { return m_catalogItems; }
    template<typename CatalogItemsT = Aws::Vector<CatalogItem>>
    void SetCatalogItems(CatalogItemsT&& value) { m_catalogItemsHasBeenSet = true; m_catalogItems = std::forward<CatalogItemsT>(value); }
    template<typename CatalogItemsT = Aws::Vector<CatalogItem>>
    ListCatalogItemsResult& WithCatalogItems(CatalogItemsT&& value) { SetCatalogItems(std::forward<CatalogItemsT>(value)); return *this;}
    template<typename CatalogItemsT = CatalogItem>
    ListCatalogItemsResult& AddCatalogItems(CatalogItemsT&& value) { m_catalogItemsHasBeenSet = true; m_catalogItems.emplace_back(std::forward<CatalogItemsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCatalogItemsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCatalogItemsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CatalogItem> m_catalogItems;
    bool m_catalogItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
