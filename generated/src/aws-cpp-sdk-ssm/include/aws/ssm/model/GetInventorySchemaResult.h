/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InventoryItemSchema.h>
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
namespace SSM
{
namespace Model
{
  class GetInventorySchemaResult
  {
  public:
    AWS_SSM_API GetInventorySchemaResult() = default;
    AWS_SSM_API GetInventorySchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetInventorySchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Inventory schemas returned by the request.</p>
     */
    inline const Aws::Vector<InventoryItemSchema>& GetSchemas() const { return m_schemas; }
    template<typename SchemasT = Aws::Vector<InventoryItemSchema>>
    void SetSchemas(SchemasT&& value) { m_schemasHasBeenSet = true; m_schemas = std::forward<SchemasT>(value); }
    template<typename SchemasT = Aws::Vector<InventoryItemSchema>>
    GetInventorySchemaResult& WithSchemas(SchemasT&& value) { SetSchemas(std::forward<SchemasT>(value)); return *this;}
    template<typename SchemasT = InventoryItemSchema>
    GetInventorySchemaResult& AddSchemas(SchemasT&& value) { m_schemasHasBeenSet = true; m_schemas.emplace_back(std::forward<SchemasT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetInventorySchemaResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInventorySchemaResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InventoryItemSchema> m_schemas;
    bool m_schemasHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
