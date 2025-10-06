/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/MultiRegionParameter.h>
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
  class DescribeMultiRegionParametersResult
  {
  public:
    AWS_MEMORYDB_API DescribeMultiRegionParametersResult() = default;
    AWS_MEMORYDB_API DescribeMultiRegionParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API DescribeMultiRegionParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An optional token to include in the response. If this token is provided, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeMultiRegionParametersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of parameters specific to a particular multi-region parameter group.
     * Each element in the list contains detailed information about one parameter.</p>
     */
    inline const Aws::Vector<MultiRegionParameter>& GetMultiRegionParameters() const { return m_multiRegionParameters; }
    template<typename MultiRegionParametersT = Aws::Vector<MultiRegionParameter>>
    void SetMultiRegionParameters(MultiRegionParametersT&& value) { m_multiRegionParametersHasBeenSet = true; m_multiRegionParameters = std::forward<MultiRegionParametersT>(value); }
    template<typename MultiRegionParametersT = Aws::Vector<MultiRegionParameter>>
    DescribeMultiRegionParametersResult& WithMultiRegionParameters(MultiRegionParametersT&& value) { SetMultiRegionParameters(std::forward<MultiRegionParametersT>(value)); return *this;}
    template<typename MultiRegionParametersT = MultiRegionParameter>
    DescribeMultiRegionParametersResult& AddMultiRegionParameters(MultiRegionParametersT&& value) { m_multiRegionParametersHasBeenSet = true; m_multiRegionParameters.emplace_back(std::forward<MultiRegionParametersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMultiRegionParametersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<MultiRegionParameter> m_multiRegionParameters;
    bool m_multiRegionParametersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
