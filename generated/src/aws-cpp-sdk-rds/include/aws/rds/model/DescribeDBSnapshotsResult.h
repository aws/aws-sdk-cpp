/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBSnapshot.h>
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
namespace RDS
{
namespace Model
{
  /**
   * <p>Contains the result of a successful invocation of the
   * <code>DescribeDBSnapshots</code> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class DescribeDBSnapshotsResult
  {
  public:
    AWS_RDS_API DescribeDBSnapshotsResult() = default;
    AWS_RDS_API DescribeDBSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeDBSnapshotsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>DBSnapshot</code> instances.</p>
     */
    inline const Aws::Vector<DBSnapshot>& GetDBSnapshots() const { return m_dBSnapshots; }
    template<typename DBSnapshotsT = Aws::Vector<DBSnapshot>>
    void SetDBSnapshots(DBSnapshotsT&& value) { m_dBSnapshotsHasBeenSet = true; m_dBSnapshots = std::forward<DBSnapshotsT>(value); }
    template<typename DBSnapshotsT = Aws::Vector<DBSnapshot>>
    DescribeDBSnapshotsResult& WithDBSnapshots(DBSnapshotsT&& value) { SetDBSnapshots(std::forward<DBSnapshotsT>(value)); return *this;}
    template<typename DBSnapshotsT = DBSnapshot>
    DescribeDBSnapshotsResult& AddDBSnapshots(DBSnapshotsT&& value) { m_dBSnapshotsHasBeenSet = true; m_dBSnapshots.emplace_back(std::forward<DBSnapshotsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDBSnapshotsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<DBSnapshot> m_dBSnapshots;
    bool m_dBSnapshotsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
