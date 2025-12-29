/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
class GetIdentityContextResult {
 public:
  AWS_QUICKSIGHT_API GetIdentityContextResult() = default;
  AWS_QUICKSIGHT_API GetIdentityContextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API GetIdentityContextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The HTTP status of the request.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetIdentityContextResult& WithStatus(int value) {
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
  GetIdentityContextResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity context information for the user. This is an identity token that
   * should be used as the ContextAssertion parameter in the <a
   * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">STS
   * AssumeRole API</a> call to obtain identity enhanced Amazon Web Services
   * credentials.</p>
   */
  inline const Aws::String& GetContext() const { return m_context; }
  template <typename ContextT = Aws::String>
  void SetContext(ContextT&& value) {
    m_contextHasBeenSet = true;
    m_context = std::forward<ContextT>(value);
  }
  template <typename ContextT = Aws::String>
  GetIdentityContextResult& WithContext(ContextT&& value) {
    SetContext(std::forward<ContextT>(value));
    return *this;
  }
  ///@}
 private:
  int m_status{0};

  Aws::String m_requestId;

  Aws::String m_context;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_contextHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
