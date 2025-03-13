/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/EndpointAccess.h>
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
  class DescribeEndpointAccessResult
  {
  public:
    AWS_REDSHIFT_API DescribeEndpointAccessResult() = default;
    AWS_REDSHIFT_API DescribeEndpointAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeEndpointAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The list of endpoints with access to the cluster.</p>
     */
    inline const Aws::Vector<EndpointAccess>& GetEndpointAccessList() const { return m_endpointAccessList; }
    template<typename EndpointAccessListT = Aws::Vector<EndpointAccess>>
    void SetEndpointAccessList(EndpointAccessListT&& value) { m_endpointAccessListHasBeenSet = true; m_endpointAccessList = std::forward<EndpointAccessListT>(value); }
    template<typename EndpointAccessListT = Aws::Vector<EndpointAccess>>
    DescribeEndpointAccessResult& WithEndpointAccessList(EndpointAccessListT&& value) { SetEndpointAccessList(std::forward<EndpointAccessListT>(value)); return *this;}
    template<typename EndpointAccessListT = EndpointAccess>
    DescribeEndpointAccessResult& AddEndpointAccessList(EndpointAccessListT&& value) { m_endpointAccessListHasBeenSet = true; m_endpointAccessList.emplace_back(std::forward<EndpointAccessListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeEndpointAccess</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * the <code>MaxRecords</code> parameter.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeEndpointAccessResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeEndpointAccessResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EndpointAccess> m_endpointAccessList;
    bool m_endpointAccessListHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
