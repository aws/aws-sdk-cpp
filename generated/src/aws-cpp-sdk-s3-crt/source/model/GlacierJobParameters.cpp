﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/GlacierJobParameters.h>
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

GlacierJobParameters::GlacierJobParameters(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

GlacierJobParameters& GlacierJobParameters::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode tierNode = resultNode.FirstChild("Tier");
    if(!tierNode.IsNull())
    {
      m_tier = TierMapper::GetTierForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tierNode.GetText()).c_str()));
      m_tierHasBeenSet = true;
    }
  }

  return *this;
}

void GlacierJobParameters::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_tierHasBeenSet)
  {
   XmlNode tierNode = parentNode.CreateChildElement("Tier");
   tierNode.SetText(TierMapper::GetNameForTier(m_tier));
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
