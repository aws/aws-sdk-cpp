/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/Cluster.h>
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
  class ResizeClusterResult
  {
  public:
    AWS_REDSHIFT_API ResizeClusterResult();
    AWS_REDSHIFT_API ResizeClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API ResizeClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const Cluster& GetCluster() const{ return m_cluster; }

    
    inline void SetCluster(const Cluster& value) { m_cluster = value; }

    
    inline void SetCluster(Cluster&& value) { m_cluster = std::move(value); }

    
    inline ResizeClusterResult& WithCluster(const Cluster& value) { SetCluster(value); return *this;}

    
    inline ResizeClusterResult& WithCluster(Cluster&& value) { SetCluster(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ResizeClusterResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ResizeClusterResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Cluster m_cluster;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
