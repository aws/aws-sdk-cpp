/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBClusterAutomatedBackup.h>
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
  class DescribeDBClusterAutomatedBackupsResult
  {
  public:
    AWS_RDS_API DescribeDBClusterAutomatedBackupsResult() = default;
    AWS_RDS_API DescribeDBClusterAutomatedBackupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBClusterAutomatedBackupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The pagination token provided in the previous request. If this parameter is
     * specified the response includes only records beyond the marker, up to
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeDBClusterAutomatedBackupsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>DBClusterAutomatedBackup</code> backups.</p>
     */
    inline const Aws::Vector<DBClusterAutomatedBackup>& GetDBClusterAutomatedBackups() const { return m_dBClusterAutomatedBackups; }
    template<typename DBClusterAutomatedBackupsT = Aws::Vector<DBClusterAutomatedBackup>>
    void SetDBClusterAutomatedBackups(DBClusterAutomatedBackupsT&& value) { m_dBClusterAutomatedBackupsHasBeenSet = true; m_dBClusterAutomatedBackups = std::forward<DBClusterAutomatedBackupsT>(value); }
    template<typename DBClusterAutomatedBackupsT = Aws::Vector<DBClusterAutomatedBackup>>
    DescribeDBClusterAutomatedBackupsResult& WithDBClusterAutomatedBackups(DBClusterAutomatedBackupsT&& value) { SetDBClusterAutomatedBackups(std::forward<DBClusterAutomatedBackupsT>(value)); return *this;}
    template<typename DBClusterAutomatedBackupsT = DBClusterAutomatedBackup>
    DescribeDBClusterAutomatedBackupsResult& AddDBClusterAutomatedBackups(DBClusterAutomatedBackupsT&& value) { m_dBClusterAutomatedBackupsHasBeenSet = true; m_dBClusterAutomatedBackups.emplace_back(std::forward<DBClusterAutomatedBackupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDBClusterAutomatedBackupsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<DBClusterAutomatedBackup> m_dBClusterAutomatedBackups;
    bool m_dBClusterAutomatedBackupsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
