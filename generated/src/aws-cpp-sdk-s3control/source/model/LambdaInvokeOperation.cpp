/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/LambdaInvokeOperation.h>
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

LambdaInvokeOperation::LambdaInvokeOperation() : 
    m_functionArnHasBeenSet(false),
    m_invocationSchemaVersionHasBeenSet(false),
    m_userArgumentsHasBeenSet(false)
{
}

LambdaInvokeOperation::LambdaInvokeOperation(const XmlNode& xmlNode) : 
    m_functionArnHasBeenSet(false),
    m_invocationSchemaVersionHasBeenSet(false),
    m_userArgumentsHasBeenSet(false)
{
  *this = xmlNode;
}

LambdaInvokeOperation& LambdaInvokeOperation::operator =(const XmlNode& xmlNode)
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
    XmlNode invocationSchemaVersionNode = resultNode.FirstChild("InvocationSchemaVersion");
    if(!invocationSchemaVersionNode.IsNull())
    {
      m_invocationSchemaVersion = Aws::Utils::Xml::DecodeEscapedXmlText(invocationSchemaVersionNode.GetText());
      m_invocationSchemaVersionHasBeenSet = true;
    }
    XmlNode userArgumentsNode = resultNode.FirstChild("UserArguments");

    if(!userArgumentsNode.IsNull())
    {
      XmlNode userArgumentsEntry = userArgumentsNode.FirstChild("entry");
      while(!userArgumentsEntry.IsNull())
      {
        XmlNode keyNode = userArgumentsEntry.FirstChild("key");
        XmlNode valueNode = userArgumentsEntry.FirstChild("value");
        m_userArguments[keyNode.GetText()] =
            valueNode.GetText();
        userArgumentsEntry = userArgumentsEntry.NextNode("entry");
      }

      m_userArgumentsHasBeenSet = true;
    }
  }

  return *this;
}

void LambdaInvokeOperation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_functionArnHasBeenSet)
  {
   XmlNode functionArnNode = parentNode.CreateChildElement("FunctionArn");
   functionArnNode.SetText(m_functionArn);
  }

  if(m_invocationSchemaVersionHasBeenSet)
  {
   XmlNode invocationSchemaVersionNode = parentNode.CreateChildElement("InvocationSchemaVersion");
   invocationSchemaVersionNode.SetText(m_invocationSchemaVersion);
  }

  if(m_userArgumentsHasBeenSet)
  {
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
