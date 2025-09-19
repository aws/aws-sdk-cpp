/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateDBProxyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String CreateDBProxyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDBProxy&";
  if(m_dBProxyNameHasBeenSet)
  {
    ss << "DBProxyName=" << StringUtils::URLEncode(m_dBProxyName.c_str()) << "&";
  }

  if(m_engineFamilyHasBeenSet)
  {
    ss << "EngineFamily=" << StringUtils::URLEncode(EngineFamilyMapper::GetNameForEngineFamily(m_engineFamily)) << "&";
  }

  if(m_defaultAuthSchemeHasBeenSet)
  {
    ss << "DefaultAuthScheme=" << StringUtils::URLEncode(DefaultAuthSchemeMapper::GetNameForDefaultAuthScheme(m_defaultAuthScheme)) << "&";
  }

  if(m_authHasBeenSet)
  {
    if (m_auth.empty())
    {
      ss << "Auth=&";
    }
    else
    {
      unsigned authCount = 1;
      for(auto& item : m_auth)
      {
        item.OutputToStream(ss, "Auth.member.", authCount, "");
        authCount++;
      }
    }
  }

  if(m_roleArnHasBeenSet)
  {
    ss << "RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
  }

  if(m_vpcSubnetIdsHasBeenSet)
  {
    if (m_vpcSubnetIds.empty())
    {
      ss << "VpcSubnetIds=&";
    }
    else
    {
      unsigned vpcSubnetIdsCount = 1;
      for(auto& item : m_vpcSubnetIds)
      {
        ss << "VpcSubnetIds.member." << vpcSubnetIdsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        vpcSubnetIdsCount++;
      }
    }
  }

  if(m_vpcSecurityGroupIdsHasBeenSet)
  {
    if (m_vpcSecurityGroupIds.empty())
    {
      ss << "VpcSecurityGroupIds=&";
    }
    else
    {
      unsigned vpcSecurityGroupIdsCount = 1;
      for(auto& item : m_vpcSecurityGroupIds)
      {
        ss << "VpcSecurityGroupIds.member." << vpcSecurityGroupIdsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        vpcSecurityGroupIdsCount++;
      }
    }
  }

  if(m_requireTLSHasBeenSet)
  {
    ss << "RequireTLS=" << std::boolalpha << m_requireTLS << "&";
  }

  if(m_idleClientTimeoutHasBeenSet)
  {
    ss << "IdleClientTimeout=" << m_idleClientTimeout << "&";
  }

  if(m_debugLoggingHasBeenSet)
  {
    ss << "DebugLogging=" << std::boolalpha << m_debugLogging << "&";
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
        item.OutputToStream(ss, "Tags.Tag.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  if(m_endpointNetworkTypeHasBeenSet)
  {
    ss << "EndpointNetworkType=" << StringUtils::URLEncode(EndpointNetworkTypeMapper::GetNameForEndpointNetworkType(m_endpointNetworkType)) << "&";
  }

  if(m_targetConnectionNetworkTypeHasBeenSet)
  {
    ss << "TargetConnectionNetworkType=" << StringUtils::URLEncode(TargetConnectionNetworkTypeMapper::GetNameForTargetConnectionNetworkType(m_targetConnectionNetworkType)) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateDBProxyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
