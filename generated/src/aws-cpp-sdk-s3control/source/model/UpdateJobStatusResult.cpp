/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/UpdateJobStatusResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

UpdateJobStatusResult::UpdateJobStatusResult() : 
    m_status(JobStatus::NOT_SET)
{
}

UpdateJobStatusResult::UpdateJobStatusResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_status(JobStatus::NOT_SET)
{
  *this = result;
}

UpdateJobStatusResult& UpdateJobStatusResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode jobIdNode = resultNode.FirstChild("JobId");
    if(!jobIdNode.IsNull())
    {
      m_jobId = Aws::Utils::Xml::DecodeEscapedXmlText(jobIdNode.GetText());
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = JobStatusMapper::GetJobStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
    }
    XmlNode statusUpdateReasonNode = resultNode.FirstChild("StatusUpdateReason");
    if(!statusUpdateReasonNode.IsNull())
    {
      m_statusUpdateReason = Aws::Utils::Xml::DecodeEscapedXmlText(statusUpdateReasonNode.GetText());
    }
  }

  return *this;
}
