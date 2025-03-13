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
    AWS_S3TABLES_API GetTableMaintenanceConfigurationResult() = default;
    AWS_S3TABLES_API GetTableMaintenanceConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_S3TABLES_API GetTableMaintenanceConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table.</p>
     */
    inline const Aws::String& GetTableARN() const { return m_tableARN; }
    template<typename TableARNT = Aws::String>
    void SetTableARN(TableARNT&& value) { m_tableARNHasBeenSet = true; m_tableARN = std::forward<TableARNT>(value); }
    template<typename TableARNT = Aws::String>
    GetTableMaintenanceConfigurationResult& WithTableARN(TableARNT&& value) { SetTableARN(std::forward<TableARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the maintenance configuration for the table bucket.</p>
     */
    inline const Aws::Map<TableMaintenanceType, TableMaintenanceConfigurationValue>& GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = Aws::Map<TableMaintenanceType, TableMaintenanceConfigurationValue>>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = Aws::Map<TableMaintenanceType, TableMaintenanceConfigurationValue>>
    GetTableMaintenanceConfigurationResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    inline GetTableMaintenanceConfigurationResult& AddConfiguration(TableMaintenanceType key, TableMaintenanceConfigurationValue value) {
      m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTableMaintenanceConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableARN;
    bool m_tableARNHasBeenSet = false;

    Aws::Map<TableMaintenanceType, TableMaintenanceConfigurationValue> m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
