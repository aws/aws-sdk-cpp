/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/TxtMethodConfig.h>
#include <aws/vpc-lattice/model/VerificationStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace VPCLattice {
namespace Model {
class GetDomainVerificationResult {
 public:
  AWS_VPCLATTICE_API GetDomainVerificationResult() = default;
  AWS_VPCLATTICE_API GetDomainVerificationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_VPCLATTICE_API GetDomainVerificationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The ID of the domain verification. </p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetDomainVerificationResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the domain verification. </p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetDomainVerificationResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The domain name being verified. </p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  GetDomainVerificationResult& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current status of the domain verification process. </p>
   */
  inline VerificationStatus GetStatus() const { return m_status; }
  inline void SetStatus(VerificationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetDomainVerificationResult& WithStatus(VerificationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The TXT record configuration used for domain verification. </p>
   */
  inline const TxtMethodConfig& GetTxtMethodConfig() const { return m_txtMethodConfig; }
  template <typename TxtMethodConfigT = TxtMethodConfig>
  void SetTxtMethodConfig(TxtMethodConfigT&& value) {
    m_txtMethodConfigHasBeenSet = true;
    m_txtMethodConfig = std::forward<TxtMethodConfigT>(value);
  }
  template <typename TxtMethodConfigT = TxtMethodConfig>
  GetDomainVerificationResult& WithTxtMethodConfig(TxtMethodConfigT&& value) {
    SetTxtMethodConfig(std::forward<TxtMethodConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The date and time that the domain verification was created, in ISO-8601
   * format. </p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetDomainVerificationResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The date and time that the domain was last successfully verified, in
   * ISO-8601 format. </p>
   */
  inline const Aws::Utils::DateTime& GetLastVerifiedTime() const { return m_lastVerifiedTime; }
  template <typename LastVerifiedTimeT = Aws::Utils::DateTime>
  void SetLastVerifiedTime(LastVerifiedTimeT&& value) {
    m_lastVerifiedTimeHasBeenSet = true;
    m_lastVerifiedTime = std::forward<LastVerifiedTimeT>(value);
  }
  template <typename LastVerifiedTimeT = Aws::Utils::DateTime>
  GetDomainVerificationResult& WithLastVerifiedTime(LastVerifiedTimeT&& value) {
    SetLastVerifiedTime(std::forward<LastVerifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The tags associated with the domain verification. </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetDomainVerificationResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetDomainVerificationResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
  GetDomainVerificationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_domainName;

  VerificationStatus m_status{VerificationStatus::NOT_SET};

  TxtMethodConfig m_txtMethodConfig;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_lastVerifiedTime{};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_domainNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_txtMethodConfigHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_lastVerifiedTimeHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
