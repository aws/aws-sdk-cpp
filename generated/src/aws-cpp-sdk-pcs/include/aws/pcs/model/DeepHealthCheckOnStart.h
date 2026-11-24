/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/DeepHealthCheckOnStartProfile.h>
#include <aws/pcs/model/DeepHealthCheckOnStartRepairAction.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PCS {
namespace Model {

/**
 * <p>The deep health check that runs each time an instance starts, including after
 * a reboot, before the compute node accepts jobs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/DeepHealthCheckOnStart">AWS
 * API Reference</a></p>
 */
class DeepHealthCheckOnStart {
 public:
  AWS_PCS_API DeepHealthCheckOnStart() = default;
  AWS_PCS_API DeepHealthCheckOnStart(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API DeepHealthCheckOnStart& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The deep health check profile to run. Each profile other than
   * <code>NONE</code> runs NVIDIA Data Center GPU Manager (DCGM) diagnostics. More
   * thorough profiles run more tests and add more time to instance launch. A profile
   * other than <code>NONE</code> requires instance types with NVIDIA GPUs. This
   * value is required when you specify <code>onStart</code>. There is no default
   * value. Valid values:</p> <ul> <li> <p> <code>NONE</code> – Turns off the deep
   * health check. You can't specify <code>repairAction</code> with this profile.</p>
   * </li> <li> <p> <code>QUICK</code> – Runs basic GPU tests (DCGM diagnostics level
   * 1). This profile adds the least time to instance launch.</p> </li> <li> <p>
   * <code>MEDIUM</code> – Runs extended GPU tests (DCGM diagnostics level 2).</p>
   * </li> <li> <p> <code>LONG</code> – Runs GPU stress and diagnostic tests (DCGM
   * diagnostics level 3). This profile adds the most time to instance launch.</p>
   * </li> </ul>
   */
  inline DeepHealthCheckOnStartProfile GetProfile() const { return m_profile; }
  inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }
  inline void SetProfile(DeepHealthCheckOnStartProfile value) {
    m_profileHasBeenSet = true;
    m_profile = value;
  }
  inline DeepHealthCheckOnStart& WithProfile(DeepHealthCheckOnStartProfile value) {
    SetProfile(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action that PCS takes when an instance fails the deep health check. You
   * can't specify this value when <code>profile</code> is <code>NONE</code>. If you
   * don't specify this value and <code>profile</code> isn't <code>NONE</code>, PCS
   * uses <code>AUTO</code>. <code>GetComputeNodeGroup</code> doesn't return a
   * <code>repairAction</code> that you didn't specify. Valid values:</p> <ul> <li>
   * <p> <code>AUTO</code> – PCS chooses the repair action based on the fault.</p>
   * </li> <li> <p> <code>REPLACE</code> – Replaces the instance before it accepts
   * jobs.</p> </li> <li> <p> <code>ISOLATE</code> – Stops new jobs on the instance
   * and keeps the instance running until you investigate.</p> </li> <li> <p>
   * <code>NONE</code> – Records the fault in Slurm and leaves the instance available
   * for jobs.</p> </li> </ul>
   */
  inline DeepHealthCheckOnStartRepairAction GetRepairAction() const { return m_repairAction; }
  inline bool RepairActionHasBeenSet() const { return m_repairActionHasBeenSet; }
  inline void SetRepairAction(DeepHealthCheckOnStartRepairAction value) {
    m_repairActionHasBeenSet = true;
    m_repairAction = value;
  }
  inline DeepHealthCheckOnStart& WithRepairAction(DeepHealthCheckOnStartRepairAction value) {
    SetRepairAction(value);
    return *this;
  }
  ///@}
 private:
  DeepHealthCheckOnStartProfile m_profile{DeepHealthCheckOnStartProfile::NOT_SET};

  DeepHealthCheckOnStartRepairAction m_repairAction{DeepHealthCheckOnStartRepairAction::NOT_SET};
  bool m_profileHasBeenSet = false;
  bool m_repairActionHasBeenSet = false;
};

}  // namespace Model
}  // namespace PCS
}  // namespace Aws
