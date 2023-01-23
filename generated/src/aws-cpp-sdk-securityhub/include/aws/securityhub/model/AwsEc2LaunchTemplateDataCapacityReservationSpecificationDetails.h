/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails.h>
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
   * <p> Specifies the Capacity Reservation targeting option of an Amazon EC2
   * instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails();
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates the instance's Capacity Reservation preferences. If equal to
     * <code>open</code>, the instance can run in any open Capacity Reservation that
     * has matching attributes (instance type, platform, Availability Zone). If equal
     * to <code>none</code>, the instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs in On-Demand capacity. </p>
     */
    inline const Aws::String& GetCapacityReservationPreference() const{ return m_capacityReservationPreference; }

    /**
     * <p> Indicates the instance's Capacity Reservation preferences. If equal to
     * <code>open</code>, the instance can run in any open Capacity Reservation that
     * has matching attributes (instance type, platform, Availability Zone). If equal
     * to <code>none</code>, the instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs in On-Demand capacity. </p>
     */
    inline bool CapacityReservationPreferenceHasBeenSet() const { return m_capacityReservationPreferenceHasBeenSet; }

    /**
     * <p> Indicates the instance's Capacity Reservation preferences. If equal to
     * <code>open</code>, the instance can run in any open Capacity Reservation that
     * has matching attributes (instance type, platform, Availability Zone). If equal
     * to <code>none</code>, the instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs in On-Demand capacity. </p>
     */
    inline void SetCapacityReservationPreference(const Aws::String& value) { m_capacityReservationPreferenceHasBeenSet = true; m_capacityReservationPreference = value; }

    /**
     * <p> Indicates the instance's Capacity Reservation preferences. If equal to
     * <code>open</code>, the instance can run in any open Capacity Reservation that
     * has matching attributes (instance type, platform, Availability Zone). If equal
     * to <code>none</code>, the instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs in On-Demand capacity. </p>
     */
    inline void SetCapacityReservationPreference(Aws::String&& value) { m_capacityReservationPreferenceHasBeenSet = true; m_capacityReservationPreference = std::move(value); }

    /**
     * <p> Indicates the instance's Capacity Reservation preferences. If equal to
     * <code>open</code>, the instance can run in any open Capacity Reservation that
     * has matching attributes (instance type, platform, Availability Zone). If equal
     * to <code>none</code>, the instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs in On-Demand capacity. </p>
     */
    inline void SetCapacityReservationPreference(const char* value) { m_capacityReservationPreferenceHasBeenSet = true; m_capacityReservationPreference.assign(value); }

    /**
     * <p> Indicates the instance's Capacity Reservation preferences. If equal to
     * <code>open</code>, the instance can run in any open Capacity Reservation that
     * has matching attributes (instance type, platform, Availability Zone). If equal
     * to <code>none</code>, the instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs in On-Demand capacity. </p>
     */
    inline AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails& WithCapacityReservationPreference(const Aws::String& value) { SetCapacityReservationPreference(value); return *this;}

    /**
     * <p> Indicates the instance's Capacity Reservation preferences. If equal to
     * <code>open</code>, the instance can run in any open Capacity Reservation that
     * has matching attributes (instance type, platform, Availability Zone). If equal
     * to <code>none</code>, the instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs in On-Demand capacity. </p>
     */
    inline AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails& WithCapacityReservationPreference(Aws::String&& value) { SetCapacityReservationPreference(std::move(value)); return *this;}

    /**
     * <p> Indicates the instance's Capacity Reservation preferences. If equal to
     * <code>open</code>, the instance can run in any open Capacity Reservation that
     * has matching attributes (instance type, platform, Availability Zone). If equal
     * to <code>none</code>, the instance avoids running in a Capacity Reservation even
     * if one is available. The instance runs in On-Demand capacity. </p>
     */
    inline AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails& WithCapacityReservationPreference(const char* value) { SetCapacityReservationPreference(value); return *this;}


    /**
     * <p> Specifies a target Capacity Reservation. </p>
     */
    inline const AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails& GetCapacityReservationTarget() const{ return m_capacityReservationTarget; }

    /**
     * <p> Specifies a target Capacity Reservation. </p>
     */
    inline bool CapacityReservationTargetHasBeenSet() const { return m_capacityReservationTargetHasBeenSet; }

    /**
     * <p> Specifies a target Capacity Reservation. </p>
     */
    inline void SetCapacityReservationTarget(const AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails& value) { m_capacityReservationTargetHasBeenSet = true; m_capacityReservationTarget = value; }

    /**
     * <p> Specifies a target Capacity Reservation. </p>
     */
    inline void SetCapacityReservationTarget(AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails&& value) { m_capacityReservationTargetHasBeenSet = true; m_capacityReservationTarget = std::move(value); }

    /**
     * <p> Specifies a target Capacity Reservation. </p>
     */
    inline AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails& WithCapacityReservationTarget(const AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails& value) { SetCapacityReservationTarget(value); return *this;}

    /**
     * <p> Specifies a target Capacity Reservation. </p>
     */
    inline AwsEc2LaunchTemplateDataCapacityReservationSpecificationDetails& WithCapacityReservationTarget(AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails&& value) { SetCapacityReservationTarget(std::move(value)); return *this;}

  private:

    Aws::String m_capacityReservationPreference;
    bool m_capacityReservationPreferenceHasBeenSet = false;

    AwsEc2LaunchTemplateDataCapacityReservationSpecificationCapacityReservationTargetDetails m_capacityReservationTarget;
    bool m_capacityReservationTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
