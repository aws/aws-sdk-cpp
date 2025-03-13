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
    AWS_RESOURCEEXPLORER2_API GetAccountLevelServiceConfigurationResult() = default;
    AWS_RESOURCEEXPLORER2_API GetAccountLevelServiceConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API GetAccountLevelServiceConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the organization, and whether configuration is
     * <code>ENABLED</code> or <code>DISABLED</code>.</p>
     */
    inline const OrgConfiguration& GetOrgConfiguration() const { return m_orgConfiguration; }
    template<typename OrgConfigurationT = OrgConfiguration>
    void SetOrgConfiguration(OrgConfigurationT&& value) { m_orgConfigurationHasBeenSet = true; m_orgConfiguration = std::forward<OrgConfigurationT>(value); }
    template<typename OrgConfigurationT = OrgConfiguration>
    GetAccountLevelServiceConfigurationResult& WithOrgConfiguration(OrgConfigurationT&& value) { SetOrgConfiguration(std::forward<OrgConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAccountLevelServiceConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    OrgConfiguration m_orgConfiguration;
    bool m_orgConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
