/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/AsyncOperation.h>
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

AsyncOperation::AsyncOperation() : 
    m_creationTimeHasBeenSet(false),
    m_operation(AsyncOperationName::NOT_SET),
    m_operationHasBeenSet(false),
    m_requestTokenARNHasBeenSet(false),
    m_requestParametersHasBeenSet(false),
    m_requestStatusHasBeenSet(false),
    m_responseDetailsHasBeenSet(false)
{
}

AsyncOperation::AsyncOperation(const XmlNode& xmlNode) : 
    m_creationTimeHasBeenSet(false),
    m_operation(AsyncOperationName::NOT_SET),
    m_operationHasBeenSet(false),
    m_requestTokenARNHasBeenSet(false),
    m_requestParametersHasBeenSet(false),
    m_requestStatusHasBeenSet(false),
    m_responseDetailsHasBeenSet(false)
{
  *this = xmlNode;
}

AsyncOperation& AsyncOperation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode creationTimeNode = resultNode.FirstChild("CreationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_creationTimeHasBeenSet = true;
    }
    XmlNode operationNode = resultNode.FirstChild("Operation");
    if(!operationNode.IsNull())
    {
      m_operation = AsyncOperationNameMapper::GetAsyncOperationNameForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(operationNode.GetText()).c_str()).c_str());
      m_operationHasBeenSet = true;
    }
    XmlNode requestTokenARNNode = resultNode.FirstChild("RequestTokenARN");
    if(!requestTokenARNNode.IsNull())
    {
      m_requestTokenARN = Aws::Utils::Xml::DecodeEscapedXmlText(requestTokenARNNode.GetText());
      m_requestTokenARNHasBeenSet = true;
    }
    XmlNode requestParametersNode = resultNode.FirstChild("RequestParameters");
    if(!requestParametersNode.IsNull())
    {
      m_requestParameters = requestParametersNode;
      m_requestParametersHasBeenSet = true;
    }
    XmlNode requestStatusNode = resultNode.FirstChild("RequestStatus");
    if(!requestStatusNode.IsNull())
    {
      m_requestStatus = Aws::Utils::Xml::DecodeEscapedXmlText(requestStatusNode.GetText());
      m_requestStatusHasBeenSet = true;
    }
    XmlNode responseDetailsNode = resultNode.FirstChild("ResponseDetails");
    if(!responseDetailsNode.IsNull())
    {
      m_responseDetails = responseDetailsNode;
      m_responseDetailsHasBeenSet = true;
    }
  }

  return *this;
}

void AsyncOperation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_creationTimeHasBeenSet)
  {
   XmlNode creationTimeNode = parentNode.CreateChildElement("CreationTime");
   creationTimeNode.SetText(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_operationHasBeenSet)
  {
   XmlNode operationNode = parentNode.CreateChildElement("Operation");
   operationNode.SetText(AsyncOperationNameMapper::GetNameForAsyncOperationName(m_operation));
  }

  if(m_requestTokenARNHasBeenSet)
  {
   XmlNode requestTokenARNNode = parentNode.CreateChildElement("RequestTokenARN");
   requestTokenARNNode.SetText(m_requestTokenARN);
  }

  if(m_requestParametersHasBeenSet)
  {
   XmlNode requestParametersNode = parentNode.CreateChildElement("RequestParameters");
   m_requestParameters.AddToNode(requestParametersNode);
  }

  if(m_requestStatusHasBeenSet)
  {
   XmlNode requestStatusNode = parentNode.CreateChildElement("RequestStatus");
   requestStatusNode.SetText(m_requestStatus);
  }

  if(m_responseDetailsHasBeenSet)
  {
   XmlNode responseDetailsNode = parentNode.CreateChildElement("ResponseDetails");
   m_responseDetails.AddToNode(responseDetailsNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
