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
    AWS_ROLESANYWHERE_API SourceData() = default;
    AWS_ROLESANYWHERE_API SourceData(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API SourceData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The root certificate of the Private Certificate Authority specified by this
     * ARN is used in trust validation for temporary credential requests. Included for
     * trust anchors of type <code>AWS_ACM_PCA</code>. </p>
     */
    inline const Aws::String& GetAcmPcaArn() const { return m_acmPcaArn; }
    inline bool AcmPcaArnHasBeenSet() const { return m_acmPcaArnHasBeenSet; }
    template<typename AcmPcaArnT = Aws::String>
    void SetAcmPcaArn(AcmPcaArnT&& value) { m_acmPcaArnHasBeenSet = true; m_acmPcaArn = std::forward<AcmPcaArnT>(value); }
    template<typename AcmPcaArnT = Aws::String>
    SourceData& WithAcmPcaArn(AcmPcaArnT&& value) { SetAcmPcaArn(std::forward<AcmPcaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The PEM-encoded data for the certificate anchor. Included for trust anchors
     * of type <code>CERTIFICATE_BUNDLE</code>. </p>
     */
    inline const Aws::String& GetX509CertificateData() const { return m_x509CertificateData; }
    inline bool X509CertificateDataHasBeenSet() const { return m_x509CertificateDataHasBeenSet; }
    template<typename X509CertificateDataT = Aws::String>
    void SetX509CertificateData(X509CertificateDataT&& value) { m_x509CertificateDataHasBeenSet = true; m_x509CertificateData = std::forward<X509CertificateDataT>(value); }
    template<typename X509CertificateDataT = Aws::String>
    SourceData& WithX509CertificateData(X509CertificateDataT&& value) { SetX509CertificateData(std::forward<X509CertificateDataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_acmPcaArn;
    bool m_acmPcaArnHasBeenSet = false;

    Aws::String m_x509CertificateData;
    bool m_x509CertificateDataHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
