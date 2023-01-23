/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/JobDescriptor.h>
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

JobDescriptor::JobDescriptor() : 
    m_jobIdHasBeenSet(false),
    m_confirmationRequired(false),
    m_confirmationRequiredHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_jobArnHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_manifestHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_progressSummaryHasBeenSet(false),
    m_statusUpdateReasonHasBeenSet(false),
    m_failureReasonsHasBeenSet(false),
    m_reportHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_terminationDateHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_suspendedDateHasBeenSet(false),
    m_suspendedCauseHasBeenSet(false),
    m_manifestGeneratorHasBeenSet(false),
    m_generatedManifestDescriptorHasBeenSet(false)
{
}

JobDescriptor::JobDescriptor(const XmlNode& xmlNode) : 
    m_jobIdHasBeenSet(false),
    m_confirmationRequired(false),
    m_confirmationRequiredHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_jobArnHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_manifestHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_progressSummaryHasBeenSet(false),
    m_statusUpdateReasonHasBeenSet(false),
    m_failureReasonsHasBeenSet(false),
    m_reportHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_terminationDateHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_suspendedDateHasBeenSet(false),
    m_suspendedCauseHasBeenSet(false),
    m_manifestGeneratorHasBeenSet(false),
    m_generatedManifestDescriptorHasBeenSet(false)
{
  *this = xmlNode;
}

JobDescriptor& JobDescriptor::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode jobIdNode = resultNode.FirstChild("JobId");
    if(!jobIdNode.IsNull())
    {
      m_jobId = Aws::Utils::Xml::DecodeEscapedXmlText(jobIdNode.GetText());
      m_jobIdHasBeenSet = true;
    }
    XmlNode confirmationRequiredNode = resultNode.FirstChild("ConfirmationRequired");
    if(!confirmationRequiredNode.IsNull())
    {
      m_confirmationRequired = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(confirmationRequiredNode.GetText()).c_str()).c_str());
      m_confirmationRequiredHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode jobArnNode = resultNode.FirstChild("JobArn");
    if(!jobArnNode.IsNull())
    {
      m_jobArn = Aws::Utils::Xml::DecodeEscapedXmlText(jobArnNode.GetText());
      m_jobArnHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = JobStatusMapper::GetJobStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode manifestNode = resultNode.FirstChild("Manifest");
    if(!manifestNode.IsNull())
    {
      m_manifest = manifestNode;
      m_manifestHasBeenSet = true;
    }
    XmlNode operationNode = resultNode.FirstChild("Operation");
    if(!operationNode.IsNull())
    {
      m_operation = operationNode;
      m_operationHasBeenSet = true;
    }
    XmlNode priorityNode = resultNode.FirstChild("Priority");
    if(!priorityNode.IsNull())
    {
      m_priority = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(priorityNode.GetText()).c_str()).c_str());
      m_priorityHasBeenSet = true;
    }
    XmlNode progressSummaryNode = resultNode.FirstChild("ProgressSummary");
    if(!progressSummaryNode.IsNull())
    {
      m_progressSummary = progressSummaryNode;
      m_progressSummaryHasBeenSet = true;
    }
    XmlNode statusUpdateReasonNode = resultNode.FirstChild("StatusUpdateReason");
    if(!statusUpdateReasonNode.IsNull())
    {
      m_statusUpdateReason = Aws::Utils::Xml::DecodeEscapedXmlText(statusUpdateReasonNode.GetText());
      m_statusUpdateReasonHasBeenSet = true;
    }
    XmlNode failureReasonsNode = resultNode.FirstChild("FailureReasons");
    if(!failureReasonsNode.IsNull())
    {
      XmlNode failureReasonsMember = failureReasonsNode.FirstChild("member");
      while(!failureReasonsMember.IsNull())
      {
        m_failureReasons.push_back(failureReasonsMember);
        failureReasonsMember = failureReasonsMember.NextNode("member");
      }

      m_failureReasonsHasBeenSet = true;
    }
    XmlNode reportNode = resultNode.FirstChild("Report");
    if(!reportNode.IsNull())
    {
      m_report = reportNode;
      m_reportHasBeenSet = true;
    }
    XmlNode creationTimeNode = resultNode.FirstChild("CreationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_creationTimeHasBeenSet = true;
    }
    XmlNode terminationDateNode = resultNode.FirstChild("TerminationDate");
    if(!terminationDateNode.IsNull())
    {
      m_terminationDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(terminationDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_terminationDateHasBeenSet = true;
    }
    XmlNode roleArnNode = resultNode.FirstChild("RoleArn");
    if(!roleArnNode.IsNull())
    {
      m_roleArn = Aws::Utils::Xml::DecodeEscapedXmlText(roleArnNode.GetText());
      m_roleArnHasBeenSet = true;
    }
    XmlNode suspendedDateNode = resultNode.FirstChild("SuspendedDate");
    if(!suspendedDateNode.IsNull())
    {
      m_suspendedDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(suspendedDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_suspendedDateHasBeenSet = true;
    }
    XmlNode suspendedCauseNode = resultNode.FirstChild("SuspendedCause");
    if(!suspendedCauseNode.IsNull())
    {
      m_suspendedCause = Aws::Utils::Xml::DecodeEscapedXmlText(suspendedCauseNode.GetText());
      m_suspendedCauseHasBeenSet = true;
    }
    XmlNode manifestGeneratorNode = resultNode.FirstChild("ManifestGenerator");
    if(!manifestGeneratorNode.IsNull())
    {
      m_manifestGenerator = manifestGeneratorNode;
      m_manifestGeneratorHasBeenSet = true;
    }
    XmlNode generatedManifestDescriptorNode = resultNode.FirstChild("GeneratedManifestDescriptor");
    if(!generatedManifestDescriptorNode.IsNull())
    {
      m_generatedManifestDescriptor = generatedManifestDescriptorNode;
      m_generatedManifestDescriptorHasBeenSet = true;
    }
  }

  return *this;
}

