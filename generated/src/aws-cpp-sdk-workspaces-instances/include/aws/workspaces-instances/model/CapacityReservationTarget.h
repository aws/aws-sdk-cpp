/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Identifies a specific capacity reservation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/CapacityReservationTarget">AWS
   * API Reference</a></p>
   */
  class CapacityReservationTarget
  {
  public:
    AWS_WORKSPACESINSTANCES_API CapacityReservationTarget() = default;
    AWS_WORKSPACESINSTANCES_API CapacityReservationTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API CapacityReservationTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for the capacity reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const { return m_capacityReservationId; }
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
    template<typename CapacityReservationIdT = Aws::String>
    void SetCapacityReservationId(CapacityReservationIdT&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::forward<CapacityReservationIdT>(value); }
    template<typename CapacityReservationIdT = Aws::String>
    CapacityReservationTarget& WithCapacityReservationId(CapacityReservationIdT&& value) { SetCapacityReservationId(std::forward<CapacityReservationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the capacity reservation resource group.</p>
     */
    inline const Aws::String& GetCapacityReservationResourceGroupArn() const { return m_capacityReservationResourceGroupArn; }
    inline bool CapacityReservationResourceGroupArnHasBeenSet() const { return m_capacityReservationResourceGroupArnHasBeenSet; }
    template<typename CapacityReservationResourceGroupArnT = Aws::String>
    void SetCapacityReservationResourceGroupArn(CapacityReservationResourceGroupArnT&& value) { m_capacityReservationResourceGroupArnHasBeenSet = true; m_capacityReservationResourceGroupArn = std::forward<CapacityReservationResourceGroupArnT>(value); }
    template<typename CapacityReservationResourceGroupArnT = Aws::String>
    CapacityReservationTarget& WithCapacityReservationResourceGroupArn(CapacityReservationResourceGroupArnT&& value) { SetCapacityReservationResourceGroupArn(std::forward<CapacityReservationResourceGroupArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    Aws::String m_capacityReservationResourceGroupArn;
    bool m_capacityReservationResourceGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
