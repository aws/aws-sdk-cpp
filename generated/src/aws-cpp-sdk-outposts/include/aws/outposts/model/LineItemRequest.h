/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Outposts
{
namespace Model
{

  /**
   * <p>Information about a line item request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/LineItemRequest">AWS
   * API Reference</a></p>
   */
  class LineItemRequest
  {
  public:
    AWS_OUTPOSTS_API LineItemRequest() = default;
    AWS_OUTPOSTS_API LineItemRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API LineItemRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the catalog item.</p>
     */
    inline const Aws::String& GetCatalogItemId() const { return m_catalogItemId; }
    inline bool CatalogItemIdHasBeenSet() const { return m_catalogItemIdHasBeenSet; }
    template<typename CatalogItemIdT = Aws::String>
    void SetCatalogItemId(CatalogItemIdT&& value) { m_catalogItemIdHasBeenSet = true; m_catalogItemId = std::forward<CatalogItemIdT>(value); }
    template<typename CatalogItemIdT = Aws::String>
    LineItemRequest& WithCatalogItemId(CatalogItemIdT&& value) { SetCatalogItemId(std::forward<CatalogItemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quantity of a line item request.</p>
     */
    inline int GetQuantity() const { return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline LineItemRequest& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}
  private:

    Aws::String m_catalogItemId;
    bool m_catalogItemIdHasBeenSet = false;

    int m_quantity{0};
    bool m_quantityHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
