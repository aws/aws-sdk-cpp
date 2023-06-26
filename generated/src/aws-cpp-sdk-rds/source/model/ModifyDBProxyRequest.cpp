/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyDBProxyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ModifyDBProxyRequest::ModifyDBProxyRequest() : 
    m_dBProxyNameHasBeenSet(false),
    m_newDBProxyNameHasBeenSet(false),
    m_authHasBeenSet(false),
    m_requireTLS(false),
    m_requireTLSHasBeenSet(false),
    m_idleClientTimeout(0),
    m_idleClientTimeoutHasBeenSet(false),
    m_debugLogging(false),
    m_debugLoggingHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_securityGroupsHasBeenSet(false)
{
}

Aws::String ModifyDBProxyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyDBProxy&";
  if(m_dBProxyNameHasBeenSet)
  {
    ss << "DBProxyName=" << StringUtils::URLEncode(m_dBProxyName.c_str()) << "&";
  }

  if(m_newDBProxyNameHasBeenSet)
  {
    ss << "NewDBProxyName=" << StringUtils::URLEncode(m_newDBProxyName.c_str()) << "&";
  }

  if(m_authHasBeenSet)
  {
    unsigned authCount = 1;
    for(auto& item : m_auth)
    {
      item.OutputToStream(ss, "Auth.member.", authCount, "");
      authCount++;
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

  if(m_roleArnHasBeenSet)
  {
    ss << "RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
  }

  if(m_securityGroupsHasBeenSet)
  {
    unsigned securityGroupsCount = 1;
    for(auto& item : m_securityGroups)
    {
      ss << "SecurityGroups.member." << securityGroupsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      securityGroupsCount++;
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyDBProxyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
