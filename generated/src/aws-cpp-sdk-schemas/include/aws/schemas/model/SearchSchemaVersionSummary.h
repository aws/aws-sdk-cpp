/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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

  class SearchSchemaVersionSummary
  {
  public:
    AWS_SCHEMAS_API SearchSchemaVersionSummary();
    AWS_SCHEMAS_API SearchSchemaVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEMAS_API SearchSchemaVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEMAS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date the schema version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline SearchSchemaVersionSummary& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline SearchSchemaVersionSummary& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the schema</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }
    inline SearchSchemaVersionSummary& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}
    inline SearchSchemaVersionSummary& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}
    inline SearchSchemaVersionSummary& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of schema.</p>
     */
    inline const Type& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline SearchSchemaVersionSummary& WithType(const Type& value) { SetType(value); return *this;}
    inline SearchSchemaVersionSummary& WithType(Type&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Type m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
