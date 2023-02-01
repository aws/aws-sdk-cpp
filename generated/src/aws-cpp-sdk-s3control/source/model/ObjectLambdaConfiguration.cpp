/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ObjectLambdaConfiguration.h>
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

ObjectLambdaConfiguration::ObjectLambdaConfiguration() : 
    m_supportingAccessPointHasBeenSet(false),
    m_cloudWatchMetricsEnabled(false),
    m_cloudWatchMetricsEnabledHasBeenSet(false),
    m_allowedFeaturesHasBeenSet(false),
    m_transformationConfigurationsHasBeenSet(false)
{
}

ObjectLambdaConfiguration::ObjectLambdaConfiguration(const XmlNode& xmlNode) : 
    m_supportingAccessPointHasBeenSet(false),
    m_cloudWatchMetricsEnabled(false),
    m_cloudWatchMetricsEnabledHasBeenSet(false),
    m_allowedFeaturesHasBeenSet(false),
    m_transformationConfigurationsHasBeenSet(false)
{
  *this = xmlNode;
}

ObjectLambdaConfiguration& ObjectLambdaConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode supportingAccessPointNode = resultNode.FirstChild("SupportingAccessPoint");
    if(!supportingAccessPointNode.IsNull())
    {
      m_supportingAccessPoint = Aws::Utils::Xml::DecodeEscapedXmlText(supportingAccessPointNode.GetText());
      m_supportingAccessPointHasBeenSet = true;
    }
    XmlNode cloudWatchMetricsEnabledNode = resultNode.FirstChild("CloudWatchMetricsEnabled");
    if(!cloudWatchMetricsEnabledNode.IsNull())
    {
      m_cloudWatchMetricsEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(cloudWatchMetricsEnabledNode.GetText()).c_str()).c_str());
      m_cloudWatchMetricsEnabledHasBeenSet = true;
    }
    XmlNode allowedFeaturesNode = resultNode.FirstChild("AllowedFeatures");
    if(!allowedFeaturesNode.IsNull())
    {
      XmlNode allowedFeaturesMember = allowedFeaturesNode.FirstChild("AllowedFeature");
      while(!allowedFeaturesMember.IsNull())
      {
        m_allowedFeatures.push_back(ObjectLambdaAllowedFeatureMapper::GetObjectLambdaAllowedFeatureForName(StringUtils::Trim(allowedFeaturesMember.GetText().c_str())));
        allowedFeaturesMember = allowedFeaturesMember.NextNode("AllowedFeature");
      }

      m_allowedFeaturesHasBeenSet = true;
    }
    XmlNode transformationConfigurationsNode = resultNode.FirstChild("TransformationConfigurations");
    if(!transformationConfigurationsNode.IsNull())
    {
      XmlNode transformationConfigurationsMember = transformationConfigurationsNode.FirstChild("TransformationConfiguration");
      while(!transformationConfigurationsMember.IsNull())
      {
        m_transformationConfigurations.push_back(transformationConfigurationsMember);
        transformationConfigurationsMember = transformationConfigurationsMember.NextNode("TransformationConfiguration");
      }

      m_transformationConfigurationsHasBeenSet = true;
    }
  }

  return *this;
}

void ObjectLambdaConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_supportingAccessPointHasBeenSet)
  {
   XmlNode supportingAccessPointNode = parentNode.CreateChildElement("SupportingAccessPoint");
   supportingAccessPointNode.SetText(m_supportingAccessPoint);
  }

  if(m_cloudWatchMetricsEnabledHasBeenSet)
  {
   XmlNode cloudWatchMetricsEnabledNode = parentNode.CreateChildElement("CloudWatchMetricsEnabled");
   ss << std::boolalpha << m_cloudWatchMetricsEnabled;
   cloudWatchMetricsEnabledNode.SetText(ss.str());
   ss.str("");
  }

  if(m_allowedFeaturesHasBeenSet)
  {
   XmlNode allowedFeaturesParentNode = parentNode.CreateChildElement("AllowedFeatures");
   for(const auto& item : m_allowedFeatures)
   {
     XmlNode allowedFeaturesNode = allowedFeaturesParentNode.CreateChildElement("AllowedFeature");
     allowedFeaturesNode.SetText(ObjectLambdaAllowedFeatureMapper::GetNameForObjectLambdaAllowedFeature(item));
   }
  }

  if(m_transformationConfigurationsHasBeenSet)
  {
   XmlNode transformationConfigurationsParentNode = parentNode.CreateChildElement("TransformationConfigurations");
   for(const auto& item : m_transformationConfigurations)
   {
     XmlNode transformationConfigurationsNode = transformationConfigurationsParentNode.CreateChildElement("TransformationConfiguration");
     item.AddToNode(transformationConfigurationsNode);
   }
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
