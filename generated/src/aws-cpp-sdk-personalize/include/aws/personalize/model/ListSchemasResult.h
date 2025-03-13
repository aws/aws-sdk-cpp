/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/DatasetSchemaSummary.h>
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
namespace Personalize
{
namespace Model
{
  class ListSchemasResult
  {
  public:
    AWS_PERSONALIZE_API ListSchemasResult() = default;
    AWS_PERSONALIZE_API ListSchemasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListSchemasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of schemas.</p>
     */
    inline const Aws::Vector<DatasetSchemaSummary>& GetSchemas() const { return m_schemas; }
    template<typename SchemasT = Aws::Vector<DatasetSchemaSummary>>
    void SetSchemas(SchemasT&& value) { m_schemasHasBeenSet = true; m_schemas = std::forward<SchemasT>(value); }
    template<typename SchemasT = Aws::Vector<DatasetSchemaSummary>>
    ListSchemasResult& WithSchemas(SchemasT&& value) { SetSchemas(std::forward<SchemasT>(value)); return *this;}
    template<typename SchemasT = DatasetSchemaSummary>
    ListSchemasResult& AddSchemas(SchemasT&& value) { m_schemasHasBeenSet = true; m_schemas.emplace_back(std::forward<SchemasT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token used to get the next set of schemas (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSchemasResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSchemasResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DatasetSchemaSummary> m_schemas;
    bool m_schemasHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
