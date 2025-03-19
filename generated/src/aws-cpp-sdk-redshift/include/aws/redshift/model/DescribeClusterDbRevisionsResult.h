/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/ClusterDbRevision.h>
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
  class DescribeClusterDbRevisionsResult
  {
  public:
    AWS_REDSHIFT_API DescribeClusterDbRevisionsResult() = default;
    AWS_REDSHIFT_API DescribeClusterDbRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeClusterDbRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A string representing the starting point for the next set of revisions. If a
     * value is returned in a response, you can retrieve the next set of revisions by
     * providing the value in the <code>marker</code> parameter and retrying the
     * command. If the <code>marker</code> field is empty, all revisions have already
     * been returned.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeClusterDbRevisionsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of revisions.</p>
     */
    inline const Aws::Vector<ClusterDbRevision>& GetClusterDbRevisions() const { return m_clusterDbRevisions; }
    template<typename ClusterDbRevisionsT = Aws::Vector<ClusterDbRevision>>
    void SetClusterDbRevisions(ClusterDbRevisionsT&& value) { m_clusterDbRevisionsHasBeenSet = true; m_clusterDbRevisions = std::forward<ClusterDbRevisionsT>(value); }
    template<typename ClusterDbRevisionsT = Aws::Vector<ClusterDbRevision>>
    DescribeClusterDbRevisionsResult& WithClusterDbRevisions(ClusterDbRevisionsT&& value) { SetClusterDbRevisions(std::forward<ClusterDbRevisionsT>(value)); return *this;}
    template<typename ClusterDbRevisionsT = ClusterDbRevision>
    DescribeClusterDbRevisionsResult& AddClusterDbRevisions(ClusterDbRevisionsT&& value) { m_clusterDbRevisionsHasBeenSet = true; m_clusterDbRevisions.emplace_back(std::forward<ClusterDbRevisionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeClusterDbRevisionsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<ClusterDbRevision> m_clusterDbRevisions;
    bool m_clusterDbRevisionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
