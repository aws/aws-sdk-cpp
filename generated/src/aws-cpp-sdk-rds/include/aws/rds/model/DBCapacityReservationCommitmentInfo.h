/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
 * <p>Contains the capacity commitment details of a DB capacity reservation,
 * including the number of committed DB instances in each Availability Zone and the
 * end date of the commitment period. Amazon RDS holds the committed capacity until
 * the commitment ends. Amazon RDS rejects a request to cancel a reservation in the
 * <code>active</code> state, and a request to reduce the reserved capacity below
 * the commitment.</p> <p>This data type is used as a response element in the
 * following operations:</p> <ul> <li> <p> <code>CancelDBCapacityReservation</code>
 * </p> </li> <li> <p> <code>CreateDBCapacityReservation</code> </p> </li> <li> <p>
 * <code>DescribeDBCapacityReservations</code> </p> </li> <li> <p>
 * <code>ModifyDBCapacityReservation</code> </p> </li> </ul><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBCapacityReservationCommitmentInfo">AWS
 * API Reference</a></p>
 */
class DBCapacityReservationCommitmentInfo {
 public:
  AWS_RDS_API DBCapacityReservationCommitmentInfo() = default;
  AWS_RDS_API DBCapacityReservationCommitmentInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RDS_API DBCapacityReservationCommitmentInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The number of DB instances that Amazon RDS holds in each Availability Zone of
   * the reservation for the length of the commitment.</p>
   */
  inline int GetCommittedCapacityPerAvailabilityZone() const { return m_committedCapacityPerAvailabilityZone; }
  inline bool CommittedCapacityPerAvailabilityZoneHasBeenSet() const { return m_committedCapacityPerAvailabilityZoneHasBeenSet; }
  inline void SetCommittedCapacityPerAvailabilityZone(int value) {
    m_committedCapacityPerAvailabilityZoneHasBeenSet = true;
    m_committedCapacityPerAvailabilityZone = value;
  }
  inline DBCapacityReservationCommitmentInfo& WithCommittedCapacityPerAvailabilityZone(int value) {
    SetCommittedCapacityPerAvailabilityZone(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the commitment ends, in Universal Coordinated Time
   * (UTC). This date reports the capacity commitment that Amazon RDS granted.</p>
   * <p>Amazon RDS can grant a shorter capacity commitment than you request in
   * <code>CommitmentDuration</code>. Therefore, this date can fall earlier than
   * <code>StartDate</code> plus <code>CommitmentDuration</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetCommitmentEndDate() const { return m_commitmentEndDate; }
  inline bool CommitmentEndDateHasBeenSet() const { return m_commitmentEndDateHasBeenSet; }
  template <typename CommitmentEndDateT = Aws::Utils::DateTime>
  void SetCommitmentEndDate(CommitmentEndDateT&& value) {
    m_commitmentEndDateHasBeenSet = true;
    m_commitmentEndDate = std::forward<CommitmentEndDateT>(value);
  }
  template <typename CommitmentEndDateT = Aws::Utils::DateTime>
  DBCapacityReservationCommitmentInfo& WithCommitmentEndDate(CommitmentEndDateT&& value) {
    SetCommitmentEndDate(std::forward<CommitmentEndDateT>(value));
    return *this;
  }
  ///@}
 private:
  int m_committedCapacityPerAvailabilityZone{0};

  Aws::Utils::DateTime m_commitmentEndDate{};
  bool m_committedCapacityPerAvailabilityZoneHasBeenSet = false;
  bool m_commitmentEndDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
