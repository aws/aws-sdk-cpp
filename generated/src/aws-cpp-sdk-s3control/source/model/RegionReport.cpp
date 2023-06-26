﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/RegionReport.h>
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

RegionReport::RegionReport() : 
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_bucketAccountIdHasBeenSet(false)
{
}

RegionReport::RegionReport(const XmlNode& xmlNode) : 
    m_bucketHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_bucketAccountIdHasBeenSet(false)
{
  *this = xmlNode;
}

RegionReport& RegionReport::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNode.GetText());
      m_bucketHasBeenSet = true;
    }
    XmlNode regionNode = resultNode.FirstChild("Region");
    if(!regionNode.IsNull())
    {
      m_region = Aws::Utils::Xml::DecodeEscapedXmlText(regionNode.GetText());
      m_regionHasBeenSet = true;
    }
    XmlNode bucketAccountIdNode = resultNode.FirstChild("BucketAccountId");
    if(!bucketAccountIdNode.IsNull())
    {
      m_bucketAccountId = Aws::Utils::Xml::DecodeEscapedXmlText(bucketAccountIdNode.GetText());
      m_bucketAccountIdHasBeenSet = true;
    }
  }

  return *this;
}

void RegionReport::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_bucketHasBeenSet)
  {
   XmlNode bucketNode = parentNode.CreateChildElement("Bucket");
   bucketNode.SetText(m_bucket);
  }

  if(m_regionHasBeenSet)
  {
   XmlNode regionNode = parentNode.CreateChildElement("Region");
   regionNode.SetText(m_region);
  }

  if(m_bucketAccountIdHasBeenSet)
  {
   XmlNode bucketAccountIdNode = parentNode.CreateChildElement("BucketAccountId");
   bucketAccountIdNode.SetText(m_bucketAccountId);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
