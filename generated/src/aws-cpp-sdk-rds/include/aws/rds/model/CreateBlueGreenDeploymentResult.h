/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/BlueGreenDeployment.h>
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
  class CreateBlueGreenDeploymentResult
  {
  public:
    AWS_RDS_API CreateBlueGreenDeploymentResult() = default;
    AWS_RDS_API CreateBlueGreenDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API CreateBlueGreenDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const BlueGreenDeployment& GetBlueGreenDeployment() const { return m_blueGreenDeployment; }
    template<typename BlueGreenDeploymentT = BlueGreenDeployment>
    void SetBlueGreenDeployment(BlueGreenDeploymentT&& value) { m_blueGreenDeploymentHasBeenSet = true; m_blueGreenDeployment = std::forward<BlueGreenDeploymentT>(value); }
    template<typename BlueGreenDeploymentT = BlueGreenDeployment>
    CreateBlueGreenDeploymentResult& WithBlueGreenDeployment(BlueGreenDeploymentT&& value) { SetBlueGreenDeployment(std::forward<BlueGreenDeploymentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateBlueGreenDeploymentResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    BlueGreenDeployment m_blueGreenDeployment;
    bool m_blueGreenDeploymentHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
