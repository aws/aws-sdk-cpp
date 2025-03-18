/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/SnapshotSchedule.h>
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
  class DescribeSnapshotSchedulesResult
  {
  public:
    AWS_REDSHIFT_API DescribeSnapshotSchedulesResult() = default;
    AWS_REDSHIFT_API DescribeSnapshotSchedulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DescribeSnapshotSchedulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of SnapshotSchedules.</p>
     */
    inline const Aws::Vector<SnapshotSchedule>& GetSnapshotSchedules() const { return m_snapshotSchedules; }
    template<typename SnapshotSchedulesT = Aws::Vector<SnapshotSchedule>>
    void SetSnapshotSchedules(SnapshotSchedulesT&& value) { m_snapshotSchedulesHasBeenSet = true; m_snapshotSchedules = std::forward<SnapshotSchedulesT>(value); }
    template<typename SnapshotSchedulesT = Aws::Vector<SnapshotSchedule>>
    DescribeSnapshotSchedulesResult& WithSnapshotSchedules(SnapshotSchedulesT&& value) { SetSnapshotSchedules(std::forward<SnapshotSchedulesT>(value)); return *this;}
    template<typename SnapshotSchedulesT = SnapshotSchedule>
    DescribeSnapshotSchedulesResult& AddSnapshotSchedules(SnapshotSchedulesT&& value) { m_snapshotSchedulesHasBeenSet = true; m_snapshotSchedules.emplace_back(std::forward<SnapshotSchedulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>marker</code> parameter and retrying the command. If the
     * <code>marker</code> field is empty, all response records have been retrieved for
     * the request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeSnapshotSchedulesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeSnapshotSchedulesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SnapshotSchedule> m_snapshotSchedules;
    bool m_snapshotSchedulesHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
