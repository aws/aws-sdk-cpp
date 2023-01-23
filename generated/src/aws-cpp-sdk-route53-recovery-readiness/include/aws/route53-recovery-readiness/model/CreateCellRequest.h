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
    AWS_ROUTE53RECOVERYREADINESS_API CreateCellRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCell"; }

    AWS_ROUTE53RECOVERYREADINESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the cell to create.</p>
     */
    inline const Aws::String& GetCellName() const{ return m_cellName; }

    /**
     * <p>The name of the cell to create.</p>
     */
    inline bool CellNameHasBeenSet() const { return m_cellNameHasBeenSet; }

    /**
     * <p>The name of the cell to create.</p>
     */
    inline void SetCellName(const Aws::String& value) { m_cellNameHasBeenSet = true; m_cellName = value; }

    /**
     * <p>The name of the cell to create.</p>
     */
    inline void SetCellName(Aws::String&& value) { m_cellNameHasBeenSet = true; m_cellName = std::move(value); }

    /**
     * <p>The name of the cell to create.</p>
     */
    inline void SetCellName(const char* value) { m_cellNameHasBeenSet = true; m_cellName.assign(value); }

    /**
     * <p>The name of the cell to create.</p>
     */
    inline CreateCellRequest& WithCellName(const Aws::String& value) { SetCellName(value); return *this;}

    /**
     * <p>The name of the cell to create.</p>
     */
    inline CreateCellRequest& WithCellName(Aws::String&& value) { SetCellName(std::move(value)); return *this;}

    /**
     * <p>The name of the cell to create.</p>
     */
    inline CreateCellRequest& WithCellName(const char* value) { SetCellName(value); return *this;}


    /**
     * <p>A list of cell Amazon Resource Names (ARNs) contained within this cell, for
     * use in nested cells. For example, Availability Zones within specific Amazon Web
     * Services Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCells() const{ return m_cells; }

    /**
     * <p>A list of cell Amazon Resource Names (ARNs) contained within this cell, for
     * use in nested cells. For example, Availability Zones within specific Amazon Web
     * Services Regions.</p>
     */
    inline bool CellsHasBeenSet() const { return m_cellsHasBeenSet; }

    /**
     * <p>A list of cell Amazon Resource Names (ARNs) contained within this cell, for
     * use in nested cells. For example, Availability Zones within specific Amazon Web
     * Services Regions.</p>
     */
    inline void SetCells(const Aws::Vector<Aws::String>& value) { m_cellsHasBeenSet = true; m_cells = value; }

    /**
     * <p>A list of cell Amazon Resource Names (ARNs) contained within this cell, for
     * use in nested cells. For example, Availability Zones within specific Amazon Web
     * Services Regions.</p>
     */
    inline void SetCells(Aws::Vector<Aws::String>&& value) { m_cellsHasBeenSet = true; m_cells = std::move(value); }

    /**
     * <p>A list of cell Amazon Resource Names (ARNs) contained within this cell, for
     * use in nested cells. For example, Availability Zones within specific Amazon Web
     * Services Regions.</p>
     */
    inline CreateCellRequest& WithCells(const Aws::Vector<Aws::String>& value) { SetCells(value); return *this;}

    /**
     * <p>A list of cell Amazon Resource Names (ARNs) contained within this cell, for
     * use in nested cells. For example, Availability Zones within specific Amazon Web
     * Services Regions.</p>
     */
    inline CreateCellRequest& WithCells(Aws::Vector<Aws::String>&& value) { SetCells(std::move(value)); return *this;}

    /**
     * <p>A list of cell Amazon Resource Names (ARNs) contained within this cell, for
     * use in nested cells. For example, Availability Zones within specific Amazon Web
     * Services Regions.</p>
     */
    inline CreateCellRequest& AddCells(const Aws::String& value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }

    /**
     * <p>A list of cell Amazon Resource Names (ARNs) contained within this cell, for
     * use in nested cells. For example, Availability Zones within specific Amazon Web
     * Services Regions.</p>
     */
    inline CreateCellRequest& AddCells(Aws::String&& value) { m_cellsHasBeenSet = true; m_cells.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of cell Amazon Resource Names (ARNs) contained within this cell, for
     * use in nested cells. For example, Availability Zones within specific Amazon Web
     * Services Regions.</p>
     */
    inline CreateCellRequest& AddCells(const char* value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateCellRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline CreateCellRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateCellRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline CreateCellRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateCellRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateCellRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline CreateCellRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateCellRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateCellRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

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
