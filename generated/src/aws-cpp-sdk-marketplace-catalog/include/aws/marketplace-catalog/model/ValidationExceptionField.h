/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/ValidationExceptionReason.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>Detailed information about a single request field that failed validation,
 * including the field's location, the reason it failed, and a human-readable
 * message.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/ValidationExceptionField">AWS
 * API Reference</a></p>
 */
class ValidationExceptionField {
 public:
  AWS_MARKETPLACECATALOG_API ValidationExceptionField() = default;
  AWS_MARKETPLACECATALOG_API ValidationExceptionField(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API ValidationExceptionField& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reason the field failed validation.</p>
   */
  inline ValidationExceptionReason GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  inline void SetReason(ValidationExceptionReason value) {
    m_reasonHasBeenSet = true;
    m_reason = value;
  }
  inline ValidationExceptionField& WithReason(ValidationExceptionReason value) {
    SetReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity type the failing field applies to, if the field is on a specific
   * entity. For example, <code>AmiProduct@1.0</code>.</p>
   */
  inline const Aws::String& GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  template <typename EntityTypeT = Aws::String>
  void SetEntityType(EntityTypeT&& value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = std::forward<EntityTypeT>(value);
  }
  template <typename EntityTypeT = Aws::String>
  ValidationExceptionField& WithEntityType(EntityTypeT&& value) {
    SetEntityType(std::forward<EntityTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity identifier the failing field applies to, if the field is on a
   * specific entity.</p>
   */
  inline const Aws::String& GetEntityId() const { return m_entityId; }
  inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
  template <typename EntityIdT = Aws::String>
  void SetEntityId(EntityIdT&& value) {
    m_entityIdHasBeenSet = true;
    m_entityId = std::forward<EntityIdT>(value);
  }
  template <typename EntityIdT = Aws::String>
  ValidationExceptionField& WithEntityId(EntityIdT&& value) {
    SetEntityId(std::forward<EntityIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The change type the failing field applies to, if the field is part of a
   * change request. For example, <code>AddDeliveryOptions</code>.</p>
   */
  inline const Aws::String& GetChangeType() const { return m_changeType; }
  inline bool ChangeTypeHasBeenSet() const { return m_changeTypeHasBeenSet; }
  template <typename ChangeTypeT = Aws::String>
  void SetChangeType(ChangeTypeT&& value) {
    m_changeTypeHasBeenSet = true;
    m_changeType = std::forward<ChangeTypeT>(value);
  }
  template <typename ChangeTypeT = Aws::String>
  ValidationExceptionField& WithChangeType(ChangeTypeT&& value) {
    SetChangeType(std::forward<ChangeTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the request field that failed validation, expressed as a JSON
   * path (for example, <code>Details.DeliveryOptions[0].Type</code>).</p>
   */
  inline const Aws::String& GetField() const { return m_field; }
  inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
  template <typename FieldT = Aws::String>
  void SetField(FieldT&& value) {
    m_fieldHasBeenSet = true;
    m_field = std::forward<FieldT>(value);
  }
  template <typename FieldT = Aws::String>
  ValidationExceptionField& WithField(FieldT&& value) {
    SetField(std::forward<FieldT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable message describing why the field failed validation.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ValidationExceptionField& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  ValidationExceptionReason m_reason{ValidationExceptionReason::NOT_SET};

  Aws::String m_entityType;

  Aws::String m_entityId;

  Aws::String m_changeType;

  Aws::String m_field;

  Aws::String m_message;
  bool m_reasonHasBeenSet = false;
  bool m_entityTypeHasBeenSet = false;
  bool m_entityIdHasBeenSet = false;
  bool m_changeTypeHasBeenSet = false;
  bool m_fieldHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
