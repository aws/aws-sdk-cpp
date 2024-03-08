/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/TenantDatabase.h>
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
  class CreateTenantDatabaseResult
  {
  public:
    AWS_RDS_API CreateTenantDatabaseResult();
    AWS_RDS_API CreateTenantDatabaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API CreateTenantDatabaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const TenantDatabase& GetTenantDatabase() const{ return m_tenantDatabase; }

    
    inline void SetTenantDatabase(const TenantDatabase& value) { m_tenantDatabase = value; }

    
    inline void SetTenantDatabase(TenantDatabase&& value) { m_tenantDatabase = std::move(value); }

    
    inline CreateTenantDatabaseResult& WithTenantDatabase(const TenantDatabase& value) { SetTenantDatabase(value); return *this;}

    
    inline CreateTenantDatabaseResult& WithTenantDatabase(TenantDatabase&& value) { SetTenantDatabase(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateTenantDatabaseResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateTenantDatabaseResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TenantDatabase m_tenantDatabase;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
