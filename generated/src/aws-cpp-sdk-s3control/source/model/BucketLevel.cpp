/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/BucketLevel.h>
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

BucketLevel::BucketLevel() : 
    m_activityMetricsHasBeenSet(false),
    m_prefixLevelHasBeenSet(false),
    m_advancedCostOptimizationMetricsHasBeenSet(false),
    m_advancedDataProtectionMetricsHasBeenSet(false),
    m_detailedStatusCodesMetricsHasBeenSet(false)
{
}

BucketLevel::BucketLevel(const XmlNode& xmlNode) : 
    m_activityMetricsHasBeenSet(false),
    m_prefixLevelHasBeenSet(false),
    m_advancedCostOptimizationMetricsHasBeenSet(false),
    m_advancedDataProtectionMetricsHasBeenSet(false),
    m_detailedStatusCodesMetricsHasBeenSet(false)
{
  *this = xmlNode;
}

BucketLevel& BucketLevel::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode activityMetricsNode = resultNode.FirstChild("ActivityMetrics");
    if(!activityMetricsNode.IsNull())
    {
      m_activityMetrics = activityMetricsNode;
      m_activityMetricsHasBeenSet = true;
    }
    XmlNode prefixLevelNode = resultNode.FirstChild("PrefixLevel");
    if(!prefixLevelNode.IsNull())
    {
      m_prefixLevel = prefixLevelNode;
      m_prefixLevelHasBeenSet = true;
    }
    XmlNode advancedCostOptimizationMetricsNode = resultNode.FirstChild("AdvancedCostOptimizationMetrics");
    if(!advancedCostOptimizationMetricsNode.IsNull())
    {
      m_advancedCostOptimizationMetrics = advancedCostOptimizationMetricsNode;
      m_advancedCostOptimizationMetricsHasBeenSet = true;
    }
    XmlNode advancedDataProtectionMetricsNode = resultNode.FirstChild("AdvancedDataProtectionMetrics");
    if(!advancedDataProtectionMetricsNode.IsNull())
    {
      m_advancedDataProtectionMetrics = advancedDataProtectionMetricsNode;
      m_advancedDataProtectionMetricsHasBeenSet = true;
    }
    XmlNode detailedStatusCodesMetricsNode = resultNode.FirstChild("DetailedStatusCodesMetrics");
    if(!detailedStatusCodesMetricsNode.IsNull())
    {
      m_detailedStatusCodesMetrics = detailedStatusCodesMetricsNode;
      m_detailedStatusCodesMetricsHasBeenSet = true;
    }
  }

  return *this;
}

void BucketLevel::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_activityMetricsHasBeenSet)
  {
   XmlNode activityMetricsNode = parentNode.CreateChildElement("ActivityMetrics");
   m_activityMetrics.AddToNode(activityMetricsNode);
  }

  if(m_prefixLevelHasBeenSet)
  {
   XmlNode prefixLevelNode = parentNode.CreateChildElement("PrefixLevel");
   m_prefixLevel.AddToNode(prefixLevelNode);
  }

  if(m_advancedCostOptimizationMetricsHasBeenSet)
  {
   XmlNode advancedCostOptimizationMetricsNode = parentNode.CreateChildElement("AdvancedCostOptimizationMetrics");
   m_advancedCostOptimizationMetrics.AddToNode(advancedCostOptimizationMetricsNode);
  }

  if(m_advancedDataProtectionMetricsHasBeenSet)
  {
   XmlNode advancedDataProtectionMetricsNode = parentNode.CreateChildElement("AdvancedDataProtectionMetrics");
   m_advancedDataProtectionMetrics.AddToNode(advancedDataProtectionMetricsNode);
  }

  if(m_detailedStatusCodesMetricsHasBeenSet)
  {
   XmlNode detailedStatusCodesMetricsNode = parentNode.CreateChildElement("DetailedStatusCodesMetrics");
   m_detailedStatusCodesMetrics.AddToNode(detailedStatusCodesMetricsNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
