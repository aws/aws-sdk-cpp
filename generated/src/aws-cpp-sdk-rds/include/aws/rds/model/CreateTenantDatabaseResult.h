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
    AWS_RDS_API CreateTenantDatabaseResult() = default;
    AWS_RDS_API CreateTenantDatabaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API CreateTenantDatabaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const TenantDatabase& GetTenantDatabase() const { return m_tenantDatabase; }
    template<typename TenantDatabaseT = TenantDatabase>
    void SetTenantDatabase(TenantDatabaseT&& value) { m_tenantDatabaseHasBeenSet = true; m_tenantDatabase = std::forward<TenantDatabaseT>(value); }
    template<typename TenantDatabaseT = TenantDatabase>
    CreateTenantDatabaseResult& WithTenantDatabase(TenantDatabaseT&& value) { SetTenantDatabase(std::forward<TenantDatabaseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateTenantDatabaseResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TenantDatabase m_tenantDatabase;
    bool m_tenantDatabaseHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
