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

CreateSnapshotScheduleResult::CreateSnapshotScheduleResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
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
      m_scheduleDefinitionsHasBeenSet = !scheduleDefinitionsMember.IsNull();
      while(!scheduleDefinitionsMember.IsNull())
      {
        m_scheduleDefinitions.push_back(scheduleDefinitionsMember.GetText());
        scheduleDefinitionsMember = scheduleDefinitionsMember.NextNode("ScheduleDefinition");
      }

      m_scheduleDefinitionsHasBeenSet = true;
    }
    XmlNode scheduleIdentifierNode = resultNode.FirstChild("ScheduleIdentifier");
    if(!scheduleIdentifierNode.IsNull())
    {
      m_scheduleIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(scheduleIdentifierNode.GetText());
      m_scheduleIdentifierHasBeenSet = true;
    }
    XmlNode scheduleDescriptionNode = resultNode.FirstChild("ScheduleDescription");
    if(!scheduleDescriptionNode.IsNull())
    {
      m_scheduleDescription = Aws::Utils::Xml::DecodeEscapedXmlText(scheduleDescriptionNode.GetText());
      m_scheduleDescriptionHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("Tag");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("Tag");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode nextInvocationsNode = resultNode.FirstChild("NextInvocations");
    if(!nextInvocationsNode.IsNull())
    {
      XmlNode nextInvocationsMember = nextInvocationsNode.FirstChild("SnapshotTime");
      m_nextInvocationsHasBeenSet = !nextInvocationsMember.IsNull();
      while(!nextInvocationsMember.IsNull())
      {
        m_nextInvocations.push_back(DateTime(StringUtils::Trim(nextInvocationsMember.GetText().c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601));
        nextInvocationsMember = nextInvocationsMember.NextNode("SnapshotTime");
      }

      m_nextInvocationsHasBeenSet = true;
    }
    XmlNode associatedClusterCountNode = resultNode.FirstChild("AssociatedClusterCount");
    if(!associatedClusterCountNode.IsNull())
    {
      m_associatedClusterCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(associatedClusterCountNode.GetText()).c_str()).c_str());
      m_associatedClusterCountHasBeenSet = true;
    }
    XmlNode associatedClustersNode = resultNode.FirstChild("AssociatedClusters");
    if(!associatedClustersNode.IsNull())
    {
      XmlNode associatedClustersMember = associatedClustersNode.FirstChild("ClusterAssociatedToSchedule");
      m_associatedClustersHasBeenSet = !associatedClustersMember.IsNull();
      while(!associatedClustersMember.IsNull())
      {
        m_associatedClusters.push_back(associatedClustersMember);
        associatedClustersMember = associatedClustersMember.NextNode("ClusterAssociatedToSchedule");
      }

      m_associatedClustersHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::CreateSnapshotScheduleResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
