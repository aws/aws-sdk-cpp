﻿/**
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
  class DescribeSchemaResult
  {
  public:
    AWS_SCHEMAS_API DescribeSchemaResult();
    AWS_SCHEMAS_API DescribeSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API DescribeSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The source of the schema definition.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline void SetContent(const Aws::String& value) { m_content = value; }
    inline void SetContent(Aws::String&& value) { m_content = std::move(value); }
    inline void SetContent(const char* value) { m_content.assign(value); }
    inline DescribeSchemaResult& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline DescribeSchemaResult& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline DescribeSchemaResult& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the schema.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeSchemaResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeSchemaResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeSchemaResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that schema was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModified = std::move(value); }
    inline DescribeSchemaResult& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline DescribeSchemaResult& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the schema.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArn = value; }
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArn = std::move(value); }
    inline void SetSchemaArn(const char* value) { m_schemaArn.assign(value); }
    inline DescribeSchemaResult& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}
    inline DescribeSchemaResult& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}
    inline DescribeSchemaResult& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the schema.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }
    inline void SetSchemaName(const Aws::String& value) { m_schemaName = value; }
    inline void SetSchemaName(Aws::String&& value) { m_schemaName = std::move(value); }
    inline void SetSchemaName(const char* value) { m_schemaName.assign(value); }
    inline DescribeSchemaResult& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}
    inline DescribeSchemaResult& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}
    inline DescribeSchemaResult& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the schema</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersion = value; }
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersion = std::move(value); }
    inline void SetSchemaVersion(const char* value) { m_schemaVersion.assign(value); }
    inline DescribeSchemaResult& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}
    inline DescribeSchemaResult& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}
    inline DescribeSchemaResult& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags associated with the resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline DescribeSchemaResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline DescribeSchemaResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeSchemaResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline DescribeSchemaResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeSchemaResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeSchemaResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeSchemaResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline DescribeSchemaResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline DescribeSchemaResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the schema.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline void SetType(const Aws::String& value) { m_type = value; }
    inline void SetType(Aws::String&& value) { m_type = std::move(value); }
    inline void SetType(const char* value) { m_type.assign(value); }
    inline DescribeSchemaResult& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline DescribeSchemaResult& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline DescribeSchemaResult& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the schema version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetVersionCreatedDate() const{ return m_versionCreatedDate; }
    inline void SetVersionCreatedDate(const Aws::Utils::DateTime& value) { m_versionCreatedDate = value; }
    inline void SetVersionCreatedDate(Aws::Utils::DateTime&& value) { m_versionCreatedDate = std::move(value); }
    inline DescribeSchemaResult& WithVersionCreatedDate(const Aws::Utils::DateTime& value) { SetVersionCreatedDate(value); return *this;}
    inline DescribeSchemaResult& WithVersionCreatedDate(Aws::Utils::DateTime&& value) { SetVersionCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeSchemaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeSchemaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeSchemaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_content;

    Aws::String m_description;

    Aws::Utils::DateTime m_lastModified;

    Aws::String m_schemaArn;

    Aws::String m_schemaName;

    Aws::String m_schemaVersion;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_type;

    Aws::Utils::DateTime m_versionCreatedDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
