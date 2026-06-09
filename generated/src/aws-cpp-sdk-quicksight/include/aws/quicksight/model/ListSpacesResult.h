/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SpaceSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {
class ListSpacesResult {
 public:
  AWS_QUICKSIGHT_API ListSpacesResult() = default;
  AWS_QUICKSIGHT_API ListSpacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API ListSpacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the space.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  ListSpacesResult& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the space.</p>
   */
  inline const Aws::String& GetSpaceArn() const { return m_spaceArn; }
  template <typename SpaceArnT = Aws::String>
  void SetSpaceArn(SpaceArnT&& value) {
    m_spaceArnHasBeenSet = true;
    m_spaceArn = std::forward<SpaceArnT>(value);
  }
  template <typename SpaceArnT = Aws::String>
  ListSpacesResult& WithSpaceArn(SpaceArnT&& value) {
    SetSpaceArn(std::forward<SpaceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of space summaries.</p>
   */
  inline const Aws::Vector<SpaceSummary>& GetSpaceSummaries() const { return m_spaceSummaries; }
  template <typename SpaceSummariesT = Aws::Vector<SpaceSummary>>
  void SetSpaceSummaries(SpaceSummariesT&& value) {
    m_spaceSummariesHasBeenSet = true;
    m_spaceSummaries = std::forward<SpaceSummariesT>(value);
  }
  template <typename SpaceSummariesT = Aws::Vector<SpaceSummary>>
  ListSpacesResult& WithSpaceSummaries(SpaceSummariesT&& value) {
    SetSpaceSummaries(std::forward<SpaceSummariesT>(value));
    return *this;
  }
  template <typename SpaceSummariesT = SpaceSummary>
  ListSpacesResult& AddSpaceSummaries(SpaceSummariesT&& value) {
    m_spaceSummariesHasBeenSet = true;
    m_spaceSummaries.emplace_back(std::forward<SpaceSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results, or null if there are no more
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListSpacesResult& WithNextToken(NextTokenT&& value) {
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
  ListSpacesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_spaceId;

  Aws::String m_spaceArn;

  Aws::Vector<SpaceSummary> m_spaceSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_spaceIdHasBeenSet = false;
  bool m_spaceArnHasBeenSet = false;
  bool m_spaceSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
