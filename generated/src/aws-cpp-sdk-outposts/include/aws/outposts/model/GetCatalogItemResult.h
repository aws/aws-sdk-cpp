/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/CatalogItem.h>
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
namespace Outposts
{
namespace Model
{
  class GetCatalogItemResult
  {
  public:
    AWS_OUTPOSTS_API GetCatalogItemResult() = default;
    AWS_OUTPOSTS_API GetCatalogItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API GetCatalogItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about this catalog item.</p>
     */
    inline const CatalogItem& GetCatalogItem() const { return m_catalogItem; }
    template<typename CatalogItemT = CatalogItem>
    void SetCatalogItem(CatalogItemT&& value) { m_catalogItemHasBeenSet = true; m_catalogItem = std::forward<CatalogItemT>(value); }
    template<typename CatalogItemT = CatalogItem>
    GetCatalogItemResult& WithCatalogItem(CatalogItemT&& value) { SetCatalogItem(std::forward<CatalogItemT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCatalogItemResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CatalogItem m_catalogItem;
    bool m_catalogItemHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
