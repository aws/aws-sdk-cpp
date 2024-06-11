/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * <p>Name of a recovery group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/UpdateRecoveryGroupRequest">AWS
   * API Reference</a></p>
   */
  class UpdateRecoveryGroupRequest : public Route53RecoveryReadinessRequest
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API UpdateRecoveryGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRecoveryGroup"; }

    AWS_ROUTE53RECOVERYREADINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of cell Amazon Resource Names (ARNs). This list completely replaces
     * the previous list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCells() const{ return m_cells; }
    inline bool CellsHasBeenSet() const { return m_cellsHasBeenSet; }
    inline void SetCells(const Aws::Vector<Aws::String>& value) { m_cellsHasBeenSet = true; m_cells = value; }
    inline void SetCells(Aws::Vector<Aws::String>&& value) { m_cellsHasBeenSet = true; m_cells = std::move(value); }
    inline UpdateRecoveryGroupRequest& WithCells(const Aws::Vector<Aws::String>& value) { SetCells(value); return *this;}
    inline UpdateRecoveryGroupRequest& WithCells(Aws::Vector<Aws::String>&& value) { SetCells(std::move(value)); return *this;}
    inline UpdateRecoveryGroupRequest& AddCells(const Aws::String& value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }
    inline UpdateRecoveryGroupRequest& AddCells(Aws::String&& value) { m_cellsHasBeenSet = true; m_cells.push_back(std::move(value)); return *this; }
    inline UpdateRecoveryGroupRequest& AddCells(const char* value) { m_cellsHasBeenSet = true; m_cells.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of a recovery group.</p>
     */
    inline const Aws::String& GetRecoveryGroupName() const{ return m_recoveryGroupName; }
    inline bool RecoveryGroupNameHasBeenSet() const { return m_recoveryGroupNameHasBeenSet; }
    inline void SetRecoveryGroupName(const Aws::String& value) { m_recoveryGroupNameHasBeenSet = true; m_recoveryGroupName = value; }
    inline void SetRecoveryGroupName(Aws::String&& value) { m_recoveryGroupNameHasBeenSet = true; m_recoveryGroupName = std::move(value); }
    inline void SetRecoveryGroupName(const char* value) { m_recoveryGroupNameHasBeenSet = true; m_recoveryGroupName.assign(value); }
    inline UpdateRecoveryGroupRequest& WithRecoveryGroupName(const Aws::String& value) { SetRecoveryGroupName(value); return *this;}
    inline UpdateRecoveryGroupRequest& WithRecoveryGroupName(Aws::String&& value) { SetRecoveryGroupName(std::move(value)); return *this;}
    inline UpdateRecoveryGroupRequest& WithRecoveryGroupName(const char* value) { SetRecoveryGroupName(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_cells;
    bool m_cellsHasBeenSet = false;

    Aws::String m_recoveryGroupName;
    bool m_recoveryGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
