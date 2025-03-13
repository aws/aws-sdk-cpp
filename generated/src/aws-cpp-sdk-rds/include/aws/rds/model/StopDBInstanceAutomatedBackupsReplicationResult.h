/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBInstanceAutomatedBackup.h>
#include <aws/rds/model/ResponseMetadata.h>
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
  class StopDBInstanceAutomatedBackupsReplicationResult
  {
  public:
    AWS_RDS_API StopDBInstanceAutomatedBackupsReplicationResult() = default;
    AWS_RDS_API StopDBInstanceAutomatedBackupsReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API StopDBInstanceAutomatedBackupsReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const DBInstanceAutomatedBackup& GetDBInstanceAutomatedBackup() const { return m_dBInstanceAutomatedBackup; }
    template<typename DBInstanceAutomatedBackupT = DBInstanceAutomatedBackup>
    void SetDBInstanceAutomatedBackup(DBInstanceAutomatedBackupT&& value) { m_dBInstanceAutomatedBackupHasBeenSet = true; m_dBInstanceAutomatedBackup = std::forward<DBInstanceAutomatedBackupT>(value); }
    template<typename DBInstanceAutomatedBackupT = DBInstanceAutomatedBackup>
    StopDBInstanceAutomatedBackupsReplicationResult& WithDBInstanceAutomatedBackup(DBInstanceAutomatedBackupT&& value) { SetDBInstanceAutomatedBackup(std::forward<DBInstanceAutomatedBackupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    StopDBInstanceAutomatedBackupsReplicationResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    DBInstanceAutomatedBackup m_dBInstanceAutomatedBackup;
    bool m_dBInstanceAutomatedBackupHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
