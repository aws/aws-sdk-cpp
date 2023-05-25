/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DataShare.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

DataShare::DataShare() : 
    m_dataShareArnHasBeenSet(false),
    m_producerArnHasBeenSet(false),
    m_allowPubliclyAccessibleConsumers(false),
    m_allowPubliclyAccessibleConsumersHasBeenSet(false),
    m_dataShareAssociationsHasBeenSet(false),
    m_managedByHasBeenSet(false)
{
}

DataShare::DataShare(const XmlNode& xmlNode) : 
    m_dataShareArnHasBeenSet(false),
    m_producerArnHasBeenSet(false),
    m_allowPubliclyAccessibleConsumers(false),
    m_allowPubliclyAccessibleConsumersHasBeenSet(false),
    m_dataShareAssociationsHasBeenSet(false),
    m_managedByHasBeenSet(false)
{
  *this = xmlNode;
}

DataShare& DataShare::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dataShareArnNode = resultNode.FirstChild("DataShareArn");
    if(!dataShareArnNode.IsNull())
    {
      m_dataShareArn = Aws::Utils::Xml::DecodeEscapedXmlText(dataShareArnNode.GetText());
      m_dataShareArnHasBeenSet = true;
    }
    XmlNode producerArnNode = resultNode.FirstChild("ProducerArn");
    if(!producerArnNode.IsNull())
    {
      m_producerArn = Aws::Utils::Xml::DecodeEscapedXmlText(producerArnNode.GetText());
      m_producerArnHasBeenSet = true;
    }
    XmlNode allowPubliclyAccessibleConsumersNode = resultNode.FirstChild("AllowPubliclyAccessibleConsumers");
    if(!allowPubliclyAccessibleConsumersNode.IsNull())
    {
      m_allowPubliclyAccessibleConsumers = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allowPubliclyAccessibleConsumersNode.GetText()).c_str()).c_str());
      m_allowPubliclyAccessibleConsumersHasBeenSet = true;
    }
    XmlNode dataShareAssociationsNode = resultNode.FirstChild("DataShareAssociations");
    if(!dataShareAssociationsNode.IsNull())
    {
      XmlNode dataShareAssociationsMember = dataShareAssociationsNode.FirstChild("member");
      while(!dataShareAssociationsMember.IsNull())
      {
        m_dataShareAssociations.push_back(dataShareAssociationsMember);
        dataShareAssociationsMember = dataShareAssociationsMember.NextNode("member");
      }

      m_dataShareAssociationsHasBeenSet = true;
    }
    XmlNode managedByNode = resultNode.FirstChild("ManagedBy");
    if(!managedByNode.IsNull())
    {
      m_managedBy = Aws::Utils::Xml::DecodeEscapedXmlText(managedByNode.GetText());
      m_managedByHasBeenSet = true;
    }
  }

  return *this;
}

void DataShare::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dataShareArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DataShareArn=" << StringUtils::URLEncode(m_dataShareArn.c_str()) << "&";
  }

  if(m_producerArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProducerArn=" << StringUtils::URLEncode(m_producerArn.c_str()) << "&";
  }

  if(m_allowPubliclyAccessibleConsumersHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllowPubliclyAccessibleConsumers=" << std::boolalpha << m_allowPubliclyAccessibleConsumers << "&";
  }

  if(m_dataShareAssociationsHasBeenSet)
  {
      unsigned dataShareAssociationsIdx = 1;
      for(auto& item : m_dataShareAssociations)
      {
        Aws::StringStream dataShareAssociationsSs;
        dataShareAssociationsSs << location << index << locationValue << ".DataShareAssociations.member." << dataShareAssociationsIdx++;
        item.OutputToStream(oStream, dataShareAssociationsSs.str().c_str());
      }
  }

  if(m_managedByHasBeenSet)
  {
      oStream << location << index << locationValue << ".ManagedBy=" << StringUtils::URLEncode(m_managedBy.c_str()) << "&";
  }

  Aws::StringStream responseMetadataLocationAndMemberSs;
  responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
  m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
}

void DataShare::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dataShareArnHasBeenSet)
  {
      oStream << location << ".DataShareArn=" << StringUtils::URLEncode(m_dataShareArn.c_str()) << "&";
  }
  if(m_producerArnHasBeenSet)
  {
      oStream << location << ".ProducerArn=" << StringUtils::URLEncode(m_producerArn.c_str()) << "&";
  }
  if(m_allowPubliclyAccessibleConsumersHasBeenSet)
  {
      oStream << location << ".AllowPubliclyAccessibleConsumers=" << std::boolalpha << m_allowPubliclyAccessibleConsumers << "&";
  }
  if(m_dataShareAssociationsHasBeenSet)
  {
      unsigned dataShareAssociationsIdx = 1;
      for(auto& item : m_dataShareAssociations)
      {
        Aws::StringStream dataShareAssociationsSs;
        dataShareAssociationsSs << location <<  ".DataShareAssociations.member." << dataShareAssociationsIdx++;
        item.OutputToStream(oStream, dataShareAssociationsSs.str().c_str());
      }
  }
  if(m_managedByHasBeenSet)
  {
      oStream << location << ".ManagedBy=" << StringUtils::URLEncode(m_managedBy.c_str()) << "&";
  }
  Aws::String responseMetadataLocationAndMember(location);
  responseMetadataLocationAndMember += ".ResponseMetadata";
  m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
