/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/schemas/model/CodeGenerationStatus.h>
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
  class PutCodeBindingResult
  {
  public:
    AWS_SCHEMAS_API PutCodeBindingResult();
    AWS_SCHEMAS_API PutCodeBindingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API PutCodeBindingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The time and date that the code binding was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The time and date that the code binding was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The time and date that the code binding was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The time and date that the code binding was created.</p>
     */
    inline PutCodeBindingResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The time and date that the code binding was created.</p>
     */
    inline PutCodeBindingResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date and time that code bindings were modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date and time that code bindings were modified.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModified = value; }

    /**
     * <p>The date and time that code bindings were modified.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModified = std::move(value); }

    /**
     * <p>The date and time that code bindings were modified.</p>
     */
    inline PutCodeBindingResult& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date and time that code bindings were modified.</p>
     */
    inline PutCodeBindingResult& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


    /**
     * <p>The version number of the schema.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The version number of the schema.</p>
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersion = value; }

    /**
     * <p>The version number of the schema.</p>
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersion = std::move(value); }

    /**
     * <p>The version number of the schema.</p>
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersion.assign(value); }

    /**
     * <p>The version number of the schema.</p>
     */
    inline PutCodeBindingResult& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The version number of the schema.</p>
     */
    inline PutCodeBindingResult& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the schema.</p>
     */
    inline PutCodeBindingResult& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}


    /**
     * <p>The current status of code binding generation.</p>
     */
    inline const CodeGenerationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of code binding generation.</p>
     */
    inline void SetStatus(const CodeGenerationStatus& value) { m_status = value; }

    /**
     * <p>The current status of code binding generation.</p>
     */
    inline void SetStatus(CodeGenerationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of code binding generation.</p>
     */
    inline PutCodeBindingResult& WithStatus(const CodeGenerationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of code binding generation.</p>
     */
    inline PutCodeBindingResult& WithStatus(CodeGenerationStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModified;

    Aws::String m_schemaVersion;

    CodeGenerationStatus m_status;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
