/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/GlobalCluster.h>
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
  class ModifyGlobalClusterResult
  {
  public:
    AWS_RDS_API ModifyGlobalClusterResult();
    AWS_RDS_API ModifyGlobalClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API ModifyGlobalClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const GlobalCluster& GetGlobalCluster() const{ return m_globalCluster; }

    
    inline void SetGlobalCluster(const GlobalCluster& value) { m_globalCluster = value; }

    
    inline void SetGlobalCluster(GlobalCluster&& value) { m_globalCluster = std::move(value); }

    
    inline ModifyGlobalClusterResult& WithGlobalCluster(const GlobalCluster& value) { SetGlobalCluster(value); return *this;}

    
    inline ModifyGlobalClusterResult& WithGlobalCluster(GlobalCluster&& value) { SetGlobalCluster(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyGlobalClusterResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyGlobalClusterResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    GlobalCluster m_globalCluster;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
