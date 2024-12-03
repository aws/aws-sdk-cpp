/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/s3tables/model/TableBucketMaintenanceType.h>
#include <aws/s3tables/model/TableBucketMaintenanceConfigurationValue.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace S3Tables
{
namespace Model
{
  class GetTableBucketMaintenanceConfigurationResult
  {
  public:
    AWS_S3TABLES_API GetTableBucketMaintenanceConfigurationResult();
    AWS_S3TABLES_API GetTableBucketMaintenanceConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API GetTableBucketMaintenanceConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table bucket associated with the
     * maintenance configuration.</p>
     */
    inline const Aws::String& GetTableBucketARN() const{ return m_tableBucketARN; }
    inline void SetTableBucketARN(const Aws::String& value) { m_tableBucketARN = value; }
    inline void SetTableBucketARN(Aws::String&& value) { m_tableBucketARN = std::move(value); }
    inline void SetTableBucketARN(const char* value) { m_tableBucketARN.assign(value); }
    inline GetTableBucketMaintenanceConfigurationResult& WithTableBucketARN(const Aws::String& value) { SetTableBucketARN(value); return *this;}
    inline GetTableBucketMaintenanceConfigurationResult& WithTableBucketARN(Aws::String&& value) { SetTableBucketARN(std::move(value)); return *this;}
    inline GetTableBucketMaintenanceConfigurationResult& WithTableBucketARN(const char* value) { SetTableBucketARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the maintenance configuration for the table bucket.</p>
     */
    inline const Aws::Map<TableBucketMaintenanceType, TableBucketMaintenanceConfigurationValue>& GetConfiguration() const{ return m_configuration; }
    inline void SetConfiguration(const Aws::Map<TableBucketMaintenanceType, TableBucketMaintenanceConfigurationValue>& value) { m_configuration = value; }
    inline void SetConfiguration(Aws::Map<TableBucketMaintenanceType, TableBucketMaintenanceConfigurationValue>&& value) { m_configuration = std::move(value); }
    inline GetTableBucketMaintenanceConfigurationResult& WithConfiguration(const Aws::Map<TableBucketMaintenanceType, TableBucketMaintenanceConfigurationValue>& value) { SetConfiguration(value); return *this;}
    inline GetTableBucketMaintenanceConfigurationResult& WithConfiguration(Aws::Map<TableBucketMaintenanceType, TableBucketMaintenanceConfigurationValue>&& value) { SetConfiguration(std::move(value)); return *this;}
    inline GetTableBucketMaintenanceConfigurationResult& AddConfiguration(const TableBucketMaintenanceType& key, const TableBucketMaintenanceConfigurationValue& value) { m_configuration.emplace(key, value); return *this; }
    inline GetTableBucketMaintenanceConfigurationResult& AddConfiguration(TableBucketMaintenanceType&& key, const TableBucketMaintenanceConfigurationValue& value) { m_configuration.emplace(std::move(key), value); return *this; }
    inline GetTableBucketMaintenanceConfigurationResult& AddConfiguration(const TableBucketMaintenanceType& key, TableBucketMaintenanceConfigurationValue&& value) { m_configuration.emplace(key, std::move(value)); return *this; }
    inline GetTableBucketMaintenanceConfigurationResult& AddConfiguration(TableBucketMaintenanceType&& key, TableBucketMaintenanceConfigurationValue&& value) { m_configuration.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTableBucketMaintenanceConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTableBucketMaintenanceConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTableBucketMaintenanceConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_tableBucketARN;

    Aws::Map<TableBucketMaintenanceType, TableBucketMaintenanceConfigurationValue> m_configuration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
