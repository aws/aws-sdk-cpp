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
  class DeleteDBInstanceAutomatedBackupResult
  {
  public:
    AWS_RDS_API DeleteDBInstanceAutomatedBackupResult();
    AWS_RDS_API DeleteDBInstanceAutomatedBackupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DeleteDBInstanceAutomatedBackupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const DBInstanceAutomatedBackup& GetDBInstanceAutomatedBackup() const{ return m_dBInstanceAutomatedBackup; }

    
    inline void SetDBInstanceAutomatedBackup(const DBInstanceAutomatedBackup& value) { m_dBInstanceAutomatedBackup = value; }

    
    inline void SetDBInstanceAutomatedBackup(DBInstanceAutomatedBackup&& value) { m_dBInstanceAutomatedBackup = std::move(value); }

    
    inline DeleteDBInstanceAutomatedBackupResult& WithDBInstanceAutomatedBackup(const DBInstanceAutomatedBackup& value) { SetDBInstanceAutomatedBackup(value); return *this;}

    
    inline DeleteDBInstanceAutomatedBackupResult& WithDBInstanceAutomatedBackup(DBInstanceAutomatedBackup&& value) { SetDBInstanceAutomatedBackup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteDBInstanceAutomatedBackupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteDBInstanceAutomatedBackupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBInstanceAutomatedBackup m_dBInstanceAutomatedBackup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
