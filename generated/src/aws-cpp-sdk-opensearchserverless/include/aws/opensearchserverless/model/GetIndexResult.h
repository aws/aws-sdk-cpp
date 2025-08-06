/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/Document.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class GetIndexResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API GetIndexResult() = default;
    AWS_OPENSEARCHSERVERLESS_API GetIndexResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API GetIndexResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The JSON schema definition for the index, including field mappings and
     * settings.</p>
     */
    inline Aws::Utils::DocumentView GetIndexSchema() const { return m_indexSchema; }
    template<typename IndexSchemaT = Aws::Utils::Document>
    void SetIndexSchema(IndexSchemaT&& value) { m_indexSchemaHasBeenSet = true; m_indexSchema = std::forward<IndexSchemaT>(value); }
    template<typename IndexSchemaT = Aws::Utils::Document>
    GetIndexResult& WithIndexSchema(IndexSchemaT&& value) { SetIndexSchema(std::forward<IndexSchemaT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIndexResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_indexSchema;
    bool m_indexSchemaHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
