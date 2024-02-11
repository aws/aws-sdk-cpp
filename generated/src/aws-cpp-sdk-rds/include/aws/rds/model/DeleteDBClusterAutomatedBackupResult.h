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
    AWS_RDS_API DeleteDBClusterAutomatedBackupResult();
    AWS_RDS_API DeleteDBClusterAutomatedBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DeleteDBClusterAutomatedBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const DBClusterAutomatedBackup& GetDBClusterAutomatedBackup() const{ return m_dBClusterAutomatedBackup; }

    
    inline void SetDBClusterAutomatedBackup(const DBClusterAutomatedBackup& value) { m_dBClusterAutomatedBackup = value; }

    
    inline void SetDBClusterAutomatedBackup(DBClusterAutomatedBackup&& value) { m_dBClusterAutomatedBackup = std::move(value); }

    
    inline DeleteDBClusterAutomatedBackupResult& WithDBClusterAutomatedBackup(const DBClusterAutomatedBackup& value) { SetDBClusterAutomatedBackup(value); return *this;}

    
    inline DeleteDBClusterAutomatedBackupResult& WithDBClusterAutomatedBackup(DBClusterAutomatedBackup&& value) { SetDBClusterAutomatedBackup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteDBClusterAutomatedBackupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteDBClusterAutomatedBackupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBClusterAutomatedBackup m_dBClusterAutomatedBackup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
