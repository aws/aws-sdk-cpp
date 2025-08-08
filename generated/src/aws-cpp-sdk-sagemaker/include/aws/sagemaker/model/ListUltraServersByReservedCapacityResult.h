/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/UltraServer.h>
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
namespace SageMaker
{
namespace Model
{
  class ListUltraServersByReservedCapacityResult
  {
  public:
    AWS_SAGEMAKER_API ListUltraServersByReservedCapacityResult() = default;
    AWS_SAGEMAKER_API ListUltraServersByReservedCapacityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListUltraServersByReservedCapacityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response is truncated, SageMaker returns this token. Use it in the
     * next request to retrieve the next set of UltraServers.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListUltraServersByReservedCapacityResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of UltraServers that are part of the specified reserved capacity.</p>
     */
    inline const Aws::Vector<UltraServer>& GetUltraServers() const { return m_ultraServers; }
    template<typename UltraServersT = Aws::Vector<UltraServer>>
    void SetUltraServers(UltraServersT&& value) { m_ultraServersHasBeenSet = true; m_ultraServers = std::forward<UltraServersT>(value); }
    template<typename UltraServersT = Aws::Vector<UltraServer>>
    ListUltraServersByReservedCapacityResult& WithUltraServers(UltraServersT&& value) { SetUltraServers(std::forward<UltraServersT>(value)); return *this;}
    template<typename UltraServersT = UltraServer>
    ListUltraServersByReservedCapacityResult& AddUltraServers(UltraServersT&& value) { m_ultraServersHasBeenSet = true; m_ultraServers.emplace_back(std::forward<UltraServersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListUltraServersByReservedCapacityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<UltraServer> m_ultraServers;
    bool m_ultraServersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
