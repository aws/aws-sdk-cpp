﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/CancelResizeResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

CancelResizeResult::CancelResizeResult() : 
    m_targetNumberOfNodes(0),
    m_avgResizeRateInMegaBytesPerSecond(0.0),
    m_totalResizeDataInMegaBytes(0),
    m_progressInMegaBytes(0),
    m_elapsedTimeInSeconds(0),
    m_estimatedTimeToCompletionInSeconds(0),
    m_dataTransferProgressPercent(0.0)
{
}

CancelResizeResult::CancelResizeResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_targetNumberOfNodes(0),
    m_avgResizeRateInMegaBytesPerSecond(0.0),
    m_totalResizeDataInMegaBytes(0),
    m_progressInMegaBytes(0),
    m_elapsedTimeInSeconds(0),
    m_estimatedTimeToCompletionInSeconds(0),
    m_dataTransferProgressPercent(0.0)
{
  *this = result;
}

CancelResizeResult& CancelResizeResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CancelResizeResult"))
  {
    resultNode = rootNode.FirstChild("CancelResizeResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode targetNodeTypeNode = resultNode.FirstChild("TargetNodeType");
    if(!targetNodeTypeNode.IsNull())
    {
      m_targetNodeType = Aws::Utils::Xml::DecodeEscapedXmlText(targetNodeTypeNode.GetText());
    }
    XmlNode targetNumberOfNodesNode = resultNode.FirstChild("TargetNumberOfNodes");
    if(!targetNumberOfNodesNode.IsNull())
    {
      m_targetNumberOfNodes = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(targetNumberOfNodesNode.GetText()).c_str()).c_str());
    }
    XmlNode targetClusterTypeNode = resultNode.FirstChild("TargetClusterType");
    if(!targetClusterTypeNode.IsNull())
    {
      m_targetClusterType = Aws::Utils::Xml::DecodeEscapedXmlText(targetClusterTypeNode.GetText());
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
    }
    XmlNode importTablesCompletedNode = resultNode.FirstChild("ImportTablesCompleted");
    if(!importTablesCompletedNode.IsNull())
    {
      XmlNode importTablesCompletedMember = importTablesCompletedNode.FirstChild("member");
      while(!importTablesCompletedMember.IsNull())
      {
        m_importTablesCompleted.push_back(importTablesCompletedMember.GetText());
        importTablesCompletedMember = importTablesCompletedMember.NextNode("member");
      }

    }
    XmlNode importTablesInProgressNode = resultNode.FirstChild("ImportTablesInProgress");
    if(!importTablesInProgressNode.IsNull())
    {
      XmlNode importTablesInProgressMember = importTablesInProgressNode.FirstChild("member");
      while(!importTablesInProgressMember.IsNull())
      {
        m_importTablesInProgress.push_back(importTablesInProgressMember.GetText());
        importTablesInProgressMember = importTablesInProgressMember.NextNode("member");
      }

    }
    XmlNode importTablesNotStartedNode = resultNode.FirstChild("ImportTablesNotStarted");
    if(!importTablesNotStartedNode.IsNull())
    {
      XmlNode importTablesNotStartedMember = importTablesNotStartedNode.FirstChild("member");
      while(!importTablesNotStartedMember.IsNull())
      {
        m_importTablesNotStarted.push_back(importTablesNotStartedMember.GetText());
        importTablesNotStartedMember = importTablesNotStartedMember.NextNode("member");
      }

    }
    XmlNode avgResizeRateInMegaBytesPerSecondNode = resultNode.FirstChild("AvgResizeRateInMegaBytesPerSecond");
    if(!avgResizeRateInMegaBytesPerSecondNode.IsNull())
    {
      m_avgResizeRateInMegaBytesPerSecond = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(avgResizeRateInMegaBytesPerSecondNode.GetText()).c_str()).c_str());
    }
    XmlNode totalResizeDataInMegaBytesNode = resultNode.FirstChild("TotalResizeDataInMegaBytes");
    if(!totalResizeDataInMegaBytesNode.IsNull())
    {
      m_totalResizeDataInMegaBytes = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalResizeDataInMegaBytesNode.GetText()).c_str()).c_str());
    }
    XmlNode progressInMegaBytesNode = resultNode.FirstChild("ProgressInMegaBytes");
    if(!progressInMegaBytesNode.IsNull())
    {
      m_progressInMegaBytes = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(progressInMegaBytesNode.GetText()).c_str()).c_str());
    }
    XmlNode elapsedTimeInSecondsNode = resultNode.FirstChild("ElapsedTimeInSeconds");
    if(!elapsedTimeInSecondsNode.IsNull())
    {
      m_elapsedTimeInSeconds = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(elapsedTimeInSecondsNode.GetText()).c_str()).c_str());
    }
    XmlNode estimatedTimeToCompletionInSecondsNode = resultNode.FirstChild("EstimatedTimeToCompletionInSeconds");
    if(!estimatedTimeToCompletionInSecondsNode.IsNull())
    {
      m_estimatedTimeToCompletionInSeconds = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(estimatedTimeToCompletionInSecondsNode.GetText()).c_str()).c_str());
    }
    XmlNode resizeTypeNode = resultNode.FirstChild("ResizeType");
    if(!resizeTypeNode.IsNull())
    {
      m_resizeType = Aws::Utils::Xml::DecodeEscapedXmlText(resizeTypeNode.GetText());
    }
    XmlNode messageNode = resultNode.FirstChild("Message");
    if(!messageNode.IsNull())
    {
      m_message = Aws::Utils::Xml::DecodeEscapedXmlText(messageNode.GetText());
    }
    XmlNode targetEncryptionTypeNode = resultNode.FirstChild("TargetEncryptionType");
    if(!targetEncryptionTypeNode.IsNull())
    {
      m_targetEncryptionType = Aws::Utils::Xml::DecodeEscapedXmlText(targetEncryptionTypeNode.GetText());
    }
    XmlNode dataTransferProgressPercentNode = resultNode.FirstChild("DataTransferProgressPercent");
    if(!dataTransferProgressPercentNode.IsNull())
    {
      m_dataTransferProgressPercent = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dataTransferProgressPercentNode.GetText()).c_str()).c_str());
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::CancelResizeResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
