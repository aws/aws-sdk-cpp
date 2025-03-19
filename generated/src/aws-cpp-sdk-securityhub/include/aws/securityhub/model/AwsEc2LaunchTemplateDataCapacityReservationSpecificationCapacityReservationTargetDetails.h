/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Information about the target Capacity Reservation or Capacity Reservation
   * group in which to run an Amazon EC2 instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails() = default;
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the Capacity Reservation in which to run the instance. </p>
     */
    inline const Aws::String& GetCapacityReservationId() const { return m_capacityReservationId; }
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }
    template<typename CapacityReservationIdT = Aws::String>
    void SetCapacityReservationId(CapacityReservationIdT&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::forward<CapacityReservationIdT>(value); }
    template<typename CapacityReservationIdT = Aws::String>
    AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails& WithCapacityReservationId(CapacityReservationIdT&& value) { SetCapacityReservationId(std::forward<CapacityReservationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the Capacity Reservation resource group in
     * which to run the instance. </p>
     */
    inline const Aws::String& GetCapacityReservationResourceGroupArn() const { return m_capacityReservationResourceGroupArn; }
    inline bool CapacityReservationResourceGroupArnHasBeenSet() const { return m_capacityReservationResourceGroupArnHasBeenSet; }
    template<typename CapacityReservationResourceGroupArnT = Aws::String>
    void SetCapacityReservationResourceGroupArn(CapacityReservationResourceGroupArnT&& value) { m_capacityReservationResourceGroupArnHasBeenSet = true; m_capacityReservationResourceGroupArn = std::forward<CapacityReservationResourceGroupArnT>(value); }
    template<typename CapacityReservationResourceGroupArnT = Aws::String>
    AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails& WithCapacityReservationResourceGroupArn(CapacityReservationResourceGroupArnT&& value) { SetCapacityReservationResourceGroupArn(std::forward<CapacityReservationResourceGroupArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    Aws::String m_capacityReservationResourceGroupArn;
    bool m_capacityReservationResourceGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
