/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/SwitchoverReadReplicaRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

SwitchoverReadReplicaRequest::SwitchoverReadReplicaRequest() : 
    m_dBInstanceIdentifierHasBeenSet(false)
{
}

Aws::String SwitchoverReadReplicaRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SwitchoverReadReplica&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  SwitchoverReadReplicaRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
