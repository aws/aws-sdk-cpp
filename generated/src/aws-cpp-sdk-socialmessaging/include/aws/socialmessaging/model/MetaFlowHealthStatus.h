/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/MetaFlowHealthEntity.h>

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
 * <p>Contains the overall health status and per-entity breakdown for a WhatsApp
 * Flow.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/MetaFlowHealthStatus">AWS
 * API Reference</a></p>
 */
class MetaFlowHealthStatus {
 public:
  AWS_SOCIALMESSAGING_API MetaFlowHealthStatus() = default;
  AWS_SOCIALMESSAGING_API MetaFlowHealthStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API MetaFlowHealthStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The overall messaging availability status (for example, AVAILABLE, LIMITED,
   * or BLOCKED).</p>
   */
  inline const Aws::String& GetCanSendMessage() const { return m_canSendMessage; }
  inline bool CanSendMessageHasBeenSet() const { return m_canSendMessageHasBeenSet; }
  template <typename CanSendMessageT = Aws::String>
  void SetCanSendMessage(CanSendMessageT&& value) {
    m_canSendMessageHasBeenSet = true;
    m_canSendMessage = std::forward<CanSendMessageT>(value);
  }
  template <typename CanSendMessageT = Aws::String>
  MetaFlowHealthStatus& WithCanSendMessage(CanSendMessageT&& value) {
    SetCanSendMessage(std::forward<CanSendMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of health status entities with per-entity availability
   * information.</p>
   */
  inline const Aws::Vector<MetaFlowHealthEntity>& GetEntities() const { return m_entities; }
  inline bool EntitiesHasBeenSet() const { return m_entitiesHasBeenSet; }
  template <typename EntitiesT = Aws::Vector<MetaFlowHealthEntity>>
  void SetEntities(EntitiesT&& value) {
    m_entitiesHasBeenSet = true;
    m_entities = std::forward<EntitiesT>(value);
  }
  template <typename EntitiesT = Aws::Vector<MetaFlowHealthEntity>>
  MetaFlowHealthStatus& WithEntities(EntitiesT&& value) {
    SetEntities(std::forward<EntitiesT>(value));
    return *this;
  }
  template <typename EntitiesT = MetaFlowHealthEntity>
  MetaFlowHealthStatus& AddEntities(EntitiesT&& value) {
    m_entitiesHasBeenSet = true;
    m_entities.emplace_back(std::forward<EntitiesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_canSendMessage;

  Aws::Vector<MetaFlowHealthEntity> m_entities;
  bool m_canSendMessageHasBeenSet = false;
  bool m_entitiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
