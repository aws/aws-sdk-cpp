/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/BlueGreenDeployment.h>
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

BlueGreenDeployment::BlueGreenDeployment() : 
    m_blueGreenDeploymentIdentifierHasBeenSet(false),
    m_blueGreenDeploymentNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_switchoverDetailsHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_deleteTimeHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

BlueGreenDeployment::BlueGreenDeployment(const XmlNode& xmlNode) : 
    m_blueGreenDeploymentIdentifierHasBeenSet(false),
    m_blueGreenDeploymentNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_switchoverDetailsHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDetailsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_deleteTimeHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
  *this = xmlNode;
}

BlueGreenDeployment& BlueGreenDeployment::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode blueGreenDeploymentIdentifierNode = resultNode.FirstChild("BlueGreenDeploymentIdentifier");
    if(!blueGreenDeploymentIdentifierNode.IsNull())
    {
      m_blueGreenDeploymentIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(blueGreenDeploymentIdentifierNode.GetText());
      m_blueGreenDeploymentIdentifierHasBeenSet = true;
    }
    XmlNode blueGreenDeploymentNameNode = resultNode.FirstChild("BlueGreenDeploymentName");
    if(!blueGreenDeploymentNameNode.IsNull())
    {
      m_blueGreenDeploymentName = Aws::Utils::Xml::DecodeEscapedXmlText(blueGreenDeploymentNameNode.GetText());
      m_blueGreenDeploymentNameHasBeenSet = true;
    }
    XmlNode sourceNode = resultNode.FirstChild("Source");
    if(!sourceNode.IsNull())
    {
      m_source = Aws::Utils::Xml::DecodeEscapedXmlText(sourceNode.GetText());
      m_sourceHasBeenSet = true;
    }
    XmlNode targetNode = resultNode.FirstChild("Target");
    if(!targetNode.IsNull())
    {
      m_target = Aws::Utils::Xml::DecodeEscapedXmlText(targetNode.GetText());
      m_targetHasBeenSet = true;
    }
    XmlNode switchoverDetailsNode = resultNode.FirstChild("SwitchoverDetails");
    if(!switchoverDetailsNode.IsNull())
    {
      XmlNode switchoverDetailsMember = switchoverDetailsNode.FirstChild("member");
      while(!switchoverDetailsMember.IsNull())
      {
        m_switchoverDetails.push_back(switchoverDetailsMember);
        switchoverDetailsMember = switchoverDetailsMember.NextNode("member");
      }

      m_switchoverDetailsHasBeenSet = true;
    }
    XmlNode tasksNode = resultNode.FirstChild("Tasks");
    if(!tasksNode.IsNull())
    {
      XmlNode tasksMember = tasksNode.FirstChild("member");
      while(!tasksMember.IsNull())
      {
        m_tasks.push_back(tasksMember);
        tasksMember = tasksMember.NextNode("member");
      }

      m_tasksHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode statusDetailsNode = resultNode.FirstChild("StatusDetails");
    if(!statusDetailsNode.IsNull())
    {
      m_statusDetails = Aws::Utils::Xml::DecodeEscapedXmlText(statusDetailsNode.GetText());
      m_statusDetailsHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("CreateTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode deleteTimeNode = resultNode.FirstChild("DeleteTime");
    if(!deleteTimeNode.IsNull())
    {
      m_deleteTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deleteTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_deleteTimeHasBeenSet = true;
    }
    XmlNode tagListNode = resultNode.FirstChild("TagList");
    if(!tagListNode.IsNull())
    {
      XmlNode tagListMember = tagListNode.FirstChild("Tag");
      while(!tagListMember.IsNull())
      {
        m_tagList.push_back(tagListMember);
        tagListMember = tagListMember.NextNode("Tag");
      }

      m_tagListHasBeenSet = true;
    }
  }

  return *this;
}

void BlueGreenDeployment::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_blueGreenDeploymentIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".BlueGreenDeploymentIdentifier=" << StringUtils::URLEncode(m_blueGreenDeploymentIdentifier.c_str()) << "&";
  }

  if(m_blueGreenDeploymentNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".BlueGreenDeploymentName=" << StringUtils::URLEncode(m_blueGreenDeploymentName.c_str()) << "&";
  }

  if(m_sourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
  }

  if(m_targetHasBeenSet)
  {
      oStream << location << index << locationValue << ".Target=" << StringUtils::URLEncode(m_target.c_str()) << "&";
  }

  if(m_switchoverDetailsHasBeenSet)
  {
      unsigned switchoverDetailsIdx = 1;
      for(auto& item : m_switchoverDetails)
      {
        Aws::StringStream switchoverDetailsSs;
        switchoverDetailsSs << location << index << locationValue << ".SwitchoverDetails.member." << switchoverDetailsIdx++;
        item.OutputToStream(oStream, switchoverDetailsSs.str().c_str());
      }
  }

  if(m_tasksHasBeenSet)
  {
      unsigned tasksIdx = 1;
      for(auto& item : m_tasks)
      {
        Aws::StringStream tasksSs;
        tasksSs << location << index << locationValue << ".Tasks.member." << tasksIdx++;
        item.OutputToStream(oStream, tasksSs.str().c_str());
      }
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_statusDetailsHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusDetails=" << StringUtils::URLEncode(m_statusDetails.c_str()) << "&";
  }

  if(m_createTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_deleteTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeleteTime=" << StringUtils::URLEncode(m_deleteTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_tagListHasBeenSet)
  {
      unsigned tagListIdx = 1;
      for(auto& item : m_tagList)
      {
        Aws::StringStream tagListSs;
        tagListSs << location << index << locationValue << ".Tag." << tagListIdx++;
        item.OutputToStream(oStream, tagListSs.str().c_str());
      }
  }

}

