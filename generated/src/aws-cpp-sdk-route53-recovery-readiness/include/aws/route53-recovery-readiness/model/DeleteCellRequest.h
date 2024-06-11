﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/route53-recovery-readiness/Route53RecoveryReadinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   */
  class DeleteCellRequest : public Route53RecoveryReadinessRequest
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API DeleteCellRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCell"; }

    AWS_ROUTE53RECOVERYREADINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the cell.</p>
     */
    inline const Aws::String& GetCellName() const{ return m_cellName; }
    inline bool CellNameHasBeenSet() const { return m_cellNameHasBeenSet; }
    inline void SetCellName(const Aws::String& value) { m_cellNameHasBeenSet = true; m_cellName = value; }
    inline void SetCellName(Aws::String&& value) { m_cellNameHasBeenSet = true; m_cellName = std::move(value); }
    inline void SetCellName(const char* value) { m_cellNameHasBeenSet = true; m_cellName.assign(value); }
    inline DeleteCellRequest& WithCellName(const Aws::String& value) { SetCellName(value); return *this;}
    inline DeleteCellRequest& WithCellName(Aws::String&& value) { SetCellName(std::move(value)); return *this;}
    inline DeleteCellRequest& WithCellName(const char* value) { SetCellName(value); return *this;}
    ///@}
  private:

    Aws::String m_cellName;
    bool m_cellNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
