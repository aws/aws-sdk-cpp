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
class CancelDBCapacityReservationRequest : public RDSRequest {
 public:
  AWS_RDS_API CancelDBCapacityReservationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CancelDBCapacityReservation"; }

  AWS_RDS_API Aws::String SerializePayload() const override;

 protected:
  AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The identifier or the name of the DB capacity reservation to cancel. You can
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
  CancelDBCapacityReservationRequest& WithDBCapacityReservationIdentifier(DBCapacityReservationIdentifierT&& value) {
    SetDBCapacityReservationIdentifier(std::forward<DBCapacityReservationIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dBCapacityReservationIdentifier;
  bool m_dBCapacityReservationIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
