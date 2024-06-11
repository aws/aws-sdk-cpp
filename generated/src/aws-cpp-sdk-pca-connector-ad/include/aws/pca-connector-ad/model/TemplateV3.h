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
    AWS_PCACONNECTORAD_API TemplateV3();
    AWS_PCACONNECTORAD_API TemplateV3(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API TemplateV3& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Certificate validity describes the validity and renewal periods of a
     * certificate.</p>
     */
    inline const CertificateValidity& GetCertificateValidity() const{ return m_certificateValidity; }
    inline bool CertificateValidityHasBeenSet() const { return m_certificateValidityHasBeenSet; }
    inline void SetCertificateValidity(const CertificateValidity& value) { m_certificateValidityHasBeenSet = true; m_certificateValidity = value; }
    inline void SetCertificateValidity(CertificateValidity&& value) { m_certificateValidityHasBeenSet = true; m_certificateValidity = std::move(value); }
    inline TemplateV3& WithCertificateValidity(const CertificateValidity& value) { SetCertificateValidity(value); return *this;}
    inline TemplateV3& WithCertificateValidity(CertificateValidity&& value) { SetCertificateValidity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enrollment flags describe the enrollment settings for certificates such as
     * using the existing private key and deleting expired or revoked certificates.</p>
     */
    inline const EnrollmentFlagsV3& GetEnrollmentFlags() const{ return m_enrollmentFlags; }
    inline bool EnrollmentFlagsHasBeenSet() const { return m_enrollmentFlagsHasBeenSet; }
    inline void SetEnrollmentFlags(const EnrollmentFlagsV3& value) { m_enrollmentFlagsHasBeenSet = true; m_enrollmentFlags = value; }
    inline void SetEnrollmentFlags(EnrollmentFlagsV3&& value) { m_enrollmentFlagsHasBeenSet = true; m_enrollmentFlags = std::move(value); }
    inline TemplateV3& WithEnrollmentFlags(const EnrollmentFlagsV3& value) { SetEnrollmentFlags(value); return *this;}
    inline TemplateV3& WithEnrollmentFlags(EnrollmentFlagsV3&& value) { SetEnrollmentFlags(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Extensions describe the key usage extensions and application policies for a
     * template.</p>
     */
    inline const ExtensionsV3& GetExtensions() const{ return m_extensions; }
    inline bool ExtensionsHasBeenSet() const { return m_extensionsHasBeenSet; }
    inline void SetExtensions(const ExtensionsV3& value) { m_extensionsHasBeenSet = true; m_extensions = value; }
    inline void SetExtensions(ExtensionsV3&& value) { m_extensionsHasBeenSet = true; m_extensions = std::move(value); }
    inline TemplateV3& WithExtensions(const ExtensionsV3& value) { SetExtensions(value); return *this;}
    inline TemplateV3& WithExtensions(ExtensionsV3&& value) { SetExtensions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>General flags describe whether the template is used for computers or users
     * and if the template can be used with autoenrollment.</p>
     */
    inline const GeneralFlagsV3& GetGeneralFlags() const{ return m_generalFlags; }
    inline bool GeneralFlagsHasBeenSet() const { return m_generalFlagsHasBeenSet; }
    inline void SetGeneralFlags(const GeneralFlagsV3& value) { m_generalFlagsHasBeenSet = true; m_generalFlags = value; }
    inline void SetGeneralFlags(GeneralFlagsV3&& value) { m_generalFlagsHasBeenSet = true; m_generalFlags = std::move(value); }
    inline TemplateV3& WithGeneralFlags(const GeneralFlagsV3& value) { SetGeneralFlags(value); return *this;}
    inline TemplateV3& WithGeneralFlags(GeneralFlagsV3&& value) { SetGeneralFlags(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the hash algorithm used to hash the private key.</p>
     */
    inline const HashAlgorithm& GetHashAlgorithm() const{ return m_hashAlgorithm; }
    inline bool HashAlgorithmHasBeenSet() const { return m_hashAlgorithmHasBeenSet; }
    inline void SetHashAlgorithm(const HashAlgorithm& value) { m_hashAlgorithmHasBeenSet = true; m_hashAlgorithm = value; }
    inline void SetHashAlgorithm(HashAlgorithm&& value) { m_hashAlgorithmHasBeenSet = true; m_hashAlgorithm = std::move(value); }
    inline TemplateV3& WithHashAlgorithm(const HashAlgorithm& value) { SetHashAlgorithm(value); return *this;}
    inline TemplateV3& WithHashAlgorithm(HashAlgorithm&& value) { SetHashAlgorithm(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Private key attributes allow you to specify the algorithm, minimal key
     * length, key spec, key usage, and cryptographic providers for the private key of
     * a certificate for v3 templates. V3 templates allow you to use Key Storage
     * Providers.</p>
     */
    inline const PrivateKeyAttributesV3& GetPrivateKeyAttributes() const{ return m_privateKeyAttributes; }
    inline bool PrivateKeyAttributesHasBeenSet() const { return m_privateKeyAttributesHasBeenSet; }
    inline void SetPrivateKeyAttributes(const PrivateKeyAttributesV3& value) { m_privateKeyAttributesHasBeenSet = true; m_privateKeyAttributes = value; }
    inline void SetPrivateKeyAttributes(PrivateKeyAttributesV3&& value) { m_privateKeyAttributesHasBeenSet = true; m_privateKeyAttributes = std::move(value); }
    inline TemplateV3& WithPrivateKeyAttributes(const PrivateKeyAttributesV3& value) { SetPrivateKeyAttributes(value); return *this;}
    inline TemplateV3& WithPrivateKeyAttributes(PrivateKeyAttributesV3&& value) { SetPrivateKeyAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Private key flags for v3 templates specify the client compatibility, if the
     * private key can be exported, if user input is required when using a private key,
     * and if an alternate signature algorithm should be used.</p>
     */
    inline const PrivateKeyFlagsV3& GetPrivateKeyFlags() const{ return m_privateKeyFlags; }
    inline bool PrivateKeyFlagsHasBeenSet() const { return m_privateKeyFlagsHasBeenSet; }
    inline void SetPrivateKeyFlags(const PrivateKeyFlagsV3& value) { m_privateKeyFlagsHasBeenSet = true; m_privateKeyFlags = value; }
    inline void SetPrivateKeyFlags(PrivateKeyFlagsV3&& value) { m_privateKeyFlagsHasBeenSet = true; m_privateKeyFlags = std::move(value); }
    inline TemplateV3& WithPrivateKeyFlags(const PrivateKeyFlagsV3& value) { SetPrivateKeyFlags(value); return *this;}
    inline TemplateV3& WithPrivateKeyFlags(PrivateKeyFlagsV3&& value) { SetPrivateKeyFlags(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Subject name flags describe the subject name and subject alternate name that
     * is included in a certificate.</p>
     */
    inline const SubjectNameFlagsV3& GetSubjectNameFlags() const{ return m_subjectNameFlags; }
    inline bool SubjectNameFlagsHasBeenSet() const { return m_subjectNameFlagsHasBeenSet; }
    inline void SetSubjectNameFlags(const SubjectNameFlagsV3& value) { m_subjectNameFlagsHasBeenSet = true; m_subjectNameFlags = value; }
    inline void SetSubjectNameFlags(SubjectNameFlagsV3&& value) { m_subjectNameFlagsHasBeenSet = true; m_subjectNameFlags = std::move(value); }
    inline TemplateV3& WithSubjectNameFlags(const SubjectNameFlagsV3& value) { SetSubjectNameFlags(value); return *this;}
    inline TemplateV3& WithSubjectNameFlags(SubjectNameFlagsV3&& value) { SetSubjectNameFlags(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of templates in Active Directory that are superseded by this
     * template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupersededTemplates() const{ return m_supersededTemplates; }
    inline bool SupersededTemplatesHasBeenSet() const { return m_supersededTemplatesHasBeenSet; }
    inline void SetSupersededTemplates(const Aws::Vector<Aws::String>& value) { m_supersededTemplatesHasBeenSet = true; m_supersededTemplates = value; }
    inline void SetSupersededTemplates(Aws::Vector<Aws::String>&& value) { m_supersededTemplatesHasBeenSet = true; m_supersededTemplates = std::move(value); }
    inline TemplateV3& WithSupersededTemplates(const Aws::Vector<Aws::String>& value) { SetSupersededTemplates(value); return *this;}
    inline TemplateV3& WithSupersededTemplates(Aws::Vector<Aws::String>&& value) { SetSupersededTemplates(std::move(value)); return *this;}
    inline TemplateV3& AddSupersededTemplates(const Aws::String& value) { m_supersededTemplatesHasBeenSet = true; m_supersededTemplates.push_back(value); return *this; }
    inline TemplateV3& AddSupersededTemplates(Aws::String&& value) { m_supersededTemplatesHasBeenSet = true; m_supersededTemplates.push_back(std::move(value)); return *this; }
    inline TemplateV3& AddSupersededTemplates(const char* value) { m_supersededTemplatesHasBeenSet = true; m_supersededTemplates.push_back(value); return *this; }
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

    HashAlgorithm m_hashAlgorithm;
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
