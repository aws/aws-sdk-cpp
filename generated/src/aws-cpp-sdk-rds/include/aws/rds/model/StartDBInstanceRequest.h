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
class StartDBInstanceRequest : public RDSRequest {
 public:
  AWS_RDS_API StartDBInstanceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartDBInstance"; }

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
  StartDBInstanceRequest& WithDBInstanceIdentifier(DBInstanceIdentifierT&& value) {
    SetDBInstanceIdentifier(std::forward<DBInstanceIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier or the name of the DB capacity reservation for the DB instance
   * to use after it starts. You can specify the identifier, which has the prefix
   * <code>dbcr-</code>, or the reservation name.</p> <p>Specify this parameter when
   * the DB instance stopped using a reservation, or when you want the DB instance to
   * use a different reservation.</p> <p>If you omit this parameter, and the DB
   * instance kept a DB capacity reservation when it stopped, Amazon RDS starts the
   * DB instance in that reservation.</p> <p>If that reservation is deleted, ended,
   * or cancelled, the DB instance still starts. Amazon RDS starts the DB instance
   * outside the reservation, on unreserved capacity, and it charges on-demand prices
   * for the DB instance.</p> <p>If that reservation has no available capacity in the
   * Availability Zone of the DB instance, the request fails. Amazon RDS doesn't
   * start the DB instance, and it doesn't wait for capacity in that Availability
   * Zone. Specify a reservation that has available capacity in that Availability
   * Zone, or retry the request after the reservation has available capacity.</p>
   * <p>Constraints:</p> <ul> <li> <p>The reservation must be in the
   * <code>active</code> state.</p> </li> <li> <p>The reservation must reserve
   * capacity for the DB instance class and the engine of the DB instance.</p> </li>
   * <li> <p>The reservation must cover the Availability Zone of the DB instance, and
   * it must have available capacity in that Availability Zone.</p> </li> </ul>
   */
  inline const Aws::String& GetDBCapacityReservationIdentifier() const { return m_dBCapacityReservationIdentifier; }
  inline bool DBCapacityReservationIdentifierHasBeenSet() const { return m_dBCapacityReservationIdentifierHasBeenSet; }
  template <typename DBCapacityReservationIdentifierT = Aws::String>
  void SetDBCapacityReservationIdentifier(DBCapacityReservationIdentifierT&& value) {
    m_dBCapacityReservationIdentifierHasBeenSet = true;
    m_dBCapacityReservationIdentifier = std::forward<DBCapacityReservationIdentifierT>(value);
  }
  template <typename DBCapacityReservationIdentifierT = Aws::String>
  StartDBInstanceRequest& WithDBCapacityReservationIdentifier(DBCapacityReservationIdentifierT&& value) {
    SetDBCapacityReservationIdentifier(std::forward<DBCapacityReservationIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dBInstanceIdentifier;

  Aws::String m_dBCapacityReservationIdentifier;
  bool m_dBInstanceIdentifierHasBeenSet = false;
  bool m_dBCapacityReservationIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
