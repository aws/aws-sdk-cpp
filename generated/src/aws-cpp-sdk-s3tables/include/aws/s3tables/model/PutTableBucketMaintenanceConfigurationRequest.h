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
    AWS_S3TABLES_API PutTableBucketMaintenanceConfigurationRequest();

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
    inline const Aws::String& GetTableBucketARN() const{ return m_tableBucketARN; }
    inline bool TableBucketARNHasBeenSet() const { return m_tableBucketARNHasBeenSet; }
    inline void SetTableBucketARN(const Aws::String& value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN = value; }
    inline void SetTableBucketARN(Aws::String&& value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN = std::move(value); }
    inline void SetTableBucketARN(const char* value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN.assign(value); }
    inline PutTableBucketMaintenanceConfigurationRequest& WithTableBucketARN(const Aws::String& value) { SetTableBucketARN(value); return *this;}
    inline PutTableBucketMaintenanceConfigurationRequest& WithTableBucketARN(Aws::String&& value) { SetTableBucketARN(std::move(value)); return *this;}
    inline PutTableBucketMaintenanceConfigurationRequest& WithTableBucketARN(const char* value) { SetTableBucketARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the maintenance configuration.</p>
     */
    inline const TableBucketMaintenanceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TableBucketMaintenanceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TableBucketMaintenanceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline PutTableBucketMaintenanceConfigurationRequest& WithType(const TableBucketMaintenanceType& value) { SetType(value); return *this;}
    inline PutTableBucketMaintenanceConfigurationRequest& WithType(TableBucketMaintenanceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the values of the maintenance configuration for the table bucket.</p>
     */
    inline const TableBucketMaintenanceConfigurationValue& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const TableBucketMaintenanceConfigurationValue& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(TableBucketMaintenanceConfigurationValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline PutTableBucketMaintenanceConfigurationRequest& WithValue(const TableBucketMaintenanceConfigurationValue& value) { SetValue(value); return *this;}
    inline PutTableBucketMaintenanceConfigurationRequest& WithValue(TableBucketMaintenanceConfigurationValue&& value) { SetValue(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableBucketARN;
    bool m_tableBucketARNHasBeenSet = false;

    TableBucketMaintenanceType m_type;
    bool m_typeHasBeenSet = false;

    TableBucketMaintenanceConfigurationValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
