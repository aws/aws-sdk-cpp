/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/TokenStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Route53GlobalResolver {
namespace Model {
class DeleteAccessTokenResult {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API DeleteAccessTokenResult() = default;
  AWS_ROUTE53GLOBALRESOLVER_API DeleteAccessTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53GLOBALRESOLVER_API DeleteAccessTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the deleted access token.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  DeleteAccessTokenResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The final status of the deleted access token.</p>
   */
  inline TokenStatus GetStatus() const { return m_status; }
  inline void SetStatus(TokenStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeleteAccessTokenResult& WithStatus(TokenStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the access token was deleted.</p>
   */
  inline const Aws::Utils::DateTime& GetDeletedAt() const { return m_deletedAt; }
  template <typename DeletedAtT = Aws::Utils::DateTime>
  void SetDeletedAt(DeletedAtT&& value) {
    m_deletedAtHasBeenSet = true;
    m_deletedAt = std::forward<DeletedAtT>(value);
  }
  template <typename DeletedAtT = Aws::Utils::DateTime>
  DeleteAccessTokenResult& WithDeletedAt(DeletedAtT&& value) {
    SetDeletedAt(std::forward<DeletedAtT>(value));
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
  DeleteAccessTokenResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  TokenStatus m_status{TokenStatus::NOT_SET};

  Aws::Utils::DateTime m_deletedAt{};

  Aws::String m_requestId;
  bool m_idHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_deletedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
