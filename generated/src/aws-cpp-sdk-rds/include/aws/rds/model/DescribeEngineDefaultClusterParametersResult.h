/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/EngineDefaults.h>
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
  class DescribeEngineDefaultClusterParametersResult
  {
  public:
    AWS_RDS_API DescribeEngineDefaultClusterParametersResult() = default;
    AWS_RDS_API DescribeEngineDefaultClusterParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeEngineDefaultClusterParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const EngineDefaults& GetEngineDefaults() const { return m_engineDefaults; }
    template<typename EngineDefaultsT = EngineDefaults>
    void SetEngineDefaults(EngineDefaultsT&& value) { m_engineDefaultsHasBeenSet = true; m_engineDefaults = std::forward<EngineDefaultsT>(value); }
    template<typename EngineDefaultsT = EngineDefaults>
    DescribeEngineDefaultClusterParametersResult& WithEngineDefaults(EngineDefaultsT&& value) { SetEngineDefaults(std::forward<EngineDefaultsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeEngineDefaultClusterParametersResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    EngineDefaults m_engineDefaults;
    bool m_engineDefaultsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
