﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class DeleteTargetGroupRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API DeleteTargetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTargetGroup"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID or Amazon Resource Name (ARN) of the target group.</p>
     */
    inline const Aws::String& GetTargetGroupIdentifier() const{ return m_targetGroupIdentifier; }
    inline bool TargetGroupIdentifierHasBeenSet() const { return m_targetGroupIdentifierHasBeenSet; }
    inline void SetTargetGroupIdentifier(const Aws::String& value) { m_targetGroupIdentifierHasBeenSet = true; m_targetGroupIdentifier = value; }
    inline void SetTargetGroupIdentifier(Aws::String&& value) { m_targetGroupIdentifierHasBeenSet = true; m_targetGroupIdentifier = std::move(value); }
    inline void SetTargetGroupIdentifier(const char* value) { m_targetGroupIdentifierHasBeenSet = true; m_targetGroupIdentifier.assign(value); }
    inline DeleteTargetGroupRequest& WithTargetGroupIdentifier(const Aws::String& value) { SetTargetGroupIdentifier(value); return *this;}
    inline DeleteTargetGroupRequest& WithTargetGroupIdentifier(Aws::String&& value) { SetTargetGroupIdentifier(std::move(value)); return *this;}
    inline DeleteTargetGroupRequest& WithTargetGroupIdentifier(const char* value) { SetTargetGroupIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_targetGroupIdentifier;
    bool m_targetGroupIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
