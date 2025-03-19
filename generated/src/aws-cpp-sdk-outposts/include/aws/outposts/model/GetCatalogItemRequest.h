/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Outposts
{
namespace Model
{

  /**
   */
  class GetCatalogItemRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API GetCatalogItemRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCatalogItem"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the catalog item.</p>
     */
    inline const Aws::String& GetCatalogItemId() const { return m_catalogItemId; }
    inline bool CatalogItemIdHasBeenSet() const { return m_catalogItemIdHasBeenSet; }
    template<typename CatalogItemIdT = Aws::String>
    void SetCatalogItemId(CatalogItemIdT&& value) { m_catalogItemIdHasBeenSet = true; m_catalogItemId = std::forward<CatalogItemIdT>(value); }
    template<typename CatalogItemIdT = Aws::String>
    GetCatalogItemRequest& WithCatalogItemId(CatalogItemIdT&& value) { SetCatalogItemId(std::forward<CatalogItemIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogItemId;
    bool m_catalogItemIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
