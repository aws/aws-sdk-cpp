/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/ContextStoreState.h>
#include <aws/networkmanager/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkManager {
namespace Model {

/**
 * <p>Describes a context store.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ContextStore">AWS
 * API Reference</a></p>
 */
class ContextStore {
 public:
  AWS_NETWORKMANAGER_API ContextStore() = default;
  AWS_NETWORKMANAGER_API ContextStore(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API ContextStore& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the global network that the context store belongs to.</p>
   */
  inline const Aws::String& GetGlobalNetworkId() const { return m_globalNetworkId; }
  inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }
  template <typename GlobalNetworkIdT = Aws::String>
  void SetGlobalNetworkId(GlobalNetworkIdT&& value) {
    m_globalNetworkIdHasBeenSet = true;
    m_globalNetworkId = std::forward<GlobalNetworkIdT>(value);
  }
  template <typename GlobalNetworkIdT = Aws::String>
  ContextStore& WithGlobalNetworkId(GlobalNetworkIdT&& value) {
    SetGlobalNetworkId(std::forward<GlobalNetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the context store.</p>
   */
  inline const Aws::String& GetContextStoreId() const { return m_contextStoreId; }
  inline bool ContextStoreIdHasBeenSet() const { return m_contextStoreIdHasBeenSet; }
  template <typename ContextStoreIdT = Aws::String>
  void SetContextStoreId(ContextStoreIdT&& value) {
    m_contextStoreIdHasBeenSet = true;
    m_contextStoreId = std::forward<ContextStoreIdT>(value);
  }
  template <typename ContextStoreIdT = Aws::String>
  ContextStore& WithContextStoreId(ContextStoreIdT&& value) {
    SetContextStoreId(std::forward<ContextStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the context store.</p>
   */
  inline const Aws::String& GetContextStoreArn() const { return m_contextStoreArn; }
  inline bool ContextStoreArnHasBeenSet() const { return m_contextStoreArnHasBeenSet; }
  template <typename ContextStoreArnT = Aws::String>
  void SetContextStoreArn(ContextStoreArnT&& value) {
    m_contextStoreArnHasBeenSet = true;
    m_contextStoreArn = std::forward<ContextStoreArnT>(value);
  }
  template <typename ContextStoreArnT = Aws::String>
  ContextStore& WithContextStoreArn(ContextStoreArnT&& value) {
    SetContextStoreArn(std::forward<ContextStoreArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the context store.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ContextStore& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the context store was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ContextStore& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the context store. The possible values are the following:</p>
   * <ul> <li> <p> <code>PENDING</code>: The context store is being created.</p>
   * </li> <li> <p> <code>AVAILABLE</code>: The context store is ready to use.</p>
   * </li> <li> <p> <code>UPDATING</code>: The context store is being updated.</p>
   * </li> <li> <p> <code>DELETING</code>: The context store is being deleted.</p>
   * </li> <li> <p> <code>DELETED</code>: The context store is deleted.</p> </li>
   * </ul>
   */
  inline ContextStoreState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ContextStoreState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ContextStore& WithState(ContextStoreState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the context store.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  ContextStore& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  ContextStore& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_globalNetworkId;

  Aws::String m_contextStoreId;

  Aws::String m_contextStoreArn;

  Aws::String m_description;

  Aws::Utils::DateTime m_createdAt{};

  ContextStoreState m_state{ContextStoreState::NOT_SET};

  Aws::Vector<Tag> m_tags;
  bool m_globalNetworkIdHasBeenSet = false;
  bool m_contextStoreIdHasBeenSet = false;
  bool m_contextStoreArnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkManager
}  // namespace Aws
