/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/ClusterSecurityGroup.h>
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
  class AuthorizeClusterSecurityGroupIngressResult
  {
  public:
    AWS_REDSHIFT_API AuthorizeClusterSecurityGroupIngressResult() = default;
    AWS_REDSHIFT_API AuthorizeClusterSecurityGroupIngressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API AuthorizeClusterSecurityGroupIngressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const ClusterSecurityGroup& GetClusterSecurityGroup() const { return m_clusterSecurityGroup; }
    template<typename ClusterSecurityGroupT = ClusterSecurityGroup>
    void SetClusterSecurityGroup(ClusterSecurityGroupT&& value) { m_clusterSecurityGroupHasBeenSet = true; m_clusterSecurityGroup = std::forward<ClusterSecurityGroupT>(value); }
    template<typename ClusterSecurityGroupT = ClusterSecurityGroup>
    AuthorizeClusterSecurityGroupIngressResult& WithClusterSecurityGroup(ClusterSecurityGroupT&& value) { SetClusterSecurityGroup(std::forward<ClusterSecurityGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AuthorizeClusterSecurityGroupIngressResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ClusterSecurityGroup m_clusterSecurityGroup;
    bool m_clusterSecurityGroupHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
