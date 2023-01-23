/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/TargetHealth.h>
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

TargetHealth::TargetHealth() : 
    m_state(TargetState::NOT_SET),
    m_stateHasBeenSet(false),
    m_reason(TargetHealthReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

TargetHealth::TargetHealth(const XmlNode& xmlNode) : 
    m_state(TargetState::NOT_SET),
    m_stateHasBeenSet(false),
    m_reason(TargetHealthReason::NOT_SET),
    m_reasonHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = xmlNode;
}

TargetHealth& TargetHealth::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stateNode = resultNode.FirstChild("State");
    if(!stateNode.IsNull())
    {
      m_state = TargetStateMapper::GetTargetStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode reasonNode = resultNode.FirstChild("Reason");
    if(!reasonNode.IsNull())
    {
      m_reason = TargetHealthReasonMapper::GetTargetHealthReasonForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(reasonNode.GetText()).c_str()).c_str());
      m_reasonHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
  }

  return *this;
}

void TargetHealth::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << TargetStateMapper::GetNameForTargetState(m_state) << "&";
  }

  if(m_reasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".Reason=" << TargetHealthReasonMapper::GetNameForTargetHealthReason(m_reason) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

}

void TargetHealth::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << TargetStateMapper::GetNameForTargetState(m_state) << "&";
  }
  if(m_reasonHasBeenSet)
  {
      oStream << location << ".Reason=" << TargetHealthReasonMapper::GetNameForTargetHealthReason(m_reason) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
