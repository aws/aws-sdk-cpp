/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyDBParameterGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String ModifyDBParameterGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyDBParameterGroup&";
  if(m_dBParameterGroupNameHasBeenSet)
  {
    ss << "DBParameterGroupName=" << StringUtils::URLEncode(m_dBParameterGroupName.c_str()) << "&";
  }

  if(m_parametersHasBeenSet)
  {
    if (m_parameters.empty())
    {
      ss << "Parameters=&";
    }
    else
    {
      unsigned parametersCount = 1;
      for(auto& item : m_parameters)
      {
        item.OutputToStream(ss, "Parameters.Parameter.", parametersCount, "");
        parametersCount++;
      }
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyDBParameterGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
