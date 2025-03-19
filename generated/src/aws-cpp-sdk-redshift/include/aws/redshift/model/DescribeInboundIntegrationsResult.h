/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/InboundIntegration.h>
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
  class DescribeInboundIntegrationsResult
  {
  public:
    AWS_REDSHIFT_API DescribeInboundIntegrationsResult() = default;
    AWS_REDSHIFT_API DescribeInboundIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeInboundIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    DescribeInboundIntegrationsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a>InboundIntegration</a> instances.</p>
     */
    inline const Aws::Vector<InboundIntegration>& GetInboundIntegrations() const { return m_inboundIntegrations; }
    template<typename InboundIntegrationsT = Aws::Vector<InboundIntegration>>
    void SetInboundIntegrations(InboundIntegrationsT&& value) { m_inboundIntegrationsHasBeenSet = true; m_inboundIntegrations = std::forward<InboundIntegrationsT>(value); }
    template<typename InboundIntegrationsT = Aws::Vector<InboundIntegration>>
    DescribeInboundIntegrationsResult& WithInboundIntegrations(InboundIntegrationsT&& value) { SetInboundIntegrations(std::forward<InboundIntegrationsT>(value)); return *this;}
    template<typename InboundIntegrationsT = InboundIntegration>
    DescribeInboundIntegrationsResult& AddInboundIntegrations(InboundIntegrationsT&& value) { m_inboundIntegrationsHasBeenSet = true; m_inboundIntegrations.emplace_back(std::forward<InboundIntegrationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeInboundIntegrationsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<InboundIntegration> m_inboundIntegrations;
    bool m_inboundIntegrationsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
