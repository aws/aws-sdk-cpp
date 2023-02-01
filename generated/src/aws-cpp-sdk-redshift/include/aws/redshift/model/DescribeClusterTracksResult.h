/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/MaintenanceTrack.h>
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
  class DescribeClusterTracksResult
  {
  public:
    AWS_REDSHIFT_API DescribeClusterTracksResult();
    AWS_REDSHIFT_API DescribeClusterTracksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeClusterTracksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of maintenance tracks output by the <code>DescribeClusterTracks</code>
     * operation. </p>
     */
    inline const Aws::Vector<MaintenanceTrack>& GetMaintenanceTracks() const{ return m_maintenanceTracks; }

    /**
     * <p>A list of maintenance tracks output by the <code>DescribeClusterTracks</code>
     * operation. </p>
     */
    inline void SetMaintenanceTracks(const Aws::Vector<MaintenanceTrack>& value) { m_maintenanceTracks = value; }

    /**
     * <p>A list of maintenance tracks output by the <code>DescribeClusterTracks</code>
     * operation. </p>
     */
    inline void SetMaintenanceTracks(Aws::Vector<MaintenanceTrack>&& value) { m_maintenanceTracks = std::move(value); }

    /**
     * <p>A list of maintenance tracks output by the <code>DescribeClusterTracks</code>
     * operation. </p>
     */
    inline DescribeClusterTracksResult& WithMaintenanceTracks(const Aws::Vector<MaintenanceTrack>& value) { SetMaintenanceTracks(value); return *this;}

    /**
     * <p>A list of maintenance tracks output by the <code>DescribeClusterTracks</code>
     * operation. </p>
     */
    inline DescribeClusterTracksResult& WithMaintenanceTracks(Aws::Vector<MaintenanceTrack>&& value) { SetMaintenanceTracks(std::move(value)); return *this;}

    /**
     * <p>A list of maintenance tracks output by the <code>DescribeClusterTracks</code>
     * operation. </p>
     */
    inline DescribeClusterTracksResult& AddMaintenanceTracks(const MaintenanceTrack& value) { m_maintenanceTracks.push_back(value); return *this; }

    /**
     * <p>A list of maintenance tracks output by the <code>DescribeClusterTracks</code>
     * operation. </p>
     */
    inline DescribeClusterTracksResult& AddMaintenanceTracks(MaintenanceTrack&& value) { m_maintenanceTracks.push_back(std::move(value)); return *this; }


    /**
     * <p>The starting point to return a set of response tracklist records. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The starting point to return a set of response tracklist records. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The starting point to return a set of response tracklist records. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The starting point to return a set of response tracklist records. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The starting point to return a set of response tracklist records. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request.</p>
     */
    inline DescribeClusterTracksResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The starting point to return a set of response tracklist records. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request.</p>
     */
    inline DescribeClusterTracksResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The starting point to return a set of response tracklist records. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request.</p>
     */
    inline DescribeClusterTracksResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeClusterTracksResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeClusterTracksResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<MaintenanceTrack> m_maintenanceTracks;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
