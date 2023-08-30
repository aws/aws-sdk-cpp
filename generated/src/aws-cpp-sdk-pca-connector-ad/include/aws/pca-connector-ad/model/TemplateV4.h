/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/CertificateValidity.h>
#include <aws/pca-connector-ad/model/EnrollmentFlagsV4.h>
#include <aws/pca-connector-ad/model/ExtensionsV4.h>
#include <aws/pca-connector-ad/model/GeneralFlagsV4.h>
#include <aws/pca-connector-ad/model/HashAlgorithm.h>
#include <aws/pca-connector-ad/model/PrivateKeyAttributesV4.h>
#include <aws/pca-connector-ad/model/PrivateKeyFlagsV4.h>
#include <aws/pca-connector-ad/model/SubjectNameFlagsV4.h>
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
   * <p>v4 template schema that can use either Legacy Cryptographic Providers or Key
   * Storage Providers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/TemplateV4">AWS
   * API Reference</a></p>
   */
  class TemplateV4
  {
  public:
    AWS_PCACONNECTORAD_API TemplateV4();
    AWS_PCACONNECTORAD_API TemplateV4(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API TemplateV4& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Certificate validity describes the validity and renewal periods of a
     * certificate.</p>
     */
    inline const CertificateValidity& GetCertificateValidity() const{ return m_certificateValidity; }

    /**
     * <p>Certificate validity describes the validity and renewal periods of a
     * certificate.</p>
     */
    inline bool CertificateValidityHasBeenSet() const { return m_certificateValidityHasBeenSet; }

    /**
     * <p>Certificate validity describes the validity and renewal periods of a
     * certificate.</p>
     */
    inline void SetCertificateValidity(const CertificateValidity& value) { m_certificateValidityHasBeenSet = true; m_certificateValidity = value; }

    /**
     * <p>Certificate validity describes the validity and renewal periods of a
     * certificate.</p>
     */
    inline void SetCertificateValidity(CertificateValidity&& value) { m_certificateValidityHasBeenSet = true; m_certificateValidity = std::move(value); }

    /**
     * <p>Certificate validity describes the validity and renewal periods of a
     * certificate.</p>
     */
    inline TemplateV4& WithCertificateValidity(const CertificateValidity& value) { SetCertificateValidity(value); return *this;}

    /**
     * <p>Certificate validity describes the validity and renewal periods of a
     * certificate.</p>
     */
    inline TemplateV4& WithCertificateValidity(CertificateValidity&& value) { SetCertificateValidity(std::move(value)); return *this;}


    /**
     * <p>Enrollment flags describe the enrollment settings for certificates using the
     * existing private key and deleting expired or revoked certificates.</p>
     */
    inline const EnrollmentFlagsV4& GetEnrollmentFlags() const{ return m_enrollmentFlags; }

    /**
     * <p>Enrollment flags describe the enrollment settings for certificates using the
     * existing private key and deleting expired or revoked certificates.</p>
     */
    inline bool EnrollmentFlagsHasBeenSet() const { return m_enrollmentFlagsHasBeenSet; }

    /**
     * <p>Enrollment flags describe the enrollment settings for certificates using the
     * existing private key and deleting expired or revoked certificates.</p>
     */
    inline void SetEnrollmentFlags(const EnrollmentFlagsV4& value) { m_enrollmentFlagsHasBeenSet = true; m_enrollmentFlags = value; }

    /**
     * <p>Enrollment flags describe the enrollment settings for certificates using the
     * existing private key and deleting expired or revoked certificates.</p>
     */
    inline void SetEnrollmentFlags(EnrollmentFlagsV4&& value) { m_enrollmentFlagsHasBeenSet = true; m_enrollmentFlags = std::move(value); }

    /**
     * <p>Enrollment flags describe the enrollment settings for certificates using the
     * existing private key and deleting expired or revoked certificates.</p>
     */
    inline TemplateV4& WithEnrollmentFlags(const EnrollmentFlagsV4& value) { SetEnrollmentFlags(value); return *this;}

    /**
     * <p>Enrollment flags describe the enrollment settings for certificates using the
     * existing private key and deleting expired or revoked certificates.</p>
     */
    inline TemplateV4& WithEnrollmentFlags(EnrollmentFlagsV4&& value) { SetEnrollmentFlags(std::move(value)); return *this;}


    /**
     * <p>Extensions describe the key usage extensions and application policies for a
     * template.</p>
     */
    inline const ExtensionsV4& GetExtensions() const{ return m_extensions; }

    /**
     * <p>Extensions describe the key usage extensions and application policies for a
     * template.</p>
     */
    inline bool ExtensionsHasBeenSet() const { return m_extensionsHasBeenSet; }

    /**
     * <p>Extensions describe the key usage extensions and application policies for a
     * template.</p>
     */
    inline void SetExtensions(const ExtensionsV4& value) { m_extensionsHasBeenSet = true; m_extensions = value; }

    /**
     * <p>Extensions describe the key usage extensions and application policies for a
     * template.</p>
     */
    inline void SetExtensions(ExtensionsV4&& value) { m_extensionsHasBeenSet = true; m_extensions = std::move(value); }

    /**
     * <p>Extensions describe the key usage extensions and application policies for a
     * template.</p>
     */
    inline TemplateV4& WithExtensions(const ExtensionsV4& value) { SetExtensions(value); return *this;}

    /**
     * <p>Extensions describe the key usage extensions and application policies for a
     * template.</p>
     */
    inline TemplateV4& WithExtensions(ExtensionsV4&& value) { SetExtensions(std::move(value)); return *this;}


    /**
     * <p>General flags describe whether the template is used for computers or users
     * and if the template can be used with autoenrollment.</p>
     */
    inline const GeneralFlagsV4& GetGeneralFlags() const{ return m_generalFlags; }

    /**
     * <p>General flags describe whether the template is used for computers or users
     * and if the template can be used with autoenrollment.</p>
     */
    inline bool GeneralFlagsHasBeenSet() const { return m_generalFlagsHasBeenSet; }

    /**
     * <p>General flags describe whether the template is used for computers or users
     * and if the template can be used with autoenrollment.</p>
     */
    inline void SetGeneralFlags(const GeneralFlagsV4& value) { m_generalFlagsHasBeenSet = true; m_generalFlags = value; }

    /**
     * <p>General flags describe whether the template is used for computers or users
     * and if the template can be used with autoenrollment.</p>
     */
    inline void SetGeneralFlags(GeneralFlagsV4&& value) { m_generalFlagsHasBeenSet = true; m_generalFlags = std::move(value); }

    /**
     * <p>General flags describe whether the template is used for computers or users
     * and if the template can be used with autoenrollment.</p>
     */
    inline TemplateV4& WithGeneralFlags(const GeneralFlagsV4& value) { SetGeneralFlags(value); return *this;}

    /**
     * <p>General flags describe whether the template is used for computers or users
     * and if the template can be used with autoenrollment.</p>
     */
    inline TemplateV4& WithGeneralFlags(GeneralFlagsV4&& value) { SetGeneralFlags(std::move(value)); return *this;}


    /**
     * <p>Specifies the hash algorithm used to hash the private key. Hash algorithm can
     * only be specified when using Key Storage Providers.</p>
     */
    inline const HashAlgorithm& GetHashAlgorithm() const{ return m_hashAlgorithm; }

    /**
     * <p>Specifies the hash algorithm used to hash the private key. Hash algorithm can
     * only be specified when using Key Storage Providers.</p>
     */
    inline bool HashAlgorithmHasBeenSet() const { return m_hashAlgorithmHasBeenSet; }

    /**
     * <p>Specifies the hash algorithm used to hash the private key. Hash algorithm can
     * only be specified when using Key Storage Providers.</p>
     */
    inline void SetHashAlgorithm(const HashAlgorithm& value) { m_hashAlgorithmHasBeenSet = true; m_hashAlgorithm = value; }

    /**
     * <p>Specifies the hash algorithm used to hash the private key. Hash algorithm can
     * only be specified when using Key Storage Providers.</p>
     */
    inline void SetHashAlgorithm(HashAlgorithm&& value) { m_hashAlgorithmHasBeenSet = true; m_hashAlgorithm = std::move(value); }

    /**
     * <p>Specifies the hash algorithm used to hash the private key. Hash algorithm can
     * only be specified when using Key Storage Providers.</p>
     */
    inline TemplateV4& WithHashAlgorithm(const HashAlgorithm& value) { SetHashAlgorithm(value); return *this;}

    /**
     * <p>Specifies the hash algorithm used to hash the private key. Hash algorithm can
     * only be specified when using Key Storage Providers.</p>
     */
    inline TemplateV4& WithHashAlgorithm(HashAlgorithm&& value) { SetHashAlgorithm(std::move(value)); return *this;}


    /**
     * <p>Private key attributes allow you to specify the minimal key length, key spec,
     * key usage, and cryptographic providers for the private key of a certificate for
     * v4 templates. V4 templates allow you to use either Key Storage Providers or
     * Legacy Cryptographic Service Providers. You specify the cryptography provider
     * category in private key flags.</p>
     */
    inline const PrivateKeyAttributesV4& GetPrivateKeyAttributes() const{ return m_privateKeyAttributes; }

    /**
     * <p>Private key attributes allow you to specify the minimal key length, key spec,
     * key usage, and cryptographic providers for the private key of a certificate for
     * v4 templates. V4 templates allow you to use either Key Storage Providers or
     * Legacy Cryptographic Service Providers. You specify the cryptography provider
     * category in private key flags.</p>
     */
    inline bool PrivateKeyAttributesHasBeenSet() const { return m_privateKeyAttributesHasBeenSet; }

    /**
     * <p>Private key attributes allow you to specify the minimal key length, key spec,
     * key usage, and cryptographic providers for the private key of a certificate for
     * v4 templates. V4 templates allow you to use either Key Storage Providers or
     * Legacy Cryptographic Service Providers. You specify the cryptography provider
     * category in private key flags.</p>
     */
    inline void SetPrivateKeyAttributes(const PrivateKeyAttributesV4& value) { m_privateKeyAttributesHasBeenSet = true; m_privateKeyAttributes = value; }

    /**
     * <p>Private key attributes allow you to specify the minimal key length, key spec,
     * key usage, and cryptographic providers for the private key of a certificate for
     * v4 templates. V4 templates allow you to use either Key Storage Providers or
     * Legacy Cryptographic Service Providers. You specify the cryptography provider
     * category in private key flags.</p>
     */
    inline void SetPrivateKeyAttributes(PrivateKeyAttributesV4&& value) { m_privateKeyAttributesHasBeenSet = true; m_privateKeyAttributes = std::move(value); }

    /**
     * <p>Private key attributes allow you to specify the minimal key length, key spec,
     * key usage, and cryptographic providers for the private key of a certificate for
     * v4 templates. V4 templates allow you to use either Key Storage Providers or
     * Legacy Cryptographic Service Providers. You specify the cryptography provider
     * category in private key flags.</p>
     */
    inline TemplateV4& WithPrivateKeyAttributes(const PrivateKeyAttributesV4& value) { SetPrivateKeyAttributes(value); return *this;}

    /**
     * <p>Private key attributes allow you to specify the minimal key length, key spec,
     * key usage, and cryptographic providers for the private key of a certificate for
     * v4 templates. V4 templates allow you to use either Key Storage Providers or
     * Legacy Cryptographic Service Providers. You specify the cryptography provider
     * category in private key flags.</p>
     */
    inline TemplateV4& WithPrivateKeyAttributes(PrivateKeyAttributesV4&& value) { SetPrivateKeyAttributes(std::move(value)); return *this;}


    /**
     * <p>Private key flags for v4 templates specify the client compatibility, if the
     * private key can be exported, if user input is required when using a private key,
     * if an alternate signature algorithm should be used, and if certificates are
     * renewed using the same private key.</p>
     */
    inline const PrivateKeyFlagsV4& GetPrivateKeyFlags() const{ return m_privateKeyFlags; }

    /**
     * <p>Private key flags for v4 templates specify the client compatibility, if the
     * private key can be exported, if user input is required when using a private key,
     * if an alternate signature algorithm should be used, and if certificates are
     * renewed using the same private key.</p>
     */
    inline bool PrivateKeyFlagsHasBeenSet() const { return m_privateKeyFlagsHasBeenSet; }

    /**
     * <p>Private key flags for v4 templates specify the client compatibility, if the
     * private key can be exported, if user input is required when using a private key,
     * if an alternate signature algorithm should be used, and if certificates are
     * renewed using the same private key.</p>
     */
    inline void SetPrivateKeyFlags(const PrivateKeyFlagsV4& value) { m_privateKeyFlagsHasBeenSet = true; m_privateKeyFlags = value; }

    /**
     * <p>Private key flags for v4 templates specify the client compatibility, if the
     * private key can be exported, if user input is required when using a private key,
     * if an alternate signature algorithm should be used, and if certificates are
     * renewed using the same private key.</p>
     */
    inline void SetPrivateKeyFlags(PrivateKeyFlagsV4&& value) { m_privateKeyFlagsHasBeenSet = true; m_privateKeyFlags = std::move(value); }

    /**
     * <p>Private key flags for v4 templates specify the client compatibility, if the
     * private key can be exported, if user input is required when using a private key,
     * if an alternate signature algorithm should be used, and if certificates are
     * renewed using the same private key.</p>
     */
    inline TemplateV4& WithPrivateKeyFlags(const PrivateKeyFlagsV4& value) { SetPrivateKeyFlags(value); return *this;}

    /**
     * <p>Private key flags for v4 templates specify the client compatibility, if the
     * private key can be exported, if user input is required when using a private key,
     * if an alternate signature algorithm should be used, and if certificates are
     * renewed using the same private key.</p>
     */
    inline TemplateV4& WithPrivateKeyFlags(PrivateKeyFlagsV4&& value) { SetPrivateKeyFlags(std::move(value)); return *this;}


    /**
     * <p>Subject name flags describe the subject name and subject alternate name that
     * is included in a certificate.</p>
     */
    inline const SubjectNameFlagsV4& GetSubjectNameFlags() const{ return m_subjectNameFlags; }

    /**
     * <p>Subject name flags describe the subject name and subject alternate name that
     * is included in a certificate.</p>
     */
    inline bool SubjectNameFlagsHasBeenSet() const { return m_subjectNameFlagsHasBeenSet; }

    /**
     * <p>Subject name flags describe the subject name and subject alternate name that
     * is included in a certificate.</p>
     */
    inline void SetSubjectNameFlags(const SubjectNameFlagsV4& value) { m_subjectNameFlagsHasBeenSet = true; m_subjectNameFlags = value; }

    /**
     * <p>Subject name flags describe the subject name and subject alternate name that
     * is included in a certificate.</p>
     */
    inline void SetSubjectNameFlags(SubjectNameFlagsV4&& value) { m_subjectNameFlagsHasBeenSet = true; m_subjectNameFlags = std::move(value); }

    /**
     * <p>Subject name flags describe the subject name and subject alternate name that
     * is included in a certificate.</p>
     */
    inline TemplateV4& WithSubjectNameFlags(const SubjectNameFlagsV4& value) { SetSubjectNameFlags(value); return *this;}

    /**
     * <p>Subject name flags describe the subject name and subject alternate name that
     * is included in a certificate.</p>
     */
    inline TemplateV4& WithSubjectNameFlags(SubjectNameFlagsV4&& value) { SetSubjectNameFlags(std::move(value)); return *this;}


    /**
     * <p>List of templates in Active Directory that are superseded by this
     * template.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupersededTemplates() const{ return m_supersededTemplates; }

    /**
     * <p>List of templates in Active Directory that are superseded by this
     * template.</p>
     */
    inline bool SupersededTemplatesHasBeenSet() const { return m_supersededTemplatesHasBeenSet; }

    /**
     * <p>List of templates in Active Directory that are superseded by this
     * template.</p>
     */
    inline void SetSupersededTemplates(const Aws::Vector<Aws::String>& value) { m_supersededTemplatesHasBeenSet = true; m_supersededTemplates = value; }

    /**
     * <p>List of templates in Active Directory that are superseded by this
     * template.</p>
     */
    inline void SetSupersededTemplates(Aws::Vector<Aws::String>&& value) { m_supersededTemplatesHasBeenSet = true; m_supersededTemplates = std::move(value); }

    /**
     * <p>List of templates in Active Directory that are superseded by this
     * template.</p>
     */
    inline TemplateV4& WithSupersededTemplates(const Aws::Vector<Aws::String>& value) { SetSupersededTemplates(value); return *this;}

    /**
     * <p>List of templates in Active Directory that are superseded by this
     * template.</p>
     */
    inline TemplateV4& WithSupersededTemplates(Aws::Vector<Aws::String>&& value) { SetSupersededTemplates(std::move(value)); return *this;}

    /**
     * <p>List of templates in Active Directory that are superseded by this
     * template.</p>
     */
    inline TemplateV4& AddSupersededTemplates(const Aws::String& value) { m_supersededTemplatesHasBeenSet = true; m_supersededTemplates.push_back(value); return *this; }

    /**
     * <p>List of templates in Active Directory that are superseded by this
     * template.</p>
     */
    inline TemplateV4& AddSupersededTemplates(Aws::String&& value) { m_supersededTemplatesHasBeenSet = true; m_supersededTemplates.push_back(std::move(value)); return *this; }

    /**
     * <p>List of templates in Active Directory that are superseded by this
     * template.</p>
     */
    inline TemplateV4& AddSupersededTemplates(const char* value) { m_supersededTemplatesHasBeenSet = true; m_supersededTemplates.push_back(value); return *this; }

  private:

    CertificateValidity m_certificateValidity;
    bool m_certificateValidityHasBeenSet = false;

    EnrollmentFlagsV4 m_enrollmentFlags;
    bool m_enrollmentFlagsHasBeenSet = false;

    ExtensionsV4 m_extensions;
    bool m_extensionsHasBeenSet = false;

    GeneralFlagsV4 m_generalFlags;
    bool m_generalFlagsHasBeenSet = false;

    HashAlgorithm m_hashAlgorithm;
    bool m_hashAlgorithmHasBeenSet = false;

    PrivateKeyAttributesV4 m_privateKeyAttributes;
    bool m_privateKeyAttributesHasBeenSet = false;

    PrivateKeyFlagsV4 m_privateKeyFlags;
    bool m_privateKeyFlagsHasBeenSet = false;

    SubjectNameFlagsV4 m_subjectNameFlags;
    bool m_subjectNameFlagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_supersededTemplates;
    bool m_supersededTemplatesHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
