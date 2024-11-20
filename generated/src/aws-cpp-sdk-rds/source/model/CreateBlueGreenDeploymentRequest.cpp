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
    m_tagsHasBeenSet(false),
    m_targetDBInstanceClassHasBeenSet(false),
    m_upgradeTargetStorageConfig(false),
    m_upgradeTargetStorageConfigHasBeenSet(false),
    m_targetIops(0),
    m_targetIopsHasBeenSet(false),
    m_targetStorageTypeHasBeenSet(false),
    m_targetAllocatedStorage(0),
    m_targetAllocatedStorageHasBeenSet(false),
    m_targetStorageThroughput(0),
    m_targetStorageThroughputHasBeenSet(false)
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
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.member.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  if(m_targetDBInstanceClassHasBeenSet)
  {
    ss << "TargetDBInstanceClass=" << StringUtils::URLEncode(m_targetDBInstanceClass.c_str()) << "&";
  }

  if(m_upgradeTargetStorageConfigHasBeenSet)
  {
    ss << "UpgradeTargetStorageConfig=" << std::boolalpha << m_upgradeTargetStorageConfig << "&";
  }

  if(m_targetIopsHasBeenSet)
  {
    ss << "TargetIops=" << m_targetIops << "&";
  }

  if(m_targetStorageTypeHasBeenSet)
  {
    ss << "TargetStorageType=" << StringUtils::URLEncode(m_targetStorageType.c_str()) << "&";
  }

  if(m_targetAllocatedStorageHasBeenSet)
  {
    ss << "TargetAllocatedStorage=" << m_targetAllocatedStorage << "&";
  }

  if(m_targetStorageThroughputHasBeenSet)
  {
    ss << "TargetStorageThroughput=" << m_targetStorageThroughput << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateBlueGreenDeploymentRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
