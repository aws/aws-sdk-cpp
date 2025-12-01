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
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {

/**
 * <p>Base structure containing common connection properties.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/Connection">AWS
 * API Reference</a></p>
 */
class Connection {
 public:
  AWS_PARTNERCENTRALACCOUNT_API Connection() = default;
  AWS_PARTNERCENTRALACCOUNT_API Connection(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Connection& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The catalog identifier that the connection belongs to.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  Connection& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the connection.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  Connection& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Resource Name (ARN) of the connection.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  Connection& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID of the other participant in the connection.</p>
   */
  inline const Aws::String& GetOtherParticipantAccountId() const { return m_otherParticipantAccountId; }
  inline bool OtherParticipantAccountIdHasBeenSet() const { return m_otherParticipantAccountIdHasBeenSet; }
  template <typename OtherParticipantAccountIdT = Aws::String>
  void SetOtherParticipantAccountId(OtherParticipantAccountIdT&& value) {
    m_otherParticipantAccountIdHasBeenSet = true;
    m_otherParticipantAccountId = std::forward<OtherParticipantAccountIdT>(value);
  }
  template <typename OtherParticipantAccountIdT = Aws::String>
  Connection& WithOtherParticipantAccountId(OtherParticipantAccountIdT&& value) {
    SetOtherParticipantAccountId(std::forward<OtherParticipantAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the connection was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  Connection& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of connection.</p>
   */
  inline const Aws::Map<ConnectionType, ConnectionTypeDetail>& GetConnectionTypes() const { return m_connectionTypes; }
  inline bool ConnectionTypesHasBeenSet() const { return m_connectionTypesHasBeenSet; }
  template <typename ConnectionTypesT = Aws::Map<ConnectionType, ConnectionTypeDetail>>
  void SetConnectionTypes(ConnectionTypesT&& value) {
    m_connectionTypesHasBeenSet = true;
    m_connectionTypes = std::forward<ConnectionTypesT>(value);
  }
  template <typename ConnectionTypesT = Aws::Map<ConnectionType, ConnectionTypeDetail>>
  Connection& WithConnectionTypes(ConnectionTypesT&& value) {
    SetConnectionTypes(std::forward<ConnectionTypesT>(value));
    return *this;
  }
  inline Connection& AddConnectionTypes(ConnectionType key, ConnectionTypeDetail value) {
    m_connectionTypesHasBeenSet = true;
    m_connectionTypes.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;
  bool m_catalogHasBeenSet = false;

  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_otherParticipantAccountId;
  bool m_otherParticipantAccountIdHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  Aws::Map<ConnectionType, ConnectionTypeDetail> m_connectionTypes;
  bool m_connectionTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
