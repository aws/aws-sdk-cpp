/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/CompositeAlarm.h>
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

CompositeAlarm::CompositeAlarm() : 
    m_actionsEnabled(false),
    m_actionsEnabledHasBeenSet(false),
    m_alarmActionsHasBeenSet(false),
    m_alarmArnHasBeenSet(false),
    m_alarmConfigurationUpdatedTimestampHasBeenSet(false),
    m_alarmDescriptionHasBeenSet(false),
    m_alarmNameHasBeenSet(false),
    m_alarmRuleHasBeenSet(false),
    m_insufficientDataActionsHasBeenSet(false),
    m_oKActionsHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_stateReasonDataHasBeenSet(false),
    m_stateUpdatedTimestampHasBeenSet(false),
    m_stateValue(StateValue::NOT_SET),
    m_stateValueHasBeenSet(false),
    m_stateTransitionedTimestampHasBeenSet(false),
    m_actionsSuppressedBy(ActionsSuppressedBy::NOT_SET),
    m_actionsSuppressedByHasBeenSet(false),
    m_actionsSuppressedReasonHasBeenSet(false),
    m_actionsSuppressorHasBeenSet(false),
    m_actionsSuppressorWaitPeriod(0),
    m_actionsSuppressorWaitPeriodHasBeenSet(false),
    m_actionsSuppressorExtensionPeriod(0),
    m_actionsSuppressorExtensionPeriodHasBeenSet(false)
{
}

CompositeAlarm::CompositeAlarm(const XmlNode& xmlNode) : 
    m_actionsEnabled(false),
    m_actionsEnabledHasBeenSet(false),
    m_alarmActionsHasBeenSet(false),
    m_alarmArnHasBeenSet(false),
    m_alarmConfigurationUpdatedTimestampHasBeenSet(false),
    m_alarmDescriptionHasBeenSet(false),
    m_alarmNameHasBeenSet(false),
    m_alarmRuleHasBeenSet(false),
    m_insufficientDataActionsHasBeenSet(false),
    m_oKActionsHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_stateReasonDataHasBeenSet(false),
    m_stateUpdatedTimestampHasBeenSet(false),
    m_stateValue(StateValue::NOT_SET),
    m_stateValueHasBeenSet(false),
    m_stateTransitionedTimestampHasBeenSet(false),
    m_actionsSuppressedBy(ActionsSuppressedBy::NOT_SET),
    m_actionsSuppressedByHasBeenSet(false),
    m_actionsSuppressedReasonHasBeenSet(false),
    m_actionsSuppressorHasBeenSet(false),
    m_actionsSuppressorWaitPeriod(0),
    m_actionsSuppressorWaitPeriodHasBeenSet(false),
    m_actionsSuppressorExtensionPeriod(0),
    m_actionsSuppressorExtensionPeriodHasBeenSet(false)
{
  *this = xmlNode;
}

