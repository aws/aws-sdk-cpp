/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/schemas/model/Type.h>
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
namespace Schemas
{
namespace Model
{

  class SchemaVersionSummary
  {
  public:
    AWS_SCHEMAS_API SchemaVersionSummary();
    AWS_SCHEMAS_API SchemaVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEMAS_API SchemaVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEMAS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the schema version.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The ARN of the schema version.</p>
     */
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }

    /**
     * <p>The ARN of the schema version.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The ARN of the schema version.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    /**
     * <p>The ARN of the schema version.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The ARN of the schema version.</p>
     */
    inline SchemaVersionSummary& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The ARN of the schema version.</p>
     */
    inline SchemaVersionSummary& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the schema version.</p>
     */
    inline SchemaVersionSummary& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>The name of the schema.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The name of the schema.</p>
     */
    inline bool SchemaNameHasBeenSet() const { return m_schemaNameHasBeenSet; }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaNameHasBeenSet = true; m_schemaName = value; }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaNameHasBeenSet = true; m_schemaName = std::move(value); }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaNameHasBeenSet = true; m_schemaName.assign(value); }

    /**
     * <p>The name of the schema.</p>
     */
    inline SchemaVersionSummary& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline SchemaVersionSummary& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline SchemaVersionSummary& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    /**
     * <p>The version number of the schema.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The version number of the schema.</p>
     */
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }

    /**
     * <p>The version number of the schema.</p>
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    /**
     * <p>The version number of the schema.</p>
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }

    /**
     * <p>The version number of the schema.</p>
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }

    /**
     * <p>The version number of the schema.</p>
     */
    inline SchemaVersionSummary& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The version number of the schema.</p>
     */
    inline SchemaVersionSummary& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the schema.</p>
     */
    inline SchemaVersionSummary& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}


    /**
     * <p>The type of schema.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>The type of schema.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of schema.</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of schema.</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of schema.</p>
     */
    inline SchemaVersionSummary& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>The type of schema.</p>
     */
    inline SchemaVersionSummary& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
