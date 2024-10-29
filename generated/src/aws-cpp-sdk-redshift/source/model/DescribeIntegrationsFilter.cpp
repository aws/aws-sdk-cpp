﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeIntegrationsFilter.h>
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

DescribeIntegrationsFilter::DescribeIntegrationsFilter() : 
    m_name(DescribeIntegrationsFilterName::NOT_SET),
    m_nameHasBeenSet(false),
    m_valuesHasBeenSet(false)
{
}

DescribeIntegrationsFilter::DescribeIntegrationsFilter(const XmlNode& xmlNode)
  : DescribeIntegrationsFilter()
{
  *this = xmlNode;
}

DescribeIntegrationsFilter& DescribeIntegrationsFilter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = DescribeIntegrationsFilterNameMapper::GetDescribeIntegrationsFilterNameForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText()).c_str()).c_str());
      m_nameHasBeenSet = true;
    }
    XmlNode valuesNode = resultNode.FirstChild("Values");
    if(!valuesNode.IsNull())
    {
      XmlNode valuesMember = valuesNode.FirstChild("Value");
      while(!valuesMember.IsNull())
      {
        m_values.push_back(valuesMember.GetText());
        valuesMember = valuesMember.NextNode("Value");
      }

      m_valuesHasBeenSet = true;
    }
  }

  return *this;
}

void DescribeIntegrationsFilter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << DescribeIntegrationsFilterNameMapper::GetNameForDescribeIntegrationsFilterName(m_name) << "&";
  }

  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        oStream << location << index << locationValue << ".Value." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void DescribeIntegrationsFilter::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << DescribeIntegrationsFilterNameMapper::GetNameForDescribeIntegrationsFilterName(m_name) << "&";
  }
  if(m_valuesHasBeenSet)
  {
      unsigned valuesIdx = 1;
      for(auto& item : m_values)
      {
        oStream << location << ".Value." << valuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
