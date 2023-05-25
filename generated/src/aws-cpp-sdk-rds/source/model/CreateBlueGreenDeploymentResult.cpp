/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateBlueGreenDeploymentResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

CreateBlueGreenDeploymentResult::CreateBlueGreenDeploymentResult()
{
}

CreateBlueGreenDeploymentResult::CreateBlueGreenDeploymentResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateBlueGreenDeploymentResult& CreateBlueGreenDeploymentResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateBlueGreenDeploymentResult"))
  {
    resultNode = rootNode.FirstChild("CreateBlueGreenDeploymentResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode blueGreenDeploymentNode = resultNode.FirstChild("BlueGreenDeployment");
    if(!blueGreenDeploymentNode.IsNull())
    {
      m_blueGreenDeployment = blueGreenDeploymentNode;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::CreateBlueGreenDeploymentResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
