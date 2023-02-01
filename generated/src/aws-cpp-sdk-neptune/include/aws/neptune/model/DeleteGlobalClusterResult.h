/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/model/GlobalCluster.h>
#include <aws/neptune/model/ResponseMetadata.h>
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
namespace Neptune
{
namespace Model
{
  class DeleteGlobalClusterResult
  {
  public:
    AWS_NEPTUNE_API DeleteGlobalClusterResult();
    AWS_NEPTUNE_API DeleteGlobalClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API DeleteGlobalClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const GlobalCluster& GetGlobalCluster() const{ return m_globalCluster; }

    
    inline void SetGlobalCluster(const GlobalCluster& value) { m_globalCluster = value; }

    
    inline void SetGlobalCluster(GlobalCluster&& value) { m_globalCluster = std::move(value); }

    
    inline DeleteGlobalClusterResult& WithGlobalCluster(const GlobalCluster& value) { SetGlobalCluster(value); return *this;}

    
    inline DeleteGlobalClusterResult& WithGlobalCluster(GlobalCluster&& value) { SetGlobalCluster(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteGlobalClusterResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteGlobalClusterResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    GlobalCluster m_globalCluster;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
