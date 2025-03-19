/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/S3TablesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/model/TableBucketMaintenanceType.h>
#include <aws/s3tables/model/TableBucketMaintenanceConfigurationValue.h>
#include <utility>

namespace Aws
{
namespace S3Tables
{
namespace Model
{

  /**
   */
  class PutTableBucketMaintenanceConfigurationRequest : public S3TablesRequest
  {
  public:
    AWS_S3TABLES_API PutTableBucketMaintenanceConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutTableBucketMaintenanceConfiguration"; }

    AWS_S3TABLES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table bucket associated with the
     * maintenance configuration.</p>
     */
    inline const Aws::String& GetTableBucketARN() const { return m_tableBucketARN; }
    inline bool TableBucketARNHasBeenSet() const { return m_tableBucketARNHasBeenSet; }
    template<typename TableBucketARNT = Aws::String>
    void SetTableBucketARN(TableBucketARNT&& value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN = std::forward<TableBucketARNT>(value); }
    template<typename TableBucketARNT = Aws::String>
    PutTableBucketMaintenanceConfigurationRequest& WithTableBucketARN(TableBucketARNT&& value) { SetTableBucketARN(std::forward<TableBucketARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the maintenance configuration.</p>
     */
    inline TableBucketMaintenanceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TableBucketMaintenanceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline PutTableBucketMaintenanceConfigurationRequest& WithType(TableBucketMaintenanceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the values of the maintenance configuration for the table bucket.</p>
     */
    inline const TableBucketMaintenanceConfigurationValue& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = TableBucketMaintenanceConfigurationValue>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = TableBucketMaintenanceConfigurationValue>
    PutTableBucketMaintenanceConfigurationRequest& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableBucketARN;
    bool m_tableBucketARNHasBeenSet = false;

    TableBucketMaintenanceType m_type{TableBucketMaintenanceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    TableBucketMaintenanceConfigurationValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
