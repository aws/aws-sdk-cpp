/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/pcs/model/ComputeNodeGroup.h>
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
namespace PCS
{
namespace Model
{
  class UpdateComputeNodeGroupResult
  {
  public:
    AWS_PCS_API UpdateComputeNodeGroupResult() = default;
    AWS_PCS_API UpdateComputeNodeGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCS_API UpdateComputeNodeGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ComputeNodeGroup& GetComputeNodeGroup() const { return m_computeNodeGroup; }
    template<typename ComputeNodeGroupT = ComputeNodeGroup>
    void SetComputeNodeGroup(ComputeNodeGroupT&& value) { m_computeNodeGroupHasBeenSet = true; m_computeNodeGroup = std::forward<ComputeNodeGroupT>(value); }
    template<typename ComputeNodeGroupT = ComputeNodeGroup>
    UpdateComputeNodeGroupResult& WithComputeNodeGroup(ComputeNodeGroupT&& value) { SetComputeNodeGroup(std::forward<ComputeNodeGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateComputeNodeGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ComputeNodeGroup m_computeNodeGroup;
    bool m_computeNodeGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
