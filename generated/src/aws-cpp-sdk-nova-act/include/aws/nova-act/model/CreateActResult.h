/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/ActStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {
class CreateActResult {
 public:
  AWS_NOVAACT_API CreateActResult() = default;
  AWS_NOVAACT_API CreateActResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NOVAACT_API CreateActResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier for the created act.</p>
   */
  inline const Aws::String& GetActId() const { return m_actId; }
  template <typename ActIdT = Aws::String>
  void SetActId(ActIdT&& value) {
    m_actIdHasBeenSet = true;
    m_actId = std::forward<ActIdT>(value);
  }
  template <typename ActIdT = Aws::String>
  CreateActResult& WithActId(ActIdT&& value) {
    SetActId(std::forward<ActIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The initial status of the act after creation.</p>
   */
  inline ActStatus GetStatus() const { return m_status; }
  inline void SetStatus(ActStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateActResult& WithStatus(ActStatus value) {
    SetStatus(value);
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
  CreateActResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_actId;
  bool m_actIdHasBeenSet = false;

  ActStatus m_status{ActStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
