/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ListJobsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListJobsResult::ListJobsResult()
{
}

ListJobsResult::ListJobsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListJobsResult& ListJobsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
    XmlNode jobsNode = resultNode.FirstChild("Jobs");
    if(!jobsNode.IsNull())
    {
      XmlNode jobsMember = jobsNode.FirstChild("member");
      while(!jobsMember.IsNull())
      {
        m_jobs.push_back(jobsMember);
        jobsMember = jobsMember.NextNode("member");
      }

    }
  }

  return *this;
}
