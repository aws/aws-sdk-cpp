/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/SSES3Encryption.h>
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

SSES3Encryption::SSES3Encryption()
{
}

SSES3Encryption::SSES3Encryption(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

SSES3Encryption& SSES3Encryption::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
  }

  return *this;
}

void SSES3Encryption::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  AWS_UNREFERENCED_PARAM(parentNode);
}

} // namespace Model
} // namespace S3Control
} // namespace Aws
