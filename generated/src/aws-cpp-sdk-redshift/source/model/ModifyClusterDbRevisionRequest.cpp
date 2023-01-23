/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyClusterDbRevisionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

ModifyClusterDbRevisionRequest::ModifyClusterDbRevisionRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_revisionTargetHasBeenSet(false)
{
}

Aws::String ModifyClusterDbRevisionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyClusterDbRevision&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_revisionTargetHasBeenSet)
  {
    ss << "RevisionTarget=" << StringUtils::URLEncode(m_revisionTarget.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifyClusterDbRevisionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
