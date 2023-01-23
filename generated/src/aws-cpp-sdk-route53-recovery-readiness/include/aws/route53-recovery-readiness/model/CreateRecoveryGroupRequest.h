/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateRecoveryGroupRequest : public Route53RecoveryReadinessRequest
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API CreateRecoveryGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRecoveryGroup"; }

    AWS_ROUTE53RECOVERYREADINESS_API Aws::String SerializePayload() const override;


    /**
     * <p>A list of the cell Amazon Resource Names (ARNs) in the recovery group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCells() const{ return m_cells; }

    /**
     * <p>A list of the cell Amazon Resource Names (ARNs) in the recovery group.</p>
     */
    inline bool CellsHasBeenSet() const { return m_cellsHasBeenSet; }

    /**
     * <p>A list of the cell Amazon Resource Names (ARNs) in the recovery group.</p>
     */
    inline void SetCells(const Aws::Vector<Aws::String>& value) { m_cellsHasBeenSet = true; m_cells = value; }

    /**
     * <p>A list of the cell Amazon Resource Names (ARNs) in the recovery group.</p>
     */
    inline void SetCells(Aws::Vector<Aws::String>&& value) { m_cellsHasBeenSet = true; m_cells = std::move(value); }

    /**
     * <p>A list of the cell Amazon Resource Names (ARNs) in the recovery group.</p>
     */
    inline CreateRecoveryGroupRequest& WithCells(const Aws::Vector<Aws::String>& value) { SetCells(value); return *this;}

    /**
     * <p>A list of the cell Amazon Resource Names (ARNs) in the recovery group.</p>
     */
    inline CreateRecoveryGroupRequest& WithCells(Aws::Vector<Aws::String>&& value) { SetCells(std::move(value)); return *this;}

    /**
     * <p>A list of the cell Amazon Resource Names (ARNs) in the recovery group.</p>
     */
    inline CreateRecoveryGroupRequest& AddCells(const Aws::String& value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }

    /**
     * <p>A list of the cell Amazon Resource Names (ARNs) in the recovery group.</p>
     */
    inline CreateRecoveryGroupRequest& AddCells(Aws::String&& value) { m_cellsHasBeenSet = true; m_cells.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the cell Amazon Resource Names (ARNs) in the recovery group.</p>
     */
    inline CreateRecoveryGroupRequest& AddCells(const char* value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }


    /**
     * <p>The name of the recovery group to create.</p>
     */
    inline const Aws::String& GetRecoveryGroupName() const{ return m_recoveryGroupName; }

    /**
     * <p>The name of the recovery group to create.</p>
     */
    inline bool RecoveryGroupNameHasBeenSet() const { return m_recoveryGroupNameHasBeenSet; }

    /**
     * <p>The name of the recovery group to create.</p>
     */
    inline void SetRecoveryGroupName(const Aws::String& value) { m_recoveryGroupNameHasBeenSet = true; m_recoveryGroupName = value; }

    /**
     * <p>The name of the recovery group to create.</p>
     */
    inline void SetRecoveryGroupName(Aws::String&& value) { m_recoveryGroupNameHasBeenSet = true; m_recoveryGroupName = std::move(value); }

    /**
     * <p>The name of the recovery group to create.</p>
     */
    inline void SetRecoveryGroupName(const char* value) { m_recoveryGroupNameHasBeenSet = true; m_recoveryGroupName.assign(value); }

    /**
     * <p>The name of the recovery group to create.</p>
     */
    inline CreateRecoveryGroupRequest& WithRecoveryGroupName(const Aws::String& value) { SetRecoveryGroupName(value); return *this;}

    /**
     * <p>The name of the recovery group to create.</p>
     */
    inline CreateRecoveryGroupRequest& WithRecoveryGroupName(Aws::String&& value) { SetRecoveryGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the recovery group to create.</p>
     */
    inline CreateRecoveryGroupRequest& WithRecoveryGroupName(const char* value) { SetRecoveryGroupName(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateRecoveryGroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline CreateRecoveryGroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateRecoveryGroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    
    inline CreateRecoveryGroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateRecoveryGroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateRecoveryGroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline CreateRecoveryGroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateRecoveryGroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateRecoveryGroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::Vector<Aws::String> m_cells;
    bool m_cellsHasBeenSet = false;

    Aws::String m_recoveryGroupName;
    bool m_recoveryGroupNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
