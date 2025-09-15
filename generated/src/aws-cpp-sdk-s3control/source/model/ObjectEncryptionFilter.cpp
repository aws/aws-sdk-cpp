/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ObjectEncryptionFilter.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

ObjectEncryptionFilter::ObjectEncryptionFilter(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ObjectEncryptionFilter& ObjectEncryptionFilter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sSES3Node = resultNode.FirstChild("SSE-S3");
    if(!sSES3Node.IsNull())
    {
      m_sSES3 = sSES3Node;
      m_sSES3HasBeenSet = true;
    }
    XmlNode sSEKMSNode = resultNode.FirstChild("SSE-KMS");
    if(!sSEKMSNode.IsNull())
    {
      m_sSEKMS = sSEKMSNode;
      m_sSEKMSHasBeenSet = true;
    }
    XmlNode dSSEKMSNode = resultNode.FirstChild("DSSE-KMS");
    if(!dSSEKMSNode.IsNull())
    {
      m_dSSEKMS = dSSEKMSNode;
      m_dSSEKMSHasBeenSet = true;
    }
    XmlNode sSECNode = resultNode.FirstChild("SSE-C");
    if(!sSECNode.IsNull())
    {
      m_sSEC = sSECNode;
      m_sSECHasBeenSet = true;
    }
    XmlNode nOTSSENode = resultNode.FirstChild("NOT-SSE");
    if(!nOTSSENode.IsNull())
    {
      m_nOTSSE = nOTSSENode;
      m_nOTSSEHasBeenSet = true;
    }
  }

  return *this;
}

void ObjectEncryptionFilter::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_sSES3HasBeenSet)
  {
   XmlNode sSES3Node = parentNode.CreateChildElement("SSE-S3");
   m_sSES3.AddToNode(sSES3Node);
  }

  if(m_sSEKMSHasBeenSet)
  {
   XmlNode sSEKMSNode = parentNode.CreateChildElement("SSE-KMS");
   m_sSEKMS.AddToNode(sSEKMSNode);
  }

  if(m_dSSEKMSHasBeenSet)
  {
   XmlNode dSSEKMSNode = parentNode.CreateChildElement("DSSE-KMS");
   m_dSSEKMS.AddToNode(dSSEKMSNode);
  }

  if(m_sSECHasBeenSet)
  {
   XmlNode sSECNode = parentNode.CreateChildElement("SSE-C");
   m_sSEC.AddToNode(sSECNode);
  }

  if(m_nOTSSEHasBeenSet)
  {
   XmlNode nOTSSENode = parentNode.CreateChildElement("NOT-SSE");
   m_nOTSSE.AddToNode(nOTSSENode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
