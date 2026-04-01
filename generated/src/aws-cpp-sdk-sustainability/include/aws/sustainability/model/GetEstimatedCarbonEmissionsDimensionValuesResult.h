/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sustainability/Sustainability_EXPORTS.h>
#include <aws/sustainability/model/DimensionEntry.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Sustainability {
namespace Model {
class GetEstimatedCarbonEmissionsDimensionValuesResult {
 public:
  AWS_SUSTAINABILITY_API GetEstimatedCarbonEmissionsDimensionValuesResult() = default;
  AWS_SUSTAINABILITY_API GetEstimatedCarbonEmissionsDimensionValuesResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SUSTAINABILITY_API GetEstimatedCarbonEmissionsDimensionValuesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of possible dimensions over which the emissions data is
   * aggregated.</p>
   */
  inline const Aws::Vector<DimensionEntry>& GetResults() const { return m_results; }
  template <typename ResultsT = Aws::Vector<DimensionEntry>>
  void SetResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results = std::forward<ResultsT>(value);
  }
  template <typename ResultsT = Aws::Vector<DimensionEntry>>
  GetEstimatedCarbonEmissionsDimensionValuesResult& WithResults(ResultsT&& value) {
    SetResults(std::forward<ResultsT>(value));
    return *this;
  }
  template <typename ResultsT = DimensionEntry>
  GetEstimatedCarbonEmissionsDimensionValuesResult& AddResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results.emplace_back(std::forward<ResultsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token indicating there are additional pages available. You can
   * use the token in a following request to fetch the next set of results. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetEstimatedCarbonEmissionsDimensionValuesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetEstimatedCarbonEmissionsDimensionValuesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DimensionEntry> m_results;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_resultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Sustainability
}  // namespace Aws
