/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyDBShardGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String ModifyDBShardGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyDBShardGroup&";
  if(m_dBShardGroupIdentifierHasBeenSet)
  {
    ss << "DBShardGroupIdentifier=" << StringUtils::URLEncode(m_dBShardGroupIdentifier.c_str()) << "&";
  }

  if(m_maxACUHasBeenSet)
  {
    ss << "MaxACU=" << StringUtils::URLEncode(m_maxACU) << "&";
  }

  if(m_minACUHasBeenSet)
  {
    ss << "MinACU=" << StringUtils::URLEncode(m_minACU) << "&";
  }

  if(m_computeRedundancyHasBeenSet)
  {
    ss << "ComputeRedundancy=" << m_computeRedundancy << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyDBShardGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
