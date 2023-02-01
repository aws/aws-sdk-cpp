/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/Certificate.h>
#include <aws/rds/model/ResponseMetadata.h>
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
namespace RDS
{
namespace Model
{
  class ModifyCertificatesResult
  {
  public:
    AWS_RDS_API ModifyCertificatesResult();
    AWS_RDS_API ModifyCertificatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API ModifyCertificatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const Certificate& GetCertificate() const{ return m_certificate; }

    
    inline void SetCertificate(const Certificate& value) { m_certificate = value; }

    
    inline void SetCertificate(Certificate&& value) { m_certificate = std::move(value); }

    
    inline ModifyCertificatesResult& WithCertificate(const Certificate& value) { SetCertificate(value); return *this;}

    
    inline ModifyCertificatesResult& WithCertificate(Certificate&& value) { SetCertificate(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyCertificatesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyCertificatesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Certificate m_certificate;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
