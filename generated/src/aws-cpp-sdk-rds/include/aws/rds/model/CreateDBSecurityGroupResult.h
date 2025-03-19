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
  class CreateDBSecurityGroupResult
  {
  public:
    AWS_RDS_API CreateDBSecurityGroupResult() = default;
    AWS_RDS_API CreateDBSecurityGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API CreateDBSecurityGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const DBSecurityGroup& GetDBSecurityGroup() const { return m_dBSecurityGroup; }
    template<typename DBSecurityGroupT = DBSecurityGroup>
    void SetDBSecurityGroup(DBSecurityGroupT&& value) { m_dBSecurityGroupHasBeenSet = true; m_dBSecurityGroup = std::forward<DBSecurityGroupT>(value); }
    template<typename DBSecurityGroupT = DBSecurityGroup>
    CreateDBSecurityGroupResult& WithDBSecurityGroup(DBSecurityGroupT&& value) { SetDBSecurityGroup(std::forward<DBSecurityGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateDBSecurityGroupResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    DBSecurityGroup m_dBSecurityGroup;
    bool m_dBSecurityGroupHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
