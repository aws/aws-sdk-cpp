/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/ParameterGroup.h>
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
  class ResetParameterGroupResult
  {
  public:
    AWS_MEMORYDB_API ResetParameterGroupResult() = default;
    AWS_MEMORYDB_API ResetParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API ResetParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The parameter group being reset.</p>
     */
    inline const ParameterGroup& GetParameterGroup() const { return m_parameterGroup; }
    template<typename ParameterGroupT = ParameterGroup>
    void SetParameterGroup(ParameterGroupT&& value) { m_parameterGroupHasBeenSet = true; m_parameterGroup = std::forward<ParameterGroupT>(value); }
    template<typename ParameterGroupT = ParameterGroup>
    ResetParameterGroupResult& WithParameterGroup(ParameterGroupT&& value) { SetParameterGroup(std::forward<ParameterGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ResetParameterGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ParameterGroup m_parameterGroup;
    bool m_parameterGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
