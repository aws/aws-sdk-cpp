/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DeleteEndpointAccessResult.h>
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

DeleteEndpointAccessResult::DeleteEndpointAccessResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DeleteEndpointAccessResult& DeleteEndpointAccessResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DeleteEndpointAccessResult"))
  {
    resultNode = rootNode.FirstChild("DeleteEndpointAccessResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode clusterIdentifierNode = resultNode.FirstChild("ClusterIdentifier");
    if(!clusterIdentifierNode.IsNull())
    {
      m_clusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(clusterIdentifierNode.GetText());
      m_clusterIdentifierHasBeenSet = true;
    }
    XmlNode resourceOwnerNode = resultNode.FirstChild("ResourceOwner");
    if(!resourceOwnerNode.IsNull())
    {
      m_resourceOwner = Aws::Utils::Xml::DecodeEscapedXmlText(resourceOwnerNode.GetText());
      m_resourceOwnerHasBeenSet = true;
    }
    XmlNode subnetGroupNameNode = resultNode.FirstChild("SubnetGroupName");
    if(!subnetGroupNameNode.IsNull())
    {
      m_subnetGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(subnetGroupNameNode.GetText());
      m_subnetGroupNameHasBeenSet = true;
    }
    XmlNode endpointStatusNode = resultNode.FirstChild("EndpointStatus");
    if(!endpointStatusNode.IsNull())
    {
      m_endpointStatus = Aws::Utils::Xml::DecodeEscapedXmlText(endpointStatusNode.GetText());
      m_endpointStatusHasBeenSet = true;
    }
    XmlNode endpointNameNode = resultNode.FirstChild("EndpointName");
    if(!endpointNameNode.IsNull())
    {
      m_endpointName = Aws::Utils::Xml::DecodeEscapedXmlText(endpointNameNode.GetText());
      m_endpointNameHasBeenSet = true;
    }
    XmlNode endpointCreateTimeNode = resultNode.FirstChild("EndpointCreateTime");
    if(!endpointCreateTimeNode.IsNull())
    {
      m_endpointCreateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endpointCreateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_endpointCreateTimeHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode addressNode = resultNode.FirstChild("Address");
    if(!addressNode.IsNull())
    {
      m_address = Aws::Utils::Xml::DecodeEscapedXmlText(addressNode.GetText());
      m_addressHasBeenSet = true;
    }
    XmlNode vpcSecurityGroupsNode = resultNode.FirstChild("VpcSecurityGroups");
    if(!vpcSecurityGroupsNode.IsNull())
    {
      XmlNode vpcSecurityGroupsMember = vpcSecurityGroupsNode.FirstChild("VpcSecurityGroup");
      m_vpcSecurityGroupsHasBeenSet = !vpcSecurityGroupsMember.IsNull();
      while(!vpcSecurityGroupsMember.IsNull())
      {
        m_vpcSecurityGroups.push_back(vpcSecurityGroupsMember);
        vpcSecurityGroupsMember = vpcSecurityGroupsMember.NextNode("VpcSecurityGroup");
      }

      m_vpcSecurityGroupsHasBeenSet = true;
    }
    XmlNode vpcEndpointNode = resultNode.FirstChild("VpcEndpoint");
    if(!vpcEndpointNode.IsNull())
    {
      m_vpcEndpoint = vpcEndpointNode;
      m_vpcEndpointHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::DeleteEndpointAccessResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
