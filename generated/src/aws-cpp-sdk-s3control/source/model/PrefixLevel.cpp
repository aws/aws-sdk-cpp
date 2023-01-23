/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/PrefixLevel.h>
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

PrefixLevel::PrefixLevel() : 
    m_storageMetricsHasBeenSet(false)
{
}

PrefixLevel::PrefixLevel(const XmlNode& xmlNode) : 
    m_storageMetricsHasBeenSet(false)
{
  *this = xmlNode;
}

PrefixLevel& PrefixLevel::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode storageMetricsNode = resultNode.FirstChild("StorageMetrics");
    if(!storageMetricsNode.IsNull())
    {
      m_storageMetrics = storageMetricsNode;
      m_storageMetricsHasBeenSet = true;
    }
  }

  return *this;
}

void PrefixLevel::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_storageMetricsHasBeenSet)
  {
   XmlNode storageMetricsNode = parentNode.CreateChildElement("StorageMetrics");
   m_storageMetrics.AddToNode(storageMetricsNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
