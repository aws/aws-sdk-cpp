/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/IssueDetails.h>
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

IssueDetails::IssueDetails() : 
    m_performanceIssueDetailsHasBeenSet(false)
{
}

IssueDetails::IssueDetails(const XmlNode& xmlNode) : 
    m_performanceIssueDetailsHasBeenSet(false)
{
  *this = xmlNode;
}

IssueDetails& IssueDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode performanceIssueDetailsNode = resultNode.FirstChild("PerformanceIssueDetails");
    if(!performanceIssueDetailsNode.IsNull())
    {
      m_performanceIssueDetails = performanceIssueDetailsNode;
      m_performanceIssueDetailsHasBeenSet = true;
    }
  }

  return *this;
}

void IssueDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_performanceIssueDetailsHasBeenSet)
  {
      Aws::StringStream performanceIssueDetailsLocationAndMemberSs;
      performanceIssueDetailsLocationAndMemberSs << location << index << locationValue << ".PerformanceIssueDetails";
      m_performanceIssueDetails.OutputToStream(oStream, performanceIssueDetailsLocationAndMemberSs.str().c_str());
  }

}

void IssueDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_performanceIssueDetailsHasBeenSet)
  {
      Aws::String performanceIssueDetailsLocationAndMember(location);
      performanceIssueDetailsLocationAndMember += ".PerformanceIssueDetails";
      m_performanceIssueDetails.OutputToStream(oStream, performanceIssueDetailsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