CompositeAlarm& CompositeAlarm::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode actionsEnabledNode = resultNode.FirstChild("ActionsEnabled");
    if(!actionsEnabledNode.IsNull())
    {
      m_actionsEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(actionsEnabledNode.GetText()).c_str()).c_str());
      m_actionsEnabledHasBeenSet = true;
    }
    XmlNode alarmActionsNode = resultNode.FirstChild("AlarmActions");
    if(!alarmActionsNode.IsNull())
    {
      XmlNode alarmActionsMember = alarmActionsNode.FirstChild("member");
      while(!alarmActionsMember.IsNull())
      {
        m_alarmActions.push_back(alarmActionsMember.GetText());
        alarmActionsMember = alarmActionsMember.NextNode("member");
      }

      m_alarmActionsHasBeenSet = true;
    }
    XmlNode alarmArnNode = resultNode.FirstChild("AlarmArn");
    if(!alarmArnNode.IsNull())
    {
      m_alarmArn = Aws::Utils::Xml::DecodeEscapedXmlText(alarmArnNode.GetText());
      m_alarmArnHasBeenSet = true;
    }
    XmlNode alarmConfigurationUpdatedTimestampNode = resultNode.FirstChild("AlarmConfigurationUpdatedTimestamp");
    if(!alarmConfigurationUpdatedTimestampNode.IsNull())
    {
      m_alarmConfigurationUpdatedTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(alarmConfigurationUpdatedTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_alarmConfigurationUpdatedTimestampHasBeenSet = true;
    }
    XmlNode alarmDescriptionNode = resultNode.FirstChild("AlarmDescription");
    if(!alarmDescriptionNode.IsNull())
    {
      m_alarmDescription = Aws::Utils::Xml::DecodeEscapedXmlText(alarmDescriptionNode.GetText());
      m_alarmDescriptionHasBeenSet = true;
    }
    XmlNode alarmNameNode = resultNode.FirstChild("AlarmName");
    if(!alarmNameNode.IsNull())
    {
      m_alarmName = Aws::Utils::Xml::DecodeEscapedXmlText(alarmNameNode.GetText());
      m_alarmNameHasBeenSet = true;
    }
    XmlNode alarmRuleNode = resultNode.FirstChild("AlarmRule");
    if(!alarmRuleNode.IsNull())
    {
      m_alarmRule = Aws::Utils::Xml::DecodeEscapedXmlText(alarmRuleNode.GetText());
      m_alarmRuleHasBeenSet = true;
    }
    XmlNode insufficientDataActionsNode = resultNode.FirstChild("InsufficientDataActions");
    if(!insufficientDataActionsNode.IsNull())
    {
      XmlNode insufficientDataActionsMember = insufficientDataActionsNode.FirstChild("member");
      while(!insufficientDataActionsMember.IsNull())
      {
        m_insufficientDataActions.push_back(insufficientDataActionsMember.GetText());
        insufficientDataActionsMember = insufficientDataActionsMember.NextNode("member");
      }

      m_insufficientDataActionsHasBeenSet = true;
    }
    XmlNode oKActionsNode = resultNode.FirstChild("OKActions");
    if(!oKActionsNode.IsNull())
    {
      XmlNode oKActionsMember = oKActionsNode.FirstChild("member");
      while(!oKActionsMember.IsNull())
      {
        m_oKActions.push_back(oKActionsMember.GetText());
        oKActionsMember = oKActionsMember.NextNode("member");
      }

      m_oKActionsHasBeenSet = true;
    }
    XmlNode stateReasonNode = resultNode.FirstChild("StateReason");
    if(!stateReasonNode.IsNull())
    {
      m_stateReason = Aws::Utils::Xml::DecodeEscapedXmlText(stateReasonNode.GetText());
      m_stateReasonHasBeenSet = true;
    }
    XmlNode stateReasonDataNode = resultNode.FirstChild("StateReasonData");
    if(!stateReasonDataNode.IsNull())
    {
      m_stateReasonData = Aws::Utils::Xml::DecodeEscapedXmlText(stateReasonDataNode.GetText());
      m_stateReasonDataHasBeenSet = true;
    }
    XmlNode stateUpdatedTimestampNode = resultNode.FirstChild("StateUpdatedTimestamp");
    if(!stateUpdatedTimestampNode.IsNull())
    {
      m_stateUpdatedTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateUpdatedTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_stateUpdatedTimestampHasBeenSet = true;
    }
    XmlNode stateValueNode = resultNode.FirstChild("StateValue");
    if(!stateValueNode.IsNull())
    {
      m_stateValue = StateValueMapper::GetStateValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateValueNode.GetText()).c_str()).c_str());
      m_stateValueHasBeenSet = true;
    }
    XmlNode stateTransitionedTimestampNode = resultNode.FirstChild("StateTransitionedTimestamp");
    if(!stateTransitionedTimestampNode.IsNull())
    {
      m_stateTransitionedTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateTransitionedTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_stateTransitionedTimestampHasBeenSet = true;
    }
    XmlNode actionsSuppressedByNode = resultNode.FirstChild("ActionsSuppressedBy");
    if(!actionsSuppressedByNode.IsNull())
    {
      m_actionsSuppressedBy = ActionsSuppressedByMapper::GetActionsSuppressedByForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(actionsSuppressedByNode.GetText()).c_str()).c_str());
      m_actionsSuppressedByHasBeenSet = true;
    }
    XmlNode actionsSuppressedReasonNode = resultNode.FirstChild("ActionsSuppressedReason");
    if(!actionsSuppressedReasonNode.IsNull())
    {
      m_actionsSuppressedReason = Aws::Utils::Xml::DecodeEscapedXmlText(actionsSuppressedReasonNode.GetText());
      m_actionsSuppressedReasonHasBeenSet = true;
    }
    XmlNode actionsSuppressorNode = resultNode.FirstChild("ActionsSuppressor");
    if(!actionsSuppressorNode.IsNull())
    {
      m_actionsSuppressor = Aws::Utils::Xml::DecodeEscapedXmlText(actionsSuppressorNode.GetText());
      m_actionsSuppressorHasBeenSet = true;
    }
    XmlNode actionsSuppressorWaitPeriodNode = resultNode.FirstChild("ActionsSuppressorWaitPeriod");
    if(!actionsSuppressorWaitPeriodNode.IsNull())
    {
      m_actionsSuppressorWaitPeriod = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(actionsSuppressorWaitPeriodNode.GetText()).c_str()).c_str());
      m_actionsSuppressorWaitPeriodHasBeenSet = true;
    }
    XmlNode actionsSuppressorExtensionPeriodNode = resultNode.FirstChild("ActionsSuppressorExtensionPeriod");
    if(!actionsSuppressorExtensionPeriodNode.IsNull())
    {
      m_actionsSuppressorExtensionPeriod = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(actionsSuppressorExtensionPeriodNode.GetText()).c_str()).c_str());
      m_actionsSuppressorExtensionPeriodHasBeenSet = true;
    }
  }

  return *this;
}

