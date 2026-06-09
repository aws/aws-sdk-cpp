/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/KnowledgeBase.h>

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
class DescribeKnowledgeBaseResult {
 public:
  AWS_QUICKSIGHT_API DescribeKnowledgeBaseResult() = default;
  AWS_QUICKSIGHT_API DescribeKnowledgeBaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API DescribeKnowledgeBaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The knowledge base.</p>
   */
  inline const KnowledgeBase& GetKnowledgeBase() const { return m_knowledgeBase; }
  template <typename KnowledgeBaseT = KnowledgeBase>
  void SetKnowledgeBase(KnowledgeBaseT&& value) {
    m_knowledgeBaseHasBeenSet = true;
    m_knowledgeBase = std::forward<KnowledgeBaseT>(value);
  }
  template <typename KnowledgeBaseT = KnowledgeBase>
  DescribeKnowledgeBaseResult& WithKnowledgeBase(KnowledgeBaseT&& value) {
    SetKnowledgeBase(std::forward<KnowledgeBaseT>(value));
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
  DescribeKnowledgeBaseResult& WithRequestId(RequestIdT&& value) {
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
  inline DescribeKnowledgeBaseResult& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  KnowledgeBase m_knowledgeBase;

  Aws::String m_requestId;

  int m_status{0};
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_knowledgeBaseHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
