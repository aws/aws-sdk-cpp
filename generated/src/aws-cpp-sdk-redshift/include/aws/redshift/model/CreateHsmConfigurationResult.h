/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/HsmConfiguration.h>
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
  class CreateHsmConfigurationResult
  {
  public:
    AWS_REDSHIFT_API CreateHsmConfigurationResult() = default;
    AWS_REDSHIFT_API CreateHsmConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API CreateHsmConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const HsmConfiguration& GetHsmConfiguration() const { return m_hsmConfiguration; }
    template<typename HsmConfigurationT = HsmConfiguration>
    void SetHsmConfiguration(HsmConfigurationT&& value) { m_hsmConfigurationHasBeenSet = true; m_hsmConfiguration = std::forward<HsmConfigurationT>(value); }
    template<typename HsmConfigurationT = HsmConfiguration>
    CreateHsmConfigurationResult& WithHsmConfiguration(HsmConfigurationT&& value) { SetHsmConfiguration(std::forward<HsmConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateHsmConfigurationResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    HsmConfiguration m_hsmConfiguration;
    bool m_hsmConfigurationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
