/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/CreateSnapshotScheduleResult.h>
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

CreateSnapshotScheduleResult::CreateSnapshotScheduleResult() : 
    m_associatedClusterCount(0)
{
}

CreateSnapshotScheduleResult::CreateSnapshotScheduleResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_associatedClusterCount(0)
{
  *this = result;
}

CreateSnapshotScheduleResult& CreateSnapshotScheduleResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateSnapshotScheduleResult"))
  {
    resultNode = rootNode.FirstChild("CreateSnapshotScheduleResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode scheduleDefinitionsNode = resultNode.FirstChild("ScheduleDefinitions");
    if(!scheduleDefinitionsNode.IsNull())
    {
      XmlNode scheduleDefinitionsMember = scheduleDefinitionsNode.FirstChild("ScheduleDefinition");
      while(!scheduleDefinitionsMember.IsNull())
      {
        m_scheduleDefinitions.push_back(scheduleDefinitionsMember.GetText());
        scheduleDefinitionsMember = scheduleDefinitionsMember.NextNode("ScheduleDefinition");
      }

    }
    XmlNode scheduleIdentifierNode = resultNode.FirstChild("ScheduleIdentifier");
    if(!scheduleIdentifierNode.IsNull())
    {
      m_scheduleIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(scheduleIdentifierNode.GetText());
    }
    XmlNode scheduleDescriptionNode = resultNode.FirstChild("ScheduleDescription");
    if(!scheduleDescriptionNode.IsNull())
    {
      m_scheduleDescription = Aws::Utils::Xml::DecodeEscapedXmlText(scheduleDescriptionNode.GetText());
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("Tag");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("Tag");
      }

    }
    XmlNode nextInvocationsNode = resultNode.FirstChild("NextInvocations");
    if(!nextInvocationsNode.IsNull())
    {
      XmlNode nextInvocationsMember = nextInvocationsNode.FirstChild("SnapshotTime");
      while(!nextInvocationsMember.IsNull())
      {
        m_nextInvocations.push_back(DateTime(StringUtils::Trim(nextInvocationsMember.GetText().c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601));
        nextInvocationsMember = nextInvocationsMember.NextNode("SnapshotTime");
      }

    }
    XmlNode associatedClusterCountNode = resultNode.FirstChild("AssociatedClusterCount");
    if(!associatedClusterCountNode.IsNull())
    {
      m_associatedClusterCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(associatedClusterCountNode.GetText()).c_str()).c_str());
    }
    XmlNode associatedClustersNode = resultNode.FirstChild("AssociatedClusters");
    if(!associatedClustersNode.IsNull())
    {
      XmlNode associatedClustersMember = associatedClustersNode.FirstChild("ClusterAssociatedToSchedule");
      while(!associatedClustersMember.IsNull())
      {
        m_associatedClusters.push_back(associatedClustersMember);
        associatedClustersMember = associatedClustersMember.NextNode("ClusterAssociatedToSchedule");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::CreateSnapshotScheduleResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
