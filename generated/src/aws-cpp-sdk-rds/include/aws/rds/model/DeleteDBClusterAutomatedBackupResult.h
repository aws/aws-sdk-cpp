/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBClusterAutomatedBackup.h>
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
  class DeleteDBClusterAutomatedBackupResult
  {
  public:
    AWS_RDS_API DeleteDBClusterAutomatedBackupResult() = default;
    AWS_RDS_API DeleteDBClusterAutomatedBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DeleteDBClusterAutomatedBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const DBClusterAutomatedBackup& GetDBClusterAutomatedBackup() const { return m_dBClusterAutomatedBackup; }
    template<typename DBClusterAutomatedBackupT = DBClusterAutomatedBackup>
    void SetDBClusterAutomatedBackup(DBClusterAutomatedBackupT&& value) { m_dBClusterAutomatedBackupHasBeenSet = true; m_dBClusterAutomatedBackup = std::forward<DBClusterAutomatedBackupT>(value); }
    template<typename DBClusterAutomatedBackupT = DBClusterAutomatedBackup>
    DeleteDBClusterAutomatedBackupResult& WithDBClusterAutomatedBackup(DBClusterAutomatedBackupT&& value) { SetDBClusterAutomatedBackup(std::forward<DBClusterAutomatedBackupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteDBClusterAutomatedBackupResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    DBClusterAutomatedBackup m_dBClusterAutomatedBackup;
    bool m_dBClusterAutomatedBackupHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
