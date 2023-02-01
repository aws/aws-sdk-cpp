/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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

  /**
   * <p>A summary of schema details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/SchemaSummary">AWS
   * API Reference</a></p>
   */
  class SchemaSummary
  {
  public:
    AWS_SCHEMAS_API SchemaSummary();
    AWS_SCHEMAS_API SchemaSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEMAS_API SchemaSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEMAS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time that schema was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date and time that schema was modified.</p>
     */
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }

    /**
     * <p>The date and time that schema was modified.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>The date and time that schema was modified.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }

    /**
     * <p>The date and time that schema was modified.</p>
     */
    inline SchemaSummary& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date and time that schema was modified.</p>
     */
    inline SchemaSummary& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


    /**
     * <p>The ARN of the schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The ARN of the schema.</p>
     */
    inline bool SchemaArnHasBeenSet() const { return m_schemaArnHasBeenSet; }

    /**
     * <p>The ARN of the schema.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArnHasBeenSet = true; m_schemaArn = value; }

    /**
     * <p>The ARN of the schema.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArnHasBeenSet = true; m_schemaArn = std::move(value); }

    /**
     * <p>The ARN of the schema.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArnHasBeenSet = true; m_schemaArn.assign(value); }

    /**
     * <p>The ARN of the schema.</p>
     */
    inline SchemaSummary& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The ARN of the schema.</p>
     */
    inline SchemaSummary& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the schema.</p>
     */
    inline SchemaSummary& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


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
    inline SchemaSummary& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline SchemaSummary& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline SchemaSummary& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    /**
     * <p>Tags associated with the schema.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline SchemaSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline SchemaSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline SchemaSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline SchemaSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline SchemaSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline SchemaSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline SchemaSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline SchemaSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the schema.</p>
     */
    inline SchemaSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The number of versions available for the schema.</p>
     */
    inline long long GetVersionCount() const{ return m_versionCount; }

    /**
     * <p>The number of versions available for the schema.</p>
     */
    inline bool VersionCountHasBeenSet() const { return m_versionCountHasBeenSet; }

    /**
     * <p>The number of versions available for the schema.</p>
     */
    inline void SetVersionCount(long long value) { m_versionCountHasBeenSet = true; m_versionCount = value; }

    /**
     * <p>The number of versions available for the schema.</p>
     */
    inline SchemaSummary& WithVersionCount(long long value) { SetVersionCount(value); return *this;}

  private:

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_schemaArn;
    bool m_schemaArnHasBeenSet = false;

    Aws::String m_schemaName;
    bool m_schemaNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    long long m_versionCount;
    bool m_versionCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
