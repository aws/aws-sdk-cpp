/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   */
  class CreateCellRequest : public Route53RecoveryReadinessRequest
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API CreateCellRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCell"; }

    AWS_ROUTE53RECOVERYREADINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the cell to create.</p>
     */
    inline const Aws::String& GetCellName() const { return m_cellName; }
    inline bool CellNameHasBeenSet() const { return m_cellNameHasBeenSet; }
    template<typename CellNameT = Aws::String>
    void SetCellName(CellNameT&& value) { m_cellNameHasBeenSet = true; m_cellName = std::forward<CellNameT>(value); }
    template<typename CellNameT = Aws::String>
    CreateCellRequest& WithCellName(CellNameT&& value) { SetCellName(std::forward<CellNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cell Amazon Resource Names (ARNs) contained within this cell, for
     * use in nested cells. For example, Availability Zones within specific Amazon Web
     * Services Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCells() const { return m_cells; }
    inline bool CellsHasBeenSet() const { return m_cellsHasBeenSet; }
    template<typename CellsT = Aws::Vector<Aws::String>>
    void SetCells(CellsT&& value) { m_cellsHasBeenSet = true; m_cells = std::forward<CellsT>(value); }
    template<typename CellsT = Aws::Vector<Aws::String>>
    CreateCellRequest& WithCells(CellsT&& value) { SetCells(std::forward<CellsT>(value)); return *this;}
    template<typename CellsT = Aws::String>
    CreateCellRequest& AddCells(CellsT&& value) { m_cellsHasBeenSet = true; m_cells.emplace_back(std::forward<CellsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateCellRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateCellRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_cellName;
    bool m_cellNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_cells;
    bool m_cellsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
