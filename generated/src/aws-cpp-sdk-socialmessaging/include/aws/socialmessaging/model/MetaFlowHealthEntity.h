/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SocialMessaging {
namespace Model {

/**
 * <p>Represents a single entity in the health status check for a WhatsApp
 * Flow.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/MetaFlowHealthEntity">AWS
 * API Reference</a></p>
 */
class MetaFlowHealthEntity {
 public:
  AWS_SOCIALMESSAGING_API MetaFlowHealthEntity() = default;
  AWS_SOCIALMESSAGING_API MetaFlowHealthEntity(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API MetaFlowHealthEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of entity (for example, FLOW, WABA, BUSINESS, or APP).</p>
   */
  inline const Aws::String& GetEntityType() const { return m_entityType; }
  inline bool EntityTypeHasBeenSet() const { return m_entityTypeHasBeenSet; }
  template <typename EntityTypeT = Aws::String>
  void SetEntityType(EntityTypeT&& value) {
    m_entityTypeHasBeenSet = true;
    m_entityType = std::forward<EntityTypeT>(value);
  }
  template <typename EntityTypeT = Aws::String>
  MetaFlowHealthEntity& WithEntityType(EntityTypeT&& value) {
    SetEntityType(std::forward<EntityTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the entity.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  MetaFlowHealthEntity& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The messaging availability status for this entity (for example, AVAILABLE,
   * LIMITED, or BLOCKED).</p>
   */
  inline const Aws::String& GetCanSendMessage() const { return m_canSendMessage; }
  inline bool CanSendMessageHasBeenSet() const { return m_canSendMessageHasBeenSet; }
  template <typename CanSendMessageT = Aws::String>
  void SetCanSendMessage(CanSendMessageT&& value) {
    m_canSendMessageHasBeenSet = true;
    m_canSendMessage = std::forward<CanSendMessageT>(value);
  }
  template <typename CanSendMessageT = Aws::String>
  MetaFlowHealthEntity& WithCanSendMessage(CanSendMessageT&& value) {
    SetCanSendMessage(std::forward<CanSendMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_entityType;

  Aws::String m_id;

  Aws::String m_canSendMessage;
  bool m_entityTypeHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_canSendMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
