﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/schemas/model/SchemaVersionSummary.h>
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
  class ListSchemaVersionsResult
  {
  public:
    AWS_SCHEMAS_API ListSchemaVersionsResult();
    AWS_SCHEMAS_API ListSchemaVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API ListSchemaVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSchemaVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSchemaVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSchemaVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of schema version summaries.</p>
     */
    inline const Aws::Vector<SchemaVersionSummary>& GetSchemaVersions() const{ return m_schemaVersions; }
    inline void SetSchemaVersions(const Aws::Vector<SchemaVersionSummary>& value) { m_schemaVersions = value; }
    inline void SetSchemaVersions(Aws::Vector<SchemaVersionSummary>&& value) { m_schemaVersions = std::move(value); }
    inline ListSchemaVersionsResult& WithSchemaVersions(const Aws::Vector<SchemaVersionSummary>& value) { SetSchemaVersions(value); return *this;}
    inline ListSchemaVersionsResult& WithSchemaVersions(Aws::Vector<SchemaVersionSummary>&& value) { SetSchemaVersions(std::move(value)); return *this;}
    inline ListSchemaVersionsResult& AddSchemaVersions(const SchemaVersionSummary& value) { m_schemaVersions.push_back(value); return *this; }
    inline ListSchemaVersionsResult& AddSchemaVersions(SchemaVersionSummary&& value) { m_schemaVersions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSchemaVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSchemaVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSchemaVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<SchemaVersionSummary> m_schemaVersions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
