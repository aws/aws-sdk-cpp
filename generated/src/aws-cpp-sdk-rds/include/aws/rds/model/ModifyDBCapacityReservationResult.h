/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBCapacityReservation.h>
#include <aws/rds/model/ResponseMetadata.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace RDS {
namespace Model {
class ModifyDBCapacityReservationResult {
 public:
  AWS_RDS_API ModifyDBCapacityReservationResult() = default;
  AWS_RDS_API ModifyDBCapacityReservationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_RDS_API ModifyDBCapacityReservationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>Contains the details of the modified DB capacity reservation.</p>
   */
  inline const DBCapacityReservation& GetDBCapacityReservation() const { return m_dBCapacityReservation; }
  template <typename DBCapacityReservationT = DBCapacityReservation>
  void SetDBCapacityReservation(DBCapacityReservationT&& value) {
    m_dBCapacityReservationHasBeenSet = true;
    m_dBCapacityReservation = std::forward<DBCapacityReservationT>(value);
  }
  template <typename DBCapacityReservationT = DBCapacityReservation>
  ModifyDBCapacityReservationResult& WithDBCapacityReservation(DBCapacityReservationT&& value) {
    SetDBCapacityReservation(std::forward<DBCapacityReservationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
  template <typename ResponseMetadataT = ResponseMetadata>
  void SetResponseMetadata(ResponseMetadataT&& value) {
    m_responseMetadataHasBeenSet = true;
    m_responseMetadata = std::forward<ResponseMetadataT>(value);
  }
  template <typename ResponseMetadataT = ResponseMetadata>
  ModifyDBCapacityReservationResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  DBCapacityReservation m_dBCapacityReservation;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_dBCapacityReservationHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
