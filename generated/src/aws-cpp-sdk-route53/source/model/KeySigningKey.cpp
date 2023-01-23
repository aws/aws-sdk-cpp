/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/KeySigningKey.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

KeySigningKey::KeySigningKey() : 
    m_nameHasBeenSet(false),
    m_kmsArnHasBeenSet(false),
    m_flag(0),
    m_flagHasBeenSet(false),
    m_signingAlgorithmMnemonicHasBeenSet(false),
    m_signingAlgorithmType(0),
    m_signingAlgorithmTypeHasBeenSet(false),
    m_digestAlgorithmMnemonicHasBeenSet(false),
    m_digestAlgorithmType(0),
    m_digestAlgorithmTypeHasBeenSet(false),
    m_keyTag(0),
    m_keyTagHasBeenSet(false),
    m_digestValueHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_dSRecordHasBeenSet(false),
    m_dNSKEYRecordHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
}

KeySigningKey::KeySigningKey(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_kmsArnHasBeenSet(false),
    m_flag(0),
    m_flagHasBeenSet(false),
    m_signingAlgorithmMnemonicHasBeenSet(false),
    m_signingAlgorithmType(0),
    m_signingAlgorithmTypeHasBeenSet(false),
    m_digestAlgorithmMnemonicHasBeenSet(false),
    m_digestAlgorithmType(0),
    m_digestAlgorithmTypeHasBeenSet(false),
    m_keyTag(0),
    m_keyTagHasBeenSet(false),
    m_digestValueHasBeenSet(false),
    m_publicKeyHasBeenSet(false),
    m_dSRecordHasBeenSet(false),
    m_dNSKEYRecordHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
  *this = xmlNode;
}

KeySigningKey& KeySigningKey::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode kmsArnNode = resultNode.FirstChild("KmsArn");
    if(!kmsArnNode.IsNull())
    {
      m_kmsArn = Aws::Utils::Xml::DecodeEscapedXmlText(kmsArnNode.GetText());
      m_kmsArnHasBeenSet = true;
    }
    XmlNode flagNode = resultNode.FirstChild("Flag");
    if(!flagNode.IsNull())
    {
      m_flag = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(flagNode.GetText()).c_str()).c_str());
      m_flagHasBeenSet = true;
    }
    XmlNode signingAlgorithmMnemonicNode = resultNode.FirstChild("SigningAlgorithmMnemonic");
    if(!signingAlgorithmMnemonicNode.IsNull())
    {
      m_signingAlgorithmMnemonic = Aws::Utils::Xml::DecodeEscapedXmlText(signingAlgorithmMnemonicNode.GetText());
      m_signingAlgorithmMnemonicHasBeenSet = true;
    }
    XmlNode signingAlgorithmTypeNode = resultNode.FirstChild("SigningAlgorithmType");
    if(!signingAlgorithmTypeNode.IsNull())
    {
      m_signingAlgorithmType = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(signingAlgorithmTypeNode.GetText()).c_str()).c_str());
      m_signingAlgorithmTypeHasBeenSet = true;
    }
    XmlNode digestAlgorithmMnemonicNode = resultNode.FirstChild("DigestAlgorithmMnemonic");
    if(!digestAlgorithmMnemonicNode.IsNull())
    {
      m_digestAlgorithmMnemonic = Aws::Utils::Xml::DecodeEscapedXmlText(digestAlgorithmMnemonicNode.GetText());
      m_digestAlgorithmMnemonicHasBeenSet = true;
    }
    XmlNode digestAlgorithmTypeNode = resultNode.FirstChild("DigestAlgorithmType");
    if(!digestAlgorithmTypeNode.IsNull())
    {
      m_digestAlgorithmType = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(digestAlgorithmTypeNode.GetText()).c_str()).c_str());
      m_digestAlgorithmTypeHasBeenSet = true;
    }
    XmlNode keyTagNode = resultNode.FirstChild("KeyTag");
    if(!keyTagNode.IsNull())
    {
      m_keyTag = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(keyTagNode.GetText()).c_str()).c_str());
      m_keyTagHasBeenSet = true;
    }
    XmlNode digestValueNode = resultNode.FirstChild("DigestValue");
    if(!digestValueNode.IsNull())
    {
      m_digestValue = Aws::Utils::Xml::DecodeEscapedXmlText(digestValueNode.GetText());
      m_digestValueHasBeenSet = true;
    }
    XmlNode publicKeyNode = resultNode.FirstChild("PublicKey");
    if(!publicKeyNode.IsNull())
    {
      m_publicKey = Aws::Utils::Xml::DecodeEscapedXmlText(publicKeyNode.GetText());
      m_publicKeyHasBeenSet = true;
    }
    XmlNode dSRecordNode = resultNode.FirstChild("DSRecord");
    if(!dSRecordNode.IsNull())
    {
      m_dSRecord = Aws::Utils::Xml::DecodeEscapedXmlText(dSRecordNode.GetText());
      m_dSRecordHasBeenSet = true;
    }
    XmlNode dNSKEYRecordNode = resultNode.FirstChild("DNSKEYRecord");
    if(!dNSKEYRecordNode.IsNull())
    {
      m_dNSKEYRecord = Aws::Utils::Xml::DecodeEscapedXmlText(dNSKEYRecordNode.GetText());
      m_dNSKEYRecordHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("StatusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = Aws::Utils::Xml::DecodeEscapedXmlText(statusMessageNode.GetText());
      m_statusMessageHasBeenSet = true;
    }
    XmlNode createdDateNode = resultNode.FirstChild("CreatedDate");
    if(!createdDateNode.IsNull())
    {
      m_createdDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdDateHasBeenSet = true;
    }
    XmlNode lastModifiedDateNode = resultNode.FirstChild("LastModifiedDate");
    if(!lastModifiedDateNode.IsNull())
    {
      m_lastModifiedDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastModifiedDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastModifiedDateHasBeenSet = true;
    }
  }

  return *this;
}

