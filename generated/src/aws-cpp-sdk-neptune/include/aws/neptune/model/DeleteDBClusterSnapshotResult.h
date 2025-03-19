/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/model/DBClusterSnapshot.h>
#include <aws/neptune/model/ResponseMetadata.h>
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
  class DeleteDBClusterSnapshotResult
  {
  public:
    AWS_NEPTUNE_API DeleteDBClusterSnapshotResult() = default;
    AWS_NEPTUNE_API DeleteDBClusterSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API DeleteDBClusterSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const DBClusterSnapshot& GetDBClusterSnapshot() const { return m_dBClusterSnapshot; }
    template<typename DBClusterSnapshotT = DBClusterSnapshot>
    void SetDBClusterSnapshot(DBClusterSnapshotT&& value) { m_dBClusterSnapshotHasBeenSet = true; m_dBClusterSnapshot = std::forward<DBClusterSnapshotT>(value); }
    template<typename DBClusterSnapshotT = DBClusterSnapshot>
    DeleteDBClusterSnapshotResult& WithDBClusterSnapshot(DBClusterSnapshotT&& value) { SetDBClusterSnapshot(std::forward<DBClusterSnapshotT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteDBClusterSnapshotResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    DBClusterSnapshot m_dBClusterSnapshot;
    bool m_dBClusterSnapshotHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
