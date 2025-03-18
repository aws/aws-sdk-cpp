/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/ReservedDBInstancesOffering.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  /**
   * <p>Contains the result of a successful invocation of the
   * <code>DescribeReservedDBInstancesOfferings</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ReservedDBInstancesOfferingMessage">AWS
   * API Reference</a></p>
   */
  class DescribeReservedDBInstancesOfferingsResult
  {
  public:
    AWS_RDS_API DescribeReservedDBInstancesOfferingsResult() = default;
    AWS_RDS_API DescribeReservedDBInstancesOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeReservedDBInstancesOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeReservedDBInstancesOfferingsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of reserved DB instance offerings.</p>
     */
    inline const Aws::Vector<ReservedDBInstancesOffering>& GetReservedDBInstancesOfferings() const { return m_reservedDBInstancesOfferings; }
    template<typename ReservedDBInstancesOfferingsT = Aws::Vector<ReservedDBInstancesOffering>>
    void SetReservedDBInstancesOfferings(ReservedDBInstancesOfferingsT&& value) { m_reservedDBInstancesOfferingsHasBeenSet = true; m_reservedDBInstancesOfferings = std::forward<ReservedDBInstancesOfferingsT>(value); }
    template<typename ReservedDBInstancesOfferingsT = Aws::Vector<ReservedDBInstancesOffering>>
    DescribeReservedDBInstancesOfferingsResult& WithReservedDBInstancesOfferings(ReservedDBInstancesOfferingsT&& value) { SetReservedDBInstancesOfferings(std::forward<ReservedDBInstancesOfferingsT>(value)); return *this;}
    template<typename ReservedDBInstancesOfferingsT = ReservedDBInstancesOffering>
    DescribeReservedDBInstancesOfferingsResult& AddReservedDBInstancesOfferings(ReservedDBInstancesOfferingsT&& value) { m_reservedDBInstancesOfferingsHasBeenSet = true; m_reservedDBInstancesOfferings.emplace_back(std::forward<ReservedDBInstancesOfferingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeReservedDBInstancesOfferingsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<ReservedDBInstancesOffering> m_reservedDBInstancesOfferings;
    bool m_reservedDBInstancesOfferingsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
