/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DeleteBlueGreenDeploymentRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DeleteBlueGreenDeploymentRequest::DeleteBlueGreenDeploymentRequest() : 
    m_blueGreenDeploymentIdentifierHasBeenSet(false),
    m_deleteTarget(false),
    m_deleteTargetHasBeenSet(false)
{
}

Aws::String DeleteBlueGreenDeploymentRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteBlueGreenDeployment&";
  if(m_blueGreenDeploymentIdentifierHasBeenSet)
  {
    ss << "BlueGreenDeploymentIdentifier=" << StringUtils::URLEncode(m_blueGreenDeploymentIdentifier.c_str()) << "&";
  }

  if(m_deleteTargetHasBeenSet)
  {
    ss << "DeleteTarget=" << std::boolalpha << m_deleteTarget << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DeleteBlueGreenDeploymentRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
