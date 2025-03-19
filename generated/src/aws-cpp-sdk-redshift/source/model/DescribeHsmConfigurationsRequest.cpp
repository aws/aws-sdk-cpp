/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeHsmConfigurationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String DescribeHsmConfigurationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeHsmConfigurations&";
  if(m_hsmConfigurationIdentifierHasBeenSet)
  {
    ss << "HsmConfigurationIdentifier=" << StringUtils::URLEncode(m_hsmConfigurationIdentifier.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_tagKeysHasBeenSet)
  {
    if (m_tagKeys.empty())
    {
      ss << "TagKeys=&";
    }
    else
    {
      unsigned tagKeysCount = 1;
      for(auto& item : m_tagKeys)
      {
        ss << "TagKeys.TagKey." << tagKeysCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        tagKeysCount++;
      }
    }
  }

  if(m_tagValuesHasBeenSet)
  {
    if (m_tagValues.empty())
    {
      ss << "TagValues=&";
    }
    else
    {
      unsigned tagValuesCount = 1;
      for(auto& item : m_tagValues)
      {
        ss << "TagValues.TagValue." << tagValuesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        tagValuesCount++;
      }
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DescribeHsmConfigurationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
