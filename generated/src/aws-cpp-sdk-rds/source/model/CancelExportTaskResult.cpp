/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CancelExportTaskResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

CancelExportTaskResult::CancelExportTaskResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CancelExportTaskResult& CancelExportTaskResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CancelExportTaskResult"))
  {
    resultNode = rootNode.FirstChild("CancelExportTaskResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode exportTaskIdentifierNode = resultNode.FirstChild("ExportTaskIdentifier");
    if(!exportTaskIdentifierNode.IsNull())
    {
      m_exportTaskIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(exportTaskIdentifierNode.GetText());
      m_exportTaskIdentifierHasBeenSet = true;
    }
    XmlNode sourceArnNode = resultNode.FirstChild("SourceArn");
    if(!sourceArnNode.IsNull())
    {
      m_sourceArn = Aws::Utils::Xml::DecodeEscapedXmlText(sourceArnNode.GetText());
      m_sourceArnHasBeenSet = true;
    }
    XmlNode exportOnlyNode = resultNode.FirstChild("ExportOnly");
    if(!exportOnlyNode.IsNull())
    {
      XmlNode exportOnlyMember = exportOnlyNode.FirstChild("member");
      m_exportOnlyHasBeenSet = !exportOnlyMember.IsNull();
      while(!exportOnlyMember.IsNull())
      {
        m_exportOnly.push_back(exportOnlyMember.GetText());
        exportOnlyMember = exportOnlyMember.NextNode("member");
      }

      m_exportOnlyHasBeenSet = true;
    }
    XmlNode snapshotTimeNode = resultNode.FirstChild("SnapshotTime");
    if(!snapshotTimeNode.IsNull())
    {
      m_snapshotTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(snapshotTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_snapshotTimeHasBeenSet = true;
    }
    XmlNode taskStartTimeNode = resultNode.FirstChild("TaskStartTime");
    if(!taskStartTimeNode.IsNull())
    {
      m_taskStartTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(taskStartTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_taskStartTimeHasBeenSet = true;
    }
    XmlNode taskEndTimeNode = resultNode.FirstChild("TaskEndTime");
    if(!taskEndTimeNode.IsNull())
    {
      m_taskEndTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(taskEndTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_taskEndTimeHasBeenSet = true;
    }
    XmlNode s3BucketNode = resultNode.FirstChild("S3Bucket");
    if(!s3BucketNode.IsNull())
    {
      m_s3Bucket = Aws::Utils::Xml::DecodeEscapedXmlText(s3BucketNode.GetText());
      m_s3BucketHasBeenSet = true;
    }
    XmlNode s3PrefixNode = resultNode.FirstChild("S3Prefix");
    if(!s3PrefixNode.IsNull())
    {
      m_s3Prefix = Aws::Utils::Xml::DecodeEscapedXmlText(s3PrefixNode.GetText());
      m_s3PrefixHasBeenSet = true;
    }
    XmlNode iamRoleArnNode = resultNode.FirstChild("IamRoleArn");
    if(!iamRoleArnNode.IsNull())
    {
      m_iamRoleArn = Aws::Utils::Xml::DecodeEscapedXmlText(iamRoleArnNode.GetText());
      m_iamRoleArnHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("KmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode percentProgressNode = resultNode.FirstChild("PercentProgress");
    if(!percentProgressNode.IsNull())
    {
      m_percentProgress = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(percentProgressNode.GetText()).c_str()).c_str());
      m_percentProgressHasBeenSet = true;
    }
    XmlNode totalExtractedDataInGBNode = resultNode.FirstChild("TotalExtractedDataInGB");
    if(!totalExtractedDataInGBNode.IsNull())
    {
      m_totalExtractedDataInGB = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalExtractedDataInGBNode.GetText()).c_str()).c_str());
      m_totalExtractedDataInGBHasBeenSet = true;
    }
    XmlNode failureCauseNode = resultNode.FirstChild("FailureCause");
    if(!failureCauseNode.IsNull())
    {
      m_failureCause = Aws::Utils::Xml::DecodeEscapedXmlText(failureCauseNode.GetText());
      m_failureCauseHasBeenSet = true;
    }
    XmlNode warningMessageNode = resultNode.FirstChild("WarningMessage");
    if(!warningMessageNode.IsNull())
    {
      m_warningMessage = Aws::Utils::Xml::DecodeEscapedXmlText(warningMessageNode.GetText());
      m_warningMessageHasBeenSet = true;
    }
    XmlNode sourceTypeNode = resultNode.FirstChild("SourceType");
    if(!sourceTypeNode.IsNull())
    {
      m_sourceType = ExportSourceTypeMapper::GetExportSourceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sourceTypeNode.GetText()).c_str()));
      m_sourceTypeHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::RDS::Model::CancelExportTaskResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
