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
  class RevokeClusterSecurityGroupIngressResult
  {
  public:
    AWS_REDSHIFT_API RevokeClusterSecurityGroupIngressResult();
    AWS_REDSHIFT_API RevokeClusterSecurityGroupIngressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API RevokeClusterSecurityGroupIngressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const ClusterSecurityGroup& GetClusterSecurityGroup() const{ return m_clusterSecurityGroup; }

    
    inline void SetClusterSecurityGroup(const ClusterSecurityGroup& value) { m_clusterSecurityGroup = value; }

    
    inline void SetClusterSecurityGroup(ClusterSecurityGroup&& value) { m_clusterSecurityGroup = std::move(value); }

    
    inline RevokeClusterSecurityGroupIngressResult& WithClusterSecurityGroup(const ClusterSecurityGroup& value) { SetClusterSecurityGroup(value); return *this;}

    
    inline RevokeClusterSecurityGroupIngressResult& WithClusterSecurityGroup(ClusterSecurityGroup&& value) { SetClusterSecurityGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RevokeClusterSecurityGroupIngressResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RevokeClusterSecurityGroupIngressResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ClusterSecurityGroup m_clusterSecurityGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
