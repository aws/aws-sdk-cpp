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
  class GetComputeNodeGroupResult
  {
  public:
    AWS_PCS_API GetComputeNodeGroupResult();
    AWS_PCS_API GetComputeNodeGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCS_API GetComputeNodeGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ComputeNodeGroup& GetComputeNodeGroup() const{ return m_computeNodeGroup; }
    inline void SetComputeNodeGroup(const ComputeNodeGroup& value) { m_computeNodeGroup = value; }
    inline void SetComputeNodeGroup(ComputeNodeGroup&& value) { m_computeNodeGroup = std::move(value); }
    inline GetComputeNodeGroupResult& WithComputeNodeGroup(const ComputeNodeGroup& value) { SetComputeNodeGroup(value); return *this;}
    inline GetComputeNodeGroupResult& WithComputeNodeGroup(ComputeNodeGroup&& value) { SetComputeNodeGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetComputeNodeGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetComputeNodeGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetComputeNodeGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ComputeNodeGroup m_computeNodeGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
