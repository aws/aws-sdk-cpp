/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/HsmClientCertificate.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{
  class CreateHsmClientCertificateResult
  {
  public:
    AWS_REDSHIFT_API CreateHsmClientCertificateResult() = default;
    AWS_REDSHIFT_API CreateHsmClientCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API CreateHsmClientCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const HsmClientCertificate& GetHsmClientCertificate() const { return m_hsmClientCertificate; }
    template<typename HsmClientCertificateT = HsmClientCertificate>
    void SetHsmClientCertificate(HsmClientCertificateT&& value) { m_hsmClientCertificateHasBeenSet = true; m_hsmClientCertificate = std::forward<HsmClientCertificateT>(value); }
    template<typename HsmClientCertificateT = HsmClientCertificate>
    CreateHsmClientCertificateResult& WithHsmClientCertificate(HsmClientCertificateT&& value) { SetHsmClientCertificate(std::forward<HsmClientCertificateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateHsmClientCertificateResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    HsmClientCertificate m_hsmClientCertificate;
    bool m_hsmClientCertificateHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
