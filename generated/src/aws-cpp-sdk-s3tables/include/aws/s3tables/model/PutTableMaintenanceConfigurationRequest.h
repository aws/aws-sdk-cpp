/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/S3TablesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/model/TableMaintenanceType.h>
#include <aws/s3tables/model/TableMaintenanceConfigurationValue.h>
#include <utility>

namespace Aws
{
namespace S3Tables
{
namespace Model
{

  /**
   */
  class PutTableMaintenanceConfigurationRequest : public S3TablesRequest
  {
  public:
    AWS_S3TABLES_API PutTableMaintenanceConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutTableMaintenanceConfiguration"; }

    AWS_S3TABLES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table associated with the maintenance
     * configuration.</p>
     */
    inline const Aws::String& GetTableBucketARN() const{ return m_tableBucketARN; }
    inline bool TableBucketARNHasBeenSet() const { return m_tableBucketARNHasBeenSet; }
    inline void SetTableBucketARN(const Aws::String& value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN = value; }
    inline void SetTableBucketARN(Aws::String&& value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN = std::move(value); }
    inline void SetTableBucketARN(const char* value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN.assign(value); }
    inline PutTableMaintenanceConfigurationRequest& WithTableBucketARN(const Aws::String& value) { SetTableBucketARN(value); return *this;}
    inline PutTableMaintenanceConfigurationRequest& WithTableBucketARN(Aws::String&& value) { SetTableBucketARN(std::move(value)); return *this;}
    inline PutTableMaintenanceConfigurationRequest& WithTableBucketARN(const char* value) { SetTableBucketARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the table.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline PutTableMaintenanceConfigurationRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline PutTableMaintenanceConfigurationRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline PutTableMaintenanceConfigurationRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the maintenance configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PutTableMaintenanceConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PutTableMaintenanceConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PutTableMaintenanceConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the maintenance configuration.</p>
     */
    inline const TableMaintenanceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TableMaintenanceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TableMaintenanceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline PutTableMaintenanceConfigurationRequest& WithType(const TableMaintenanceType& value) { SetType(value); return *this;}
    inline PutTableMaintenanceConfigurationRequest& WithType(TableMaintenanceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the values of the maintenance configuration for the table.</p>
     */
    inline const TableMaintenanceConfigurationValue& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const TableMaintenanceConfigurationValue& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(TableMaintenanceConfigurationValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline PutTableMaintenanceConfigurationRequest& WithValue(const TableMaintenanceConfigurationValue& value) { SetValue(value); return *this;}
    inline PutTableMaintenanceConfigurationRequest& WithValue(TableMaintenanceConfigurationValue&& value) { SetValue(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableBucketARN;
    bool m_tableBucketARNHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TableMaintenanceType m_type;
    bool m_typeHasBeenSet = false;

    TableMaintenanceConfigurationValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
