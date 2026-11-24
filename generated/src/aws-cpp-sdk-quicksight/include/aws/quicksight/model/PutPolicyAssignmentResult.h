/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
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
class PutPolicyAssignmentResult {
 public:
  AWS_QUICKSIGHT_API PutPolicyAssignmentResult() = default;
  AWS_QUICKSIGHT_API PutPolicyAssignmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API PutPolicyAssignmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the policy that is now assigned to the principal.</p>
   */
  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  PutPolicyAssignmentResult& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the policy that this request replaced. This value is absent if the
   * principal had no policy of this type before the request.</p>
   */
  inline const Aws::String& GetReplacedPolicyArn() const { return m_replacedPolicyArn; }
  template <typename ReplacedPolicyArnT = Aws::String>
  void SetReplacedPolicyArn(ReplacedPolicyArnT&& value) {
    m_replacedPolicyArnHasBeenSet = true;
    m_replacedPolicyArn = std::forward<ReplacedPolicyArnT>(value);
  }
  template <typename ReplacedPolicyArnT = Aws::String>
  PutPolicyAssignmentResult& WithReplacedPolicyArn(ReplacedPolicyArnT&& value) {
    SetReplacedPolicyArn(std::forward<ReplacedPolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision of the assignment after this request. Use this value in later
   * requests to detect concurrent changes.</p>
   */
  inline long long GetRevision() const { return m_revision; }
  inline void SetRevision(long long value) {
    m_revisionHasBeenSet = true;
    m_revision = value;
  }
  inline PutPolicyAssignmentResult& WithRevision(long long value) {
    SetRevision(value);
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
  PutPolicyAssignmentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_policyArn;

  Aws::String m_replacedPolicyArn;

  long long m_revision{0};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_policyArnHasBeenSet = false;
  bool m_replacedPolicyArnHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