void CompositeAlarm::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_actionsEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActionsEnabled=" << std::boolalpha << m_actionsEnabled << "&";
  }

  if(m_alarmActionsHasBeenSet)
  {
      unsigned alarmActionsIdx = 1;
      for(auto& item : m_alarmActions)
      {
        oStream << location << index << locationValue << ".AlarmActions.member." << alarmActionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_alarmArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlarmArn=" << StringUtils::URLEncode(m_alarmArn.c_str()) << "&";
  }

  if(m_alarmConfigurationUpdatedTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlarmConfigurationUpdatedTimestamp=" << StringUtils::URLEncode(m_alarmConfigurationUpdatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_alarmDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlarmDescription=" << StringUtils::URLEncode(m_alarmDescription.c_str()) << "&";
  }

  if(m_alarmNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }

  if(m_alarmRuleHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlarmRule=" << StringUtils::URLEncode(m_alarmRule.c_str()) << "&";
  }

  if(m_insufficientDataActionsHasBeenSet)
  {
      unsigned insufficientDataActionsIdx = 1;
      for(auto& item : m_insufficientDataActions)
      {
        oStream << location << index << locationValue << ".InsufficientDataActions.member." << insufficientDataActionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_oKActionsHasBeenSet)
  {
      unsigned oKActionsIdx = 1;
      for(auto& item : m_oKActions)
      {
        oStream << location << index << locationValue << ".OKActions.member." << oKActionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_stateReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateReason=" << StringUtils::URLEncode(m_stateReason.c_str()) << "&";
  }

  if(m_stateReasonDataHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateReasonData=" << StringUtils::URLEncode(m_stateReasonData.c_str()) << "&";
  }

  if(m_stateUpdatedTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateUpdatedTimestamp=" << StringUtils::URLEncode(m_stateUpdatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_stateValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateValue=" << StateValueMapper::GetNameForStateValue(m_stateValue) << "&";
  }

  if(m_stateTransitionedTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateTransitionedTimestamp=" << StringUtils::URLEncode(m_stateTransitionedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_actionsSuppressedByHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActionsSuppressedBy=" << ActionsSuppressedByMapper::GetNameForActionsSuppressedBy(m_actionsSuppressedBy) << "&";
  }

  if(m_actionsSuppressedReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActionsSuppressedReason=" << StringUtils::URLEncode(m_actionsSuppressedReason.c_str()) << "&";
  }

  if(m_actionsSuppressorHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActionsSuppressor=" << StringUtils::URLEncode(m_actionsSuppressor.c_str()) << "&";
  }

  if(m_actionsSuppressorWaitPeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActionsSuppressorWaitPeriod=" << m_actionsSuppressorWaitPeriod << "&";
  }

  if(m_actionsSuppressorExtensionPeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActionsSuppressorExtensionPeriod=" << m_actionsSuppressorExtensionPeriod << "&";
  }

}

void CompositeAlarm::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_actionsEnabledHasBeenSet)
  {
      oStream << location << ".ActionsEnabled=" << std::boolalpha << m_actionsEnabled << "&";
  }
  if(m_alarmActionsHasBeenSet)
  {
      unsigned alarmActionsIdx = 1;
      for(auto& item : m_alarmActions)
      {
        oStream << location << ".AlarmActions.member." << alarmActionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_alarmArnHasBeenSet)
  {
      oStream << location << ".AlarmArn=" << StringUtils::URLEncode(m_alarmArn.c_str()) << "&";
  }
  if(m_alarmConfigurationUpdatedTimestampHasBeenSet)
  {
      oStream << location << ".AlarmConfigurationUpdatedTimestamp=" << StringUtils::URLEncode(m_alarmConfigurationUpdatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_alarmDescriptionHasBeenSet)
  {
      oStream << location << ".AlarmDescription=" << StringUtils::URLEncode(m_alarmDescription.c_str()) << "&";
  }
  if(m_alarmNameHasBeenSet)
  {
      oStream << location << ".AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }
  if(m_alarmRuleHasBeenSet)
  {
      oStream << location << ".AlarmRule=" << StringUtils::URLEncode(m_alarmRule.c_str()) << "&";
  }
  if(m_insufficientDataActionsHasBeenSet)
  {
      unsigned insufficientDataActionsIdx = 1;
      for(auto& item : m_insufficientDataActions)
      {
        oStream << location << ".InsufficientDataActions.member." << insufficientDataActionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_oKActionsHasBeenSet)
  {
      unsigned oKActionsIdx = 1;
      for(auto& item : m_oKActions)
      {
        oStream << location << ".OKActions.member." << oKActionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_stateReasonHasBeenSet)
  {
      oStream << location << ".StateReason=" << StringUtils::URLEncode(m_stateReason.c_str()) << "&";
  }
  if(m_stateReasonDataHasBeenSet)
  {
      oStream << location << ".StateReasonData=" << StringUtils::URLEncode(m_stateReasonData.c_str()) << "&";
  }
  if(m_stateUpdatedTimestampHasBeenSet)
  {
      oStream << location << ".StateUpdatedTimestamp=" << StringUtils::URLEncode(m_stateUpdatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_stateValueHasBeenSet)
  {
      oStream << location << ".StateValue=" << StateValueMapper::GetNameForStateValue(m_stateValue) << "&";
  }
  if(m_stateTransitionedTimestampHasBeenSet)
  {
      oStream << location << ".StateTransitionedTimestamp=" << StringUtils::URLEncode(m_stateTransitionedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_actionsSuppressedByHasBeenSet)
  {
      oStream << location << ".ActionsSuppressedBy=" << ActionsSuppressedByMapper::GetNameForActionsSuppressedBy(m_actionsSuppressedBy) << "&";
  }
  if(m_actionsSuppressedReasonHasBeenSet)
  {
      oStream << location << ".ActionsSuppressedReason=" << StringUtils::URLEncode(m_actionsSuppressedReason.c_str()) << "&";
  }
  if(m_actionsSuppressorHasBeenSet)
  {
      oStream << location << ".ActionsSuppressor=" << StringUtils::URLEncode(m_actionsSuppressor.c_str()) << "&";
  }
  if(m_actionsSuppressorWaitPeriodHasBeenSet)
  {
      oStream << location << ".ActionsSuppressorWaitPeriod=" << m_actionsSuppressorWaitPeriod << "&";
  }
  if(m_actionsSuppressorExtensionPeriodHasBeenSet)
  {
      oStream << location << ".ActionsSuppressorExtensionPeriod=" << m_actionsSuppressorExtensionPeriod << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
