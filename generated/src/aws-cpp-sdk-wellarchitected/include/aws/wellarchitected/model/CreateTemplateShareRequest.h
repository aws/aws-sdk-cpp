/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

#include <utility>

namespace Aws {
namespace WellArchitected {
namespace Model {

/**
 */
class CreateTemplateShareRequest : public WellArchitectedRequest {
 public:
  AWS_WELLARCHITECTED_API CreateTemplateShareRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateTemplateShare"; }

  AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The review template ARN.</p>
   */
  inline const Aws::String& GetTemplateArn() const { return m_templateArn; }
  inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
  template <typename TemplateArnT = Aws::String>
  void SetTemplateArn(TemplateArnT&& value) {
    m_templateArnHasBeenSet = true;
    m_templateArn = std::forward<TemplateArnT>(value);
  }
  template <typename TemplateArnT = Aws::String>
  CreateTemplateShareRequest& WithTemplateArn(TemplateArnT&& value) {
    SetTemplateArn(std::forward<TemplateArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetSharedWith() const { return m_sharedWith; }
  inline bool SharedWithHasBeenSet() const { return m_sharedWithHasBeenSet; }
  template <typename SharedWithT = Aws::String>
  void SetSharedWith(SharedWithT&& value) {
    m_sharedWithHasBeenSet = true;
    m_sharedWith = std::forward<SharedWithT>(value);
  }
  template <typename SharedWithT = Aws::String>
  CreateTemplateShareRequest& WithSharedWith(SharedWithT&& value) {
    SetSharedWith(std::forward<SharedWithT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
  inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
  template <typename ClientRequestTokenT = Aws::String>
  void SetClientRequestToken(ClientRequestTokenT&& value) {
    m_clientRequestTokenHasBeenSet = true;
    m_clientRequestToken = std::forward<ClientRequestTokenT>(value);
  }
  template <typename ClientRequestTokenT = Aws::String>
  CreateTemplateShareRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_templateArn;

  Aws::String m_sharedWith;

  Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_templateArnHasBeenSet = false;
  bool m_sharedWithHasBeenSet = false;
  bool m_clientRequestTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
