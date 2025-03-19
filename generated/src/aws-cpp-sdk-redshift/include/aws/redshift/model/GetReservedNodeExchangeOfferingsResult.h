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
  class GetReservedNodeExchangeOfferingsResult
  {
  public:
    AWS_REDSHIFT_API GetReservedNodeExchangeOfferingsResult() = default;
    AWS_REDSHIFT_API GetReservedNodeExchangeOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API GetReservedNodeExchangeOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An optional parameter that specifies the starting point for returning a set
     * of response records. When the results of a
     * <code>GetReservedNodeExchangeOfferings</code> request exceed the value specified
     * in MaxRecords, Amazon Redshift returns a value in the marker field of the
     * response. You can retrieve the next set of response records by providing the
     * returned marker value in the marker parameter and retrying the request. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    GetReservedNodeExchangeOfferingsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an array of <a>ReservedNodeOffering</a> objects.</p>
     */
    inline const Aws::Vector<ReservedNodeOffering>& GetReservedNodeOfferings() const { return m_reservedNodeOfferings; }
    template<typename ReservedNodeOfferingsT = Aws::Vector<ReservedNodeOffering>>
    void SetReservedNodeOfferings(ReservedNodeOfferingsT&& value) { m_reservedNodeOfferingsHasBeenSet = true; m_reservedNodeOfferings = std::forward<ReservedNodeOfferingsT>(value); }
    template<typename ReservedNodeOfferingsT = Aws::Vector<ReservedNodeOffering>>
    GetReservedNodeExchangeOfferingsResult& WithReservedNodeOfferings(ReservedNodeOfferingsT&& value) { SetReservedNodeOfferings(std::forward<ReservedNodeOfferingsT>(value)); return *this;}
    template<typename ReservedNodeOfferingsT = ReservedNodeOffering>
    GetReservedNodeExchangeOfferingsResult& AddReservedNodeOfferings(ReservedNodeOfferingsT&& value) { m_reservedNodeOfferingsHasBeenSet = true; m_reservedNodeOfferings.emplace_back(std::forward<ReservedNodeOfferingsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetReservedNodeExchangeOfferingsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
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
