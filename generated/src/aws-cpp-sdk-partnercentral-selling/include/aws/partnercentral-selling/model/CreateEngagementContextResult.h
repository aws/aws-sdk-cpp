/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {
class CreateEngagementContextResult {
 public:
  AWS_PARTNERCENTRALSELLING_API CreateEngagementContextResult() = default;
  AWS_PARTNERCENTRALSELLING_API CreateEngagementContextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALSELLING_API CreateEngagementContextResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the engagement to which the context was added. This
   * ID confirms the successful association of the context with the specified
   * engagement.</p>
   */
  inline const Aws::String& GetEngagementId() const { return m_engagementId; }
  template <typename EngagementIdT = Aws::String>
  void SetEngagementId(EngagementIdT&& value) {
    m_engagementIdHasBeenSet = true;
    m_engagementId = std::forward<EngagementIdT>(value);
  }
  template <typename EngagementIdT = Aws::String>
  CreateEngagementContextResult& WithEngagementId(EngagementIdT&& value) {
    SetEngagementId(std::forward<EngagementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the engagement to which the context was
   * added. This globally unique identifier can be used for cross-service references
   * and IAM policies.</p>
   */
  inline const Aws::String& GetEngagementArn() const { return m_engagementArn; }
  template <typename EngagementArnT = Aws::String>
  void SetEngagementArn(EngagementArnT&& value) {
    m_engagementArnHasBeenSet = true;
    m_engagementArn = std::forward<EngagementArnT>(value);
  }
  template <typename EngagementArnT = Aws::String>
  CreateEngagementContextResult& WithEngagementArn(EngagementArnT&& value) {
    SetEngagementArn(std::forward<EngagementArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp indicating when the engagement was last modified as a result of
   * adding the context, in ISO 8601 format (UTC). Example:
   * "2023-05-01T20:37:46Z".</p>
   */
  inline const Aws::Utils::DateTime& GetEngagementLastModifiedAt() const { return m_engagementLastModifiedAt; }
  template <typename EngagementLastModifiedAtT = Aws::Utils::DateTime>
  void SetEngagementLastModifiedAt(EngagementLastModifiedAtT&& value) {
    m_engagementLastModifiedAtHasBeenSet = true;
    m_engagementLastModifiedAt = std::forward<EngagementLastModifiedAtT>(value);
  }
  template <typename EngagementLastModifiedAtT = Aws::Utils::DateTime>
  CreateEngagementContextResult& WithEngagementLastModifiedAt(EngagementLastModifiedAtT&& value) {
    SetEngagementLastModifiedAt(std::forward<EngagementLastModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier assigned to the newly created engagement context. This
   * ID can be used to reference the specific context within the engagement for
   * future operations.</p>
   */
  inline const Aws::String& GetContextId() const { return m_contextId; }
  template <typename ContextIdT = Aws::String>
  void SetContextId(ContextIdT&& value) {
    m_contextIdHasBeenSet = true;
    m_contextId = std::forward<ContextIdT>(value);
  }
  template <typename ContextIdT = Aws::String>
  CreateEngagementContextResult& WithContextId(ContextIdT&& value) {
    SetContextId(std::forward<ContextIdT>(value));
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
  CreateEngagementContextResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_engagementId;
  bool m_engagementIdHasBeenSet = false;

  Aws::String m_engagementArn;
  bool m_engagementArnHasBeenSet = false;

  Aws::Utils::DateTime m_engagementLastModifiedAt{};
  bool m_engagementLastModifiedAtHasBeenSet = false;

  Aws::String m_contextId;
  bool m_contextIdHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
