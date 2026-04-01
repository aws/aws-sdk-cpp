/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/DomainVerificationMethod.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 * <p>Input for creating a new target domain</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CreateTargetDomainInput">AWS
 * API Reference</a></p>
 */
class CreateTargetDomainRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API CreateTargetDomainRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateTargetDomain"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Domain name of the target domain</p>
   */
  inline const Aws::String& GetTargetDomainName() const { return m_targetDomainName; }
  inline bool TargetDomainNameHasBeenSet() const { return m_targetDomainNameHasBeenSet; }
  template <typename TargetDomainNameT = Aws::String>
  void SetTargetDomainName(TargetDomainNameT&& value) {
    m_targetDomainNameHasBeenSet = true;
    m_targetDomainName = std::forward<TargetDomainNameT>(value);
  }
  template <typename TargetDomainNameT = Aws::String>
  CreateTargetDomainRequest& WithTargetDomainName(TargetDomainNameT&& value) {
    SetTargetDomainName(std::forward<TargetDomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Verification method for the target domain</p>
   */
  inline DomainVerificationMethod GetVerificationMethod() const { return m_verificationMethod; }
  inline bool VerificationMethodHasBeenSet() const { return m_verificationMethodHasBeenSet; }
  inline void SetVerificationMethod(DomainVerificationMethod value) {
    m_verificationMethodHasBeenSet = true;
    m_verificationMethod = value;
  }
  inline CreateTargetDomainRequest& WithVerificationMethod(DomainVerificationMethod value) {
    SetVerificationMethod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to associate with the target domain</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateTargetDomainRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateTargetDomainRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetDomainName;

  DomainVerificationMethod m_verificationMethod{DomainVerificationMethod::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_targetDomainNameHasBeenSet = false;
  bool m_verificationMethodHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
