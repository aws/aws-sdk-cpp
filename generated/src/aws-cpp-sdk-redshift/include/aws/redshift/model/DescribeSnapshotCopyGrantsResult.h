/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/SnapshotCopyGrant.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/SnapshotCopyGrantMessage">AWS
   * API Reference</a></p>
   */
  class DescribeSnapshotCopyGrantsResult
  {
  public:
    AWS_REDSHIFT_API DescribeSnapshotCopyGrantsResult() = default;
    AWS_REDSHIFT_API DescribeSnapshotCopyGrantsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeSnapshotCopyGrantsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeSnapshotCopyGrant</code>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     * <p>Constraints: You can specify either the <b>SnapshotCopyGrantName</b>
     * parameter or the <b>Marker</b> parameter, but not both. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeSnapshotCopyGrantsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of <code>SnapshotCopyGrant</code> objects.</p>
     */
    inline const Aws::Vector<SnapshotCopyGrant>& GetSnapshotCopyGrants() const { return m_snapshotCopyGrants; }
    template<typename SnapshotCopyGrantsT = Aws::Vector<SnapshotCopyGrant>>
    void SetSnapshotCopyGrants(SnapshotCopyGrantsT&& value) { m_snapshotCopyGrantsHasBeenSet = true; m_snapshotCopyGrants = std::forward<SnapshotCopyGrantsT>(value); }
    template<typename SnapshotCopyGrantsT = Aws::Vector<SnapshotCopyGrant>>
    DescribeSnapshotCopyGrantsResult& WithSnapshotCopyGrants(SnapshotCopyGrantsT&& value) { SetSnapshotCopyGrants(std::forward<SnapshotCopyGrantsT>(value)); return *this;}
    template<typename SnapshotCopyGrantsT = SnapshotCopyGrant>
    DescribeSnapshotCopyGrantsResult& AddSnapshotCopyGrants(SnapshotCopyGrantsT&& value) { m_snapshotCopyGrantsHasBeenSet = true; m_snapshotCopyGrants.emplace_back(std::forward<SnapshotCopyGrantsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeSnapshotCopyGrantsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<SnapshotCopyGrant> m_snapshotCopyGrants;
    bool m_snapshotCopyGrantsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
