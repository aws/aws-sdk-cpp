/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Schemas
{
namespace Model
{
  class UpdateSchemaResult
  {
  public:
    AWS_SCHEMAS_API UpdateSchemaResult();
    AWS_SCHEMAS_API UpdateSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API UpdateSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of the schema.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the schema.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the schema.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the schema.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the schema.</p>
     */
    inline UpdateSchemaResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the schema.</p>
     */
    inline UpdateSchemaResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the schema.</p>
     */
    inline UpdateSchemaResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The date and time that schema was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date and time that schema was modified.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModified = value; }

    /**
     * <p>The date and time that schema was modified.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModified = std::move(value); }

    /**
     * <p>The date and time that schema was modified.</p>
     */
    inline UpdateSchemaResult& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date and time that schema was modified.</p>
     */
    inline UpdateSchemaResult& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


    /**
     * <p>The ARN of the schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The ARN of the schema.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArn = value; }

    /**
     * <p>The ARN of the schema.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArn = std::move(value); }

    /**
     * <p>The ARN of the schema.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArn.assign(value); }

    /**
     * <p>The ARN of the schema.</p>
     */
    inline UpdateSchemaResult& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The ARN of the schema.</p>
     */
    inline UpdateSchemaResult& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the schema.</p>
     */
    inline UpdateSchemaResult& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>The name of the schema.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaName = value; }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaName = std::move(value); }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaName.assign(value); }

    /**
     * <p>The name of the schema.</p>
     */
    inline UpdateSchemaResult& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline UpdateSchemaResult& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline UpdateSchemaResult& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    /**
     * <p>The version number of the schema</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The version number of the schema</p>
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersion = value; }

    /**
     * <p>The version number of the schema</p>
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersion = std::move(value); }

    /**
     * <p>The version number of the schema</p>
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersion.assign(value); }

    /**
     * <p>The version number of the schema</p>
     */
    inline UpdateSchemaResult& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The version number of the schema</p>
     */
    inline UpdateSchemaResult& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the schema</p>
     */
    inline UpdateSchemaResult& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    
    inline UpdateSchemaResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline UpdateSchemaResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline UpdateSchemaResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    
    inline UpdateSchemaResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline UpdateSchemaResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline UpdateSchemaResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline UpdateSchemaResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline UpdateSchemaResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline UpdateSchemaResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The type of the schema.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the schema.</p>
     */
    inline void SetType(const Aws::String& value) { m_type = value; }

    /**
     * <p>The type of the schema.</p>
     */
    inline void SetType(Aws::String&& value) { m_type = std::move(value); }

    /**
     * <p>The type of the schema.</p>
     */
    inline void SetType(const char* value) { m_type.assign(value); }

    /**
     * <p>The type of the schema.</p>
     */
    inline UpdateSchemaResult& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the schema.</p>
     */
    inline UpdateSchemaResult& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the schema.</p>
     */
    inline UpdateSchemaResult& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The date the schema version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetVersionCreatedDate() const{ return m_versionCreatedDate; }

    /**
     * <p>The date the schema version was created.</p>
     */
    inline void SetVersionCreatedDate(const Aws::Utils::DateTime& value) { m_versionCreatedDate = value; }

    /**
     * <p>The date the schema version was created.</p>
     */
    inline void SetVersionCreatedDate(Aws::Utils::DateTime&& value) { m_versionCreatedDate = std::move(value); }

    /**
     * <p>The date the schema version was created.</p>
     */
    inline UpdateSchemaResult& WithVersionCreatedDate(const Aws::Utils::DateTime& value) { SetVersionCreatedDate(value); return *this;}

    /**
     * <p>The date the schema version was created.</p>
     */
    inline UpdateSchemaResult& WithVersionCreatedDate(Aws::Utils::DateTime&& value) { SetVersionCreatedDate(std::move(value)); return *this;}

  private:

    Aws::String m_description;

    Aws::Utils::DateTime m_lastModified;

    Aws::String m_schemaArn;

    Aws::String m_schemaName;

    Aws::String m_schemaVersion;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_type;

    Aws::Utils::DateTime m_versionCreatedDate;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
