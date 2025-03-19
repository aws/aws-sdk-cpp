/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/ClusterSubnetGroup.h>
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
  class ModifyClusterSubnetGroupResult
  {
  public:
    AWS_REDSHIFT_API ModifyClusterSubnetGroupResult() = default;
    AWS_REDSHIFT_API ModifyClusterSubnetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API ModifyClusterSubnetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const ClusterSubnetGroup& GetClusterSubnetGroup() const { return m_clusterSubnetGroup; }
    template<typename ClusterSubnetGroupT = ClusterSubnetGroup>
    void SetClusterSubnetGroup(ClusterSubnetGroupT&& value) { m_clusterSubnetGroupHasBeenSet = true; m_clusterSubnetGroup = std::forward<ClusterSubnetGroupT>(value); }
    template<typename ClusterSubnetGroupT = ClusterSubnetGroup>
    ModifyClusterSubnetGroupResult& WithClusterSubnetGroup(ClusterSubnetGroupT&& value) { SetClusterSubnetGroup(std::forward<ClusterSubnetGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyClusterSubnetGroupResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ClusterSubnetGroup m_clusterSubnetGroup;
    bool m_clusterSubnetGroupHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
