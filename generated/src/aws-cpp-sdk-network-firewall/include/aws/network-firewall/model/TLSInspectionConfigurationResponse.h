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
    AWS_NETWORKFIREWALL_API TLSInspectionConfigurationResponse();
    AWS_NETWORKFIREWALL_API TLSInspectionConfigurationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API TLSInspectionConfigurationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     */
    inline const Aws::String& GetTLSInspectionConfigurationArn() const{ return m_tLSInspectionConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     */
    inline bool TLSInspectionConfigurationArnHasBeenSet() const { return m_tLSInspectionConfigurationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     */
    inline void SetTLSInspectionConfigurationArn(const Aws::String& value) { m_tLSInspectionConfigurationArnHasBeenSet = true; m_tLSInspectionConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     */
    inline void SetTLSInspectionConfigurationArn(Aws::String&& value) { m_tLSInspectionConfigurationArnHasBeenSet = true; m_tLSInspectionConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     */
    inline void SetTLSInspectionConfigurationArn(const char* value) { m_tLSInspectionConfigurationArnHasBeenSet = true; m_tLSInspectionConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     */
    inline TLSInspectionConfigurationResponse& WithTLSInspectionConfigurationArn(const Aws::String& value) { SetTLSInspectionConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     */
    inline TLSInspectionConfigurationResponse& WithTLSInspectionConfigurationArn(Aws::String&& value) { SetTLSInspectionConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the TLS inspection configuration.</p>
     */
    inline TLSInspectionConfigurationResponse& WithTLSInspectionConfigurationArn(const char* value) { SetTLSInspectionConfigurationArn(value); return *this;}


    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline const Aws::String& GetTLSInspectionConfigurationName() const{ return m_tLSInspectionConfigurationName; }

    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline bool TLSInspectionConfigurationNameHasBeenSet() const { return m_tLSInspectionConfigurationNameHasBeenSet; }

    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline void SetTLSInspectionConfigurationName(const Aws::String& value) { m_tLSInspectionConfigurationNameHasBeenSet = true; m_tLSInspectionConfigurationName = value; }

    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline void SetTLSInspectionConfigurationName(Aws::String&& value) { m_tLSInspectionConfigurationNameHasBeenSet = true; m_tLSInspectionConfigurationName = std::move(value); }

    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline void SetTLSInspectionConfigurationName(const char* value) { m_tLSInspectionConfigurationNameHasBeenSet = true; m_tLSInspectionConfigurationName.assign(value); }

    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline TLSInspectionConfigurationResponse& WithTLSInspectionConfigurationName(const Aws::String& value) { SetTLSInspectionConfigurationName(value); return *this;}

    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline TLSInspectionConfigurationResponse& WithTLSInspectionConfigurationName(Aws::String&& value) { SetTLSInspectionConfigurationName(std::move(value)); return *this;}

    /**
     * <p>The descriptive name of the TLS inspection configuration. You can't change
     * the name of a TLS inspection configuration after you create it.</p>
     */
    inline TLSInspectionConfigurationResponse& WithTLSInspectionConfigurationName(const char* value) { SetTLSInspectionConfigurationName(value); return *this;}


    /**
     * <p>A unique identifier for the TLS inspection configuration. This ID is returned
     * in the responses to create and list commands. You provide it to operations such
     * as update and delete.</p>
     */
    inline const Aws::String& GetTLSInspectionConfigurationId() const{ return m_tLSInspectionConfigurationId; }

    /**
     * <p>A unique identifier for the TLS inspection configuration. This ID is returned
     * in the responses to create and list commands. You provide it to operations such
     * as update and delete.</p>
     */
    inline bool TLSInspectionConfigurationIdHasBeenSet() const { return m_tLSInspectionConfigurationIdHasBeenSet; }

    /**
     * <p>A unique identifier for the TLS inspection configuration. This ID is returned
     * in the responses to create and list commands. You provide it to operations such
     * as update and delete.</p>
     */
    inline void SetTLSInspectionConfigurationId(const Aws::String& value) { m_tLSInspectionConfigurationIdHasBeenSet = true; m_tLSInspectionConfigurationId = value; }

    /**
     * <p>A unique identifier for the TLS inspection configuration. This ID is returned
     * in the responses to create and list commands. You provide it to operations such
     * as update and delete.</p>
     */
    inline void SetTLSInspectionConfigurationId(Aws::String&& value) { m_tLSInspectionConfigurationIdHasBeenSet = true; m_tLSInspectionConfigurationId = std::move(value); }

    /**
     * <p>A unique identifier for the TLS inspection configuration. This ID is returned
     * in the responses to create and list commands. You provide it to operations such
     * as update and delete.</p>
     */
    inline void SetTLSInspectionConfigurationId(const char* value) { m_tLSInspectionConfigurationIdHasBeenSet = true; m_tLSInspectionConfigurationId.assign(value); }

    /**
     * <p>A unique identifier for the TLS inspection configuration. This ID is returned
     * in the responses to create and list commands. You provide it to operations such
     * as update and delete.</p>
     */
    inline TLSInspectionConfigurationResponse& WithTLSInspectionConfigurationId(const Aws::String& value) { SetTLSInspectionConfigurationId(value); return *this;}

    /**
     * <p>A unique identifier for the TLS inspection configuration. This ID is returned
     * in the responses to create and list commands. You provide it to operations such
     * as update and delete.</p>
     */
    inline TLSInspectionConfigurationResponse& WithTLSInspectionConfigurationId(Aws::String&& value) { SetTLSInspectionConfigurationId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the TLS inspection configuration. This ID is returned
     * in the responses to create and list commands. You provide it to operations such
     * as update and delete.</p>
     */
    inline TLSInspectionConfigurationResponse& WithTLSInspectionConfigurationId(const char* value) { SetTLSInspectionConfigurationId(value); return *this;}


    /**
     * <p>Detailed information about the current status of a
     * <a>TLSInspectionConfiguration</a>. You can retrieve this for a TLS inspection
     * configuration by calling <a>DescribeTLSInspectionConfiguration</a> and providing
     * the TLS inspection configuration name and ARN.</p>
     */
    inline const ResourceStatus& GetTLSInspectionConfigurationStatus() const{ return m_tLSInspectionConfigurationStatus; }

    /**
     * <p>Detailed information about the current status of a
     * <a>TLSInspectionConfiguration</a>. You can retrieve this for a TLS inspection
     * configuration by calling <a>DescribeTLSInspectionConfiguration</a> and providing
     * the TLS inspection configuration name and ARN.</p>
     */
    inline bool TLSInspectionConfigurationStatusHasBeenSet() const { return m_tLSInspectionConfigurationStatusHasBeenSet; }

    /**
     * <p>Detailed information about the current status of a
     * <a>TLSInspectionConfiguration</a>. You can retrieve this for a TLS inspection
     * configuration by calling <a>DescribeTLSInspectionConfiguration</a> and providing
     * the TLS inspection configuration name and ARN.</p>
     */
    inline void SetTLSInspectionConfigurationStatus(const ResourceStatus& value) { m_tLSInspectionConfigurationStatusHasBeenSet = true; m_tLSInspectionConfigurationStatus = value; }

    /**
     * <p>Detailed information about the current status of a
     * <a>TLSInspectionConfiguration</a>. You can retrieve this for a TLS inspection
     * configuration by calling <a>DescribeTLSInspectionConfiguration</a> and providing
     * the TLS inspection configuration name and ARN.</p>
     */
    inline void SetTLSInspectionConfigurationStatus(ResourceStatus&& value) { m_tLSInspectionConfigurationStatusHasBeenSet = true; m_tLSInspectionConfigurationStatus = std::move(value); }

    /**
     * <p>Detailed information about the current status of a
     * <a>TLSInspectionConfiguration</a>. You can retrieve this for a TLS inspection
     * configuration by calling <a>DescribeTLSInspectionConfiguration</a> and providing
     * the TLS inspection configuration name and ARN.</p>
     */
    inline TLSInspectionConfigurationResponse& WithTLSInspectionConfigurationStatus(const ResourceStatus& value) { SetTLSInspectionConfigurationStatus(value); return *this;}

    /**
     * <p>Detailed information about the current status of a
     * <a>TLSInspectionConfiguration</a>. You can retrieve this for a TLS inspection
     * configuration by calling <a>DescribeTLSInspectionConfiguration</a> and providing
     * the TLS inspection configuration name and ARN.</p>
     */
    inline TLSInspectionConfigurationResponse& WithTLSInspectionConfigurationStatus(ResourceStatus&& value) { SetTLSInspectionConfigurationStatus(std::move(value)); return *this;}


    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline TLSInspectionConfigurationResponse& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline TLSInspectionConfigurationResponse& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the TLS inspection configuration. </p>
     */
    inline TLSInspectionConfigurationResponse& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline TLSInspectionConfigurationResponse& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline TLSInspectionConfigurationResponse& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline TLSInspectionConfigurationResponse& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key:value pairs to associate with the resource.</p>
     */
    inline TLSInspectionConfigurationResponse& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The last time that the TLS inspection configuration was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last time that the TLS inspection configuration was changed.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The last time that the TLS inspection configuration was changed.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The last time that the TLS inspection configuration was changed.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last time that the TLS inspection configuration was changed.</p>
     */
    inline TLSInspectionConfigurationResponse& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last time that the TLS inspection configuration was changed.</p>
     */
    inline TLSInspectionConfigurationResponse& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The number of firewall policies that use this TLS inspection
     * configuration.</p>
     */
    inline int GetNumberOfAssociations() const{ return m_numberOfAssociations; }

    /**
     * <p>The number of firewall policies that use this TLS inspection
     * configuration.</p>
     */
    inline bool NumberOfAssociationsHasBeenSet() const { return m_numberOfAssociationsHasBeenSet; }

    /**
     * <p>The number of firewall policies that use this TLS inspection
     * configuration.</p>
     */
    inline void SetNumberOfAssociations(int value) { m_numberOfAssociationsHasBeenSet = true; m_numberOfAssociations = value; }

    /**
     * <p>The number of firewall policies that use this TLS inspection
     * configuration.</p>
     */
    inline TLSInspectionConfigurationResponse& WithNumberOfAssociations(int value) { SetNumberOfAssociations(value); return *this;}


    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your TLS inspection configuration.</p>
     */
    inline const EncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your TLS inspection configuration.</p>
     */
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your TLS inspection configuration.</p>
     */
    inline void SetEncryptionConfiguration(const EncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your TLS inspection configuration.</p>
     */
    inline void SetEncryptionConfiguration(EncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your TLS inspection configuration.</p>
     */
    inline TLSInspectionConfigurationResponse& WithEncryptionConfiguration(const EncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>A complex type that contains the Amazon Web Services KMS encryption
     * configuration settings for your TLS inspection configuration.</p>
     */
    inline TLSInspectionConfigurationResponse& WithEncryptionConfiguration(EncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of the certificates associated with the TLS inspection
     * configuration.</p>
     */
    inline const Aws::Vector<TlsCertificateData>& GetCertificates() const{ return m_certificates; }

    /**
     * <p>A list of the certificates associated with the TLS inspection
     * configuration.</p>
     */
    inline bool CertificatesHasBeenSet() const { return m_certificatesHasBeenSet; }

    /**
     * <p>A list of the certificates associated with the TLS inspection
     * configuration.</p>
     */
    inline void SetCertificates(const Aws::Vector<TlsCertificateData>& value) { m_certificatesHasBeenSet = true; m_certificates = value; }

    /**
     * <p>A list of the certificates associated with the TLS inspection
     * configuration.</p>
     */
    inline void SetCertificates(Aws::Vector<TlsCertificateData>&& value) { m_certificatesHasBeenSet = true; m_certificates = std::move(value); }

    /**
     * <p>A list of the certificates associated with the TLS inspection
     * configuration.</p>
     */
    inline TLSInspectionConfigurationResponse& WithCertificates(const Aws::Vector<TlsCertificateData>& value) { SetCertificates(value); return *this;}

    /**
     * <p>A list of the certificates associated with the TLS inspection
     * configuration.</p>
     */
    inline TLSInspectionConfigurationResponse& WithCertificates(Aws::Vector<TlsCertificateData>&& value) { SetCertificates(std::move(value)); return *this;}

    /**
     * <p>A list of the certificates associated with the TLS inspection
     * configuration.</p>
     */
    inline TLSInspectionConfigurationResponse& AddCertificates(const TlsCertificateData& value) { m_certificatesHasBeenSet = true; m_certificates.push_back(value); return *this; }

    /**
     * <p>A list of the certificates associated with the TLS inspection
     * configuration.</p>
     */
    inline TLSInspectionConfigurationResponse& AddCertificates(TlsCertificateData&& value) { m_certificatesHasBeenSet = true; m_certificates.push_back(std::move(value)); return *this; }


    
    inline const TlsCertificateData& GetCertificateAuthority() const{ return m_certificateAuthority; }

    
    inline bool CertificateAuthorityHasBeenSet() const { return m_certificateAuthorityHasBeenSet; }

    
    inline void SetCertificateAuthority(const TlsCertificateData& value) { m_certificateAuthorityHasBeenSet = true; m_certificateAuthority = value; }

    
    inline void SetCertificateAuthority(TlsCertificateData&& value) { m_certificateAuthorityHasBeenSet = true; m_certificateAuthority = std::move(value); }

    
    inline TLSInspectionConfigurationResponse& WithCertificateAuthority(const TlsCertificateData& value) { SetCertificateAuthority(value); return *this;}

    
    inline TLSInspectionConfigurationResponse& WithCertificateAuthority(TlsCertificateData&& value) { SetCertificateAuthority(std::move(value)); return *this;}

  private:

    Aws::String m_tLSInspectionConfigurationArn;
    bool m_tLSInspectionConfigurationArnHasBeenSet = false;

    Aws::String m_tLSInspectionConfigurationName;
    bool m_tLSInspectionConfigurationNameHasBeenSet = false;

    Aws::String m_tLSInspectionConfigurationId;
    bool m_tLSInspectionConfigurationIdHasBeenSet = false;

    ResourceStatus m_tLSInspectionConfigurationStatus;
    bool m_tLSInspectionConfigurationStatusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    int m_numberOfAssociations;
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
