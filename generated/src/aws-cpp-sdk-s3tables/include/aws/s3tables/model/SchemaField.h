/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
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
namespace S3Tables
{
namespace Model
{

  /**
   * <p>Contains details about a schema field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/SchemaField">AWS
   * API Reference</a></p>
   */
  class SchemaField
  {
  public:
    AWS_S3TABLES_API SchemaField();
    AWS_S3TABLES_API SchemaField(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API SchemaField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the field.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SchemaField& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SchemaField& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SchemaField& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field type. S3 Tables supports all Apache Iceberg primitive types. For
     * more information, see the <a
     * href="https://iceberg.apache.org/spec/#primitive-types">Apache Iceberg
     * documentation</a>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline SchemaField& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline SchemaField& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline SchemaField& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that specifies whether values are required for each row in
     * this field. By default, this is <code>false</code> and null values are allowed
     * in the field. If this is <code>true</code> the field does not allow null
     * values.</p>
     */
    inline bool GetRequired() const{ return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }
    inline SchemaField& WithRequired(bool value) { SetRequired(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    bool m_required;
    bool m_requiredHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
