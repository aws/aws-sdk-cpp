/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/ContextContent.h>
#include <aws/wellarchitected/model/ContextType.h>

#include <utility>

namespace Aws {
namespace WellArchitected {
namespace Model {

/**
 */
class CreateAgentContextRequest : public WellArchitectedRequest {
 public:
  AWS_WELLARCHITECTED_API CreateAgentContextRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAgentContext"; }

  AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateAgentContextRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the profile to associate the context
   * with.</p>
   */
  inline const Aws::String& GetProfileArn() const { return m_profileArn; }
  inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }
  template <typename ProfileArnT = Aws::String>
  void SetProfileArn(ProfileArnT&& value) {
    m_profileArnHasBeenSet = true;
    m_profileArn = std::forward<ProfileArnT>(value);
  }
  template <typename ProfileArnT = Aws::String>
  CreateAgentContextRequest& WithProfileArn(ProfileArnT&& value) {
    SetProfileArn(std::forward<ProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the context.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  CreateAgentContextRequest& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the context.</p>
   */
  inline ContextType GetContextType() const { return m_contextType; }
  inline bool ContextTypeHasBeenSet() const { return m_contextTypeHasBeenSet; }
  inline void SetContextType(ContextType value) {
    m_contextTypeHasBeenSet = true;
    m_contextType = value;
  }
  inline CreateAgentContextRequest& WithContextType(ContextType value) {
    SetContextType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The typed content of the context. The structure contains application-specific
   * fields such as account IDs, Regions, services, and resource types.</p>
   */
  inline const ContextContent& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = ContextContent>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = ContextContent>
  CreateAgentContextRequest& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_profileArn;

  Aws::String m_title;

  ContextType m_contextType{ContextType::NOT_SET};

  ContextContent m_content;
  bool m_clientTokenHasBeenSet = true;
  bool m_profileArnHasBeenSet = false;
  bool m_titleHasBeenSet = false;
  bool m_contextTypeHasBeenSet = false;
  bool m_contentHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