void JobDescriptor::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_jobIdHasBeenSet)
  {
   XmlNode jobIdNode = parentNode.CreateChildElement("JobId");
   jobIdNode.SetText(m_jobId);
  }

  if(m_confirmationRequiredHasBeenSet)
  {
   XmlNode confirmationRequiredNode = parentNode.CreateChildElement("ConfirmationRequired");
   ss << std::boolalpha << m_confirmationRequired;
   confirmationRequiredNode.SetText(ss.str());
   ss.str("");
  }

  if(m_descriptionHasBeenSet)
  {
   XmlNode descriptionNode = parentNode.CreateChildElement("Description");
   descriptionNode.SetText(m_description);
  }

  if(m_jobArnHasBeenSet)
  {
   XmlNode jobArnNode = parentNode.CreateChildElement("JobArn");
   jobArnNode.SetText(m_jobArn);
  }

  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if(m_manifestHasBeenSet)
  {
   XmlNode manifestNode = parentNode.CreateChildElement("Manifest");
   m_manifest.AddToNode(manifestNode);
  }

  if(m_operationHasBeenSet)
  {
   XmlNode operationNode = parentNode.CreateChildElement("Operation");
   m_operation.AddToNode(operationNode);
  }

  if(m_priorityHasBeenSet)
  {
   XmlNode priorityNode = parentNode.CreateChildElement("Priority");
   ss << m_priority;
   priorityNode.SetText(ss.str());
   ss.str("");
  }

  if(m_progressSummaryHasBeenSet)
  {
   XmlNode progressSummaryNode = parentNode.CreateChildElement("ProgressSummary");
   m_progressSummary.AddToNode(progressSummaryNode);
  }

  if(m_statusUpdateReasonHasBeenSet)
  {
   XmlNode statusUpdateReasonNode = parentNode.CreateChildElement("StatusUpdateReason");
   statusUpdateReasonNode.SetText(m_statusUpdateReason);
  }

  if(m_failureReasonsHasBeenSet)
  {
   XmlNode failureReasonsParentNode = parentNode.CreateChildElement("FailureReasons");
   for(const auto& item : m_failureReasons)
   {
     XmlNode failureReasonsNode = failureReasonsParentNode.CreateChildElement("JobFailure");
     item.AddToNode(failureReasonsNode);
   }
  }

  if(m_reportHasBeenSet)
  {
   XmlNode reportNode = parentNode.CreateChildElement("Report");
   m_report.AddToNode(reportNode);
  }

  if(m_creationTimeHasBeenSet)
  {
   XmlNode creationTimeNode = parentNode.CreateChildElement("CreationTime");
   creationTimeNode.SetText(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_terminationDateHasBeenSet)
  {
   XmlNode terminationDateNode = parentNode.CreateChildElement("TerminationDate");
   terminationDateNode.SetText(m_terminationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_roleArnHasBeenSet)
  {
   XmlNode roleArnNode = parentNode.CreateChildElement("RoleArn");
   roleArnNode.SetText(m_roleArn);
  }

  if(m_suspendedDateHasBeenSet)
  {
   XmlNode suspendedDateNode = parentNode.CreateChildElement("SuspendedDate");
   suspendedDateNode.SetText(m_suspendedDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_suspendedCauseHasBeenSet)
  {
   XmlNode suspendedCauseNode = parentNode.CreateChildElement("SuspendedCause");
   suspendedCauseNode.SetText(m_suspendedCause);
  }

  if(m_manifestGeneratorHasBeenSet)
  {
   XmlNode manifestGeneratorNode = parentNode.CreateChildElement("ManifestGenerator");
   m_manifestGenerator.AddToNode(manifestGeneratorNode);
  }

  if(m_generatedManifestDescriptorHasBeenSet)
  {
   XmlNode generatedManifestDescriptorNode = parentNode.CreateChildElement("GeneratedManifestDescriptor");
   m_generatedManifestDescriptor.AddToNode(generatedManifestDescriptorNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
