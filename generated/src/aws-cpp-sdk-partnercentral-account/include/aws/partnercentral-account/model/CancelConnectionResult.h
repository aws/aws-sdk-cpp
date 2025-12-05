/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/ConnectionType.h>
#include <aws/partnercentral-account/model/ConnectionTypeDetail.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {
class CancelConnectionResult {
 public:
  AWS_PARTNERCENTRALACCOUNT_API CancelConnectionResult() = default;
  AWS_PARTNERCENTRALACCOUNT_API CancelConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALACCOUNT_API CancelConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The catalog identifier where the connection was canceled.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  CancelConnectionResult& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the canceled connection.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CancelConnectionResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the canceled connection.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CancelConnectionResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID of the other participant in the canceled connection.</p>
   */
  inline const Aws::String& GetOtherParticipantAccountId() const { return m_otherParticipantAccountId; }
  template <typename OtherParticipantAccountIdT = Aws::String>
  void SetOtherParticipantAccountId(OtherParticipantAccountIdT&& value) {
    m_otherParticipantAccountIdHasBeenSet = true;
    m_otherParticipantAccountId = std::forward<OtherParticipantAccountIdT>(value);
  }
  template <typename OtherParticipantAccountIdT = Aws::String>
  CancelConnectionResult& WithOtherParticipantAccountId(OtherParticipantAccountIdT&& value) {
    SetOtherParticipantAccountId(std::forward<OtherParticipantAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the connection was last updated (canceled).</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  CancelConnectionResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of connection types that were active before cancellation.</p>
   */
  inline const Aws::Map<ConnectionType, ConnectionTypeDetail>& GetConnectionTypes() const { return m_connectionTypes; }
  template <typename ConnectionTypesT = Aws::Map<ConnectionType, ConnectionTypeDetail>>
  void SetConnectionTypes(ConnectionTypesT&& value) {
    m_connectionTypesHasBeenSet = true;
    m_connectionTypes = std::forward<ConnectionTypesT>(value);
  }
  template <typename ConnectionTypesT = Aws::Map<ConnectionType, ConnectionTypeDetail>>
  CancelConnectionResult& WithConnectionTypes(ConnectionTypesT&& value) {
    SetConnectionTypes(std::forward<ConnectionTypesT>(value));
    return *this;
  }
  inline CancelConnectionResult& AddConnectionTypes(ConnectionType key, ConnectionTypeDetail value) {
    m_connectionTypesHasBeenSet = true;
    m_connectionTypes.emplace(key, value);
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
  CancelConnectionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_otherParticipantAccountId;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Map<ConnectionType, ConnectionTypeDetail> m_connectionTypes;

  Aws::String m_requestId;
  bool m_catalogHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_otherParticipantAccountIdHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_connectionTypesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
