/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/model/Target.h>
#include <utility>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class DeregisterTargetsRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API DeregisterTargetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterTargets"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID or ARN of the target group.</p>
     */
    inline const Aws::String& GetTargetGroupIdentifier() const{ return m_targetGroupIdentifier; }
    inline bool TargetGroupIdentifierHasBeenSet() const { return m_targetGroupIdentifierHasBeenSet; }
    inline void SetTargetGroupIdentifier(const Aws::String& value) { m_targetGroupIdentifierHasBeenSet = true; m_targetGroupIdentifier = value; }
    inline void SetTargetGroupIdentifier(Aws::String&& value) { m_targetGroupIdentifierHasBeenSet = true; m_targetGroupIdentifier = std::move(value); }
    inline void SetTargetGroupIdentifier(const char* value) { m_targetGroupIdentifierHasBeenSet = true; m_targetGroupIdentifier.assign(value); }
    inline DeregisterTargetsRequest& WithTargetGroupIdentifier(const Aws::String& value) { SetTargetGroupIdentifier(value); return *this;}
    inline DeregisterTargetsRequest& WithTargetGroupIdentifier(Aws::String&& value) { SetTargetGroupIdentifier(std::move(value)); return *this;}
    inline DeregisterTargetsRequest& WithTargetGroupIdentifier(const char* value) { SetTargetGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets to deregister.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline DeregisterTargetsRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}
    inline DeregisterTargetsRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}
    inline DeregisterTargetsRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    inline DeregisterTargetsRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_targetGroupIdentifier;
    bool m_targetGroupIdentifierHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
