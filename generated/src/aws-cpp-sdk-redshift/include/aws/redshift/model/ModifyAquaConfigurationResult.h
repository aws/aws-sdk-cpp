/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/AquaConfiguration.h>
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
  class ModifyAquaConfigurationResult
  {
  public:
    AWS_REDSHIFT_API ModifyAquaConfigurationResult() = default;
    AWS_REDSHIFT_API ModifyAquaConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API ModifyAquaConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>This parameter is retired. Amazon Redshift automatically determines whether
     * to use AQUA (Advanced Query Accelerator). </p>
     */
    inline const AquaConfiguration& GetAquaConfiguration() const { return m_aquaConfiguration; }
    template<typename AquaConfigurationT = AquaConfiguration>
    void SetAquaConfiguration(AquaConfigurationT&& value) { m_aquaConfigurationHasBeenSet = true; m_aquaConfiguration = std::forward<AquaConfigurationT>(value); }
    template<typename AquaConfigurationT = AquaConfiguration>
    ModifyAquaConfigurationResult& WithAquaConfiguration(AquaConfigurationT&& value) { SetAquaConfiguration(std::forward<AquaConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyAquaConfigurationResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    AquaConfiguration m_aquaConfiguration;
    bool m_aquaConfigurationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
