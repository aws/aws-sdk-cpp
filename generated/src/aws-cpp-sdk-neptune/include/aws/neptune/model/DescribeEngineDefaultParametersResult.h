/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/model/EngineDefaults.h>
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
  class DescribeEngineDefaultParametersResult
  {
  public:
    AWS_NEPTUNE_API DescribeEngineDefaultParametersResult() = default;
    AWS_NEPTUNE_API DescribeEngineDefaultParametersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_NEPTUNE_API DescribeEngineDefaultParametersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const EngineDefaults& GetEngineDefaults() const { return m_engineDefaults; }
    template<typename EngineDefaultsT = EngineDefaults>
    void SetEngineDefaults(EngineDefaultsT&& value) { m_engineDefaultsHasBeenSet = true; m_engineDefaults = std::forward<EngineDefaultsT>(value); }
    template<typename EngineDefaultsT = EngineDefaults>
    DescribeEngineDefaultParametersResult& WithEngineDefaults(EngineDefaultsT&& value) { SetEngineDefaults(std::forward<EngineDefaultsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeEngineDefaultParametersResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    EngineDefaults m_engineDefaults;
    bool m_engineDefaultsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
