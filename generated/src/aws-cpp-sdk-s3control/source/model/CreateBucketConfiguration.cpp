﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/CreateBucketConfiguration.h>
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

CreateBucketConfiguration::CreateBucketConfiguration(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CreateBucketConfiguration& CreateBucketConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode locationConstraintNode = resultNode.FirstChild("LocationConstraint");
    if(!locationConstraintNode.IsNull())
    {
      m_locationConstraint = BucketLocationConstraintMapper::GetBucketLocationConstraintForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(locationConstraintNode.GetText()).c_str()));
      m_locationConstraintHasBeenSet = true;
    }
  }

  return *this;
}

void CreateBucketConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_locationConstraintHasBeenSet)
  {
   XmlNode locationConstraintNode = parentNode.CreateChildElement("LocationConstraint");
   locationConstraintNode.SetText(BucketLocationConstraintMapper::GetNameForBucketLocationConstraint(m_locationConstraint));
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
