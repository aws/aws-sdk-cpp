/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/ClusterVersion.h>
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
   * <p>Contains the output from the <a>DescribeClusterVersions</a> action.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ClusterVersionsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeClusterVersionsResult
  {
  public:
    AWS_REDSHIFT_API DescribeClusterVersionsResult();
    AWS_REDSHIFT_API DescribeClusterVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeClusterVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeClusterVersionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeClusterVersionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeClusterVersionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of <code>Version</code> elements. </p>
     */
    inline const Aws::Vector<ClusterVersion>& GetClusterVersions() const{ return m_clusterVersions; }

    /**
     * <p>A list of <code>Version</code> elements. </p>
     */
    inline void SetClusterVersions(const Aws::Vector<ClusterVersion>& value) { m_clusterVersions = value; }

    /**
     * <p>A list of <code>Version</code> elements. </p>
     */
    inline void SetClusterVersions(Aws::Vector<ClusterVersion>&& value) { m_clusterVersions = std::move(value); }

    /**
     * <p>A list of <code>Version</code> elements. </p>
     */
    inline DescribeClusterVersionsResult& WithClusterVersions(const Aws::Vector<ClusterVersion>& value) { SetClusterVersions(value); return *this;}

    /**
     * <p>A list of <code>Version</code> elements. </p>
     */
    inline DescribeClusterVersionsResult& WithClusterVersions(Aws::Vector<ClusterVersion>&& value) { SetClusterVersions(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Version</code> elements. </p>
     */
    inline DescribeClusterVersionsResult& AddClusterVersions(const ClusterVersion& value) { m_clusterVersions.push_back(value); return *this; }

    /**
     * <p>A list of <code>Version</code> elements. </p>
     */
    inline DescribeClusterVersionsResult& AddClusterVersions(ClusterVersion&& value) { m_clusterVersions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeClusterVersionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeClusterVersionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<ClusterVersion> m_clusterVersions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
