/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
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
namespace RolesAnywhere
{
namespace Model
{

  /**
   * <p>The data field of the trust anchor depending on its type. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/SourceData">AWS
   * API Reference</a></p>
   */
  class SourceData
  {
  public:
    AWS_ROLESANYWHERE_API SourceData();
    AWS_ROLESANYWHERE_API SourceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API SourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The root certificate of the Certificate Manager Private Certificate Authority
     * specified by this ARN is used in trust validation for <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operations. Included for trust anchors of type <code>AWS_ACM_PCA</code>. </p>
     */
    inline const Aws::String& GetAcmPcaArn() const{ return m_acmPcaArn; }

    /**
     * <p>The root certificate of the Certificate Manager Private Certificate Authority
     * specified by this ARN is used in trust validation for <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operations. Included for trust anchors of type <code>AWS_ACM_PCA</code>. </p>
     */
    inline bool AcmPcaArnHasBeenSet() const { return m_acmPcaArnHasBeenSet; }

    /**
     * <p>The root certificate of the Certificate Manager Private Certificate Authority
     * specified by this ARN is used in trust validation for <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operations. Included for trust anchors of type <code>AWS_ACM_PCA</code>. </p>
     */
    inline void SetAcmPcaArn(const Aws::String& value) { m_acmPcaArnHasBeenSet = true; m_acmPcaArn = value; }

    /**
     * <p>The root certificate of the Certificate Manager Private Certificate Authority
     * specified by this ARN is used in trust validation for <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operations. Included for trust anchors of type <code>AWS_ACM_PCA</code>. </p>
     */
    inline void SetAcmPcaArn(Aws::String&& value) { m_acmPcaArnHasBeenSet = true; m_acmPcaArn = std::move(value); }

    /**
     * <p>The root certificate of the Certificate Manager Private Certificate Authority
     * specified by this ARN is used in trust validation for <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operations. Included for trust anchors of type <code>AWS_ACM_PCA</code>. </p>
     */
    inline void SetAcmPcaArn(const char* value) { m_acmPcaArnHasBeenSet = true; m_acmPcaArn.assign(value); }

    /**
     * <p>The root certificate of the Certificate Manager Private Certificate Authority
     * specified by this ARN is used in trust validation for <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operations. Included for trust anchors of type <code>AWS_ACM_PCA</code>. </p>
     */
    inline SourceData& WithAcmPcaArn(const Aws::String& value) { SetAcmPcaArn(value); return *this;}

    /**
     * <p>The root certificate of the Certificate Manager Private Certificate Authority
     * specified by this ARN is used in trust validation for <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operations. Included for trust anchors of type <code>AWS_ACM_PCA</code>. </p>
     */
    inline SourceData& WithAcmPcaArn(Aws::String&& value) { SetAcmPcaArn(std::move(value)); return *this;}

    /**
     * <p>The root certificate of the Certificate Manager Private Certificate Authority
     * specified by this ARN is used in trust validation for <a
     * href="https://docs.aws.amazon.com/rolesanywhere/latest/APIReference/API_CreateSession.html">CreateSession</a>
     * operations. Included for trust anchors of type <code>AWS_ACM_PCA</code>. </p>
     */
    inline SourceData& WithAcmPcaArn(const char* value) { SetAcmPcaArn(value); return *this;}


    /**
     * <p>The PEM-encoded data for the certificate anchor. Included for trust anchors
     * of type <code>CERTIFICATE_BUNDLE</code>. </p>
     */
    inline const Aws::String& GetX509CertificateData() const{ return m_x509CertificateData; }

    /**
     * <p>The PEM-encoded data for the certificate anchor. Included for trust anchors
     * of type <code>CERTIFICATE_BUNDLE</code>. </p>
     */
    inline bool X509CertificateDataHasBeenSet() const { return m_x509CertificateDataHasBeenSet; }

    /**
     * <p>The PEM-encoded data for the certificate anchor. Included for trust anchors
     * of type <code>CERTIFICATE_BUNDLE</code>. </p>
     */
    inline void SetX509CertificateData(const Aws::String& value) { m_x509CertificateDataHasBeenSet = true; m_x509CertificateData = value; }

    /**
     * <p>The PEM-encoded data for the certificate anchor. Included for trust anchors
     * of type <code>CERTIFICATE_BUNDLE</code>. </p>
     */
    inline void SetX509CertificateData(Aws::String&& value) { m_x509CertificateDataHasBeenSet = true; m_x509CertificateData = std::move(value); }

    /**
     * <p>The PEM-encoded data for the certificate anchor. Included for trust anchors
     * of type <code>CERTIFICATE_BUNDLE</code>. </p>
     */
    inline void SetX509CertificateData(const char* value) { m_x509CertificateDataHasBeenSet = true; m_x509CertificateData.assign(value); }

    /**
     * <p>The PEM-encoded data for the certificate anchor. Included for trust anchors
     * of type <code>CERTIFICATE_BUNDLE</code>. </p>
     */
    inline SourceData& WithX509CertificateData(const Aws::String& value) { SetX509CertificateData(value); return *this;}

    /**
     * <p>The PEM-encoded data for the certificate anchor. Included for trust anchors
     * of type <code>CERTIFICATE_BUNDLE</code>. </p>
     */
    inline SourceData& WithX509CertificateData(Aws::String&& value) { SetX509CertificateData(std::move(value)); return *this;}

    /**
     * <p>The PEM-encoded data for the certificate anchor. Included for trust anchors
     * of type <code>CERTIFICATE_BUNDLE</code>. </p>
     */
    inline SourceData& WithX509CertificateData(const char* value) { SetX509CertificateData(value); return *this;}

  private:

    Aws::String m_acmPcaArn;
    bool m_acmPcaArnHasBeenSet = false;

    Aws::String m_x509CertificateData;
    bool m_x509CertificateDataHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
