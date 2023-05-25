/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ObjectLambdaTransformationConfiguration.h>
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

ObjectLambdaTransformationConfiguration::ObjectLambdaTransformationConfiguration() : 
    m_actionsHasBeenSet(false),
    m_contentTransformationHasBeenSet(false)
{
}

ObjectLambdaTransformationConfiguration::ObjectLambdaTransformationConfiguration(const XmlNode& xmlNode) : 
    m_actionsHasBeenSet(false),
    m_contentTransformationHasBeenSet(false)
{
  *this = xmlNode;
}

ObjectLambdaTransformationConfiguration& ObjectLambdaTransformationConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode actionsNode = resultNode.FirstChild("Actions");
    if(!actionsNode.IsNull())
    {
      XmlNode actionsMember = actionsNode.FirstChild("Action");
      while(!actionsMember.IsNull())
      {
        m_actions.push_back(ObjectLambdaTransformationConfigurationActionMapper::GetObjectLambdaTransformationConfigurationActionForName(StringUtils::Trim(actionsMember.GetText().c_str())));
        actionsMember = actionsMember.NextNode("Action");
      }

      m_actionsHasBeenSet = true;
    }
    XmlNode contentTransformationNode = resultNode.FirstChild("ContentTransformation");
    if(!contentTransformationNode.IsNull())
    {
      m_contentTransformation = contentTransformationNode;
      m_contentTransformationHasBeenSet = true;
    }
  }

  return *this;
}

void ObjectLambdaTransformationConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_actionsHasBeenSet)
  {
   XmlNode actionsParentNode = parentNode.CreateChildElement("Actions");
   for(const auto& item : m_actions)
   {
     XmlNode actionsNode = actionsParentNode.CreateChildElement("Action");
     actionsNode.SetText(ObjectLambdaTransformationConfigurationActionMapper::GetNameForObjectLambdaTransformationConfigurationAction(item));
   }
  }

  if(m_contentTransformationHasBeenSet)
  {
   XmlNode contentTransformationNode = parentNode.CreateChildElement("ContentTransformation");
   m_contentTransformation.AddToNode(contentTransformationNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
