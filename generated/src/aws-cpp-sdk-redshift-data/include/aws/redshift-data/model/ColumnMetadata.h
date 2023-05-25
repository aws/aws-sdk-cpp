/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-data/RedshiftDataAPIService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace RedshiftDataAPIService
{
namespace Model
{

  /**
   * <p>The properties (metadata) of a column. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-data-2019-12-20/ColumnMetadata">AWS
   * API Reference</a></p>
   */
  class ColumnMetadata
  {
  public:
    AWS_REDSHIFTDATAAPISERVICE_API ColumnMetadata();
    AWS_REDSHIFTDATAAPISERVICE_API ColumnMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTDATAAPISERVICE_API ColumnMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REDSHIFTDATAAPISERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The default value of the column. </p>
     */
    inline const Aws::String& GetColumnDefault() const{ return m_columnDefault; }

    /**
     * <p>The default value of the column. </p>
     */
    inline bool ColumnDefaultHasBeenSet() const { return m_columnDefaultHasBeenSet; }

    /**
     * <p>The default value of the column. </p>
     */
    inline void SetColumnDefault(const Aws::String& value) { m_columnDefaultHasBeenSet = true; m_columnDefault = value; }

    /**
     * <p>The default value of the column. </p>
     */
    inline void SetColumnDefault(Aws::String&& value) { m_columnDefaultHasBeenSet = true; m_columnDefault = std::move(value); }

    /**
     * <p>The default value of the column. </p>
     */
    inline void SetColumnDefault(const char* value) { m_columnDefaultHasBeenSet = true; m_columnDefault.assign(value); }

    /**
     * <p>The default value of the column. </p>
     */
    inline ColumnMetadata& WithColumnDefault(const Aws::String& value) { SetColumnDefault(value); return *this;}

    /**
     * <p>The default value of the column. </p>
     */
    inline ColumnMetadata& WithColumnDefault(Aws::String&& value) { SetColumnDefault(std::move(value)); return *this;}

    /**
     * <p>The default value of the column. </p>
     */
    inline ColumnMetadata& WithColumnDefault(const char* value) { SetColumnDefault(value); return *this;}


    /**
     * <p>A value that indicates whether the column is case-sensitive. </p>
     */
    inline bool GetIsCaseSensitive() const{ return m_isCaseSensitive; }

    /**
     * <p>A value that indicates whether the column is case-sensitive. </p>
     */
    inline bool IsCaseSensitiveHasBeenSet() const { return m_isCaseSensitiveHasBeenSet; }

    /**
     * <p>A value that indicates whether the column is case-sensitive. </p>
     */
    inline void SetIsCaseSensitive(bool value) { m_isCaseSensitiveHasBeenSet = true; m_isCaseSensitive = value; }

    /**
     * <p>A value that indicates whether the column is case-sensitive. </p>
     */
    inline ColumnMetadata& WithIsCaseSensitive(bool value) { SetIsCaseSensitive(value); return *this;}


    /**
     * <p>A value that indicates whether the column contains currency values.</p>
     */
    inline bool GetIsCurrency() const{ return m_isCurrency; }

    /**
     * <p>A value that indicates whether the column contains currency values.</p>
     */
    inline bool IsCurrencyHasBeenSet() const { return m_isCurrencyHasBeenSet; }

    /**
     * <p>A value that indicates whether the column contains currency values.</p>
     */
    inline void SetIsCurrency(bool value) { m_isCurrencyHasBeenSet = true; m_isCurrency = value; }

    /**
     * <p>A value that indicates whether the column contains currency values.</p>
     */
    inline ColumnMetadata& WithIsCurrency(bool value) { SetIsCurrency(value); return *this;}


    /**
     * <p>A value that indicates whether an integer column is signed.</p>
     */
    inline bool GetIsSigned() const{ return m_isSigned; }

    /**
     * <p>A value that indicates whether an integer column is signed.</p>
     */
    inline bool IsSignedHasBeenSet() const { return m_isSignedHasBeenSet; }

    /**
     * <p>A value that indicates whether an integer column is signed.</p>
     */
    inline void SetIsSigned(bool value) { m_isSignedHasBeenSet = true; m_isSigned = value; }

    /**
     * <p>A value that indicates whether an integer column is signed.</p>
     */
    inline ColumnMetadata& WithIsSigned(bool value) { SetIsSigned(value); return *this;}


    /**
     * <p>The label for the column. </p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>The label for the column. </p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>The label for the column. </p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>The label for the column. </p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>The label for the column. </p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>The label for the column. </p>
     */
    inline ColumnMetadata& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>The label for the column. </p>
     */
    inline ColumnMetadata& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>The label for the column. </p>
     */
    inline ColumnMetadata& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>The length of the column.</p>
     */
    inline int GetLength() const{ return m_length; }

    /**
     * <p>The length of the column.</p>
     */
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }

    /**
     * <p>The length of the column.</p>
     */
    inline void SetLength(int value) { m_lengthHasBeenSet = true; m_length = value; }

    /**
     * <p>The length of the column.</p>
     */
    inline ColumnMetadata& WithLength(int value) { SetLength(value); return *this;}


    /**
     * <p>The name of the column. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the column. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the column. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the column. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the column. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the column. </p>
     */
    inline ColumnMetadata& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the column. </p>
     */
    inline ColumnMetadata& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the column. </p>
     */
    inline ColumnMetadata& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A value that indicates whether the column is nullable. </p>
     */
    inline int GetNullable() const{ return m_nullable; }

    /**
     * <p>A value that indicates whether the column is nullable. </p>
     */
    inline bool NullableHasBeenSet() const { return m_nullableHasBeenSet; }

    /**
     * <p>A value that indicates whether the column is nullable. </p>
     */
    inline void SetNullable(int value) { m_nullableHasBeenSet = true; m_nullable = value; }

    /**
     * <p>A value that indicates whether the column is nullable. </p>
     */
    inline ColumnMetadata& WithNullable(int value) { SetNullable(value); return *this;}


    /**
     * <p>The precision value of a decimal number column. </p>
     */
    inline int GetPrecision() const{ return m_precision; }

    /**
     * <p>The precision value of a decimal number column. </p>
     */
    inline bool PrecisionHasBeenSet() const { return m_precisionHasBeenSet; }

    /**
     * <p>The precision value of a decimal number column. </p>
     */
    inline void SetPrecision(int value) { m_precisionHasBeenSet = true; m_precision = value; }

    /**
     * <p>The precision value of a decimal number column. </p>
     */
    inline ColumnMetadata& WithPrecision(int value) { SetPrecision(value); return *this;}


    /**
     * <p>The scale value of a decimal number column. </p>
     */
    inline int GetScale() const{ return m_scale; }

    /**
     * <p>The scale value of a decimal number column. </p>
     */
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }

    /**
     * <p>The scale value of a decimal number column. </p>
     */
    inline void SetScale(int value) { m_scaleHasBeenSet = true; m_scale = value; }

    /**
     * <p>The scale value of a decimal number column. </p>
     */
    inline ColumnMetadata& WithScale(int value) { SetScale(value); return *this;}


    /**
     * <p>The name of the schema that contains the table that includes the column.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The name of the schema that contains the table that includes the column.</p>
     */
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }

    /**
     * <p>The name of the schema that contains the table that includes the column.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    /**
     * <p>The name of the schema that contains the table that includes the column.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    /**
     * <p>The name of the schema that contains the table that includes the column.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    /**
     * <p>The name of the schema that contains the table that includes the column.</p>
     */
    inline ColumnMetadata& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The name of the schema that contains the table that includes the column.</p>
     */
    inline ColumnMetadata& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema that contains the table that includes the column.</p>
     */
    inline ColumnMetadata& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    /**
     * <p>The name of the table that includes the column. </p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the table that includes the column. </p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the table that includes the column. </p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the table that includes the column. </p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the table that includes the column. </p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the table that includes the column. </p>
     */
    inline ColumnMetadata& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the table that includes the column. </p>
     */
    inline ColumnMetadata& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the table that includes the column. </p>
     */
    inline ColumnMetadata& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The database-specific data type of the column. </p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }

    /**
     * <p>The database-specific data type of the column. </p>
     */
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }

    /**
     * <p>The database-specific data type of the column. </p>
     */
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }

    /**
     * <p>The database-specific data type of the column. </p>
     */
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }

    /**
     * <p>The database-specific data type of the column. </p>
     */
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }

    /**
     * <p>The database-specific data type of the column. </p>
     */
    inline ColumnMetadata& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}

    /**
     * <p>The database-specific data type of the column. </p>
     */
    inline ColumnMetadata& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}

    /**
     * <p>The database-specific data type of the column. </p>
     */
    inline ColumnMetadata& WithTypeName(const char* value) { SetTypeName(value); return *this;}

  private:

    Aws::String m_columnDefault;
    bool m_columnDefaultHasBeenSet = false;

    bool m_isCaseSensitive;
    bool m_isCaseSensitiveHasBeenSet = false;

    bool m_isCurrency;
    bool m_isCurrencyHasBeenSet = false;

    bool m_isSigned;
    bool m_isSignedHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    int m_length;
    bool m_lengthHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_nullable;
    bool m_nullableHasBeenSet = false;

    int m_precision;
    bool m_precisionHasBeenSet = false;

    int m_scale;
    bool m_scaleHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
