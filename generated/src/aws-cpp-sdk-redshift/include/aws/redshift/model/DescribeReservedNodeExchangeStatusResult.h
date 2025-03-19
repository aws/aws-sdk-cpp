/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/ReservedNodeExchangeStatus.h>
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
namespace Redshift
{
namespace Model
{
  class DescribeReservedNodeExchangeStatusResult
  {
  public:
    AWS_REDSHIFT_API DescribeReservedNodeExchangeStatusResult() = default;
    AWS_REDSHIFT_API DescribeReservedNodeExchangeStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeReservedNodeExchangeStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The details of the reserved-node exchange request, including the status,
     * request time, source reserved-node identifier, and additional details.</p>
     */
    inline const Aws::Vector<ReservedNodeExchangeStatus>& GetReservedNodeExchangeStatusDetails() const { return m_reservedNodeExchangeStatusDetails; }
    template<typename ReservedNodeExchangeStatusDetailsT = Aws::Vector<ReservedNodeExchangeStatus>>
    void SetReservedNodeExchangeStatusDetails(ReservedNodeExchangeStatusDetailsT&& value) { m_reservedNodeExchangeStatusDetailsHasBeenSet = true; m_reservedNodeExchangeStatusDetails = std::forward<ReservedNodeExchangeStatusDetailsT>(value); }
    template<typename ReservedNodeExchangeStatusDetailsT = Aws::Vector<ReservedNodeExchangeStatus>>
    DescribeReservedNodeExchangeStatusResult& WithReservedNodeExchangeStatusDetails(ReservedNodeExchangeStatusDetailsT&& value) { SetReservedNodeExchangeStatusDetails(std::forward<ReservedNodeExchangeStatusDetailsT>(value)); return *this;}
    template<typename ReservedNodeExchangeStatusDetailsT = ReservedNodeExchangeStatus>
    DescribeReservedNodeExchangeStatusResult& AddReservedNodeExchangeStatusDetails(ReservedNodeExchangeStatusDetailsT&& value) { m_reservedNodeExchangeStatusDetailsHasBeenSet = true; m_reservedNodeExchangeStatusDetails.emplace_back(std::forward<ReservedNodeExchangeStatusDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token provided by a previous
     * <code>DescribeReservedNodeExchangeStatus</code> request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeReservedNodeExchangeStatusResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeReservedNodeExchangeStatusResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReservedNodeExchangeStatus> m_reservedNodeExchangeStatusDetails;
    bool m_reservedNodeExchangeStatusDetailsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
