/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyScheduledActionResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyScheduledActionResult::ModifyScheduledActionResult() : 
    m_state(ScheduledActionState::NOT_SET)
{
}

ModifyScheduledActionResult::ModifyScheduledActionResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_state(ScheduledActionState::NOT_SET)
{
  *this = result;
}

ModifyScheduledActionResult& ModifyScheduledActionResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyScheduledActionResult"))
  {
    resultNode = rootNode.FirstChild("ModifyScheduledActionResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode scheduledActionNameNode = resultNode.FirstChild("ScheduledActionName");
    if(!scheduledActionNameNode.IsNull())
    {
      m_scheduledActionName = Aws::Utils::Xml::DecodeEscapedXmlText(scheduledActionNameNode.GetText());
    }
    XmlNode targetActionNode = resultNode.FirstChild("TargetAction");
    if(!targetActionNode.IsNull())
    {
      m_targetAction = targetActionNode;
    }
    XmlNode scheduleNode = resultNode.FirstChild("Schedule");
    if(!scheduleNode.IsNull())
    {
      m_schedule = Aws::Utils::Xml::DecodeEscapedXmlText(scheduleNode.GetText());
    }
    XmlNode iamRoleNode = resultNode.FirstChild("IamRole");
    if(!iamRoleNode.IsNull())
    {
      m_iamRole = Aws::Utils::Xml::DecodeEscapedXmlText(iamRoleNode.GetText());
    }
    XmlNode scheduledActionDescriptionNode = resultNode.FirstChild("ScheduledActionDescription");
    if(!scheduledActionDescriptionNode.IsNull())
    {
      m_scheduledActionDescription = Aws::Utils::Xml::DecodeEscapedXmlText(scheduledActionDescriptionNode.GetText());
    }
    XmlNode stateNode = resultNode.FirstChild("State");
    if(!stateNode.IsNull())
    {
      m_state = ScheduledActionStateMapper::GetScheduledActionStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
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

    }
    XmlNode startTimeNode = resultNode.FirstChild("StartTime");
    if(!startTimeNode.IsNull())
    {
      m_startTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode endTimeNode = resultNode.FirstChild("EndTime");
    if(!endTimeNode.IsNull())
    {
      m_endTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::ModifyScheduledActionResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
