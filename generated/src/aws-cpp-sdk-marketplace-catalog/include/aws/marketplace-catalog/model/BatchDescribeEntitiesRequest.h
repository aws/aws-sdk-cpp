/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/MarketplaceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/model/EntityRequest.h>
#include <utility>

namespace Aws
{
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   */
  class BatchDescribeEntitiesRequest : public MarketplaceCatalogRequest
  {
  public:
    AWS_MARKETPLACECATALOG_API BatchDescribeEntitiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDescribeEntities"; }

    AWS_MARKETPLACECATALOG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>List of entity IDs and the catalogs the entities are present in.</p>
     */
    inline const Aws::Vector<EntityRequest>& GetEntityRequestList() const { return m_entityRequestList; }
    inline bool EntityRequestListHasBeenSet() const { return m_entityRequestListHasBeenSet; }
    template<typename EntityRequestListT = Aws::Vector<EntityRequest>>
    void SetEntityRequestList(EntityRequestListT&& value) { m_entityRequestListHasBeenSet = true; m_entityRequestList = std::forward<EntityRequestListT>(value); }
    template<typename EntityRequestListT = Aws::Vector<EntityRequest>>
    BatchDescribeEntitiesRequest& WithEntityRequestList(EntityRequestListT&& value) { SetEntityRequestList(std::forward<EntityRequestListT>(value)); return *this;}
    template<typename EntityRequestListT = EntityRequest>
    BatchDescribeEntitiesRequest& AddEntityRequestList(EntityRequestListT&& value) { m_entityRequestListHasBeenSet = true; m_entityRequestList.emplace_back(std::forward<EntityRequestListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<EntityRequest> m_entityRequestList;
    bool m_entityRequestListHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
