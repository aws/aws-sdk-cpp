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
    AWS_REDSHIFT_API CreateHsmConfigurationResult();
    AWS_REDSHIFT_API CreateHsmConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API CreateHsmConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const HsmConfiguration& GetHsmConfiguration() const{ return m_hsmConfiguration; }

    
    inline void SetHsmConfiguration(const HsmConfiguration& value) { m_hsmConfiguration = value; }

    
    inline void SetHsmConfiguration(HsmConfiguration&& value) { m_hsmConfiguration = std::move(value); }

    
    inline CreateHsmConfigurationResult& WithHsmConfiguration(const HsmConfiguration& value) { SetHsmConfiguration(value); return *this;}

    
    inline CreateHsmConfigurationResult& WithHsmConfiguration(HsmConfiguration&& value) { SetHsmConfiguration(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateHsmConfigurationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateHsmConfigurationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    HsmConfiguration m_hsmConfiguration;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