void KeySigningKey::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_kmsArnHasBeenSet)
  {
   XmlNode kmsArnNode = parentNode.CreateChildElement("KmsArn");
   kmsArnNode.SetText(m_kmsArn);
  }

  if(m_flagHasBeenSet)
  {
   XmlNode flagNode = parentNode.CreateChildElement("Flag");
   ss << m_flag;
   flagNode.SetText(ss.str());
   ss.str("");
  }

  if(m_signingAlgorithmMnemonicHasBeenSet)
  {
   XmlNode signingAlgorithmMnemonicNode = parentNode.CreateChildElement("SigningAlgorithmMnemonic");
   signingAlgorithmMnemonicNode.SetText(m_signingAlgorithmMnemonic);
  }

  if(m_signingAlgorithmTypeHasBeenSet)
  {
   XmlNode signingAlgorithmTypeNode = parentNode.CreateChildElement("SigningAlgorithmType");
   ss << m_signingAlgorithmType;
   signingAlgorithmTypeNode.SetText(ss.str());
   ss.str("");
  }

  if(m_digestAlgorithmMnemonicHasBeenSet)
  {
   XmlNode digestAlgorithmMnemonicNode = parentNode.CreateChildElement("DigestAlgorithmMnemonic");
   digestAlgorithmMnemonicNode.SetText(m_digestAlgorithmMnemonic);
  }

  if(m_digestAlgorithmTypeHasBeenSet)
  {
   XmlNode digestAlgorithmTypeNode = parentNode.CreateChildElement("DigestAlgorithmType");
   ss << m_digestAlgorithmType;
   digestAlgorithmTypeNode.SetText(ss.str());
   ss.str("");
  }

  if(m_keyTagHasBeenSet)
  {
   XmlNode keyTagNode = parentNode.CreateChildElement("KeyTag");
   ss << m_keyTag;
   keyTagNode.SetText(ss.str());
   ss.str("");
  }

  if(m_digestValueHasBeenSet)
  {
   XmlNode digestValueNode = parentNode.CreateChildElement("DigestValue");
   digestValueNode.SetText(m_digestValue);
  }

  if(m_publicKeyHasBeenSet)
  {
   XmlNode publicKeyNode = parentNode.CreateChildElement("PublicKey");
   publicKeyNode.SetText(m_publicKey);
  }

  if(m_dSRecordHasBeenSet)
  {
   XmlNode dSRecordNode = parentNode.CreateChildElement("DSRecord");
   dSRecordNode.SetText(m_dSRecord);
  }

  if(m_dNSKEYRecordHasBeenSet)
  {
   XmlNode dNSKEYRecordNode = parentNode.CreateChildElement("DNSKEYRecord");
   dNSKEYRecordNode.SetText(m_dNSKEYRecord);
  }

  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(m_status);
  }

  if(m_statusMessageHasBeenSet)
  {
   XmlNode statusMessageNode = parentNode.CreateChildElement("StatusMessage");
   statusMessageNode.SetText(m_statusMessage);
  }

  if(m_createdDateHasBeenSet)
  {
   XmlNode createdDateNode = parentNode.CreateChildElement("CreatedDate");
   createdDateNode.SetText(m_createdDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastModifiedDateHasBeenSet)
  {
   XmlNode lastModifiedDateNode = parentNode.CreateChildElement("LastModifiedDate");
   lastModifiedDateNode.SetText(m_lastModifiedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
