/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ListRegionalBucketsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListRegionalBucketsResult::ListRegionalBucketsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListRegionalBucketsResult& ListRegionalBucketsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode regionalBucketListNode = resultNode.FirstChild("RegionalBucketList");
    if(!regionalBucketListNode.IsNull())
    {
      XmlNode regionalBucketListMember = regionalBucketListNode.FirstChild("RegionalBucket");
      m_regionalBucketListHasBeenSet = !regionalBucketListMember.IsNull();
      while(!regionalBucketListMember.IsNull())
      {
        m_regionalBucketList.push_back(regionalBucketListMember);
        regionalBucketListMember = regionalBucketListMember.NextNode("RegionalBucket");
      }

      m_regionalBucketListHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amz-request-id");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  const auto& hostIdIter = headers.find("x-amz-id-2");
  if(hostIdIter != headers.end())
  {
    m_hostId = hostIdIter->second;
    m_hostIdHasBeenSet = true;
  }

  return *this;
}
