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
  class ModifyCustomDomainAssociationResult
  {
  public:
    AWS_REDSHIFT_API ModifyCustomDomainAssociationResult() = default;
    AWS_REDSHIFT_API ModifyCustomDomainAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API ModifyCustomDomainAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The custom domain name associated with the result for the changed custom
     * domain association.</p>
     */
    inline const Aws::String& GetCustomDomainName() const { return m_customDomainName; }
    template<typename CustomDomainNameT = Aws::String>
    void SetCustomDomainName(CustomDomainNameT&& value) { m_customDomainNameHasBeenSet = true; m_customDomainName = std::forward<CustomDomainNameT>(value); }
    template<typename CustomDomainNameT = Aws::String>
    ModifyCustomDomainAssociationResult& WithCustomDomainName(CustomDomainNameT&& value) { SetCustomDomainName(std::forward<CustomDomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate Amazon Resource Name (ARN) associated with the result for the
     * changed custom domain association.</p>
     */
    inline const Aws::String& GetCustomDomainCertificateArn() const { return m_customDomainCertificateArn; }
    template<typename CustomDomainCertificateArnT = Aws::String>
    void SetCustomDomainCertificateArn(CustomDomainCertificateArnT&& value) { m_customDomainCertificateArnHasBeenSet = true; m_customDomainCertificateArn = std::forward<CustomDomainCertificateArnT>(value); }
    template<typename CustomDomainCertificateArnT = Aws::String>
    ModifyCustomDomainAssociationResult& WithCustomDomainCertificateArn(CustomDomainCertificateArnT&& value) { SetCustomDomainCertificateArn(std::forward<CustomDomainCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the cluster associated with the result for the changed
     * custom domain association.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    ModifyCustomDomainAssociationResult& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate expiration time associated with the result for the changed
     * custom domain association.</p>
     */
    inline const Aws::String& GetCustomDomainCertExpiryTime() const { return m_customDomainCertExpiryTime; }
    template<typename CustomDomainCertExpiryTimeT = Aws::String>
    void SetCustomDomainCertExpiryTime(CustomDomainCertExpiryTimeT&& value) { m_customDomainCertExpiryTimeHasBeenSet = true; m_customDomainCertExpiryTime = std::forward<CustomDomainCertExpiryTimeT>(value); }
    template<typename CustomDomainCertExpiryTimeT = Aws::String>
    ModifyCustomDomainAssociationResult& WithCustomDomainCertExpiryTime(CustomDomainCertExpiryTimeT&& value) { SetCustomDomainCertExpiryTime(std::forward<CustomDomainCertExpiryTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyCustomDomainAssociationResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customDomainName;
    bool m_customDomainNameHasBeenSet = false;

    Aws::String m_customDomainCertificateArn;
    bool m_customDomainCertificateArnHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_customDomainCertExpiryTime;
    bool m_customDomainCertExpiryTimeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
