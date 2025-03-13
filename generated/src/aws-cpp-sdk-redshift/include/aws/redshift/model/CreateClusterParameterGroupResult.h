/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/ClusterParameterGroup.h>
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
  class CreateClusterParameterGroupResult
  {
  public:
    AWS_REDSHIFT_API CreateClusterParameterGroupResult() = default;
    AWS_REDSHIFT_API CreateClusterParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API CreateClusterParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const ClusterParameterGroup& GetClusterParameterGroup() const { return m_clusterParameterGroup; }
    template<typename ClusterParameterGroupT = ClusterParameterGroup>
    void SetClusterParameterGroup(ClusterParameterGroupT&& value) { m_clusterParameterGroupHasBeenSet = true; m_clusterParameterGroup = std::forward<ClusterParameterGroupT>(value); }
    template<typename ClusterParameterGroupT = ClusterParameterGroup>
    CreateClusterParameterGroupResult& WithClusterParameterGroup(ClusterParameterGroupT&& value) { SetClusterParameterGroup(std::forward<ClusterParameterGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateClusterParameterGroupResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    ClusterParameterGroup m_clusterParameterGroup;
    bool m_clusterParameterGroupHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
