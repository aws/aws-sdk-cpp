/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/model/ResponsibilityTransfer.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Organizations {
namespace Model {
class DescribeResponsibilityTransferResult {
 public:
  AWS_ORGANIZATIONS_API DescribeResponsibilityTransferResult() = default;
  AWS_ORGANIZATIONS_API DescribeResponsibilityTransferResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ORGANIZATIONS_API DescribeResponsibilityTransferResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A <code>ResponsibilityTransfer</code> object. Contains details for a
   * transfer.</p>
   */
  inline const ResponsibilityTransfer& GetResponsibilityTransfer() const { return m_responsibilityTransfer; }
  template <typename ResponsibilityTransferT = ResponsibilityTransfer>
  void SetResponsibilityTransfer(ResponsibilityTransferT&& value) {
    m_responsibilityTransferHasBeenSet = true;
    m_responsibilityTransfer = std::forward<ResponsibilityTransferT>(value);
  }
  template <typename ResponsibilityTransferT = ResponsibilityTransfer>
  DescribeResponsibilityTransferResult& WithResponsibilityTransfer(ResponsibilityTransferT&& value) {
    SetResponsibilityTransfer(std::forward<ResponsibilityTransferT>(value));
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
  DescribeResponsibilityTransferResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  ResponsibilityTransfer m_responsibilityTransfer;
  bool m_responsibilityTransferHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Organizations
}  // namespace Aws
