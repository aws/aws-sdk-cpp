/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/TableRestoreStatus.h>
#include <aws/redshift/model/ResponseMetadata.h>
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
  class RestoreTableFromClusterSnapshotResult
  {
  public:
    AWS_REDSHIFT_API RestoreTableFromClusterSnapshotResult() = default;
    AWS_REDSHIFT_API RestoreTableFromClusterSnapshotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API RestoreTableFromClusterSnapshotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const TableRestoreStatus& GetTableRestoreStatus() const { return m_tableRestoreStatus; }
    template<typename TableRestoreStatusT = TableRestoreStatus>
    void SetTableRestoreStatus(TableRestoreStatusT&& value) { m_tableRestoreStatusHasBeenSet = true; m_tableRestoreStatus = std::forward<TableRestoreStatusT>(value); }
    template<typename TableRestoreStatusT = TableRestoreStatus>
    RestoreTableFromClusterSnapshotResult& WithTableRestoreStatus(TableRestoreStatusT&& value) { SetTableRestoreStatus(std::forward<TableRestoreStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    RestoreTableFromClusterSnapshotResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TableRestoreStatus m_tableRestoreStatus;
    bool m_tableRestoreStatusHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
