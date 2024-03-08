/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/InboundIntegration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

InboundIntegration::InboundIntegration() : 
    m_integrationArnHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_status(ZeroETLIntegrationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorsHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

InboundIntegration::InboundIntegration(const XmlNode& xmlNode) : 
    m_integrationArnHasBeenSet(false),
    m_sourceArnHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_status(ZeroETLIntegrationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorsHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
  *this = xmlNode;
}

InboundIntegration& InboundIntegration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode integrationArnNode = resultNode.FirstChild("IntegrationArn");
    if(!integrationArnNode.IsNull())
    {
      m_integrationArn = Aws::Utils::Xml::DecodeEscapedXmlText(integrationArnNode.GetText());
      m_integrationArnHasBeenSet = true;
    }
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
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ZeroETLIntegrationStatusMapper::GetZeroETLIntegrationStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
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
    XmlNode createTimeNode = resultNode.FirstChild("CreateTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
  }

  return *this;
}

void InboundIntegration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_integrationArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".IntegrationArn=" << StringUtils::URLEncode(m_integrationArn.c_str()) << "&";
  }

  if(m_sourceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }

  if(m_targetArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TargetArn=" << StringUtils::URLEncode(m_targetArn.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << ZeroETLIntegrationStatusMapper::GetNameForZeroETLIntegrationStatus(m_status) << "&";
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

  if(m_createTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void InboundIntegration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_integrationArnHasBeenSet)
  {
      oStream << location << ".IntegrationArn=" << StringUtils::URLEncode(m_integrationArn.c_str()) << "&";
  }
  if(m_sourceArnHasBeenSet)
  {
      oStream << location << ".SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }
  if(m_targetArnHasBeenSet)
  {
      oStream << location << ".TargetArn=" << StringUtils::URLEncode(m_targetArn.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << ZeroETLIntegrationStatusMapper::GetNameForZeroETLIntegrationStatus(m_status) << "&";
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
  if(m_createTimeHasBeenSet)
  {
      oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
