/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/synthetics/model/RuntimeVersion.h>
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
namespace Synthetics
{
namespace Model
{
  class DescribeRuntimeVersionsResult
  {
  public:
    AWS_SYNTHETICS_API DescribeRuntimeVersionsResult() = default;
    AWS_SYNTHETICS_API DescribeRuntimeVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SYNTHETICS_API DescribeRuntimeVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that display the details about each Synthetics canary
     * runtime version.</p>
     */
    inline const Aws::Vector<RuntimeVersion>& GetRuntimeVersions() const { return m_runtimeVersions; }
    template<typename RuntimeVersionsT = Aws::Vector<RuntimeVersion>>
    void SetRuntimeVersions(RuntimeVersionsT&& value) { m_runtimeVersionsHasBeenSet = true; m_runtimeVersions = std::forward<RuntimeVersionsT>(value); }
    template<typename RuntimeVersionsT = Aws::Vector<RuntimeVersion>>
    DescribeRuntimeVersionsResult& WithRuntimeVersions(RuntimeVersionsT&& value) { SetRuntimeVersions(std::forward<RuntimeVersionsT>(value)); return *this;}
    template<typename RuntimeVersionsT = RuntimeVersion>
    DescribeRuntimeVersionsResult& AddRuntimeVersions(RuntimeVersionsT&& value) { m_runtimeVersionsHasBeenSet = true; m_runtimeVersions.emplace_back(std::forward<RuntimeVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates that there is more data available. You can use this
     * token in a subsequent <code>DescribeRuntimeVersions</code> operation to retrieve
     * the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeRuntimeVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeRuntimeVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RuntimeVersion> m_runtimeVersions;
    bool m_runtimeVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
