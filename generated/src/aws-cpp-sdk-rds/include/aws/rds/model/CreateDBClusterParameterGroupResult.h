/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBClusterParameterGroup.h>
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
  class CreateDBClusterParameterGroupResult
  {
  public:
    AWS_RDS_API CreateDBClusterParameterGroupResult() = default;
    AWS_RDS_API CreateDBClusterParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API CreateDBClusterParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const DBClusterParameterGroup& GetDBClusterParameterGroup() const { return m_dBClusterParameterGroup; }
    template<typename DBClusterParameterGroupT = DBClusterParameterGroup>
    void SetDBClusterParameterGroup(DBClusterParameterGroupT&& value) { m_dBClusterParameterGroupHasBeenSet = true; m_dBClusterParameterGroup = std::forward<DBClusterParameterGroupT>(value); }
    template<typename DBClusterParameterGroupT = DBClusterParameterGroup>
    CreateDBClusterParameterGroupResult& WithDBClusterParameterGroup(DBClusterParameterGroupT&& value) { SetDBClusterParameterGroup(std::forward<DBClusterParameterGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateDBClusterParameterGroupResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    DBClusterParameterGroup m_dBClusterParameterGroup;
    bool m_dBClusterParameterGroupHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
