/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/PublishBatchResultEntry.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SNS
{
namespace Model
{

PublishBatchResultEntry::PublishBatchResultEntry() : 
    m_idHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_sequenceNumberHasBeenSet(false)
{
}

PublishBatchResultEntry::PublishBatchResultEntry(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_sequenceNumberHasBeenSet(false)
{
  *this = xmlNode;
}

PublishBatchResultEntry& PublishBatchResultEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
      m_idHasBeenSet = true;
    }
    XmlNode messageIdNode = resultNode.FirstChild("MessageId");
    if(!messageIdNode.IsNull())
    {
      m_messageId = Aws::Utils::Xml::DecodeEscapedXmlText(messageIdNode.GetText());
      m_messageIdHasBeenSet = true;
    }
    XmlNode sequenceNumberNode = resultNode.FirstChild("SequenceNumber");
    if(!sequenceNumberNode.IsNull())
    {
      m_sequenceNumber = Aws::Utils::Xml::DecodeEscapedXmlText(sequenceNumberNode.GetText());
      m_sequenceNumberHasBeenSet = true;
    }
  }

  return *this;
}

void PublishBatchResultEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << index << locationValue << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }

  if(m_messageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".MessageId=" << StringUtils::URLEncode(m_messageId.c_str()) << "&";
  }

  if(m_sequenceNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".SequenceNumber=" << StringUtils::URLEncode(m_sequenceNumber.c_str()) << "&";
  }

}

void PublishBatchResultEntry::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }
  if(m_messageIdHasBeenSet)
  {
      oStream << location << ".MessageId=" << StringUtils::URLEncode(m_messageId.c_str()) << "&";
  }
  if(m_sequenceNumberHasBeenSet)
  {
      oStream << location << ".SequenceNumber=" << StringUtils::URLEncode(m_sequenceNumber.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SNS
} // namespace Aws
