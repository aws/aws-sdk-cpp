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
    AWS_REDSHIFT_API CreateClusterParameterGroupResult();
    AWS_REDSHIFT_API CreateClusterParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API CreateClusterParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const ClusterParameterGroup& GetClusterParameterGroup() const{ return m_clusterParameterGroup; }

    
    inline void SetClusterParameterGroup(const ClusterParameterGroup& value) { m_clusterParameterGroup = value; }

    
    inline void SetClusterParameterGroup(ClusterParameterGroup&& value) { m_clusterParameterGroup = std::move(value); }

    
    inline CreateClusterParameterGroupResult& WithClusterParameterGroup(const ClusterParameterGroup& value) { SetClusterParameterGroup(value); return *this;}

    
    inline CreateClusterParameterGroupResult& WithClusterParameterGroup(ClusterParameterGroup&& value) { SetClusterParameterGroup(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateClusterParameterGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateClusterParameterGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ClusterParameterGroup m_clusterParameterGroup;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
