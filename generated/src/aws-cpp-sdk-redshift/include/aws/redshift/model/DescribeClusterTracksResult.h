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
    AWS_REDSHIFT_API DescribeClusterTracksResult() = default;
    AWS_REDSHIFT_API DescribeClusterTracksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeClusterTracksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of maintenance tracks output by the <code>DescribeClusterTracks</code>
     * operation. </p>
     */
    inline const Aws::Vector<MaintenanceTrack>& GetMaintenanceTracks() const { return m_maintenanceTracks; }
    template<typename MaintenanceTracksT = Aws::Vector<MaintenanceTrack>>
    void SetMaintenanceTracks(MaintenanceTracksT&& value) { m_maintenanceTracksHasBeenSet = true; m_maintenanceTracks = std::forward<MaintenanceTracksT>(value); }
    template<typename MaintenanceTracksT = Aws::Vector<MaintenanceTrack>>
    DescribeClusterTracksResult& WithMaintenanceTracks(MaintenanceTracksT&& value) { SetMaintenanceTracks(std::forward<MaintenanceTracksT>(value)); return *this;}
    template<typename MaintenanceTracksT = MaintenanceTrack>
    DescribeClusterTracksResult& AddMaintenanceTracks(MaintenanceTracksT&& value) { m_maintenanceTracksHasBeenSet = true; m_maintenanceTracks.emplace_back(std::forward<MaintenanceTracksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The starting point to return a set of response tracklist records. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeClusterTracksResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeClusterTracksResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MaintenanceTrack> m_maintenanceTracks;
    bool m_maintenanceTracksHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
