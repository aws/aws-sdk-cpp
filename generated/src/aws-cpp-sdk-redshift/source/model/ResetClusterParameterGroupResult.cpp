/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ResetClusterParameterGroupResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ResetClusterParameterGroupResult::ResetClusterParameterGroupResult()
{
}

ResetClusterParameterGroupResult::ResetClusterParameterGroupResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ResetClusterParameterGroupResult& ResetClusterParameterGroupResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ResetClusterParameterGroupResult"))
  {
    resultNode = rootNode.FirstChild("ResetClusterParameterGroupResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode parameterGroupNameNode = resultNode.FirstChild("ParameterGroupName");
    if(!parameterGroupNameNode.IsNull())
    {
      m_parameterGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(parameterGroupNameNode.GetText());
    }
    XmlNode parameterGroupStatusNode = resultNode.FirstChild("ParameterGroupStatus");
    if(!parameterGroupStatusNode.IsNull())
    {
      m_parameterGroupStatus = Aws::Utils::Xml::DecodeEscapedXmlText(parameterGroupStatusNode.GetText());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::ResetClusterParameterGroupResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