void BlueGreenDeployment::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_blueGreenDeploymentIdentifierHasBeenSet)
  {
      oStream << location << ".BlueGreenDeploymentIdentifier=" << StringUtils::URLEncode(m_blueGreenDeploymentIdentifier.c_str()) << "&";
  }
  if(m_blueGreenDeploymentNameHasBeenSet)
  {
      oStream << location << ".BlueGreenDeploymentName=" << StringUtils::URLEncode(m_blueGreenDeploymentName.c_str()) << "&";
  }
  if(m_sourceHasBeenSet)
  {
      oStream << location << ".Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
  }
  if(m_targetHasBeenSet)
  {
      oStream << location << ".Target=" << StringUtils::URLEncode(m_target.c_str()) << "&";
  }
  if(m_switchoverDetailsHasBeenSet)
  {
      unsigned switchoverDetailsIdx = 1;
      for(auto& item : m_switchoverDetails)
      {
        Aws::StringStream switchoverDetailsSs;
        switchoverDetailsSs << location <<  ".SwitchoverDetails.member." << switchoverDetailsIdx++;
        item.OutputToStream(oStream, switchoverDetailsSs.str().c_str());
      }
  }
  if(m_tasksHasBeenSet)
  {
      unsigned tasksIdx = 1;
      for(auto& item : m_tasks)
      {
        Aws::StringStream tasksSs;
        tasksSs << location <<  ".Tasks.member." << tasksIdx++;
        item.OutputToStream(oStream, tasksSs.str().c_str());
      }
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_statusDetailsHasBeenSet)
  {
      oStream << location << ".StatusDetails=" << StringUtils::URLEncode(m_statusDetails.c_str()) << "&";
  }
  if(m_createTimeHasBeenSet)
  {
      oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_deleteTimeHasBeenSet)
  {
      oStream << location << ".DeleteTime=" << StringUtils::URLEncode(m_deleteTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_tagListHasBeenSet)
  {
      unsigned tagListIdx = 1;
      for(auto& item : m_tagList)
      {
        Aws::StringStream tagListSs;
        tagListSs << location <<  ".Tag." << tagListIdx++;
        item.OutputToStream(oStream, tagListSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
