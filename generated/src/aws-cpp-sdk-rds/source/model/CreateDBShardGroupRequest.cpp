/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateDBShardGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CreateDBShardGroupRequest::CreateDBShardGroupRequest() : 
    m_dBShardGroupIdentifierHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_computeRedundancy(0),
    m_computeRedundancyHasBeenSet(false),
    m_maxACU(0.0),
    m_maxACUHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false)
{
}

Aws::String CreateDBShardGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDBShardGroup&";
  if(m_dBShardGroupIdentifierHasBeenSet)
  {
    ss << "DBShardGroupIdentifier=" << StringUtils::URLEncode(m_dBShardGroupIdentifier.c_str()) << "&";
  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_computeRedundancyHasBeenSet)
  {
    ss << "ComputeRedundancy=" << m_computeRedundancy << "&";
  }

  if(m_maxACUHasBeenSet)
  {
    ss << "MaxACU=" << StringUtils::URLEncode(m_maxACU) << "&";
  }

  if(m_publiclyAccessibleHasBeenSet)
  {
    ss << "PubliclyAccessible=" << std::boolalpha << m_publiclyAccessible << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateDBShardGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
