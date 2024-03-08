/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/model/OrgConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ResourceExplorer2
{
namespace Model
{
  class GetAccountLevelServiceConfigurationResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API GetAccountLevelServiceConfigurationResult();
    AWS_RESOURCEEXPLORER2_API GetAccountLevelServiceConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API GetAccountLevelServiceConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the organization, and whether configuration is
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline const OrgConfiguration& GetOrgConfiguration() const{ return m_orgConfiguration; }

    /**
     * <p>Details about the organization, and whether configuration is
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline void SetOrgConfiguration(const OrgConfiguration& value) { m_orgConfiguration = value; }

    /**
     * <p>Details about the organization, and whether configuration is
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline void SetOrgConfiguration(OrgConfiguration&& value) { m_orgConfiguration = std::move(value); }

    /**
     * <p>Details about the organization, and whether configuration is
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline GetAccountLevelServiceConfigurationResult& WithOrgConfiguration(const OrgConfiguration& value) { SetOrgConfiguration(value); return *this;}

    /**
     * <p>Details about the organization, and whether configuration is
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline GetAccountLevelServiceConfigurationResult& WithOrgConfiguration(OrgConfiguration&& value) { SetOrgConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAccountLevelServiceConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAccountLevelServiceConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAccountLevelServiceConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    OrgConfiguration m_orgConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
