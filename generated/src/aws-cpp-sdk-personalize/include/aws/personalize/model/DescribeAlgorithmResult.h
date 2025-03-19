/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/Algorithm.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeAlgorithmResult
  {
  public:
    AWS_PERSONALIZE_API DescribeAlgorithmResult() = default;
    AWS_PERSONALIZE_API DescribeAlgorithmResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeAlgorithmResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A listing of the properties of the algorithm.</p>
     */
    inline const Algorithm& GetAlgorithm() const { return m_algorithm; }
    template<typename AlgorithmT = Algorithm>
    void SetAlgorithm(AlgorithmT&& value) { m_algorithmHasBeenSet = true; m_algorithm = std::forward<AlgorithmT>(value); }
    template<typename AlgorithmT = Algorithm>
    DescribeAlgorithmResult& WithAlgorithm(AlgorithmT&& value) { SetAlgorithm(std::forward<AlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAlgorithmResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Algorithm m_algorithm;
    bool m_algorithmHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
