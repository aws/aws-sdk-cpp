/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SelfUpgradeRequestDetail.h>

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
class ListSelfUpgradesResult {
 public:
  AWS_QUICKSIGHT_API ListSelfUpgradesResult() = default;
  AWS_QUICKSIGHT_API ListSelfUpgradesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API ListSelfUpgradesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of self-upgrade request details.</p>
   */
  inline const Aws::Vector<SelfUpgradeRequestDetail>& GetSelfUpgradeRequestDetails() const { return m_selfUpgradeRequestDetails; }
  template <typename SelfUpgradeRequestDetailsT = Aws::Vector<SelfUpgradeRequestDetail>>
  void SetSelfUpgradeRequestDetails(SelfUpgradeRequestDetailsT&& value) {
    m_selfUpgradeRequestDetailsHasBeenSet = true;
    m_selfUpgradeRequestDetails = std::forward<SelfUpgradeRequestDetailsT>(value);
  }
  template <typename SelfUpgradeRequestDetailsT = Aws::Vector<SelfUpgradeRequestDetail>>
  ListSelfUpgradesResult& WithSelfUpgradeRequestDetails(SelfUpgradeRequestDetailsT&& value) {
    SetSelfUpgradeRequestDetails(std::forward<SelfUpgradeRequestDetailsT>(value));
    return *this;
  }
  template <typename SelfUpgradeRequestDetailsT = SelfUpgradeRequestDetail>
  ListSelfUpgradesResult& AddSelfUpgradeRequestDetails(SelfUpgradeRequestDetailsT&& value) {
    m_selfUpgradeRequestDetailsHasBeenSet = true;
    m_selfUpgradeRequestDetails.emplace_back(std::forward<SelfUpgradeRequestDetailsT>(value));
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
  ListSelfUpgradesResult& WithNextToken(NextTokenT&& value) {
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
  ListSelfUpgradesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP status of the request.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListSelfUpgradesResult& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<SelfUpgradeRequestDetail> m_selfUpgradeRequestDetails;

  Aws::String m_nextToken;

  Aws::String m_requestId;

  int m_status{0};
  bool m_selfUpgradeRequestDetailsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
