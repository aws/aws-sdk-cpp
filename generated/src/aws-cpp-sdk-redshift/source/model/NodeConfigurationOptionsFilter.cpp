/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/NodeConfigurationOptionsFilter.h>
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

NodeConfigurationOptionsFilter::NodeConfigurationOptionsFilter(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

NodeConfigurationOptionsFilter& NodeConfigurationOptionsFilter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = NodeConfigurationOptionsFilterNameMapper::GetNodeConfigurationOptionsFilterNameForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText()).c_str()));
      m_nameHasBeenSet = true;
    }
    XmlNode operatorNode = resultNode.FirstChild("Operator");
    if(!operatorNode.IsNull())
    {
      m_operator = OperatorTypeMapper::GetOperatorTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(operatorNode.GetText()).c_str()));
      m_operatorHasBeenSet = true;
    }
    XmlNode valuesNode = resultNode.FirstChild("Value");
    if(!valuesNode.IsNull())
    {
      XmlNode valuesMember = valuesNode.FirstChild("item");
      m_valuesHasBeenSet = !valuesMember.IsNull();
      while(!valuesMember.IsNull())
      {
        m_values.push_back(valuesMember.GetText());
        valuesMember = valuesMember.NextNode("item");
      }

      m_valuesHasBeenSet = true;
    }
  }

  return *this;
}

void NodeConfigurationOptionsFilter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(NodeConfigurationOptionsFilterNameMapper::GetNameForNodeConfigurationOptionsFilterName(m_name)) << "&";
  }

  if(m_operatorHasBeenSet)
  {
      oStream << location << index << locationValue << ".Operator=" << StringUtils::URLEncode(OperatorTypeMapper::GetNameForOperatorType(m_operator)) << "&";
  }

  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        oStream << location << index << locationValue << ".Values.item." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void NodeConfigurationOptionsFilter::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(NodeConfigurationOptionsFilterNameMapper::GetNameForNodeConfigurationOptionsFilterName(m_name)) << "&";
  }
  if(m_operatorHasBeenSet)
  {
      oStream << location << ".Operator=" << StringUtils::URLEncode(OperatorTypeMapper::GetNameForOperatorType(m_operator)) << "&";
  }
  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        oStream << location << ".Values.item." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
