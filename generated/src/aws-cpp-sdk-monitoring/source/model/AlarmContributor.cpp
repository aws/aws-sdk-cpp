/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/AlarmContributor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

AlarmContributor::AlarmContributor(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

AlarmContributor& AlarmContributor::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode contributorIdNode = resultNode.FirstChild("ContributorId");
    if(!contributorIdNode.IsNull())
    {
      m_contributorId = Aws::Utils::Xml::DecodeEscapedXmlText(contributorIdNode.GetText());
      m_contributorIdHasBeenSet = true;
    }
    XmlNode contributorAttributesNode = resultNode.FirstChild("ContributorAttributes");

    if(!contributorAttributesNode.IsNull())
    {
      XmlNode contributorAttributesEntry = contributorAttributesNode.FirstChild("entry");
      m_contributorAttributesHasBeenSet = !contributorAttributesEntry.IsNull();
      while(!contributorAttributesEntry.IsNull())
      {
        XmlNode keyNode = contributorAttributesEntry.FirstChild("key");
        XmlNode valueNode = contributorAttributesEntry.FirstChild("value");
        m_contributorAttributes[keyNode.GetText()] =
            valueNode.GetText();
        contributorAttributesEntry = contributorAttributesEntry.NextNode("entry");
      }

      m_contributorAttributesHasBeenSet = true;
    }
    XmlNode stateReasonNode = resultNode.FirstChild("StateReason");
    if(!stateReasonNode.IsNull())
    {
      m_stateReason = Aws::Utils::Xml::DecodeEscapedXmlText(stateReasonNode.GetText());
      m_stateReasonHasBeenSet = true;
    }
    XmlNode stateTransitionedTimestampNode = resultNode.FirstChild("StateTransitionedTimestamp");
    if(!stateTransitionedTimestampNode.IsNull())
    {
      m_stateTransitionedTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateTransitionedTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_stateTransitionedTimestampHasBeenSet = true;
    }
  }

  return *this;
}

void AlarmContributor::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_contributorIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ContributorId=" << StringUtils::URLEncode(m_contributorId.c_str()) << "&";
  }

  if(m_contributorAttributesHasBeenSet)
  {
      unsigned contributorAttributesIdx = 1;
      for(auto& item : m_contributorAttributes)
      {
        oStream << location << index << locationValue << ".ContributorAttributes.entry." << contributorAttributesIdx << ".key="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        oStream << location << index << locationValue << ".ContributorAttributes.entry." << contributorAttributesIdx << ".value="
            << StringUtils::URLEncode(item.second.c_str()) << "&";
        contributorAttributesIdx++;
      }
  }

  if(m_stateReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateReason=" << StringUtils::URLEncode(m_stateReason.c_str()) << "&";
  }

  if(m_stateTransitionedTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateTransitionedTimestamp=" << StringUtils::URLEncode(m_stateTransitionedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void AlarmContributor::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_contributorIdHasBeenSet)
  {
      oStream << location << ".ContributorId=" << StringUtils::URLEncode(m_contributorId.c_str()) << "&";
  }
  if(m_contributorAttributesHasBeenSet)
  {
      unsigned contributorAttributesIdx = 1;
      for(auto& item : m_contributorAttributes)
      {
        oStream << location << ".ContributorAttributes.entry." << contributorAttributesIdx << ".key="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        oStream << location << ".ContributorAttributes.entry." << contributorAttributesIdx << ".value="
            << StringUtils::URLEncode(item.second.c_str()) << "&";
        contributorAttributesIdx++;
      }
  }
  if(m_stateReasonHasBeenSet)
  {
      oStream << location << ".StateReason=" << StringUtils::URLEncode(m_stateReason.c_str()) << "&";
  }
  if(m_stateTransitionedTimestampHasBeenSet)
  {
      oStream << location << ".StateTransitionedTimestamp=" << StringUtils::URLEncode(m_stateTransitionedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
