﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3InitiateRestoreObjectOperation.h>
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

S3InitiateRestoreObjectOperation::S3InitiateRestoreObjectOperation() : 
    m_expirationInDays(0),
    m_expirationInDaysHasBeenSet(false),
    m_glacierJobTier(S3GlacierJobTier::NOT_SET),
    m_glacierJobTierHasBeenSet(false)
{
}

S3InitiateRestoreObjectOperation::S3InitiateRestoreObjectOperation(const XmlNode& xmlNode) : 
    m_expirationInDays(0),
    m_expirationInDaysHasBeenSet(false),
    m_glacierJobTier(S3GlacierJobTier::NOT_SET),
    m_glacierJobTierHasBeenSet(false)
{
  *this = xmlNode;
}

S3InitiateRestoreObjectOperation& S3InitiateRestoreObjectOperation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode expirationInDaysNode = resultNode.FirstChild("ExpirationInDays");
    if(!expirationInDaysNode.IsNull())
    {
      m_expirationInDays = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(expirationInDaysNode.GetText()).c_str()).c_str());
      m_expirationInDaysHasBeenSet = true;
    }
    XmlNode glacierJobTierNode = resultNode.FirstChild("GlacierJobTier");
    if(!glacierJobTierNode.IsNull())
    {
      m_glacierJobTier = S3GlacierJobTierMapper::GetS3GlacierJobTierForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(glacierJobTierNode.GetText()).c_str()).c_str());
      m_glacierJobTierHasBeenSet = true;
    }
  }

  return *this;
}

void S3InitiateRestoreObjectOperation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_expirationInDaysHasBeenSet)
  {
   XmlNode expirationInDaysNode = parentNode.CreateChildElement("ExpirationInDays");
   ss << m_expirationInDays;
   expirationInDaysNode.SetText(ss.str());
   ss.str("");
  }

  if(m_glacierJobTierHasBeenSet)
  {
   XmlNode glacierJobTierNode = parentNode.CreateChildElement("GlacierJobTier");
   glacierJobTierNode.SetText(S3GlacierJobTierMapper::GetNameForS3GlacierJobTier(m_glacierJobTier));
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
