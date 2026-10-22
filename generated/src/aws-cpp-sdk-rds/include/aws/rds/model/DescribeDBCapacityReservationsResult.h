/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
class DescribeDBCapacityReservationsResult {
 public:
  AWS_RDS_API DescribeDBCapacityReservationsResult() = default;
  AWS_RDS_API DescribeDBCapacityReservationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_RDS_API DescribeDBCapacityReservationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>A list of DB capacity reservations.</p>
   */
  inline const Aws::Vector<DBCapacityReservation>& GetDBCapacityReservations() const { return m_dBCapacityReservations; }
  template <typename DBCapacityReservationsT = Aws::Vector<DBCapacityReservation>>
  void SetDBCapacityReservations(DBCapacityReservationsT&& value) {
    m_dBCapacityReservationsHasBeenSet = true;
    m_dBCapacityReservations = std::forward<DBCapacityReservationsT>(value);
  }
  template <typename DBCapacityReservationsT = Aws::Vector<DBCapacityReservation>>
  DescribeDBCapacityReservationsResult& WithDBCapacityReservations(DBCapacityReservationsT&& value) {
    SetDBCapacityReservations(std::forward<DBCapacityReservationsT>(value));
    return *this;
  }
  template <typename DBCapacityReservationsT = DBCapacityReservation>
  DescribeDBCapacityReservationsResult& AddDBCapacityReservations(DBCapacityReservationsT&& value) {
    m_dBCapacityReservationsHasBeenSet = true;
    m_dBCapacityReservations.emplace_back(std::forward<DBCapacityReservationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token that you can use in a later
   * <code>DescribeDBCapacityReservations</code> request. If this value is returned,
   * more records are available beyond this response.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  DescribeDBCapacityReservationsResult& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
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
  DescribeDBCapacityReservationsResult& WithResponseMetadata(ResponseMetadataT&& value) {
    SetResponseMetadata(std::forward<ResponseMetadataT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DBCapacityReservation> m_dBCapacityReservations;

  Aws::String m_marker;

  ResponseMetadata m_responseMetadata;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_dBCapacityReservationsHasBeenSet = false;
  bool m_markerHasBeenSet = false;
  bool m_responseMetadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
