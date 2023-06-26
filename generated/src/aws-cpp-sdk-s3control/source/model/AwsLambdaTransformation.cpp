/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/AwsLambdaTransformation.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

AwsLambdaTransformation::AwsLambdaTransformation() : 
    m_functionArnHasBeenSet(false),
    m_functionPayloadHasBeenSet(false)
{
}

AwsLambdaTransformation::AwsLambdaTransformation(const XmlNode& xmlNode) : 
    m_functionArnHasBeenSet(false),
    m_functionPayloadHasBeenSet(false)
{
  *this = xmlNode;
}

AwsLambdaTransformation& AwsLambdaTransformation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode functionArnNode = resultNode.FirstChild("FunctionArn");
    if(!functionArnNode.IsNull())
    {
      m_functionArn = Aws::Utils::Xml::DecodeEscapedXmlText(functionArnNode.GetText());
      m_functionArnHasBeenSet = true;
    }
    XmlNode functionPayloadNode = resultNode.FirstChild("FunctionPayload");
    if(!functionPayloadNode.IsNull())
    {
      m_functionPayload = Aws::Utils::Xml::DecodeEscapedXmlText(functionPayloadNode.GetText());
      m_functionPayloadHasBeenSet = true;
    }
  }

  return *this;
}

void AwsLambdaTransformation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_functionArnHasBeenSet)
  {
   XmlNode functionArnNode = parentNode.CreateChildElement("FunctionArn");
   functionArnNode.SetText(m_functionArn);
  }

  if(m_functionPayloadHasBeenSet)
  {
   XmlNode functionPayloadNode = parentNode.CreateChildElement("FunctionPayload");
   functionPayloadNode.SetText(m_functionPayload);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
