/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DefaultClusterParameters.h>
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

DefaultClusterParameters::DefaultClusterParameters() : 
    m_parameterGroupFamilyHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

DefaultClusterParameters::DefaultClusterParameters(const XmlNode& xmlNode) : 
    m_parameterGroupFamilyHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
  *this = xmlNode;
}

DefaultClusterParameters& DefaultClusterParameters::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode parameterGroupFamilyNode = resultNode.FirstChild("ParameterGroupFamily");
    if(!parameterGroupFamilyNode.IsNull())
    {
      m_parameterGroupFamily = Aws::Utils::Xml::DecodeEscapedXmlText(parameterGroupFamilyNode.GetText());
      m_parameterGroupFamilyHasBeenSet = true;
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
    XmlNode parametersNode = resultNode.FirstChild("Parameters");
    if(!parametersNode.IsNull())
    {
      XmlNode parametersMember = parametersNode.FirstChild("Parameter");
      while(!parametersMember.IsNull())
      {
        m_parameters.push_back(parametersMember);
        parametersMember = parametersMember.NextNode("Parameter");
      }

      m_parametersHasBeenSet = true;
    }
  }

  return *this;
}

void DefaultClusterParameters::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_parameterGroupFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParameterGroupFamily=" << StringUtils::URLEncode(m_parameterGroupFamily.c_str()) << "&";
  }

  if(m_markerHasBeenSet)
  {
      oStream << location << index << locationValue << ".Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_parametersHasBeenSet)
  {
      unsigned parametersIdx = 1;
      for(auto& item : m_parameters)
      {
        Aws::StringStream parametersSs;
        parametersSs << location << index << locationValue << ".Parameter." << parametersIdx++;
        item.OutputToStream(oStream, parametersSs.str().c_str());
      }
  }

}

void DefaultClusterParameters::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_parameterGroupFamilyHasBeenSet)
  {
      oStream << location << ".ParameterGroupFamily=" << StringUtils::URLEncode(m_parameterGroupFamily.c_str()) << "&";
  }
  if(m_markerHasBeenSet)
  {
      oStream << location << ".Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }
  if(m_parametersHasBeenSet)
  {
      unsigned parametersIdx = 1;
      for(auto& item : m_parameters)
      {
        Aws::StringStream parametersSs;
        parametersSs << location <<  ".Parameter." << parametersIdx++;
        item.OutputToStream(oStream, parametersSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
