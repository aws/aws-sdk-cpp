/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ReferenceDetails.h>
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

ReferenceDetails::ReferenceDetails() : 
    m_scalarReferenceDetailsHasBeenSet(false)
{
}

ReferenceDetails::ReferenceDetails(const XmlNode& xmlNode) : 
    m_scalarReferenceDetailsHasBeenSet(false)
{
  *this = xmlNode;
}

ReferenceDetails& ReferenceDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode scalarReferenceDetailsNode = resultNode.FirstChild("ScalarReferenceDetails");
    if(!scalarReferenceDetailsNode.IsNull())
    {
      m_scalarReferenceDetails = scalarReferenceDetailsNode;
      m_scalarReferenceDetailsHasBeenSet = true;
    }
  }

  return *this;
}

void ReferenceDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_scalarReferenceDetailsHasBeenSet)
  {
      Aws::StringStream scalarReferenceDetailsLocationAndMemberSs;
      scalarReferenceDetailsLocationAndMemberSs << location << index << locationValue << ".ScalarReferenceDetails";
      m_scalarReferenceDetails.OutputToStream(oStream, scalarReferenceDetailsLocationAndMemberSs.str().c_str());
  }

}

void ReferenceDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_scalarReferenceDetailsHasBeenSet)
  {
      Aws::String scalarReferenceDetailsLocationAndMember(location);
      scalarReferenceDetailsLocationAndMember += ".ScalarReferenceDetails";
      m_scalarReferenceDetails.OutputToStream(oStream, scalarReferenceDetailsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
