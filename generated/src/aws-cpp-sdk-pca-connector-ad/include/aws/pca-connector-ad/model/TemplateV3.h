/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/CertificateValidity.h>
#include <aws/pca-connector-ad/model/EnrollmentFlagsV3.h>
#include <aws/pca-connector-ad/model/ExtensionsV3.h>
#include <aws/pca-connector-ad/model/GeneralFlagsV3.h>
#include <aws/pca-connector-ad/model/HashAlgorithm.h>
#include <aws/pca-connector-ad/model/PrivateKeyAttributesV3.h>
#include <aws/pca-connector-ad/model/PrivateKeyFlagsV3.h>
#include <aws/pca-connector-ad/model/SubjectNameFlagsV3.h>
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
   * <p>v3 template schema that uses Key Storage Providers.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/TemplateV3">AWS
   * API Reference</a></p>
   */
  class TemplateV3
  {
  public:
    AWS_PCACONNECTORAD_API TemplateV3() = default;
    AWS_PCACONNECTORAD_API TemplateV3(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API TemplateV3& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    TemplateV3& WithCertificateValidity(CertificateValidityT&& value) { SetCertificateValidity(std::forward<CertificateValidityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enrollment flags describe the enrollment settings for certificates such as
     * using the existing private key and deleting expired or revoked certificates.</p>
     */
    inline const EnrollmentFlagsV3& GetEnrollmentFlags() const { return m_enrollmentFlags; }
    inline bool EnrollmentFlagsHasBeenSet() const { return m_enrollmentFlagsHasBeenSet; }
    template<typename EnrollmentFlagsT = EnrollmentFlagsV3>
    void SetEnrollmentFlags(EnrollmentFlagsT&& value) { m_enrollmentFlagsHasBeenSet = true; m_enrollmentFlags = std::forward<EnrollmentFlagsT>(value); }
    template<typename EnrollmentFlagsT = EnrollmentFlagsV3>
    TemplateV3& WithEnrollmentFlags(EnrollmentFlagsT&& value) { SetEnrollmentFlags(std::forward<EnrollmentFlagsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Extensions describe the key usage extensions and application policies for a
     * template.</p>
     */
    inline const ExtensionsV3& GetExtensions() const { return m_extensions; }
    inline bool ExtensionsHasBeenSet() const { return m_extensionsHasBeenSet; }
    template<typename ExtensionsT = ExtensionsV3>
    void SetExtensions(ExtensionsT&& value) { m_extensionsHasBeenSet = true; m_extensions = std::forward<ExtensionsT>(value); }
    template<typename ExtensionsT = ExtensionsV3>
    TemplateV3& WithExtensions(ExtensionsT&& value) { SetExtensions(std::forward<ExtensionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>General flags describe whether the template is used for computers or users
     * and if the template can be used with autoenrollment.</p>
     */
    inline const GeneralFlagsV3& GetGeneralFlags() const { return m_generalFlags; }
    inline bool GeneralFlagsHasBeenSet() const { return m_generalFlagsHasBeenSet; }
    template<typename GeneralFlagsT = GeneralFlagsV3>
    void SetGeneralFlags(GeneralFlagsT&& value) { m_generalFlagsHasBeenSet = true; m_generalFlags = std::forward<GeneralFlagsT>(value); }
    template<typename GeneralFlagsT = GeneralFlagsV3>
    TemplateV3& WithGeneralFlags(GeneralFlagsT&& value) { SetGeneralFlags(std::forward<GeneralFlagsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the hash algorithm used to hash the private key.</p>
     */
    inline HashAlgorithm GetHashAlgorithm() const { return m_hashAlgorithm; }
    inline bool HashAlgorithmHasBeenSet() const { return m_hashAlgorithmHasBeenSet; }
    inline void SetHashAlgorithm(HashAlgorithm value) { m_hashAlgorithmHasBeenSet = true; m_hashAlgorithm = value; }
    inline TemplateV3& WithHashAlgorithm(HashAlgorithm value) { SetHashAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Private key attributes allow you to specify the algorithm, minimal key
     * length, key spec, key usage, and cryptographic providers for the private key of
     * a certificate for v3 templates. V3 templates allow you to use Key Storage
     * Providers.</p>
     */
    inline const PrivateKeyAttributesV3& GetPrivateKeyAttributes() const { return m_privateKeyAttributes; }
    inline bool PrivateKeyAttributesHasBeenSet() const { return m_privateKeyAttributesHasBeenSet; }
    template<typename PrivateKeyAttributesT = PrivateKeyAttributesV3>
    void SetPrivateKeyAttributes(PrivateKeyAttributesT&& value) { m_privateKeyAttributesHasBeenSet = true; m_privateKeyAttributes = std::forward<PrivateKeyAttributesT>(value); }
    template<typename PrivateKeyAttributesT = PrivateKeyAttributesV3>
    TemplateV3& WithPrivateKeyAttributes(PrivateKeyAttributesT&& value) { SetPrivateKeyAttributes(std::forward<PrivateKeyAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Private key flags for v3 templates specify the client compatibility, if the
     * private key can be exported, if user input is required when using a private key,
     * and if an alternate signature algorithm should be used.</p>
     */
    inline const PrivateKeyFlagsV3& GetPrivateKeyFlags() const { return m_privateKeyFlags; }
    inline bool PrivateKeyFlagsHasBeenSet() const { return m_privateKeyFlagsHasBeenSet; }
    template<typename PrivateKeyFlagsT = PrivateKeyFlagsV3>
    void SetPrivateKeyFlags(PrivateKeyFlagsT&& value) { m_privateKeyFlagsHasBeenSet = true; m_privateKeyFlags = std::forward<PrivateKeyFlagsT>(value); }
    template<typename PrivateKeyFlagsT = PrivateKeyFlagsV3>
    TemplateV3& WithPrivateKeyFlags(PrivateKeyFlagsT&& value) { SetPrivateKeyFlags(std::forward<PrivateKeyFlagsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Subject name flags describe the subject name and subject alternate name that
     * is included in a certificate.</p>
     */
    inline const SubjectNameFlagsV3& GetSubjectNameFlags() const { return m_subjectNameFlags; }
    inline bool SubjectNameFlagsHasBeenSet() const { return m_subjectNameFlagsHasBeenSet; }
    template<typename SubjectNameFlagsT = SubjectNameFlagsV3>
    void SetSubjectNameFlags(SubjectNameFlagsT&& value) { m_subjectNameFlagsHasBeenSet = true; m_subjectNameFlags = std::forward<SubjectNameFlagsT>(value); }
    template<typename SubjectNameFlagsT = SubjectNameFlagsV3>
    TemplateV3& WithSubjectNameFlags(SubjectNameFlagsT&& value) { SetSubjectNameFlags(std::forward<SubjectNameFlagsT>(value)); return *this;}
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
    TemplateV3& WithSupersededTemplates(SupersededTemplatesT&& value) { SetSupersededTemplates(std::forward<SupersededTemplatesT>(value)); return *this;}
    template<typename SupersededTemplatesT = Aws::String>
    TemplateV3& AddSupersededTemplates(SupersededTemplatesT&& value) { m_supersededTemplatesHasBeenSet = true; m_supersededTemplates.emplace_back(std::forward<SupersededTemplatesT>(value)); return *this; }
    ///@}
  private:

    CertificateValidity m_certificateValidity;
    bool m_certificateValidityHasBeenSet = false;

    EnrollmentFlagsV3 m_enrollmentFlags;
    bool m_enrollmentFlagsHasBeenSet = false;

    ExtensionsV3 m_extensions;
    bool m_extensionsHasBeenSet = false;

    GeneralFlagsV3 m_generalFlags;
    bool m_generalFlagsHasBeenSet = false;

    HashAlgorithm m_hashAlgorithm{HashAlgorithm::NOT_SET};
    bool m_hashAlgorithmHasBeenSet = false;

    PrivateKeyAttributesV3 m_privateKeyAttributes;
    bool m_privateKeyAttributesHasBeenSet = false;

    PrivateKeyFlagsV3 m_privateKeyFlags;
    bool m_privateKeyFlagsHasBeenSet = false;

    SubjectNameFlagsV3 m_subjectNameFlags;
    bool m_subjectNameFlagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_supersededTemplates;
    bool m_supersededTemplatesHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
