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
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace VPCLattice {
namespace Model {

/**
 * <p> Summary information about a domain verification. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/DomainVerificationSummary">AWS
 * API Reference</a></p>
 */
class DomainVerificationSummary {
 public:
  AWS_VPCLATTICE_API DomainVerificationSummary() = default;
  AWS_VPCLATTICE_API DomainVerificationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_VPCLATTICE_API DomainVerificationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The ID of the domain verification. </p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  DomainVerificationSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the domain verification. </p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DomainVerificationSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The domain name being verified. </p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  DomainVerificationSummary& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current status of the domain verification process. </p>
   */
  inline VerificationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(VerificationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DomainVerificationSummary& WithStatus(VerificationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The TXT record configuration used for domain verification. </p>
   */
  inline const TxtMethodConfig& GetTxtMethodConfig() const { return m_txtMethodConfig; }
  inline bool TxtMethodConfigHasBeenSet() const { return m_txtMethodConfigHasBeenSet; }
  template <typename TxtMethodConfigT = TxtMethodConfig>
  void SetTxtMethodConfig(TxtMethodConfigT&& value) {
    m_txtMethodConfigHasBeenSet = true;
    m_txtMethodConfig = std::forward<TxtMethodConfigT>(value);
  }
  template <typename TxtMethodConfigT = TxtMethodConfig>
  DomainVerificationSummary& WithTxtMethodConfig(TxtMethodConfigT&& value) {
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
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DomainVerificationSummary& WithCreatedAt(CreatedAtT&& value) {
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
  inline bool LastVerifiedTimeHasBeenSet() const { return m_lastVerifiedTimeHasBeenSet; }
  template <typename LastVerifiedTimeT = Aws::Utils::DateTime>
  void SetLastVerifiedTime(LastVerifiedTimeT&& value) {
    m_lastVerifiedTimeHasBeenSet = true;
    m_lastVerifiedTime = std::forward<LastVerifiedTimeT>(value);
  }
  template <typename LastVerifiedTimeT = Aws::Utils::DateTime>
  DomainVerificationSummary& WithLastVerifiedTime(LastVerifiedTimeT&& value) {
    SetLastVerifiedTime(std::forward<LastVerifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The tags associated with the domain verification. </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  DomainVerificationSummary& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  DomainVerificationSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_domainName;
  bool m_domainNameHasBeenSet = false;

  VerificationStatus m_status{VerificationStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  TxtMethodConfig m_txtMethodConfig;
  bool m_txtMethodConfigHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_lastVerifiedTime{};
  bool m_lastVerifiedTimeHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
