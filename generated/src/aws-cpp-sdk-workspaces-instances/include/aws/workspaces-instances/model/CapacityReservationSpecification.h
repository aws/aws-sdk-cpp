/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/CapacityReservationPreferenceEnum.h>
#include <aws/workspaces-instances/model/CapacityReservationTarget.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Specifies capacity reservation preferences.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/CapacityReservationSpecification">AWS
   * API Reference</a></p>
   */
  class CapacityReservationSpecification
  {
  public:
    AWS_WORKSPACESINSTANCES_API CapacityReservationSpecification() = default;
    AWS_WORKSPACESINSTANCES_API CapacityReservationSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API CapacityReservationSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Preference for using capacity reservation.</p>
     */
    inline CapacityReservationPreferenceEnum GetCapacityReservationPreference() const { return m_capacityReservationPreference; }
    inline bool CapacityReservationPreferenceHasBeenSet() const { return m_capacityReservationPreferenceHasBeenSet; }
    inline void SetCapacityReservationPreference(CapacityReservationPreferenceEnum value) { m_capacityReservationPreferenceHasBeenSet = true; m_capacityReservationPreference = value; }
    inline CapacityReservationSpecification& WithCapacityReservationPreference(CapacityReservationPreferenceEnum value) { SetCapacityReservationPreference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specific capacity reservation target.</p>
     */
    inline const CapacityReservationTarget& GetCapacityReservationTarget() const { return m_capacityReservationTarget; }
    inline bool CapacityReservationTargetHasBeenSet() const { return m_capacityReservationTargetHasBeenSet; }
    template<typename CapacityReservationTargetT = CapacityReservationTarget>
    void SetCapacityReservationTarget(CapacityReservationTargetT&& value) { m_capacityReservationTargetHasBeenSet = true; m_capacityReservationTarget = std::forward<CapacityReservationTargetT>(value); }
    template<typename CapacityReservationTargetT = CapacityReservationTarget>
    CapacityReservationSpecification& WithCapacityReservationTarget(CapacityReservationTargetT&& value) { SetCapacityReservationTarget(std::forward<CapacityReservationTargetT>(value)); return *this;}
    ///@}
  private:

    CapacityReservationPreferenceEnum m_capacityReservationPreference{CapacityReservationPreferenceEnum::NOT_SET};
    bool m_capacityReservationPreferenceHasBeenSet = false;

    CapacityReservationTarget m_capacityReservationTarget;
    bool m_capacityReservationTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
