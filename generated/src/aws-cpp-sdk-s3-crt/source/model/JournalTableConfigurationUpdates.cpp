/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/JournalTableConfigurationUpdates.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Crt
{
namespace Model
{

JournalTableConfigurationUpdates::JournalTableConfigurationUpdates(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

JournalTableConfigurationUpdates& JournalTableConfigurationUpdates::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode recordExpirationNode = resultNode.FirstChild("RecordExpiration");
    if(!recordExpirationNode.IsNull())
    {
      m_recordExpiration = recordExpirationNode;
      m_recordExpirationHasBeenSet = true;
    }
  }

  return *this;
}

void JournalTableConfigurationUpdates::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_recordExpirationHasBeenSet)
  {
   XmlNode recordExpirationNode = parentNode.CreateChildElement("RecordExpiration");
   m_recordExpiration.AddToNode(recordExpirationNode);
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
