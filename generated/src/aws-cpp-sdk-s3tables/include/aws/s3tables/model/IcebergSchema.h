/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3tables/model/SchemaField.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace S3Tables
{
namespace Model
{

  /**
   * <p>Contains details about the schema for an Iceberg table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/IcebergSchema">AWS
   * API Reference</a></p>
   */
  class IcebergSchema
  {
  public:
    AWS_S3TABLES_API IcebergSchema();
    AWS_S3TABLES_API IcebergSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API IcebergSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schema fields for the table</p>
     */
    inline const Aws::Vector<SchemaField>& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::Vector<SchemaField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::Vector<SchemaField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline IcebergSchema& WithFields(const Aws::Vector<SchemaField>& value) { SetFields(value); return *this;}
    inline IcebergSchema& WithFields(Aws::Vector<SchemaField>&& value) { SetFields(std::move(value)); return *this;}
    inline IcebergSchema& AddFields(const SchemaField& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }
    inline IcebergSchema& AddFields(SchemaField&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SchemaField> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
