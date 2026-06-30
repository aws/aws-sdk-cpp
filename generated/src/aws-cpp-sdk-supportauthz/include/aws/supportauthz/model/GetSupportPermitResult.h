/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supportauthz/SupportAuthZ_EXPORTS.h>
#include <aws/supportauthz/model/Permit.h>
#include <aws/supportauthz/model/SigningKeyInfo.h>
#include <aws/supportauthz/model/SupportPermitStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SupportAuthZ {
namespace Model {
class GetSupportPermitResult {
 public:
  AWS_SUPPORTAUTHZ_API GetSupportPermitResult() = default;
  AWS_SUPPORTAUTHZ_API GetSupportPermitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SUPPORTAUTHZ_API GetSupportPermitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the support permit.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetSupportPermitResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the support permit.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetSupportPermitResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the support permit.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetSupportPermitResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permit definition.</p>
   */
  inline const Permit& GetPermit() const { return m_permit; }
  template <typename PermitT = Permit>
  void SetPermit(PermitT&& value) {
    m_permitHasBeenSet = true;
    m_permit = std::forward<PermitT>(value);
  }
  template <typename PermitT = Permit>
  GetSupportPermitResult& WithPermit(PermitT&& value) {
    SetPermit(std::forward<PermitT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the support permit.</p>
   */
  inline SupportPermitStatus GetStatus() const { return m_status; }
  inline void SetStatus(SupportPermitStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetSupportPermitResult& WithStatus(SupportPermitStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The signing key information for the permit.</p>
   */
  inline const SigningKeyInfo& GetSigningKeyInfo() const { return m_signingKeyInfo; }
  template <typename SigningKeyInfoT = SigningKeyInfo>
  void SetSigningKeyInfo(SigningKeyInfoT&& value) {
    m_signingKeyInfoHasBeenSet = true;
    m_signingKeyInfo = std::forward<SigningKeyInfoT>(value);
  }
  template <typename SigningKeyInfoT = SigningKeyInfo>
  GetSupportPermitResult& WithSigningKeyInfo(SigningKeyInfoT&& value) {
    SetSigningKeyInfo(std::forward<SigningKeyInfoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the permit was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetSupportPermitResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display identifier of the support case associated with the permit.</p>
   */
  inline const Aws::String& GetSupportCaseDisplayId() const { return m_supportCaseDisplayId; }
  template <typename SupportCaseDisplayIdT = Aws::String>
  void SetSupportCaseDisplayId(SupportCaseDisplayIdT&& value) {
    m_supportCaseDisplayIdHasBeenSet = true;
    m_supportCaseDisplayId = std::forward<SupportCaseDisplayIdT>(value);
  }
  template <typename SupportCaseDisplayIdT = Aws::String>
  GetSupportPermitResult& WithSupportCaseDisplayId(SupportCaseDisplayIdT&& value) {
    SetSupportCaseDisplayId(std::forward<SupportCaseDisplayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the support permit.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetSupportPermitResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetSupportPermitResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetSupportPermitResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_name;

  Aws::String m_arn;

  Aws::String m_description;

  Permit m_permit;

  SupportPermitStatus m_status{SupportPermitStatus::NOT_SET};

  SigningKeyInfo m_signingKeyInfo;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_supportCaseDisplayId;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_permitHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_signingKeyInfoHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_supportCaseDisplayIdHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SupportAuthZ
}  // namespace Aws
