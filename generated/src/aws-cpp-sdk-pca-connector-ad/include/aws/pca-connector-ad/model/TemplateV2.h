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
    AWS_PCACONNECTORAD_API TemplateV2();
    AWS_PCACONNECTORAD_API TemplateV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API TemplateV2& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline TemplateV2& WithCertificateValidity(const CertificateValidity& value) { SetCertificateValidity(value); return *this;}

    /**
     * <p>Certificate validity describes the validity and renewal periods of a
     * certificate.</p>
     */
    inline TemplateV2& WithCertificateValidity(CertificateValidity&& value) { SetCertificateValidity(std::move(value)); return *this;}


    /**
     * <p>Enrollment flags describe the enrollment settings for certificates such as
     * using the existing private key and deleting expired or revoked certificates.</p>
     */
    inline const EnrollmentFlagsV2& GetEnrollmentFlags() const{ return m_enrollmentFlags; }

    /**
     * <p>Enrollment flags describe the enrollment settings for certificates such as
     * using the existing private key and deleting expired or revoked certificates.</p>
     */
    inline bool EnrollmentFlagsHasBeenSet() const { return m_enrollmentFlagsHasBeenSet; }

    /**
     * <p>Enrollment flags describe the enrollment settings for certificates such as
     * using the existing private key and deleting expired or revoked certificates.</p>
     */
    inline void SetEnrollmentFlags(const EnrollmentFlagsV2& value) { m_enrollmentFlagsHasBeenSet = true; m_enrollmentFlags = value; }

    /**
     * <p>Enrollment flags describe the enrollment settings for certificates such as
     * using the existing private key and deleting expired or revoked certificates.</p>
     */
    inline void SetEnrollmentFlags(EnrollmentFlagsV2&& value) { m_enrollmentFlagsHasBeenSet = true; m_enrollmentFlags = std::move(value); }

    /**
     * <p>Enrollment flags describe the enrollment settings for certificates such as
     * using the existing private key and deleting expired or revoked certificates.</p>
     */
    inline TemplateV2& WithEnrollmentFlags(const EnrollmentFlagsV2& value) { SetEnrollmentFlags(value); return *this;}

    /**
     * <p>Enrollment flags describe the enrollment settings for certificates such as
     * using the existing private key and deleting expired or revoked certificates.</p>
     */
    inline TemplateV2& WithEnrollmentFlags(EnrollmentFlagsV2&& value) { SetEnrollmentFlags(std::move(value)); return *this;}


    /**
     * <p>Extensions describe the key usage extensions and application policies for a
     * template.</p>
     */
    inline const ExtensionsV2& GetExtensions() const{ return m_extensions; }

    /**
     * <p>Extensions describe the key usage extensions and application policies for a
     * template.</p>
     */
    inline bool ExtensionsHasBeenSet() const { return m_extensionsHasBeenSet; }

    /**
     * <p>Extensions describe the key usage extensions and application policies for a
     * template.</p>
     */
    inline void SetExtensions(const ExtensionsV2& value) { m_extensionsHasBeenSet = true; m_extensions = value; }

    /**
     * <p>Extensions describe the key usage extensions and application policies for a
     * template.</p>
     */
    inline void SetExtensions(ExtensionsV2&& value) { m_extensionsHasBeenSet = true; m_extensions = std::move(value); }

    /**
     * <p>Extensions describe the key usage extensions and application policies for a
     * template.</p>
     */
    inline TemplateV2& WithExtensions(const ExtensionsV2& value) { SetExtensions(value); return *this;}

    /**
     * <p>Extensions describe the key usage extensions and application policies for a
     * template.</p>
     */
    inline TemplateV2& WithExtensions(ExtensionsV2&& value) { SetExtensions(std::move(value)); return *this;}


    /**
     * <p>General flags describe whether the template is used for computers or users
     * and if the template can be used with autoenrollment.</p>
     */
    inline const GeneralFlagsV2& GetGeneralFlags() const{ return m_generalFlags; }

    /**
     * <p>General flags describe whether the template is used for computers or users
     * and if the template can be used with autoenrollment.</p>
     */
    inline bool GeneralFlagsHasBeenSet() const { return m_generalFlagsHasBeenSet; }

    /**
     * <p>General flags describe whether the template is used for computers or users
     * and if the template can be used with autoenrollment.</p>
     */
    inline void SetGeneralFlags(const GeneralFlagsV2& value) { m_generalFlagsHasBeenSet = true; m_generalFlags = value; }

    /**
     * <p>General flags describe whether the template is used for computers or users
     * and if the template can be used with autoenrollment.</p>
     */
    inline void SetGeneralFlags(GeneralFlagsV2&& value) { m_generalFlagsHasBeenSet = true; m_generalFlags = std::move(value); }

    /**
     * <p>General flags describe whether the template is used for computers or users
     * and if the template can be used with autoenrollment.</p>
     */
    inline TemplateV2& WithGeneralFlags(const GeneralFlagsV2& value) { SetGeneralFlags(value); return *this;}

    /**
     * <p>General flags describe whether the template is used for computers or users
     * and if the template can be used with autoenrollment.</p>
     */
    inline TemplateV2& WithGeneralFlags(GeneralFlagsV2&& value) { SetGeneralFlags(std::move(value)); return *this;}


    /**
     * <p>Private key attributes allow you to specify the minimal key length, key spec,
     * and cryptographic providers for the private key of a certificate for v2
     * templates. V2 templates allow you to use Legacy Cryptographic Service
     * Providers.</p>
     */
    inline const PrivateKeyAttributesV2& GetPrivateKeyAttributes() const{ return m_privateKeyAttributes; }

    /**
     * <p>Private key attributes allow you to specify the minimal key length, key spec,
     * and cryptographic providers for the private key of a certificate for v2
     * templates. V2 templates allow you to use Legacy Cryptographic Service
     * Providers.</p>
     */
    inline bool PrivateKeyAttributesHasBeenSet() const { return m_privateKeyAttributesHasBeenSet; }

    /**
     * <p>Private key attributes allow you to specify the minimal key length, key spec,
     * and cryptographic providers for the private key of a certificate for v2
     * templates. V2 templates allow you to use Legacy Cryptographic Service
     * Providers.</p>
     */
    inline void SetPrivateKeyAttributes(const PrivateKeyAttributesV2& value) { m_privateKeyAttributesHasBeenSet = true; m_privateKeyAttributes = value; }

    /**
     * <p>Private key attributes allow you to specify the minimal key length, key spec,
     * and cryptographic providers for the private key of a certificate for v2
     * templates. V2 templates allow you to use Legacy Cryptographic Service
     * Providers.</p>
     */
    inline void SetPrivateKeyAttributes(PrivateKeyAttributesV2&& value) { m_privateKeyAttributesHasBeenSet = true; m_privateKeyAttributes = std::move(value); }

    /**
     * <p>Private key attributes allow you to specify the minimal key length, key spec,
     * and cryptographic providers for the private key of a certificate for v2
     * templates. V2 templates allow you to use Legacy Cryptographic Service
     * Providers.</p>
     */
    inline TemplateV2& WithPrivateKeyAttributes(const PrivateKeyAttributesV2& value) { SetPrivateKeyAttributes(value); return *this;}

    /**
     * <p>Private key attributes allow you to specify the minimal key length, key spec,
     * and cryptographic providers for the private key of a certificate for v2
     * templates. V2 templates allow you to use Legacy Cryptographic Service
     * Providers.</p>
     */
    inline TemplateV2& WithPrivateKeyAttributes(PrivateKeyAttributesV2&& value) { SetPrivateKeyAttributes(std::move(value)); return *this;}


    /**
     * <p>Private key flags for v2 templates specify the client compatibility, if the
     * private key can be exported, and if user input is required when using a private
     * key. </p>
     */
    inline const PrivateKeyFlagsV2& GetPrivateKeyFlags() const{ return m_privateKeyFlags; }

    /**
     * <p>Private key flags for v2 templates specify the client compatibility, if the
     * private key can be exported, and if user input is required when using a private
     * key. </p>
     */
    inline bool PrivateKeyFlagsHasBeenSet() const { return m_privateKeyFlagsHasBeenSet; }

    /**
     * <p>Private key flags for v2 templates specify the client compatibility, if the
     * private key can be exported, and if user input is required when using a private
     * key. </p>
     */
    inline void SetPrivateKeyFlags(const PrivateKeyFlagsV2& value) { m_privateKeyFlagsHasBeenSet = true; m_privateKeyFlags = value; }

    /**
     * <p>Private key flags for v2 templates specify the client compatibility, if the
     * private key can be exported, and if user input is required when using a private
     * key. </p>
     */
    inline void SetPrivateKeyFlags(PrivateKeyFlagsV2&& value) { m_privateKeyFlagsHasBeenSet = true; m_privateKeyFlags = std::move(value); }

    /**
     * <p>Private key flags for v2 templates specify the client compatibility, if the
     * private key can be exported, and if user input is required when using a private
     * key. </p>
     */
    inline TemplateV2& WithPrivateKeyFlags(const PrivateKeyFlagsV2& value) { SetPrivateKeyFlags(value); return *this;}

    /**
     * <p>Private key flags for v2 templates specify the client compatibility, if the
     * private key can be exported, and if user input is required when using a private
     * key. </p>
     */
    inline TemplateV2& WithPrivateKeyFlags(PrivateKeyFlagsV2&& value) { SetPrivateKeyFlags(std::move(value)); return *this;}


    /**
     * <p>Subject name flags describe the subject name and subject alternate name that
     * is included in a certificate.</p>
     */
    inline const SubjectNameFlagsV2& GetSubjectNameFlags() const{ return m_subjectNameFlags; }

    /**
     * <p>Subject name flags describe the subject name and subject alternate name that
     * is included in a certificate.</p>
     */
    inline bool SubjectNameFlagsHasBeenSet() const { return m_subjectNameFlagsHasBeenSet; }

    /**
     * <p>Subject name flags describe the subject name and subject alternate name that
     * is included in a certificate.</p>
     */
    inline void SetSubjectNameFlags(const SubjectNameFlagsV2& value) { m_subjectNameFlagsHasBeenSet = true; m_subjectNameFlags = value; }

    /**
     * <p>Subject name flags describe the subject name and subject alternate name that
     * is included in a certificate.</p>
     */
    inline void SetSubjectNameFlags(SubjectNameFlagsV2&& value) { m_subjectNameFlagsHasBeenSet = true; m_subjectNameFlags = std::move(value); }

    /**
     * <p>Subject name flags describe the subject name and subject alternate name that
     * is included in a certificate.</p>
     */
    inline TemplateV2& WithSubjectNameFlags(const SubjectNameFlagsV2& value) { SetSubjectNameFlags(value); return *this;}

    /**
     * <p>Subject name flags describe the subject name and subject alternate name that
     * is included in a certificate.</p>
     */
    inline TemplateV2& WithSubjectNameFlags(SubjectNameFlagsV2&& value) { SetSubjectNameFlags(std::move(value)); return *this;}


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
    inline TemplateV2& WithSupersededTemplates(const Aws::Vector<Aws::String>& value) { SetSupersededTemplates(value); return *this;}

    /**
     * <p>List of templates in Active Directory that are superseded by this
     * template.</p>
     */
    inline TemplateV2& WithSupersededTemplates(Aws::Vector<Aws::String>&& value) { SetSupersededTemplates(std::move(value)); return *this;}

    /**
     * <p>List of templates in Active Directory that are superseded by this
     * template.</p>
     */
    inline TemplateV2& AddSupersededTemplates(const Aws::String& value) { m_supersededTemplatesHasBeenSet = true; m_supersededTemplates.push_back(value); return *this; }

    /**
     * <p>List of templates in Active Directory that are superseded by this
     * template.</p>
     */
    inline TemplateV2& AddSupersededTemplates(Aws::String&& value) { m_supersededTemplatesHasBeenSet = true; m_supersededTemplates.push_back(std::move(value)); return *this; }

    /**
     * <p>List of templates in Active Directory that are superseded by this
     * template.</p>
     */
    inline TemplateV2& AddSupersededTemplates(const char* value) { m_supersededTemplatesHasBeenSet = true; m_supersededTemplates.push_back(value); return *this; }

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
