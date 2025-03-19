/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/CertificateValidity.h>
#include <aws/pca-connector-ad/model/EnrollmentFlagsV2.h>
#include <aws/pca-connector-ad/model/ExtensionsV2.h>
#include <aws/pca-connector-ad/model/GeneralFlagsV2.h>
#include <aws/pca-connector-ad/model/PrivateKeyAttributesV2.h>
#include <aws/pca-connector-ad/model/PrivateKeyFlagsV2.h>
#include <aws/pca-connector-ad/model/SubjectNameFlagsV2.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PcaConnectorAd
{
namespace Model
{

  /**
   * <p>v2 template schema that uses Legacy Cryptographic Providers.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/TemplateV2">AWS
   * API Reference</a></p>
   */
  class TemplateV2
  {
  public:
    AWS_PCACONNECTORAD_API TemplateV2() = default;
    AWS_PCACONNECTORAD_API TemplateV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API TemplateV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Certificate validity describes the validity and renewal periods of a
     * certificate.</p>
     */
    inline const CertificateValidity& GetCertificateValidity() const { return m_certificateValidity; }
    inline bool CertificateValidityHasBeenSet() const { return m_certificateValidityHasBeenSet; }
    template<typename CertificateValidityT = CertificateValidity>
    void SetCertificateValidity(CertificateValidityT&& value) { m_certificateValidityHasBeenSet = true; m_certificateValidity = std::forward<CertificateValidityT>(value); }
    template<typename CertificateValidityT = CertificateValidity>
    TemplateV2& WithCertificateValidity(CertificateValidityT&& value) { SetCertificateValidity(std::forward<CertificateValidityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enrollment flags describe the enrollment settings for certificates such as
     * using the existing private key and deleting expired or revoked certificates.</p>
     */
    inline const EnrollmentFlagsV2& GetEnrollmentFlags() const { return m_enrollmentFlags; }
    inline bool EnrollmentFlagsHasBeenSet() const { return m_enrollmentFlagsHasBeenSet; }
    template<typename EnrollmentFlagsT = EnrollmentFlagsV2>
    void SetEnrollmentFlags(EnrollmentFlagsT&& value) { m_enrollmentFlagsHasBeenSet = true; m_enrollmentFlags = std::forward<EnrollmentFlagsT>(value); }
    template<typename EnrollmentFlagsT = EnrollmentFlagsV2>
    TemplateV2& WithEnrollmentFlags(EnrollmentFlagsT&& value) { SetEnrollmentFlags(std::forward<EnrollmentFlagsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Extensions describe the key usage extensions and application policies for a
     * template.</p>
     */
    inline const ExtensionsV2& GetExtensions() const { return m_extensions; }
    inline bool ExtensionsHasBeenSet() const { return m_extensionsHasBeenSet; }
    template<typename ExtensionsT = ExtensionsV2>
    void SetExtensions(ExtensionsT&& value) { m_extensionsHasBeenSet = true; m_extensions = std::forward<ExtensionsT>(value); }
    template<typename ExtensionsT = ExtensionsV2>
    TemplateV2& WithExtensions(ExtensionsT&& value) { SetExtensions(std::forward<ExtensionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>General flags describe whether the template is used for computers or users
     * and if the template can be used with autoenrollment.</p>
     */
    inline const GeneralFlagsV2& GetGeneralFlags() const { return m_generalFlags; }
    inline bool GeneralFlagsHasBeenSet() const { return m_generalFlagsHasBeenSet; }
    template<typename GeneralFlagsT = GeneralFlagsV2>
    void SetGeneralFlags(GeneralFlagsT&& value) { m_generalFlagsHasBeenSet = true; m_generalFlags = std::forward<GeneralFlagsT>(value); }
    template<typename GeneralFlagsT = GeneralFlagsV2>
    TemplateV2& WithGeneralFlags(GeneralFlagsT&& value) { SetGeneralFlags(std::forward<GeneralFlagsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Private key attributes allow you to specify the minimal key length, key spec,
     * and cryptographic providers for the private key of a certificate for v2
     * templates. V2 templates allow you to use Legacy Cryptographic Service
     * Providers.</p>
     */
    inline const PrivateKeyAttributesV2& GetPrivateKeyAttributes() const { return m_privateKeyAttributes; }
    inline bool PrivateKeyAttributesHasBeenSet() const { return m_privateKeyAttributesHasBeenSet; }
    template<typename PrivateKeyAttributesT = PrivateKeyAttributesV2>
    void SetPrivateKeyAttributes(PrivateKeyAttributesT&& value) { m_privateKeyAttributesHasBeenSet = true; m_privateKeyAttributes = std::forward<PrivateKeyAttributesT>(value); }
    template<typename PrivateKeyAttributesT = PrivateKeyAttributesV2>
    TemplateV2& WithPrivateKeyAttributes(PrivateKeyAttributesT&& value) { SetPrivateKeyAttributes(std::forward<PrivateKeyAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Private key flags for v2 templates specify the client compatibility, if the
     * private key can be exported, and if user input is required when using a private
     * key. </p>
     */
    inline const PrivateKeyFlagsV2& GetPrivateKeyFlags() const { return m_privateKeyFlags; }
    inline bool PrivateKeyFlagsHasBeenSet() const { return m_privateKeyFlagsHasBeenSet; }
    template<typename PrivateKeyFlagsT = PrivateKeyFlagsV2>
    void SetPrivateKeyFlags(PrivateKeyFlagsT&& value) { m_privateKeyFlagsHasBeenSet = true; m_privateKeyFlags = std::forward<PrivateKeyFlagsT>(value); }
    template<typename PrivateKeyFlagsT = PrivateKeyFlagsV2>
    TemplateV2& WithPrivateKeyFlags(PrivateKeyFlagsT&& value) { SetPrivateKeyFlags(std::forward<PrivateKeyFlagsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Subject name flags describe the subject name and subject alternate name that
     * is included in a certificate.</p>
     */
    inline const SubjectNameFlagsV2& GetSubjectNameFlags() const { return m_subjectNameFlags; }
    inline bool SubjectNameFlagsHasBeenSet() const { return m_subjectNameFlagsHasBeenSet; }
    template<typename SubjectNameFlagsT = SubjectNameFlagsV2>
    void SetSubjectNameFlags(SubjectNameFlagsT&& value) { m_subjectNameFlagsHasBeenSet = true; m_subjectNameFlags = std::forward<SubjectNameFlagsT>(value); }
    template<typename SubjectNameFlagsT = SubjectNameFlagsV2>
    TemplateV2& WithSubjectNameFlags(SubjectNameFlagsT&& value) { SetSubjectNameFlags(std::forward<SubjectNameFlagsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of templates in Active Directory that are superseded by this
     * template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupersededTemplates() const { return m_supersededTemplates; }
    inline bool SupersededTemplatesHasBeenSet() const { return m_supersededTemplatesHasBeenSet; }
    template<typename SupersededTemplatesT = Aws::Vector<Aws::String>>
    void SetSupersededTemplates(SupersededTemplatesT&& value) { m_supersededTemplatesHasBeenSet = true; m_supersededTemplates = std::forward<SupersededTemplatesT>(value); }
    template<typename SupersededTemplatesT = Aws::Vector<Aws::String>>
    TemplateV2& WithSupersededTemplates(SupersededTemplatesT&& value) { SetSupersededTemplates(std::forward<SupersededTemplatesT>(value)); return *this;}
    template<typename SupersededTemplatesT = Aws::String>
    TemplateV2& AddSupersededTemplates(SupersededTemplatesT&& value) { m_supersededTemplatesHasBeenSet = true; m_supersededTemplates.emplace_back(std::forward<SupersededTemplatesT>(value)); return *this; }
    ///@}
  private:

    CertificateValidity m_certificateValidity;
    bool m_certificateValidityHasBeenSet = false;

    EnrollmentFlagsV2 m_enrollmentFlags;
    bool m_enrollmentFlagsHasBeenSet = false;

    ExtensionsV2 m_extensions;
    bool m_extensionsHasBeenSet = false;

    GeneralFlagsV2 m_generalFlags;
    bool m_generalFlagsHasBeenSet = false;

    PrivateKeyAttributesV2 m_privateKeyAttributes;
    bool m_privateKeyAttributesHasBeenSet = false;

    PrivateKeyFlagsV2 m_privateKeyFlags;
    bool m_privateKeyFlagsHasBeenSet = false;

    SubjectNameFlagsV2 m_subjectNameFlags;
    bool m_subjectNameFlagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_supersededTemplates;
    bool m_supersededTemplatesHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
