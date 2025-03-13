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
    AWS_S3TABLES_API GetTableBucketMaintenanceConfigurationResult() = default;
    AWS_S3TABLES_API GetTableBucketMaintenanceConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API GetTableBucketMaintenanceConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table bucket associated with the
     * maintenance configuration.</p>
     */
    inline const Aws::String& GetTableBucketARN() const { return m_tableBucketARN; }
    template<typename TableBucketARNT = Aws::String>
    void SetTableBucketARN(TableBucketARNT&& value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN = std::forward<TableBucketARNT>(value); }
    template<typename TableBucketARNT = Aws::String>
    GetTableBucketMaintenanceConfigurationResult& WithTableBucketARN(TableBucketARNT&& value) { SetTableBucketARN(std::forward<TableBucketARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the maintenance configuration for the table bucket.</p>
     */
    inline const Aws::Map<TableBucketMaintenanceType, TableBucketMaintenanceConfigurationValue>& GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = Aws::Map<TableBucketMaintenanceType, TableBucketMaintenanceConfigurationValue>>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = Aws::Map<TableBucketMaintenanceType, TableBucketMaintenanceConfigurationValue>>
    GetTableBucketMaintenanceConfigurationResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    inline GetTableBucketMaintenanceConfigurationResult& AddConfiguration(TableBucketMaintenanceType key, TableBucketMaintenanceConfigurationValue value) {
      m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTableBucketMaintenanceConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableBucketARN;
    bool m_tableBucketARNHasBeenSet = false;

    Aws::Map<TableBucketMaintenanceType, TableBucketMaintenanceConfigurationValue> m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
