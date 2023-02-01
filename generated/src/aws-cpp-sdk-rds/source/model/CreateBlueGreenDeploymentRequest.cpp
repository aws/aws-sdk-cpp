/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateBlueGreenDeploymentRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CreateBlueGreenDeploymentRequest::CreateBlueGreenDeploymentRequest() : 
    m_blueGreenDeploymentNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_targetEngineVersionHasBeenSet(false),
    m_targetDBParameterGroupNameHasBeenSet(false),
    m_targetDBClusterParameterGroupNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateBlueGreenDeploymentRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateBlueGreenDeployment&";
  if(m_blueGreenDeploymentNameHasBeenSet)
  {
    ss << "BlueGreenDeploymentName=" << StringUtils::URLEncode(m_blueGreenDeploymentName.c_str()) << "&";
  }

  if(m_sourceHasBeenSet)
  {
    ss << "Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
  }

  if(m_targetEngineVersionHasBeenSet)
  {
    ss << "TargetEngineVersion=" << StringUtils::URLEncode(m_targetEngineVersion.c_str()) << "&";
  }

  if(m_targetDBParameterGroupNameHasBeenSet)
  {
    ss << "TargetDBParameterGroupName=" << StringUtils::URLEncode(m_targetDBParameterGroupName.c_str()) << "&";
  }

  if(m_targetDBClusterParameterGroupNameHasBeenSet)
  {
    ss << "TargetDBClusterParameterGroupName=" << StringUtils::URLEncode(m_targetDBClusterParameterGroupName.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateBlueGreenDeploymentRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
