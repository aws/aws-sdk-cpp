/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MemoryDB
{
namespace Model
{
  class ListAllowedNodeTypeUpdatesResult
  {
  public:
    AWS_MEMORYDB_API ListAllowedNodeTypeUpdatesResult() = default;
    AWS_MEMORYDB_API ListAllowedNodeTypeUpdatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API ListAllowedNodeTypeUpdatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list node types which you can use to scale up your cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScaleUpNodeTypes() const { return m_scaleUpNodeTypes; }
    template<typename ScaleUpNodeTypesT = Aws::Vector<Aws::String>>
    void SetScaleUpNodeTypes(ScaleUpNodeTypesT&& value) { m_scaleUpNodeTypesHasBeenSet = true; m_scaleUpNodeTypes = std::forward<ScaleUpNodeTypesT>(value); }
    template<typename ScaleUpNodeTypesT = Aws::Vector<Aws::String>>
    ListAllowedNodeTypeUpdatesResult& WithScaleUpNodeTypes(ScaleUpNodeTypesT&& value) { SetScaleUpNodeTypes(std::forward<ScaleUpNodeTypesT>(value)); return *this;}
    template<typename ScaleUpNodeTypesT = Aws::String>
    ListAllowedNodeTypeUpdatesResult& AddScaleUpNodeTypes(ScaleUpNodeTypesT&& value) { m_scaleUpNodeTypesHasBeenSet = true; m_scaleUpNodeTypes.emplace_back(std::forward<ScaleUpNodeTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list node types which you can use to scale down your cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScaleDownNodeTypes() const { return m_scaleDownNodeTypes; }
    template<typename ScaleDownNodeTypesT = Aws::Vector<Aws::String>>
    void SetScaleDownNodeTypes(ScaleDownNodeTypesT&& value) { m_scaleDownNodeTypesHasBeenSet = true; m_scaleDownNodeTypes = std::forward<ScaleDownNodeTypesT>(value); }
    template<typename ScaleDownNodeTypesT = Aws::Vector<Aws::String>>
    ListAllowedNodeTypeUpdatesResult& WithScaleDownNodeTypes(ScaleDownNodeTypesT&& value) { SetScaleDownNodeTypes(std::forward<ScaleDownNodeTypesT>(value)); return *this;}
    template<typename ScaleDownNodeTypesT = Aws::String>
    ListAllowedNodeTypeUpdatesResult& AddScaleDownNodeTypes(ScaleDownNodeTypesT&& value) { m_scaleDownNodeTypesHasBeenSet = true; m_scaleDownNodeTypes.emplace_back(std::forward<ScaleDownNodeTypesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAllowedNodeTypeUpdatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_scaleUpNodeTypes;
    bool m_scaleUpNodeTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_scaleDownNodeTypes;
    bool m_scaleDownNodeTypesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
