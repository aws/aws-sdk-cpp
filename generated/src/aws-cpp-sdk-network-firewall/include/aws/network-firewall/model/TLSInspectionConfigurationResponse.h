/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/ResourceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/network-firewall/model/EncryptionConfiguration.h>
#include <aws/network-firewall/model/TlsCertificateData.h>
#include <aws/network-firewall/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>The high-level properties of a TLS inspection configuration. This, along with
   * the <code>TLSInspectionConfiguration</code>, define the TLS inspection
   * configuration. You can retrieve all objects for a TLS inspection configuration
   * by calling <code>DescribeTLSInspectionConfiguration</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/TLSInspectionConfigurationResponse">AWS
   * API Reference</a></p>
   */
  class TLSInspectionConfigurationResponse
  {
  public:
    AWS_NETWORKFIREWALL_API TLSInspectionConfigurationResponse() = default;
    AWS_NETWORKFIREWALL_API TLSInspectionConfigurationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API TLSInspectionConfigurationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     */
    inline const Aws::String& GetTLSInspectionConfigurationArn() const { return m_tLSInspectionConfigurationArn; }
    inline bool TLSInspectionConfigurationArnHasBeenSet() const { return m_tLSInspectionConfigurationArnHasBeenSet; }
    template<typename TLSInspectionConfigurationArnT = Aws::String>
    void SetTLSInspectionConfigurationArn(TLSInspectionConfigurationArnT&& value) { m_tLSInspectionConfigurationArnHasBeenSet = true; m_tLSInspectionConfigurationArn = std::forward<TLSInspectionConfigurationArnT>(value); }
    template<typename TLSInspectionConfigurationArnT = Aws::String>
    TLSInspectionConfigurationResponse& WithTLSInspectionConfigurationArn(TLSInspectionConfigurationArnT&& value) { SetTLSInspectionConfigurationArn(std::forward<TLSInspectionConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline const Aws::String& GetTLSInspectionConfigurationName() const { return m_tLSInspectionConfigurationName; }
    inline bool TLSInspectionConfigurationNameHasBeenSet() const { return m_tLSInspectionConfigurationNameHasBeenSet; }
    template<typename TLSInspectionConfigurationNameT = Aws::String>
    void SetTLSInspectionConfigurationName(TLSInspectionConfigurationNameT&& value) { m_tLSInspectionConfigurationNameHasBeenSet = true; m_tLSInspectionConfigurationName = std::forward<TLSInspectionConfigurationNameT>(value); }
    template<typename TLSInspectionConfigurationNameT = Aws::String>
    TLSInspectionConfigurationResponse& WithTLSInspectionConfigurationName(TLSInspectionConfigurationNameT&& value) { SetTLSInspectionConfigurationName(std::forward<TLSInspectionConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the TLS inspection configuration. This ID is returned
     * in the responses to create and list commands. You provide it to operations such
     * as update and delete.</p>
     */
    inline const Aws::String& GetTLSInspectionConfigurationId() const { return m_tLSInspectionConfigurationId; }
    inline bool TLSInspectionConfigurationIdHasBeenSet() const { return m_tLSInspectionConfigurationIdHasBeenSet; }
    template<typename TLSInspectionConfigurationIdT = Aws::String>
    void SetTLSInspectionConfigurationId(TLSInspectionConfigurationIdT&& value) { m_tLSInspectionConfigurationIdHasBeenSet = true; m_tLSInspectionConfigurationId = std::forward<TLSInspectionConfigurationIdT>(value); }
    template<typename TLSInspectionConfigurationIdT = Aws::String>
    TLSInspectionConfigurationResponse& WithTLSInspectionConfigurationId(TLSInspectionConfigurationIdT&& value) { SetTLSInspectionConfigurationId(std::forward<TLSInspectionConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the current status of a
     * <a>TLSInspectionConfiguration</a>. You can retrieve this for a TLS inspection
     * configuration by calling <a>DescribeTLSInspectionConfiguration</a> and providing
     * the TLS inspection configuration name and ARN.</p>
     */
    inline ResourceStatus GetTLSInspectionConfigurationStatus() const { return m_tLSInspectionConfigurationStatus; }
    inline bool TLSInspectionConfigurationStatusHasBeenSet() const { return m_tLSInspectionConfigurationStatusHasBeenSet; }
    inline void SetTLSInspectionConfigurationStatus(ResourceStatus value) { m_tLSInspectionConfigurationStatusHasBeenSet = true; m_tLSInspectionConfigurationStatus = value; }
    inline TLSInspectionConfigurationResponse& WithTLSInspectionConfigurationStatus(ResourceStatus value) { SetTLSInspectionConfigurationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TLSInspectionConfigurationResponse& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TLSInspectionConfigurationResponse& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TLSInspectionConfigurationResponse& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last time that the TLS inspection configuration was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    TLSInspectionConfigurationResponse& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of firewall policies that use this TLS inspection
     * configuration.</p>
     */
    inline int GetNumberOfAssociations() const { return m_numberOfAssociations; }
    inline bool NumberOfAssociationsHasBeenSet() const { return m_numberOfAssociationsHasBeenSet; }
    inline void SetNumberOfAssociations(int value) { m_numberOfAssociationsHasBeenSet = true; m_numberOfAssociations = value; }
    inline TLSInspectionConfigurationResponse& WithNumberOfAssociations(int value) { SetNumberOfAssociations(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your TLS inspection configuration.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = EncryptionConfiguration>
    TLSInspectionConfigurationResponse& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the certificates associated with the TLS inspection
     * configuration.</p>
     */
    inline const Aws::Vector<TlsCertificateData>& GetCertificates() const { return m_certificates; }
    inline bool CertificatesHasBeenSet() const { return m_certificatesHasBeenSet; }
    template<typename CertificatesT = Aws::Vector<TlsCertificateData>>
    void SetCertificates(CertificatesT&& value) { m_certificatesHasBeenSet = true; m_certificates = std::forward<CertificatesT>(value); }
    template<typename CertificatesT = Aws::Vector<TlsCertificateData>>
    TLSInspectionConfigurationResponse& WithCertificates(CertificatesT&& value) { SetCertificates(std::forward<CertificatesT>(value)); return *this;}
    template<typename CertificatesT = TlsCertificateData>
    TLSInspectionConfigurationResponse& AddCertificates(CertificatesT&& value) { m_certificatesHasBeenSet = true; m_certificates.emplace_back(std::forward<CertificatesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const TlsCertificateData& GetCertificateAuthority() const { return m_certificateAuthority; }
    inline bool CertificateAuthorityHasBeenSet() const { return m_certificateAuthorityHasBeenSet; }
    template<typename CertificateAuthorityT = TlsCertificateData>
    void SetCertificateAuthority(CertificateAuthorityT&& value) { m_certificateAuthorityHasBeenSet = true; m_certificateAuthority = std::forward<CertificateAuthorityT>(value); }
    template<typename CertificateAuthorityT = TlsCertificateData>
    TLSInspectionConfigurationResponse& WithCertificateAuthority(CertificateAuthorityT&& value) { SetCertificateAuthority(std::forward<CertificateAuthorityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tLSInspectionConfigurationArn;
    bool m_tLSInspectionConfigurationArnHasBeenSet = false;

    Aws::String m_tLSInspectionConfigurationName;
    bool m_tLSInspectionConfigurationNameHasBeenSet = false;

    Aws::String m_tLSInspectionConfigurationId;
    bool m_tLSInspectionConfigurationIdHasBeenSet = false;

    ResourceStatus m_tLSInspectionConfigurationStatus{ResourceStatus::NOT_SET};
    bool m_tLSInspectionConfigurationStatusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    int m_numberOfAssociations{0};
    bool m_numberOfAssociationsHasBeenSet = false;

    EncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    Aws::Vector<TlsCertificateData> m_certificates;
    bool m_certificatesHasBeenSet = false;

    TlsCertificateData m_certificateAuthority;
    bool m_certificateAuthorityHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
