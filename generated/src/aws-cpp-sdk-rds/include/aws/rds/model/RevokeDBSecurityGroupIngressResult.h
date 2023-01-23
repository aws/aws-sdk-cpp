/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBSecurityGroup.h>
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
  class RevokeDBSecurityGroupIngressResult
  {
  public:
    AWS_RDS_API RevokeDBSecurityGroupIngressResult();
    AWS_RDS_API RevokeDBSecurityGroupIngressResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API RevokeDBSecurityGroupIngressResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const DBSecurityGroup& GetDBSecurityGroup() const{ return m_dBSecurityGroup; }

    
    inline void SetDBSecurityGroup(const DBSecurityGroup& value) { m_dBSecurityGroup = value; }

    
    inline void SetDBSecurityGroup(DBSecurityGroup&& value) { m_dBSecurityGroup = std::move(value); }

    
    inline RevokeDBSecurityGroupIngressResult& WithDBSecurityGroup(const DBSecurityGroup& value) { SetDBSecurityGroup(value); return *this;}

    
    inline RevokeDBSecurityGroupIngressResult& WithDBSecurityGroup(DBSecurityGroup&& value) { SetDBSecurityGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RevokeDBSecurityGroupIngressResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RevokeDBSecurityGroupIngressResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    DBSecurityGroup m_dBSecurityGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
