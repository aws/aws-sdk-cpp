/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/RDSRequest.h>
#include <aws/rds/RDS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RDS {
namespace Model {

/**
 */
class StopDBInstanceRequest : public RDSRequest {
 public:
  AWS_RDS_API StopDBInstanceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StopDBInstance"; }

  AWS_RDS_API Aws::String SerializePayload() const override;

 protected:
  AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The user-supplied instance identifier.</p>
   */
  inline const Aws::String& GetDBInstanceIdentifier() const { return m_dBInstanceIdentifier; }
  inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }
  template <typename DBInstanceIdentifierT = Aws::String>
  void SetDBInstanceIdentifier(DBInstanceIdentifierT&& value) {
    m_dBInstanceIdentifierHasBeenSet = true;
    m_dBInstanceIdentifier = std::forward<DBInstanceIdentifierT>(value);
  }
  template <typename DBInstanceIdentifierT = Aws::String>
  StopDBInstanceRequest& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) {
    SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user-supplied instance identifier of the DB Snapshot created immediately
   * before the DB instance is stopped.</p>
   */
  inline const Aws::String& GetDBSnapshotIdentifier() const { return m_dBSnapshotIdentifier; }
  inline bool DBSnapshotIdentifierHasBeenSet() const { return m_dBSnapshotIdentifierHasBeenSet; }
  template <typename DBSnapshotIdentifierT = Aws::String>
  void SetDBSnapshotIdentifier(DBSnapshotIdentifierT&& value) {
    m_dBSnapshotIdentifierHasBeenSet = true;
    m_dBSnapshotIdentifier = std::forward<DBSnapshotIdentifierT>(value);
  }
  template <typename DBSnapshotIdentifierT = Aws::String>
  StopDBInstanceRequest& WithDBSnapshotIdentifier(DBSnapshotIdentifierT&& value) {
    SetDBSnapshotIdentifier(std::forward<DBSnapshotIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the DB instance stops using its DB capacity reservation
   * when the DB instance stops. When you specify <code>true</code>, the DB instance
   * belongs to no reservation after it stops, and a later start launches it outside
   * the reservation.</p> <p>By default, a stopped DB instance keeps its DB capacity
   * reservation, and a later start returns the DB instance to the same
   * reservation.</p> <p>Every stop releases the unit of reserved capacity that the
   * DB instance holds, for either value of this parameter. Another DB instance can
   * then use that capacity. This parameter controls the reservation that the DB
   * instance belongs to, and it does not control the release of the capacity.</p>
   * <p>If the DB instance uses no DB capacity reservation, this parameter has no
   * effect.</p>  <p>Amazon RDS holds no capacity for a stopped DB
   * instance. When the reservation has no available capacity in the Availability
   * Zone of the DB instance, a later start waits for capacity in that Availability
   * Zone. When the DB instance belongs to no reservation, a later start can fail
   * because the Amazon Web Services Region has insufficient capacity for the DB
   * instance class.</p>
   */
  inline bool GetDetachFromDBCapacityReservation() const { return m_detachFromDBCapacityReservation; }
  inline bool DetachFromDBCapacityReservationHasBeenSet() const { return m_detachFromDBCapacityReservationHasBeenSet; }
  inline void SetDetachFromDBCapacityReservation(bool value) {
    m_detachFromDBCapacityReservationHasBeenSet = true;
    m_detachFromDBCapacityReservation = value;
  }
  inline StopDBInstanceRequest& WithDetachFromDBCapacityReservation(bool value) {
    SetDetachFromDBCapacityReservation(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_dBInstanceIdentifier;

  Aws::String m_dBSnapshotIdentifier;

  bool m_detachFromDBCapacityReservation{false};
  bool m_dBInstanceIdentifierHasBeenSet = false;
  bool m_dBSnapshotIdentifierHasBeenSet = false;
  bool m_detachFromDBCapacityReservationHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
