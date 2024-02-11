/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/Integration.h>
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

Integration::Integration() : 
    m_sourceArnHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_integrationNameHasBeenSet(false),
    m_integrationArnHasBeenSet(false),
    m_kMSKeyIdHasBeenSet(false),
    m_additionalEncryptionContextHasBeenSet(false),
    m_status(IntegrationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_errorsHasBeenSet(false)
{
}

Integration::Integration(const XmlNode& xmlNode) : 
    m_sourceArnHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_integrationNameHasBeenSet(false),
    m_integrationArnHasBeenSet(false),
    m_kMSKeyIdHasBeenSet(false),
    m_additionalEncryptionContextHasBeenSet(false),
    m_status(IntegrationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_errorsHasBeenSet(false)
{
  *this = xmlNode;
}

Integration& Integration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sourceArnNode = resultNode.FirstChild("SourceArn");
    if(!sourceArnNode.IsNull())
    {
      m_sourceArn = Aws::Utils::Xml::DecodeEscapedXmlText(sourceArnNode.GetText());
      m_sourceArnHasBeenSet = true;
    }
    XmlNode targetArnNode = resultNode.FirstChild("TargetArn");
    if(!targetArnNode.IsNull())
    {
      m_targetArn = Aws::Utils::Xml::DecodeEscapedXmlText(targetArnNode.GetText());
      m_targetArnHasBeenSet = true;
    }
    XmlNode integrationNameNode = resultNode.FirstChild("IntegrationName");
    if(!integrationNameNode.IsNull())
    {
      m_integrationName = Aws::Utils::Xml::DecodeEscapedXmlText(integrationNameNode.GetText());
      m_integrationNameHasBeenSet = true;
    }
    XmlNode integrationArnNode = resultNode.FirstChild("IntegrationArn");
    if(!integrationArnNode.IsNull())
    {
      m_integrationArn = Aws::Utils::Xml::DecodeEscapedXmlText(integrationArnNode.GetText());
      m_integrationArnHasBeenSet = true;
    }
    XmlNode kMSKeyIdNode = resultNode.FirstChild("KMSKeyId");
    if(!kMSKeyIdNode.IsNull())
    {
      m_kMSKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kMSKeyIdNode.GetText());
      m_kMSKeyIdHasBeenSet = true;
    }
    XmlNode additionalEncryptionContextNode = resultNode.FirstChild("AdditionalEncryptionContext");

    if(!additionalEncryptionContextNode.IsNull())
    {
      XmlNode additionalEncryptionContextEntry = additionalEncryptionContextNode.FirstChild("entry");
      while(!additionalEncryptionContextEntry.IsNull())
      {
        XmlNode keyNode = additionalEncryptionContextEntry.FirstChild("key");
        XmlNode valueNode = additionalEncryptionContextEntry.FirstChild("value");
        m_additionalEncryptionContext[keyNode.GetText()] =
            valueNode.GetText();
        additionalEncryptionContextEntry = additionalEncryptionContextEntry.NextNode("entry");
      }

      m_additionalEncryptionContextHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = IntegrationStatusMapper::GetIntegrationStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("Tag");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("Tag");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("CreateTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode errorsNode = resultNode.FirstChild("Errors");
    if(!errorsNode.IsNull())
    {
      XmlNode errorsMember = errorsNode.FirstChild("IntegrationError");
      while(!errorsMember.IsNull())
      {
        m_errors.push_back(errorsMember);
        errorsMember = errorsMember.NextNode("IntegrationError");
      }

      m_errorsHasBeenSet = true;
    }
  }

  return *this;
}

void Integration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sourceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }

  if(m_targetArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetArn=" << StringUtils::URLEncode(m_targetArn.c_str()) << "&";
  }

  if(m_integrationNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".IntegrationName=" << StringUtils::URLEncode(m_integrationName.c_str()) << "&";
  }

  if(m_integrationArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IntegrationArn=" << StringUtils::URLEncode(m_integrationArn.c_str()) << "&";
  }

  if(m_kMSKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KMSKeyId=" << StringUtils::URLEncode(m_kMSKeyId.c_str()) << "&";
  }

  if(m_additionalEncryptionContextHasBeenSet)
  {
      unsigned additionalEncryptionContextIdx = 1;
      for(auto& item : m_additionalEncryptionContext)
      {
        oStream << location << index << locationValue << ".AdditionalEncryptionContext.entry." << additionalEncryptionContextIdx << ".key="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        oStream << location << index << locationValue << ".AdditionalEncryptionContext.entry." << additionalEncryptionContextIdx << ".value="
            << StringUtils::URLEncode(item.second.c_str()) << "&";
        additionalEncryptionContextIdx++;
      }
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << IntegrationStatusMapper::GetNameForIntegrationStatus(m_status) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_createTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_errorsHasBeenSet)
  {
      unsigned errorsIdx = 1;
      for(auto& item : m_errors)
      {
        Aws::StringStream errorsSs;
        errorsSs << location << index << locationValue << ".IntegrationError." << errorsIdx++;
        item.OutputToStream(oStream, errorsSs.str().c_str());
      }
  }

  Aws::StringStream responseMetadataLocationAndMemberSs;
  responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
  m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
}

void Integration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sourceArnHasBeenSet)
  {
      oStream << location << ".SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }
  if(m_targetArnHasBeenSet)
  {
      oStream << location << ".TargetArn=" << StringUtils::URLEncode(m_targetArn.c_str()) << "&";
  }
  if(m_integrationNameHasBeenSet)
  {
      oStream << location << ".IntegrationName=" << StringUtils::URLEncode(m_integrationName.c_str()) << "&";
  }
  if(m_integrationArnHasBeenSet)
  {
      oStream << location << ".IntegrationArn=" << StringUtils::URLEncode(m_integrationArn.c_str()) << "&";
  }
  if(m_kMSKeyIdHasBeenSet)
  {
      oStream << location << ".KMSKeyId=" << StringUtils::URLEncode(m_kMSKeyId.c_str()) << "&";
  }
  if(m_additionalEncryptionContextHasBeenSet)
  {
      unsigned additionalEncryptionContextIdx = 1;
      for(auto& item : m_additionalEncryptionContext)
      {
        oStream << location << ".AdditionalEncryptionContext.entry."  << additionalEncryptionContextIdx << ".key="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        oStream << location <<  ".AdditionalEncryptionContext.entry." << additionalEncryptionContextIdx << ".value="
            << StringUtils::URLEncode(item.second.c_str()) << "&";
        additionalEncryptionContextIdx++;
      }

  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << IntegrationStatusMapper::GetNameForIntegrationStatus(m_status) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_createTimeHasBeenSet)
  {
      oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_errorsHasBeenSet)
  {
      unsigned errorsIdx = 1;
      for(auto& item : m_errors)
      {
        Aws::StringStream errorsSs;
        errorsSs << location <<  ".IntegrationError." << errorsIdx++;
        item.OutputToStream(oStream, errorsSs.str().c_str());
      }
  }
  Aws::String responseMetadataLocationAndMember(location);
  responseMetadataLocationAndMember += ".ResponseMetadata";
  m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
}

} // namespace Model
} // namespace RDS
} // namespace Aws
