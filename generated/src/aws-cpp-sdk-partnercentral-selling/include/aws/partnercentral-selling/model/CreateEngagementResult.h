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
class CreateEngagementResult {
 public:
  AWS_PARTNERCENTRALSELLING_API CreateEngagementResult() = default;
  AWS_PARTNERCENTRALSELLING_API CreateEngagementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALSELLING_API CreateEngagementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Unique identifier assigned to the newly created engagement.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CreateEngagementResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) that identifies the engagement.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CreateEngagementResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp indicating when the engagement was last modified, in ISO 8601
   * format (UTC). For newly created engagements, this value matches the creation
   * timestamp. Example: "2023-05-01T20:37:46Z".</p>
   */
  inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  void SetModifiedAt(ModifiedAtT&& value) {
    m_modifiedAtHasBeenSet = true;
    m_modifiedAt = std::forward<ModifiedAtT>(value);
  }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  CreateEngagementResult& WithModifiedAt(ModifiedAtT&& value) {
    SetModifiedAt(std::forward<ModifiedAtT>(value));
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
  CreateEngagementResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_arn;

  Aws::Utils::DateTime m_modifiedAt{};

  Aws::String m_requestId;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_modifiedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
