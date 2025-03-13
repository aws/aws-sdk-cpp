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
  class ModifyGlobalClusterResult
  {
  public:
    AWS_NEPTUNE_API ModifyGlobalClusterResult() = default;
    AWS_NEPTUNE_API ModifyGlobalClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API ModifyGlobalClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const GlobalCluster& GetGlobalCluster() const { return m_globalCluster; }
    template<typename GlobalClusterT = GlobalCluster>
    void SetGlobalCluster(GlobalClusterT&& value) { m_globalClusterHasBeenSet = true; m_globalCluster = std::forward<GlobalClusterT>(value); }
    template<typename GlobalClusterT = GlobalCluster>
    ModifyGlobalClusterResult& WithGlobalCluster(GlobalClusterT&& value) { SetGlobalCluster(std::forward<GlobalClusterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyGlobalClusterResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    GlobalCluster m_globalCluster;
    bool m_globalClusterHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
