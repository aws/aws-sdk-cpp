/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
class UpdateSelfUpgradeResult {
 public:
  AWS_QUICKSIGHT_API UpdateSelfUpgradeResult() = default;
  AWS_QUICKSIGHT_API UpdateSelfUpgradeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API UpdateSelfUpgradeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Details of the updated self-upgrade request.</p>
   */
  inline const SelfUpgradeRequestDetail& GetSelfUpgradeRequestDetail() const { return m_selfUpgradeRequestDetail; }
  template <typename SelfUpgradeRequestDetailT = SelfUpgradeRequestDetail>
  void SetSelfUpgradeRequestDetail(SelfUpgradeRequestDetailT&& value) {
    m_selfUpgradeRequestDetailHasBeenSet = true;
    m_selfUpgradeRequestDetail = std::forward<SelfUpgradeRequestDetailT>(value);
  }
  template <typename SelfUpgradeRequestDetailT = SelfUpgradeRequestDetail>
  UpdateSelfUpgradeResult& WithSelfUpgradeRequestDetail(SelfUpgradeRequestDetailT&& value) {
    SetSelfUpgradeRequestDetail(std::forward<SelfUpgradeRequestDetailT>(value));
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
  UpdateSelfUpgradeResult& WithRequestId(RequestIdT&& value) {
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
  inline UpdateSelfUpgradeResult& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  SelfUpgradeRequestDetail m_selfUpgradeRequestDetail;

  Aws::String m_requestId;

  int m_status{0};
  bool m_selfUpgradeRequestDetailHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
