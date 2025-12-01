/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/PartnerDomain.h>
#include <aws/partnercentral-account/model/PartnerProfile.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {
class GetPartnerResult {
 public:
  AWS_PARTNERCENTRALACCOUNT_API GetPartnerResult() = default;
  AWS_PARTNERCENTRALACCOUNT_API GetPartnerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALACCOUNT_API GetPartnerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The catalog identifier for the partner account.</p>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  GetPartnerResult& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the partner account.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetPartnerResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the partner account.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  GetPartnerResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The legal name of the partner organization.</p>
   */
  inline const Aws::String& GetLegalName() const { return m_legalName; }
  template <typename LegalNameT = Aws::String>
  void SetLegalName(LegalNameT&& value) {
    m_legalNameHasBeenSet = true;
    m_legalName = std::forward<LegalNameT>(value);
  }
  template <typename LegalNameT = Aws::String>
  GetPartnerResult& WithLegalName(LegalNameT&& value) {
    SetLegalName(std::forward<LegalNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the partner account was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetPartnerResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The partner profile information including display name, description, and
   * other public details.</p>
   */
  inline const PartnerProfile& GetProfile() const { return m_profile; }
  template <typename ProfileT = PartnerProfile>
  void SetProfile(ProfileT&& value) {
    m_profileHasBeenSet = true;
    m_profile = std::forward<ProfileT>(value);
  }
  template <typename ProfileT = PartnerProfile>
  GetPartnerResult& WithProfile(ProfileT&& value) {
    SetProfile(std::forward<ProfileT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of verified email domains associated with AWS training and
   * certification credentials for the partner organization.</p>
   */
  inline const Aws::Vector<PartnerDomain>& GetAwsTrainingCertificationEmailDomains() const {
    return m_awsTrainingCertificationEmailDomains;
  }
  template <typename AwsTrainingCertificationEmailDomainsT = Aws::Vector<PartnerDomain>>
  void SetAwsTrainingCertificationEmailDomains(AwsTrainingCertificationEmailDomainsT&& value) {
    m_awsTrainingCertificationEmailDomainsHasBeenSet = true;
    m_awsTrainingCertificationEmailDomains = std::forward<AwsTrainingCertificationEmailDomainsT>(value);
  }
  template <typename AwsTrainingCertificationEmailDomainsT = Aws::Vector<PartnerDomain>>
  GetPartnerResult& WithAwsTrainingCertificationEmailDomains(AwsTrainingCertificationEmailDomainsT&& value) {
    SetAwsTrainingCertificationEmailDomains(std::forward<AwsTrainingCertificationEmailDomainsT>(value));
    return *this;
  }
  template <typename AwsTrainingCertificationEmailDomainsT = PartnerDomain>
  GetPartnerResult& AddAwsTrainingCertificationEmailDomains(AwsTrainingCertificationEmailDomainsT&& value) {
    m_awsTrainingCertificationEmailDomainsHasBeenSet = true;
    m_awsTrainingCertificationEmailDomains.emplace_back(std::forward<AwsTrainingCertificationEmailDomainsT>(value));
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
  GetPartnerResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;
  bool m_catalogHasBeenSet = false;

  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_id;
  bool m_idHasBeenSet = false;

  Aws::String m_legalName;
  bool m_legalNameHasBeenSet = false;

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  PartnerProfile m_profile;
  bool m_profileHasBeenSet = false;

  Aws::Vector<PartnerDomain> m_awsTrainingCertificationEmailDomains;
  bool m_awsTrainingCertificationEmailDomainsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
