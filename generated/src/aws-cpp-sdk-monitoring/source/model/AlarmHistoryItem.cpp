/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/AlarmHistoryItem.h>
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

AlarmHistoryItem::AlarmHistoryItem(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

AlarmHistoryItem& AlarmHistoryItem::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode alarmNameNode = resultNode.FirstChild("AlarmName");
    if(!alarmNameNode.IsNull())
    {
      m_alarmName = Aws::Utils::Xml::DecodeEscapedXmlText(alarmNameNode.GetText());
      m_alarmNameHasBeenSet = true;
    }
    XmlNode alarmContributorIdNode = resultNode.FirstChild("AlarmContributorId");
    if(!alarmContributorIdNode.IsNull())
    {
      m_alarmContributorId = Aws::Utils::Xml::DecodeEscapedXmlText(alarmContributorIdNode.GetText());
      m_alarmContributorIdHasBeenSet = true;
    }
    XmlNode alarmTypeNode = resultNode.FirstChild("AlarmType");
    if(!alarmTypeNode.IsNull())
    {
      m_alarmType = AlarmTypeMapper::GetAlarmTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(alarmTypeNode.GetText()).c_str()));
      m_alarmTypeHasBeenSet = true;
    }
    XmlNode timestampNode = resultNode.FirstChild("Timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_timestampHasBeenSet = true;
    }
    XmlNode historyItemTypeNode = resultNode.FirstChild("HistoryItemType");
    if(!historyItemTypeNode.IsNull())
    {
      m_historyItemType = HistoryItemTypeMapper::GetHistoryItemTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(historyItemTypeNode.GetText()).c_str()));
      m_historyItemTypeHasBeenSet = true;
    }
    XmlNode historySummaryNode = resultNode.FirstChild("HistorySummary");
    if(!historySummaryNode.IsNull())
    {
      m_historySummary = Aws::Utils::Xml::DecodeEscapedXmlText(historySummaryNode.GetText());
      m_historySummaryHasBeenSet = true;
    }
    XmlNode historyDataNode = resultNode.FirstChild("HistoryData");
    if(!historyDataNode.IsNull())
    {
      m_historyData = Aws::Utils::Xml::DecodeEscapedXmlText(historyDataNode.GetText());
      m_historyDataHasBeenSet = true;
    }
    XmlNode alarmContributorAttributesNode = resultNode.FirstChild("AlarmContributorAttributes");

    if(!alarmContributorAttributesNode.IsNull())
    {
      XmlNode alarmContributorAttributesEntry = alarmContributorAttributesNode.FirstChild("entry");
      m_alarmContributorAttributesHasBeenSet = !alarmContributorAttributesEntry.IsNull();
      while(!alarmContributorAttributesEntry.IsNull())
      {
        XmlNode keyNode = alarmContributorAttributesEntry.FirstChild("key");
        XmlNode valueNode = alarmContributorAttributesEntry.FirstChild("value");
        m_alarmContributorAttributes[keyNode.GetText()] =
            valueNode.GetText();
        alarmContributorAttributesEntry = alarmContributorAttributesEntry.NextNode("entry");
      }

      m_alarmContributorAttributesHasBeenSet = true;
    }
  }

  return *this;
}

void AlarmHistoryItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_alarmNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }

  if(m_alarmContributorIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlarmContributorId=" << StringUtils::URLEncode(m_alarmContributorId.c_str()) << "&";
  }

  if(m_alarmTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlarmType=" << StringUtils::URLEncode(AlarmTypeMapper::GetNameForAlarmType(m_alarmType)) << "&";
  }

  if(m_timestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_historyItemTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".HistoryItemType=" << StringUtils::URLEncode(HistoryItemTypeMapper::GetNameForHistoryItemType(m_historyItemType)) << "&";
  }

  if(m_historySummaryHasBeenSet)
  {
      oStream << location << index << locationValue << ".HistorySummary=" << StringUtils::URLEncode(m_historySummary.c_str()) << "&";
  }

  if(m_historyDataHasBeenSet)
  {
      oStream << location << index << locationValue << ".HistoryData=" << StringUtils::URLEncode(m_historyData.c_str()) << "&";
  }

  if(m_alarmContributorAttributesHasBeenSet)
  {
      unsigned alarmContributorAttributesIdx = 1;
      for(auto& item : m_alarmContributorAttributes)
      {
        oStream << location << index << locationValue << ".AlarmContributorAttributes.entry." << alarmContributorAttributesIdx << ".key="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        oStream << location << index << locationValue << ".AlarmContributorAttributes.entry." << alarmContributorAttributesIdx << ".value="
            << StringUtils::URLEncode(item.second.c_str()) << "&";
        alarmContributorAttributesIdx++;
      }
  }

}

void AlarmHistoryItem::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_alarmNameHasBeenSet)
  {
      oStream << location << ".AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }
  if(m_alarmContributorIdHasBeenSet)
  {
      oStream << location << ".AlarmContributorId=" << StringUtils::URLEncode(m_alarmContributorId.c_str()) << "&";
  }
  if(m_alarmTypeHasBeenSet)
  {
      oStream << location << ".AlarmType=" << StringUtils::URLEncode(AlarmTypeMapper::GetNameForAlarmType(m_alarmType)) << "&";
  }
  if(m_timestampHasBeenSet)
  {
      oStream << location << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_historyItemTypeHasBeenSet)
  {
      oStream << location << ".HistoryItemType=" << StringUtils::URLEncode(HistoryItemTypeMapper::GetNameForHistoryItemType(m_historyItemType)) << "&";
  }
  if(m_historySummaryHasBeenSet)
  {
      oStream << location << ".HistorySummary=" << StringUtils::URLEncode(m_historySummary.c_str()) << "&";
  }
  if(m_historyDataHasBeenSet)
  {
      oStream << location << ".HistoryData=" << StringUtils::URLEncode(m_historyData.c_str()) << "&";
  }
  if(m_alarmContributorAttributesHasBeenSet)
  {
      unsigned alarmContributorAttributesIdx = 1;
      for(auto& item : m_alarmContributorAttributes)
      {
        oStream << location << ".AlarmContributorAttributes.entry." << alarmContributorAttributesIdx << ".key="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        oStream << location << ".AlarmContributorAttributes.entry." << alarmContributorAttributesIdx << ".value="
            << StringUtils::URLEncode(item.second.c_str()) << "&";
        alarmContributorAttributesIdx++;
      }
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
