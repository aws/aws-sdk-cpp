/**
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
    AWS_SCHEMAS_API ListSchemaVersionsResult() = default;
    AWS_SCHEMAS_API ListSchemaVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API ListSchemaVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token that specifies the next page of results to return. To request the
     * first page, leave NextToken empty. The token will expire in 24 hours, and cannot
     * be shared with other accounts.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSchemaVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of schema version summaries.</p>
     */
    inline const Aws::Vector<SchemaVersionSummary>& GetSchemaVersions() const { return m_schemaVersions; }
    template<typename SchemaVersionsT = Aws::Vector<SchemaVersionSummary>>
    void SetSchemaVersions(SchemaVersionsT&& value) { m_schemaVersionsHasBeenSet = true; m_schemaVersions = std::forward<SchemaVersionsT>(value); }
    template<typename SchemaVersionsT = Aws::Vector<SchemaVersionSummary>>
    ListSchemaVersionsResult& WithSchemaVersions(SchemaVersionsT&& value) { SetSchemaVersions(std::forward<SchemaVersionsT>(value)); return *this;}
    template<typename SchemaVersionsT = SchemaVersionSummary>
    ListSchemaVersionsResult& AddSchemaVersions(SchemaVersionsT&& value) { m_schemaVersionsHasBeenSet = true; m_schemaVersions.emplace_back(std::forward<SchemaVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSchemaVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SchemaVersionSummary> m_schemaVersions;
    bool m_schemaVersionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
