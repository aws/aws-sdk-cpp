/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/Cluster.h>
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
   * <p>Contains the output from the <a>DescribeClusters</a> action. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClustersMessage">AWS
   * API Reference</a></p>
   */
  class DescribeClustersResult
  {
  public:
    AWS_REDSHIFT_API DescribeClustersResult() = default;
    AWS_REDSHIFT_API DescribeClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    DescribeClustersResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>Cluster</code> objects, where each object describes one
     * cluster. </p>
     */
    inline const Aws::Vector<Cluster>& GetClusters() const { return m_clusters; }
    template<typename ClustersT = Aws::Vector<Cluster>>
    void SetClusters(ClustersT&& value) { m_clustersHasBeenSet = true; m_clusters = std::forward<ClustersT>(value); }
    template<typename ClustersT = Aws::Vector<Cluster>>
    DescribeClustersResult& WithClusters(ClustersT&& value) { SetClusters(std::forward<ClustersT>(value)); return *this;}
    template<typename ClustersT = Cluster>
    DescribeClustersResult& AddClusters(ClustersT&& value) { m_clustersHasBeenSet = true; m_clusters.emplace_back(std::forward<ClustersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeClustersResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<Cluster> m_clusters;
    bool m_clustersHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
