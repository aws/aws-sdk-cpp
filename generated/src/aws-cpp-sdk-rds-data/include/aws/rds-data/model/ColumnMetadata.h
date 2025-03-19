/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
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
namespace RDSDataService
{
namespace Model
{

  /**
   * <p>Contains the metadata for a column.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/ColumnMetadata">AWS
   * API Reference</a></p>
   */
  class ColumnMetadata
  {
  public:
    AWS_RDSDATASERVICE_API ColumnMetadata() = default;
    AWS_RDSDATASERVICE_API ColumnMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API ColumnMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the column.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ColumnMetadata& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the column.</p>
     */
    inline int GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(int value) { m_typeHasBeenSet = true; m_type = value; }
    inline ColumnMetadata& WithType(int value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database-specific data type of the column.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    ColumnMetadata& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label for the column.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    ColumnMetadata& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema that owns the table that includes the column.</p>
     */
    inline const Aws::String& GetSchemaName() const { return m_schemaName; }
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }
    template<typename SchemaNameT = Aws::String>
    void SetSchemaName(SchemaNameT&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::forward<SchemaNameT>(value); }
    template<typename SchemaNameT = Aws::String>
    ColumnMetadata& WithSchemaName(SchemaNameT&& value) { SetSchemaName(std::forward<SchemaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the table that includes the column.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    ColumnMetadata& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether the column increments automatically.</p>
     */
    inline bool GetIsAutoIncrement() const { return m_isAutoIncrement; }
    inline bool IsAutoIncrementHasBeenSet() const { return m_isAutoIncrementHasBeenSet; }
    inline void SetIsAutoIncrement(bool value) { m_isAutoIncrementHasBeenSet = true; m_isAutoIncrement = value; }
    inline ColumnMetadata& WithIsAutoIncrement(bool value) { SetIsAutoIncrement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether an integer column is signed.</p>
     */
    inline bool GetIsSigned() const { return m_isSigned; }
    inline bool IsSignedHasBeenSet() const { return m_isSignedHasBeenSet; }
    inline void SetIsSigned(bool value) { m_isSignedHasBeenSet = true; m_isSigned = value; }
    inline ColumnMetadata& WithIsSigned(bool value) { SetIsSigned(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether the column contains currency values.</p>
     */
    inline bool GetIsCurrency() const { return m_isCurrency; }
    inline bool IsCurrencyHasBeenSet() const { return m_isCurrencyHasBeenSet; }
    inline void SetIsCurrency(bool value) { m_isCurrencyHasBeenSet = true; m_isCurrency = value; }
    inline ColumnMetadata& WithIsCurrency(bool value) { SetIsCurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether the column is case-sensitive.</p>
     */
    inline bool GetIsCaseSensitive() const { return m_isCaseSensitive; }
    inline bool IsCaseSensitiveHasBeenSet() const { return m_isCaseSensitiveHasBeenSet; }
    inline void SetIsCaseSensitive(bool value) { m_isCaseSensitiveHasBeenSet = true; m_isCaseSensitive = value; }
    inline ColumnMetadata& WithIsCaseSensitive(bool value) { SetIsCaseSensitive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether the column is nullable.</p>
     */
    inline int GetNullable() const { return m_nullable; }
    inline bool NullableHasBeenSet() const { return m_nullableHasBeenSet; }
    inline void SetNullable(int value) { m_nullableHasBeenSet = true; m_nullable = value; }
    inline ColumnMetadata& WithNullable(int value) { SetNullable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The precision value of a decimal number column.</p>
     */
    inline int GetPrecision() const { return m_precision; }
    inline bool PrecisionHasBeenSet() const { return m_precisionHasBeenSet; }
    inline void SetPrecision(int value) { m_precisionHasBeenSet = true; m_precision = value; }
    inline ColumnMetadata& WithPrecision(int value) { SetPrecision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scale value of a decimal number column.</p>
     */
    inline int GetScale() const { return m_scale; }
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }
    inline void SetScale(int value) { m_scaleHasBeenSet = true; m_scale = value; }
    inline ColumnMetadata& WithScale(int value) { SetScale(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the column.</p>
     */
    inline int GetArrayBaseColumnType() const { return m_arrayBaseColumnType; }
    inline bool ArrayBaseColumnTypeHasBeenSet() const { return m_arrayBaseColumnTypeHasBeenSet; }
    inline void SetArrayBaseColumnType(int value) { m_arrayBaseColumnTypeHasBeenSet = true; m_arrayBaseColumnType = value; }
    inline ColumnMetadata& WithArrayBaseColumnType(int value) { SetArrayBaseColumnType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_type{0};
    bool m_typeHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    bool m_isAutoIncrement{false};
    bool m_isAutoIncrementHasBeenSet = false;

    bool m_isSigned{false};
    bool m_isSignedHasBeenSet = false;

    bool m_isCurrency{false};
    bool m_isCurrencyHasBeenSet = false;

    bool m_isCaseSensitive{false};
    bool m_isCaseSensitiveHasBeenSet = false;

    int m_nullable{0};
    bool m_nullableHasBeenSet = false;

    int m_precision{0};
    bool m_precisionHasBeenSet = false;

    int m_scale{0};
    bool m_scaleHasBeenSet = false;

    int m_arrayBaseColumnType{0};
    bool m_arrayBaseColumnTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
