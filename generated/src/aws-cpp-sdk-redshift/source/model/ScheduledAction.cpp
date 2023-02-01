/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ScheduledAction.h>
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

ScheduledAction::ScheduledAction() : 
    m_scheduledActionNameHasBeenSet(false),
    m_targetActionHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_scheduledActionDescriptionHasBeenSet(false),
    m_state(ScheduledActionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_nextInvocationsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
}

ScheduledAction::ScheduledAction(const XmlNode& xmlNode) : 
    m_scheduledActionNameHasBeenSet(false),
    m_targetActionHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_iamRoleHasBeenSet(false),
    m_scheduledActionDescriptionHasBeenSet(false),
    m_state(ScheduledActionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_nextInvocationsHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
  *this = xmlNode;
}

ScheduledAction& ScheduledAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode scheduledActionNameNode = resultNode.FirstChild("ScheduledActionName");
    if(!scheduledActionNameNode.IsNull())
    {
      m_scheduledActionName = Aws::Utils::Xml::DecodeEscapedXmlText(scheduledActionNameNode.GetText());
      m_scheduledActionNameHasBeenSet = true;
    }
    XmlNode targetActionNode = resultNode.FirstChild("TargetAction");
    if(!targetActionNode.IsNull())
    {
      m_targetAction = targetActionNode;
      m_targetActionHasBeenSet = true;
    }
    XmlNode scheduleNode = resultNode.FirstChild("Schedule");
    if(!scheduleNode.IsNull())
    {
      m_schedule = Aws::Utils::Xml::DecodeEscapedXmlText(scheduleNode.GetText());
      m_scheduleHasBeenSet = true;
    }
    XmlNode iamRoleNode = resultNode.FirstChild("IamRole");
    if(!iamRoleNode.IsNull())
    {
      m_iamRole = Aws::Utils::Xml::DecodeEscapedXmlText(iamRoleNode.GetText());
      m_iamRoleHasBeenSet = true;
    }
    XmlNode scheduledActionDescriptionNode = resultNode.FirstChild("ScheduledActionDescription");
    if(!scheduledActionDescriptionNode.IsNull())
    {
      m_scheduledActionDescription = Aws::Utils::Xml::DecodeEscapedXmlText(scheduledActionDescriptionNode.GetText());
      m_scheduledActionDescriptionHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("State");
    if(!stateNode.IsNull())
    {
      m_state = ScheduledActionStateMapper::GetScheduledActionStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode nextInvocationsNode = resultNode.FirstChild("NextInvocations");
    if(!nextInvocationsNode.IsNull())
    {
      XmlNode nextInvocationsMember = nextInvocationsNode.FirstChild("ScheduledActionTime");
      while(!nextInvocationsMember.IsNull())
      {
        m_nextInvocations.push_back(DateTime(StringUtils::Trim(nextInvocationsMember.GetText().c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601));
        nextInvocationsMember = nextInvocationsMember.NextNode("ScheduledActionTime");
      }

      m_nextInvocationsHasBeenSet = true;
    }
    XmlNode startTimeNode = resultNode.FirstChild("StartTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_startTimeHasBeenSet = true;
    }
    XmlNode endTimeNode = resultNode.FirstChild("EndTime");
    if(!endTimeNode.IsNull())
    {
      m_endTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_endTimeHasBeenSet = true;
    }
  }

  return *this;
}

void ScheduledAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_scheduledActionNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScheduledActionName=" << StringUtils::URLEncode(m_scheduledActionName.c_str()) << "&";
  }

  if(m_targetActionHasBeenSet)
  {
      Aws::StringStream targetActionLocationAndMemberSs;
      targetActionLocationAndMemberSs << location << index << locationValue << ".TargetAction";
      m_targetAction.OutputToStream(oStream, targetActionLocationAndMemberSs.str().c_str());
  }

  if(m_scheduleHasBeenSet)
  {
      oStream << location << index << locationValue << ".Schedule=" << StringUtils::URLEncode(m_schedule.c_str()) << "&";
  }

  if(m_iamRoleHasBeenSet)
  {
      oStream << location << index << locationValue << ".IamRole=" << StringUtils::URLEncode(m_iamRole.c_str()) << "&";
  }

  if(m_scheduledActionDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScheduledActionDescription=" << StringUtils::URLEncode(m_scheduledActionDescription.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << ScheduledActionStateMapper::GetNameForScheduledActionState(m_state) << "&";
  }

  if(m_nextInvocationsHasBeenSet)
  {
      unsigned nextInvocationsIdx = 1;
      for(auto& item : m_nextInvocations)
      {
        oStream << location << index << locationValue << ".ScheduledActionTime." << nextInvocationsIdx++ << "=" << StringUtils::URLEncode(item.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
      }
  }

  if(m_startTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_responseMetadataHasBeenSet)
  {
      Aws::StringStream responseMetadataLocationAndMemberSs;
      responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
  }

}

void ScheduledAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_scheduledActionNameHasBeenSet)
  {
      oStream << location << ".ScheduledActionName=" << StringUtils::URLEncode(m_scheduledActionName.c_str()) << "&";
  }
  if(m_targetActionHasBeenSet)
  {
      Aws::String targetActionLocationAndMember(location);
      targetActionLocationAndMember += ".TargetAction";
      m_targetAction.OutputToStream(oStream, targetActionLocationAndMember.c_str());
  }
  if(m_scheduleHasBeenSet)
  {
      oStream << location << ".Schedule=" << StringUtils::URLEncode(m_schedule.c_str()) << "&";
  }
  if(m_iamRoleHasBeenSet)
  {
      oStream << location << ".IamRole=" << StringUtils::URLEncode(m_iamRole.c_str()) << "&";
  }
  if(m_scheduledActionDescriptionHasBeenSet)
  {
      oStream << location << ".ScheduledActionDescription=" << StringUtils::URLEncode(m_scheduledActionDescription.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << ScheduledActionStateMapper::GetNameForScheduledActionState(m_state) << "&";
  }
  if(m_nextInvocationsHasBeenSet)
  {
      unsigned nextInvocationsIdx = 1;
      for(auto& item : m_nextInvocations)
      {
        oStream << location << ".ScheduledActionTime." << nextInvocationsIdx++ << "=" << StringUtils::URLEncode(item.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
      }
  }
  if(m_startTimeHasBeenSet)
  {
      oStream << location << ".StartTime=" << StringUtils::URLEncode(m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endTimeHasBeenSet)
  {
      oStream << location << ".EndTime=" << StringUtils::URLEncode(m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_responseMetadataHasBeenSet)
  {
      Aws::String responseMetadataLocationAndMember(location);
      responseMetadataLocationAndMember += ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
