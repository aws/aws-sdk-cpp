/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/s3tables/model/TableMaintenanceType.h>
#include <aws/s3tables/model/TableMaintenanceConfigurationValue.h>
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
  class GetTableMaintenanceConfigurationResult
  {
  public:
    AWS_S3TABLES_API GetTableMaintenanceConfigurationResult();
    AWS_S3TABLES_API GetTableMaintenanceConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API GetTableMaintenanceConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table.</p>
     */
    inline const Aws::String& GetTableARN() const{ return m_tableARN; }
    inline void SetTableARN(const Aws::String& value) { m_tableARN = value; }
    inline void SetTableARN(Aws::String&& value) { m_tableARN = std::move(value); }
    inline void SetTableARN(const char* value) { m_tableARN.assign(value); }
    inline GetTableMaintenanceConfigurationResult& WithTableARN(const Aws::String& value) { SetTableARN(value); return *this;}
    inline GetTableMaintenanceConfigurationResult& WithTableARN(Aws::String&& value) { SetTableARN(std::move(value)); return *this;}
    inline GetTableMaintenanceConfigurationResult& WithTableARN(const char* value) { SetTableARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the maintenance configuration for the table bucket.</p>
     */
    inline const Aws::Map<TableMaintenanceType, TableMaintenanceConfigurationValue>& GetConfiguration() const{ return m_configuration; }
    inline void SetConfiguration(const Aws::Map<TableMaintenanceType, TableMaintenanceConfigurationValue>& value) { m_configuration = value; }
    inline void SetConfiguration(Aws::Map<TableMaintenanceType, TableMaintenanceConfigurationValue>&& value) { m_configuration = std::move(value); }
    inline GetTableMaintenanceConfigurationResult& WithConfiguration(const Aws::Map<TableMaintenanceType, TableMaintenanceConfigurationValue>& value) { SetConfiguration(value); return *this;}
    inline GetTableMaintenanceConfigurationResult& WithConfiguration(Aws::Map<TableMaintenanceType, TableMaintenanceConfigurationValue>&& value) { SetConfiguration(std::move(value)); return *this;}
    inline GetTableMaintenanceConfigurationResult& AddConfiguration(const TableMaintenanceType& key, const TableMaintenanceConfigurationValue& value) { m_configuration.emplace(key, value); return *this; }
    inline GetTableMaintenanceConfigurationResult& AddConfiguration(TableMaintenanceType&& key, const TableMaintenanceConfigurationValue& value) { m_configuration.emplace(std::move(key), value); return *this; }
    inline GetTableMaintenanceConfigurationResult& AddConfiguration(const TableMaintenanceType& key, TableMaintenanceConfigurationValue&& value) { m_configuration.emplace(key, std::move(value)); return *this; }
    inline GetTableMaintenanceConfigurationResult& AddConfiguration(TableMaintenanceType&& key, TableMaintenanceConfigurationValue&& value) { m_configuration.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTableMaintenanceConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTableMaintenanceConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTableMaintenanceConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_tableARN;

    Aws::Map<TableMaintenanceType, TableMaintenanceConfigurationValue> m_configuration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
