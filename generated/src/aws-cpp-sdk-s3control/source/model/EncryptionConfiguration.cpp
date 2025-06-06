﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/EncryptionConfiguration.h>
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

EncryptionConfiguration::EncryptionConfiguration(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

EncryptionConfiguration& EncryptionConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode replicaKmsKeyIDNode = resultNode.FirstChild("ReplicaKmsKeyID");
    if(!replicaKmsKeyIDNode.IsNull())
    {
      m_replicaKmsKeyID = Aws::Utils::Xml::DecodeEscapedXmlText(replicaKmsKeyIDNode.GetText());
      m_replicaKmsKeyIDHasBeenSet = true;
    }
  }

  return *this;
}

void EncryptionConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_replicaKmsKeyIDHasBeenSet)
  {
   XmlNode replicaKmsKeyIDNode = parentNode.CreateChildElement("ReplicaKmsKeyID");
   replicaKmsKeyIDNode.SetText(m_replicaKmsKeyID);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
