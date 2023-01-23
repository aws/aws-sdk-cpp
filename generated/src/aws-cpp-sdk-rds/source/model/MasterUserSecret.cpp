/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/MasterUserSecret.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

MasterUserSecret::MasterUserSecret() : 
    m_secretArnHasBeenSet(false),
    m_secretStatusHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
}

MasterUserSecret::MasterUserSecret(const XmlNode& xmlNode) : 
    m_secretArnHasBeenSet(false),
    m_secretStatusHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false)
{
  *this = xmlNode;
}

MasterUserSecret& MasterUserSecret::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode secretArnNode = resultNode.FirstChild("SecretArn");
    if(!secretArnNode.IsNull())
    {
      m_secretArn = Aws::Utils::Xml::DecodeEscapedXmlText(secretArnNode.GetText());
      m_secretArnHasBeenSet = true;
    }
    XmlNode secretStatusNode = resultNode.FirstChild("SecretStatus");
    if(!secretStatusNode.IsNull())
    {
      m_secretStatus = Aws::Utils::Xml::DecodeEscapedXmlText(secretStatusNode.GetText());
      m_secretStatusHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("KmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
      m_kmsKeyIdHasBeenSet = true;
    }
  }

  return *this;
}

void MasterUserSecret::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_secretArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SecretArn=" << StringUtils::URLEncode(m_secretArn.c_str()) << "&";
  }

  if(m_secretStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".SecretStatus=" << StringUtils::URLEncode(m_secretStatus.c_str()) << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

}

void MasterUserSecret::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_secretArnHasBeenSet)
  {
      oStream << location << ".SecretArn=" << StringUtils::URLEncode(m_secretArn.c_str()) << "&";
  }
  if(m_secretStatusHasBeenSet)
  {
      oStream << location << ".SecretStatus=" << StringUtils::URLEncode(m_secretStatus.c_str()) << "&";
  }
  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
