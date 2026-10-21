/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/RDS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace RDS {
namespace Model {

/**
 * <p>Contains the unused capacity of a DB capacity reservation in one Availability
 * Zone.</p> <p>This data type is used as a response element in the following
 * operations:</p> <ul> <li> <p> <code>CancelDBCapacityReservation</code> </p>
 * </li> <li> <p> <code>CreateDBCapacityReservation</code> </p> </li> <li> <p>
 * <code>DescribeDBCapacityReservations</code> </p> </li> <li> <p>
 * <code>ModifyDBCapacityReservation</code> </p> </li> </ul><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AvailableCapacityPerAvailabilityZone">AWS
 * API Reference</a></p>
 */
class AvailableCapacityPerAvailabilityZone {
 public:
  AWS_RDS_API AvailableCapacityPerAvailabilityZone() = default;
  AWS_RDS_API AvailableCapacityPerAvailabilityZone(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API AvailableCapacityPerAvailabilityZone& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The name of the Availability Zone.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  AvailableCapacityPerAvailabilityZone& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of DB instances that remain available in this Availability Zone.
   * Amazon RDS decreases this value when a DB instance takes a unit of reserved
   * capacity in this Availability Zone, and it increases this value when a DB
   * instance releases that unit.</p> <p>A DB instance with a pending modification
   * also holds a unit of reserved capacity. A DB instance has a pending modification
   * when Amazon RDS accepts a change to the DB instance and applies that change
   * later, during the maintenance window. Amazon RDS holds the unit from the time
   * that it accepts the request. To find a DB instance with a pending modification,
   * check <code>PendingModifiedValues</code> in the response of
   * <code>DescribeDBInstances</code>.</p> <p>Amazon RDS reports available capacity
   * only for a reservation that is in the <code>active</code> state and not past its
   * end date. Otherwise, this value is <code>0</code>.</p>
   */
  inline int GetAvailableCapacity() const { return m_availableCapacity; }
  inline bool AvailableCapacityHasBeenSet() const { return m_availableCapacityHasBeenSet; }
  inline void SetAvailableCapacity(int value) {
    m_availableCapacityHasBeenSet = true;
    m_availableCapacity = value;
  }
  inline AvailableCapacityPerAvailabilityZone& WithAvailableCapacity(int value) {
    SetAvailableCapacity(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_availabilityZone;

  int m_availableCapacity{0};
  bool m_availabilityZoneHasBeenSet = false;
  bool m_availableCapacityHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
