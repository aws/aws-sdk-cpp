/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ExportSchemaResult
  {
  public:
    AWS_SCHEMAS_API ExportSchemaResult();
    AWS_SCHEMAS_API ExportSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API ExportSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetContent() const{ return m_content; }

    
    inline void SetContent(const Aws::String& value) { m_content = value; }

    
    inline void SetContent(Aws::String&& value) { m_content = std::move(value); }

    
    inline void SetContent(const char* value) { m_content.assign(value); }

    
    inline ExportSchemaResult& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    
    inline ExportSchemaResult& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    
    inline ExportSchemaResult& WithContent(const char* value) { SetContent(value); return *this;}


    
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArn = value; }

    
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArn = std::move(value); }

    
    inline void SetSchemaArn(const char* value) { m_schemaArn.assign(value); }

    
    inline ExportSchemaResult& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    
    inline ExportSchemaResult& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    
    inline ExportSchemaResult& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    
    inline void SetSchemaName(const Aws::String& value) { m_schemaName = value; }

    
    inline void SetSchemaName(Aws::String&& value) { m_schemaName = std::move(value); }

    
    inline void SetSchemaName(const char* value) { m_schemaName.assign(value); }

    
    inline ExportSchemaResult& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    
    inline ExportSchemaResult& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    
    inline ExportSchemaResult& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


    
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersion = value; }

    
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersion = std::move(value); }

    
    inline void SetSchemaVersion(const char* value) { m_schemaVersion.assign(value); }

    
    inline ExportSchemaResult& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    
    inline ExportSchemaResult& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    
    inline ExportSchemaResult& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}


    
    inline const Aws::String& GetType() const{ return m_type; }

    
    inline void SetType(const Aws::String& value) { m_type = value; }

    
    inline void SetType(Aws::String&& value) { m_type = std::move(value); }

    
    inline void SetType(const char* value) { m_type.assign(value); }

    
    inline ExportSchemaResult& WithType(const Aws::String& value) { SetType(value); return *this;}

    
    inline ExportSchemaResult& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    
    inline ExportSchemaResult& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_content;

    Aws::String m_schemaArn;

    Aws::String m_schemaName;

    Aws::String m_schemaVersion;

    Aws::String m_type;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
