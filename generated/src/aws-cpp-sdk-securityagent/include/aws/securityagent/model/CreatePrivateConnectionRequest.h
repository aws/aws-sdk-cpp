/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/PrivateConnectionMode.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 */
class CreatePrivateConnectionRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API CreatePrivateConnectionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreatePrivateConnection"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique name for the private connection within your account.</p>
   */
  inline const Aws::String& GetPrivateConnectionName() const { return m_privateConnectionName; }
  inline bool PrivateConnectionNameHasBeenSet() const { return m_privateConnectionNameHasBeenSet; }
  template <typename PrivateConnectionNameT = Aws::String>
  void SetPrivateConnectionName(PrivateConnectionNameT&& value) {
    m_privateConnectionNameHasBeenSet = true;
    m_privateConnectionName = std::forward<PrivateConnectionNameT>(value);
  }
  template <typename PrivateConnectionNameT = Aws::String>
  CreatePrivateConnectionRequest& WithPrivateConnectionName(PrivateConnectionNameT&& value) {
    SetPrivateConnectionName(std::forward<PrivateConnectionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for the private connection. Specify either a
   * service-managed or a self-managed mode.</p>
   */
  inline const PrivateConnectionMode& GetMode() const { return m_mode; }
  inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
  template <typename ModeT = PrivateConnectionMode>
  void SetMode(ModeT&& value) {
    m_modeHasBeenSet = true;
    m_mode = std::forward<ModeT>(value);
  }
  template <typename ModeT = PrivateConnectionMode>
  CreatePrivateConnectionRequest& WithMode(ModeT&& value) {
    SetMode(std::forward<ModeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to attach to the private connection.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreatePrivateConnectionRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreatePrivateConnectionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_privateConnectionName;

  PrivateConnectionMode m_mode;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_privateConnectionNameHasBeenSet = false;
  bool m_modeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
