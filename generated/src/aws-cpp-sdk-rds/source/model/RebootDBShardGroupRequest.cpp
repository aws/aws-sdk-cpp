/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/RebootDBShardGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

RebootDBShardGroupRequest::RebootDBShardGroupRequest() : 
    m_dBShardGroupIdentifierHasBeenSet(false)
{
}

Aws::String RebootDBShardGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RebootDBShardGroup&";
  if(m_dBShardGroupIdentifierHasBeenSet)
  {
    ss << "DBShardGroupIdentifier=" << StringUtils::URLEncode(m_dBShardGroupIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  RebootDBShardGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
