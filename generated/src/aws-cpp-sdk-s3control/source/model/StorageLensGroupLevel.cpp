/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/StorageLensGroupLevel.h>
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

StorageLensGroupLevel::StorageLensGroupLevel() : 
    m_selectionCriteriaHasBeenSet(false)
{
}

StorageLensGroupLevel::StorageLensGroupLevel(const XmlNode& xmlNode) : 
    m_selectionCriteriaHasBeenSet(false)
{
  *this = xmlNode;
}

StorageLensGroupLevel& StorageLensGroupLevel::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode selectionCriteriaNode = resultNode.FirstChild("SelectionCriteria");
    if(!selectionCriteriaNode.IsNull())
    {
      m_selectionCriteria = selectionCriteriaNode;
      m_selectionCriteriaHasBeenSet = true;
    }
  }

  return *this;
}

void StorageLensGroupLevel::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_selectionCriteriaHasBeenSet)
  {
   XmlNode selectionCriteriaNode = parentNode.CreateChildElement("SelectionCriteria");
   m_selectionCriteria.AddToNode(selectionCriteriaNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
