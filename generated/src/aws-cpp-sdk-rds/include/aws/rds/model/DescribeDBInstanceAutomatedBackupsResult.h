/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/DBInstanceAutomatedBackup.h>
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
   * <code>DescribeDBInstanceAutomatedBackups</code> action.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DBInstanceAutomatedBackupMessage">AWS
   * API Reference</a></p>
   */
  class DescribeDBInstanceAutomatedBackupsResult
  {
  public:
    AWS_RDS_API DescribeDBInstanceAutomatedBackupsResult() = default;
    AWS_RDS_API DescribeDBInstanceAutomatedBackupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeDBInstanceAutomatedBackupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    DescribeDBInstanceAutomatedBackupsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>DBInstanceAutomatedBackup</code> instances.</p>
     */
    inline const Aws::Vector<DBInstanceAutomatedBackup>& GetDBInstanceAutomatedBackups() const { return m_dBInstanceAutomatedBackups; }
    template<typename DBInstanceAutomatedBackupsT = Aws::Vector<DBInstanceAutomatedBackup>>
    void SetDBInstanceAutomatedBackups(DBInstanceAutomatedBackupsT&& value) { m_dBInstanceAutomatedBackupsHasBeenSet = true; m_dBInstanceAutomatedBackups = std::forward<DBInstanceAutomatedBackupsT>(value); }
    template<typename DBInstanceAutomatedBackupsT = Aws::Vector<DBInstanceAutomatedBackup>>
    DescribeDBInstanceAutomatedBackupsResult& WithDBInstanceAutomatedBackups(DBInstanceAutomatedBackupsT&& value) { SetDBInstanceAutomatedBackups(std::forward<DBInstanceAutomatedBackupsT>(value)); return *this;}
    template<typename DBInstanceAutomatedBackupsT = DBInstanceAutomatedBackup>
    DescribeDBInstanceAutomatedBackupsResult& AddDBInstanceAutomatedBackups(DBInstanceAutomatedBackupsT&& value) { m_dBInstanceAutomatedBackupsHasBeenSet = true; m_dBInstanceAutomatedBackups.emplace_back(std::forward<DBInstanceAutomatedBackupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeDBInstanceAutomatedBackupsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<DBInstanceAutomatedBackup> m_dBInstanceAutomatedBackups;
    bool m_dBInstanceAutomatedBackupsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
