/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/ReservedNodeOffering.h>
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
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ReservedNodeOfferingsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeReservedNodeOfferingsResult
  {
  public:
    AWS_REDSHIFT_API DescribeReservedNodeOfferingsResult() = default;
    AWS_REDSHIFT_API DescribeReservedNodeOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeReservedNodeOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeReservedNodeOfferingsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>ReservedNodeOffering</code> objects.</p>
     */
    inline const Aws::Vector<ReservedNodeOffering>& GetReservedNodeOfferings() const { return m_reservedNodeOfferings; }
    template<typename ReservedNodeOfferingsT = Aws::Vector<ReservedNodeOffering>>
    void SetReservedNodeOfferings(ReservedNodeOfferingsT&& value) { m_reservedNodeOfferingsHasBeenSet = true; m_reservedNodeOfferings = std::forward<ReservedNodeOfferingsT>(value); }
    template<typename ReservedNodeOfferingsT = Aws::Vector<ReservedNodeOffering>>
    DescribeReservedNodeOfferingsResult& WithReservedNodeOfferings(ReservedNodeOfferingsT&& value) { SetReservedNodeOfferings(std::forward<ReservedNodeOfferingsT>(value)); return *this;}
    template<typename ReservedNodeOfferingsT = ReservedNodeOffering>
    DescribeReservedNodeOfferingsResult& AddReservedNodeOfferings(ReservedNodeOfferingsT&& value) { m_reservedNodeOfferingsHasBeenSet = true; m_reservedNodeOfferings.emplace_back(std::forward<ReservedNodeOfferingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeReservedNodeOfferingsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<ReservedNodeOffering> m_reservedNodeOfferings;
    bool m_reservedNodeOfferingsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
