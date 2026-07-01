/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supportauthz/SupportAuthZRequest.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>
#include <aws/supportauthz/model/Permit.h>
#include <aws/supportauthz/model/SigningKeyInfo.h>

#include <utility>

namespace Aws {
namespace SupportAuthZ {
namespace Model {

/**
 */
class CreateSupportPermitRequest : public SupportAuthZRequest {
 public:
  AWS_SUPPORTAUTHZ_API CreateSupportPermitRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateSupportPermit"; }

  AWS_SUPPORTAUTHZ_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The permit definition specifying the actions, resources, and time-window
   * conditions that the support operator is authorized to use.</p>
   */
  inline const Permit& GetPermit() const { return m_permit; }
  inline bool PermitHasBeenSet() const { return m_permitHasBeenSet; }
  template <typename PermitT = Permit>
  void SetPermit(PermitT&& value) {
    m_permitHasBeenSet = true;
    m_permit = std::forward<PermitT>(value);
  }
  template <typename PermitT = Permit>
  CreateSupportPermitRequest& WithPermit(PermitT&& value) {
    SetPermit(std::forward<PermitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A customer-chosen name for the support permit. Must be between 1 and 256
   * alphanumeric characters.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateSupportPermitRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of why this permit is being created. Maximum
   * length of 1024 characters.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateSupportPermitRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The signing key information used to sign the permit. Must reference an AWS
   * KMS key with key usage SIGN_VERIFY and key spec ECC_NIST_P384.</p>
   */
  inline const SigningKeyInfo& GetSigningKeyInfo() const { return m_signingKeyInfo; }
  inline bool SigningKeyInfoHasBeenSet() const { return m_signingKeyInfoHasBeenSet; }
  template <typename SigningKeyInfoT = SigningKeyInfo>
  void SetSigningKeyInfo(SigningKeyInfoT&& value) {
    m_signingKeyInfoHasBeenSet = true;
    m_signingKeyInfo = std::forward<SigningKeyInfoT>(value);
  }
  template <typename SigningKeyInfoT = SigningKeyInfo>
  CreateSupportPermitRequest& WithSigningKeyInfo(SigningKeyInfoT&& value) {
    SetSigningKeyInfo(std::forward<SigningKeyInfoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display identifier of the AWS Support case associated with this
   * permit.</p>
   */
  inline const Aws::String& GetSupportCaseDisplayId() const { return m_supportCaseDisplayId; }
  inline bool SupportCaseDisplayIdHasBeenSet() const { return m_supportCaseDisplayIdHasBeenSet; }
  template <typename SupportCaseDisplayIdT = Aws::String>
  void SetSupportCaseDisplayId(SupportCaseDisplayIdT&& value) {
    m_supportCaseDisplayIdHasBeenSet = true;
    m_supportCaseDisplayId = std::forward<SupportCaseDisplayIdT>(value);
  }
  template <typename SupportCaseDisplayIdT = Aws::String>
  CreateSupportPermitRequest& WithSupportCaseDisplayId(SupportCaseDisplayIdT&& value) {
    SetSupportCaseDisplayId(std::forward<SupportCaseDisplayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the operation completes no
   * more than one time. If this token matches a previous request, the service
   * returns the existing permit without creating a duplicate.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateSupportPermitRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to associate with the support permit on creation.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateSupportPermitRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateSupportPermitRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Permit m_permit;

  Aws::String m_name;

  Aws::String m_description;

  SigningKeyInfo m_signingKeyInfo;

  Aws::String m_supportCaseDisplayId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_permitHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_signingKeyInfoHasBeenSet = false;
  bool m_supportCaseDisplayIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
