/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3ComputeObjectChecksumOperation.h>
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

S3ComputeObjectChecksumOperation::S3ComputeObjectChecksumOperation(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

S3ComputeObjectChecksumOperation& S3ComputeObjectChecksumOperation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode checksumAlgorithmNode = resultNode.FirstChild("ChecksumAlgorithm");
    if(!checksumAlgorithmNode.IsNull())
    {
      m_checksumAlgorithm = ComputeObjectChecksumAlgorithmMapper::GetComputeObjectChecksumAlgorithmForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(checksumAlgorithmNode.GetText()).c_str()));
      m_checksumAlgorithmHasBeenSet = true;
    }
    XmlNode checksumTypeNode = resultNode.FirstChild("ChecksumType");
    if(!checksumTypeNode.IsNull())
    {
      m_checksumType = ComputeObjectChecksumTypeMapper::GetComputeObjectChecksumTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(checksumTypeNode.GetText()).c_str()));
      m_checksumTypeHasBeenSet = true;
    }
  }

  return *this;
}

void S3ComputeObjectChecksumOperation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_checksumAlgorithmHasBeenSet)
  {
   XmlNode checksumAlgorithmNode = parentNode.CreateChildElement("ChecksumAlgorithm");
   checksumAlgorithmNode.SetText(ComputeObjectChecksumAlgorithmMapper::GetNameForComputeObjectChecksumAlgorithm(m_checksumAlgorithm));
  }

  if(m_checksumTypeHasBeenSet)
  {
   XmlNode checksumTypeNode = parentNode.CreateChildElement("ChecksumType");
   checksumTypeNode.SetText(ComputeObjectChecksumTypeMapper::GetNameForComputeObjectChecksumType(m_checksumType));
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
