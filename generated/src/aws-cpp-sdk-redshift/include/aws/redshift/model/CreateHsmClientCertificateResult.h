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
    AWS_REDSHIFT_API CreateHsmClientCertificateResult();
    AWS_REDSHIFT_API CreateHsmClientCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API CreateHsmClientCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const HsmClientCertificate& GetHsmClientCertificate() const{ return m_hsmClientCertificate; }

    
    inline void SetHsmClientCertificate(const HsmClientCertificate& value) { m_hsmClientCertificate = value; }

    
    inline void SetHsmClientCertificate(HsmClientCertificate&& value) { m_hsmClientCertificate = std::move(value); }

    
    inline CreateHsmClientCertificateResult& WithHsmClientCertificate(const HsmClientCertificate& value) { SetHsmClientCertificate(value); return *this;}

    
    inline CreateHsmClientCertificateResult& WithHsmClientCertificate(HsmClientCertificate&& value) { SetHsmClientCertificate(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateHsmClientCertificateResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateHsmClientCertificateResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    HsmClientCertificate m_hsmClientCertificate;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
