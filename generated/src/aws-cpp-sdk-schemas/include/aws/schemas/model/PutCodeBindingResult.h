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


    ///@{
    /**
     * <p>The time and date that the code binding was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline PutCodeBindingResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline PutCodeBindingResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that code bindings were modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModified = std::move(value); }
    inline PutCodeBindingResult& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline PutCodeBindingResult& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the schema.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersion = value; }
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersion = std::move(value); }
    inline void SetSchemaVersion(const char* value) { m_schemaVersion.assign(value); }
    inline PutCodeBindingResult& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}
    inline PutCodeBindingResult& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}
    inline PutCodeBindingResult& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of code binding generation.</p>
     */
    inline const CodeGenerationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const CodeGenerationStatus& value) { m_status = value; }
    inline void SetStatus(CodeGenerationStatus&& value) { m_status = std::move(value); }
    inline PutCodeBindingResult& WithStatus(const CodeGenerationStatus& value) { SetStatus(value); return *this;}
    inline PutCodeBindingResult& WithStatus(CodeGenerationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutCodeBindingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutCodeBindingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutCodeBindingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_lastModified;

    Aws::String m_schemaVersion;

    CodeGenerationStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
