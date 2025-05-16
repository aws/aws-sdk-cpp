/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/ResponseMetadata.h>
#include <aws/neptune/model/DBClusterEndpoint.h>
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
namespace Neptune
{
namespace Model
{
  class DescribeDBClusterEndpointsResult
  {
  public:
    AWS_NEPTUNE_API DescribeDBClusterEndpointsResult() = default;
    AWS_NEPTUNE_API DescribeDBClusterEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API DescribeDBClusterEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p> n optional pagination token provided by a previous
     * <code>DescribeDBClusterEndpoints</code> request. If this parameter is specified,
     * the response includes only records beyond the marker, up to the value specified
     * by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeDBClusterEndpointsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the details of the endpoints associated with the cluster and
     * matching any filter conditions.</p>
     */
    inline const Aws::Vector<DBClusterEndpoint>& GetDBClusterEndpoints() const { return m_dBClusterEndpoints; }
    template<typename DBClusterEndpointsT = Aws::Vector<DBClusterEndpoint>>
    void SetDBClusterEndpoints(DBClusterEndpointsT&& value) { m_dBClusterEndpointsHasBeenSet = true; m_dBClusterEndpoints = std::forward<DBClusterEndpointsT>(value); }
    template<typename DBClusterEndpointsT = Aws::Vector<DBClusterEndpoint>>
    DescribeDBClusterEndpointsResult& WithDBClusterEndpoints(DBClusterEndpointsT&& value) { SetDBClusterEndpoints(std::forward<DBClusterEndpointsT>(value)); return *this;}
    template<typename DBClusterEndpointsT = DBClusterEndpoint>
    DescribeDBClusterEndpointsResult& AddDBClusterEndpoints(DBClusterEndpointsT&& value) { m_dBClusterEndpointsHasBeenSet = true; m_dBClusterEndpoints.emplace_back(std::forward<DBClusterEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDBClusterEndpointsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<DBClusterEndpoint> m_dBClusterEndpoints;
    bool m_dBClusterEndpointsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
