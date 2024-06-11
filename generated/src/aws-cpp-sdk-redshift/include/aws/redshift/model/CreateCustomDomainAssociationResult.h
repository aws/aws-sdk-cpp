/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateCustomDomainAssociationResult
  {
  public:
    AWS_REDSHIFT_API CreateCustomDomainAssociationResult();
    AWS_REDSHIFT_API CreateCustomDomainAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API CreateCustomDomainAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The custom domain name for the association result.</p>
     */
    inline const Aws::String& GetCustomDomainName() const{ return m_customDomainName; }
    inline void SetCustomDomainName(const Aws::String& value) { m_customDomainName = value; }
    inline void SetCustomDomainName(Aws::String&& value) { m_customDomainName = std::move(value); }
    inline void SetCustomDomainName(const char* value) { m_customDomainName.assign(value); }
    inline CreateCustomDomainAssociationResult& WithCustomDomainName(const Aws::String& value) { SetCustomDomainName(value); return *this;}
    inline CreateCustomDomainAssociationResult& WithCustomDomainName(Aws::String&& value) { SetCustomDomainName(std::move(value)); return *this;}
    inline CreateCustomDomainAssociationResult& WithCustomDomainName(const char* value) { SetCustomDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the certificate associated with the custom
     * domain name.</p>
     */
    inline const Aws::String& GetCustomDomainCertificateArn() const{ return m_customDomainCertificateArn; }
    inline void SetCustomDomainCertificateArn(const Aws::String& value) { m_customDomainCertificateArn = value; }
    inline void SetCustomDomainCertificateArn(Aws::String&& value) { m_customDomainCertificateArn = std::move(value); }
    inline void SetCustomDomainCertificateArn(const char* value) { m_customDomainCertificateArn.assign(value); }
    inline CreateCustomDomainAssociationResult& WithCustomDomainCertificateArn(const Aws::String& value) { SetCustomDomainCertificateArn(value); return *this;}
    inline CreateCustomDomainAssociationResult& WithCustomDomainCertificateArn(Aws::String&& value) { SetCustomDomainCertificateArn(std::move(value)); return *this;}
    inline CreateCustomDomainAssociationResult& WithCustomDomainCertificateArn(const char* value) { SetCustomDomainCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the cluster that the custom domain is associated with.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifier.assign(value); }
    inline CreateCustomDomainAssociationResult& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline CreateCustomDomainAssociationResult& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline CreateCustomDomainAssociationResult& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration time for the certificate for the custom domain.</p>
     */
    inline const Aws::String& GetCustomDomainCertExpiryTime() const{ return m_customDomainCertExpiryTime; }
    inline void SetCustomDomainCertExpiryTime(const Aws::String& value) { m_customDomainCertExpiryTime = value; }
    inline void SetCustomDomainCertExpiryTime(Aws::String&& value) { m_customDomainCertExpiryTime = std::move(value); }
    inline void SetCustomDomainCertExpiryTime(const char* value) { m_customDomainCertExpiryTime.assign(value); }
    inline CreateCustomDomainAssociationResult& WithCustomDomainCertExpiryTime(const Aws::String& value) { SetCustomDomainCertExpiryTime(value); return *this;}
    inline CreateCustomDomainAssociationResult& WithCustomDomainCertExpiryTime(Aws::String&& value) { SetCustomDomainCertExpiryTime(std::move(value)); return *this;}
    inline CreateCustomDomainAssociationResult& WithCustomDomainCertExpiryTime(const char* value) { SetCustomDomainCertExpiryTime(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CreateCustomDomainAssociationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CreateCustomDomainAssociationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_customDomainName;

    Aws::String m_customDomainCertificateArn;

    Aws::String m_clusterIdentifier;

    Aws::String m_customDomainCertExpiryTime;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
