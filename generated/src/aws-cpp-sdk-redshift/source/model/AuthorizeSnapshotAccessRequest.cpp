﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/AuthorizeSnapshotAccessRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String AuthorizeSnapshotAccessRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AuthorizeSnapshotAccess&";
  if(m_snapshotIdentifierHasBeenSet)
  {
    ss << "SnapshotIdentifier=" << StringUtils::URLEncode(m_snapshotIdentifier.c_str()) << "&";
  }

  if(m_snapshotArnHasBeenSet)
  {
    ss << "SnapshotArn=" << StringUtils::URLEncode(m_snapshotArn.c_str()) << "&";
  }

  if(m_snapshotClusterIdentifierHasBeenSet)
  {
    ss << "SnapshotClusterIdentifier=" << StringUtils::URLEncode(m_snapshotClusterIdentifier.c_str()) << "&";
  }

  if(m_accountWithRestoreAccessHasBeenSet)
  {
    ss << "AccountWithRestoreAccess=" << StringUtils::URLEncode(m_accountWithRestoreAccess.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  AuthorizeSnapshotAccessRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
