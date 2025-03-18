/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ServerGroupReplicationConfiguration.h>
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
namespace SMS
{
namespace Model
{
  class GetAppReplicationConfigurationResult
  {
  public:
    AWS_SMS_API GetAppReplicationConfigurationResult() = default;
    AWS_SMS_API GetAppReplicationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SMS_API GetAppReplicationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The replication configurations associated with server groups in this
     * application.</p>
     */
    inline const Aws::Vector<ServerGroupReplicationConfiguration>& GetServerGroupReplicationConfigurations() const { return m_serverGroupReplicationConfigurations; }
    template<typename ServerGroupReplicationConfigurationsT = Aws::Vector<ServerGroupReplicationConfiguration>>
    void SetServerGroupReplicationConfigurations(ServerGroupReplicationConfigurationsT&& value) { m_serverGroupReplicationConfigurationsHasBeenSet = true; m_serverGroupReplicationConfigurations = std::forward<ServerGroupReplicationConfigurationsT>(value); }
    template<typename ServerGroupReplicationConfigurationsT = Aws::Vector<ServerGroupReplicationConfiguration>>
    GetAppReplicationConfigurationResult& WithServerGroupReplicationConfigurations(ServerGroupReplicationConfigurationsT&& value) { SetServerGroupReplicationConfigurations(std::forward<ServerGroupReplicationConfigurationsT>(value)); return *this;}
    template<typename ServerGroupReplicationConfigurationsT = ServerGroupReplicationConfiguration>
    GetAppReplicationConfigurationResult& AddServerGroupReplicationConfigurations(ServerGroupReplicationConfigurationsT&& value) { m_serverGroupReplicationConfigurationsHasBeenSet = true; m_serverGroupReplicationConfigurations.emplace_back(std::forward<ServerGroupReplicationConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAppReplicationConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ServerGroupReplicationConfiguration> m_serverGroupReplicationConfigurations;
    bool m_serverGroupReplicationConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
