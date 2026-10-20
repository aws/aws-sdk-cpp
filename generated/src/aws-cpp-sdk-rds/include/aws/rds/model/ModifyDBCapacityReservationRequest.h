/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/RDSRequest.h>
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/EndDateType.h>

#include <utility>

namespace Aws {
namespace RDS {
namespace Model {

/**
 */
class ModifyDBCapacityReservationRequest : public RDSRequest {
 public:
  AWS_RDS_API ModifyDBCapacityReservationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ModifyDBCapacityReservation"; }

  AWS_RDS_API Aws::String SerializePayload() const override;

 protected:
  AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The identifier or the name of the DB capacity reservation to modify. You can
   * specify the identifier, which has the prefix <code>dbcr-</code>, or the
   * reservation name.</p>
   */
  inline const Aws::String& GetDBCapacityReservationIdentifier() const { return m_dBCapacityReservationIdentifier; }
  inline bool DBCapacityReservationIdentifierHasBeenSet() const { return m_dBCapacityReservationIdentifierHasBeenSet; }
  template <typename DBCapacityReservationIdentifierT = Aws::String>
  void SetDBCapacityReservationIdentifier(DBCapacityReservationIdentifierT&& value) {
    m_dBCapacityReservationIdentifierHasBeenSet = true;
    m_dBCapacityReservationIdentifier = std::forward<DBCapacityReservationIdentifierT>(value);
  }
  template <typename DBCapacityReservationIdentifierT = Aws::String>
  ModifyDBCapacityReservationRequest& WithDBCapacityReservationIdentifier(DBCapacityReservationIdentifierT&& value) {
    SetDBCapacityReservationIdentifier(std::forward<DBCapacityReservationIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new number of DB instances to reserve in each Availability Zone of the
   * reservation. Amazon RDS applies this number to every Availability Zone of the
   * reservation.</p> <p>An increase reserves more capacity at the time of the
   * request, so it can fail when the Amazon Web Services Region has insufficient
   * capacity.</p> <p>This value multiplied by the number of Availability Zones
   * counts against the DB instances quota for your Amazon Web Services account in
   * the Amazon Web Services Region. Amazon RDS checks the quota only when you
   * increase the value.</p> <p>Constraints:</p> <ul> <li> <p>Minimum 1.</p> </li>
   * <li> <p>Can't be less than the highest number of DB instances that use the
   * reservation in any single Availability Zone of the reservation. That number
   * includes a DB instance that holds a unit of reserved capacity for a pending
   * modification. To find that number for an Availability Zone, subtract
   * <code>AvailableCapacity</code> from
   * <code>ReservedCapacityPerAvailabilityZone</code>.</p> </li> <li> <p>During a
   * capacity commitment, can't be less than
   * <code>CommittedCapacityPerAvailabilityZone</code>.</p> </li> </ul>
   */
  inline int GetCapacityPerAvailabilityZone() const { return m_capacityPerAvailabilityZone; }
  inline bool CapacityPerAvailabilityZoneHasBeenSet() const { return m_capacityPerAvailabilityZoneHasBeenSet; }
  inline void SetCapacityPerAvailabilityZone(int value) {
    m_capacityPerAvailabilityZoneHasBeenSet = true;
    m_capacityPerAvailabilityZone = value;
  }
  inline ModifyDBCapacityReservationRequest& WithCapacityPerAvailabilityZone(int value) {
    SetCapacityPerAvailabilityZone(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end date type for the reservation.</p> <p>Valid Values:</p> <ul> <li> <p>
   * <code>limited</code> - The reservation has a specific end date. You must also
   * specify <code>EndDate</code>.</p> </li> <li> <p> <code>unlimited</code> - The
   * reservation doesn't expire. Don't specify <code>EndDate</code>.</p> </li> </ul>
   */
  inline EndDateType GetEndDateType() const { return m_endDateType; }
  inline bool EndDateTypeHasBeenSet() const { return m_endDateTypeHasBeenSet; }
  inline void SetEndDateType(EndDateType value) {
    m_endDateTypeHasBeenSet = true;
    m_endDateType = value;
  }
  inline ModifyDBCapacityReservationRequest& WithEndDateType(EndDateType value) {
    SetEndDateType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new end date for the reservation, in Universal Coordinated Time (UTC).
   * Required when <code>EndDateType</code> is <code>limited</code>. Don't specify a
   * value when <code>EndDateType</code> is <code>unlimited</code>.</p> <p>When you
   * specify <code>EndDate</code>, you must also specify
   * <code>EndDateType</code>.</p> <p>Constraints:</p> <ul> <li> <p>Must be a date
   * and time in the future.</p> </li> <li> <p>During a capacity commitment, must be
   * at or after <code>CommitmentEndDate</code>.</p> </li> </ul>
   */
  inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
  inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
  template <typename EndDateT = Aws::Utils::DateTime>
  void SetEndDate(EndDateT&& value) {
    m_endDateHasBeenSet = true;
    m_endDate = std::forward<EndDateT>(value);
  }
  template <typename EndDateT = Aws::Utils::DateTime>
  ModifyDBCapacityReservationRequest& WithEndDate(EndDateT&& value) {
    SetEndDate(std::forward<EndDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dBCapacityReservationIdentifier;

  int m_capacityPerAvailabilityZone{0};

  EndDateType m_endDateType{EndDateType::NOT_SET};

  Aws::Utils::DateTime m_endDate{};
  bool m_dBCapacityReservationIdentifierHasBeenSet = false;
  bool m_capacityPerAvailabilityZoneHasBeenSet = false;
  bool m_endDateTypeHasBeenSet = false;
  bool m_endDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
