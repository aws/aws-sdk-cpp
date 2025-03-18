/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/AgentVersion.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeAgentVersions</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeAgentVersionsResult">AWS
   * API Reference</a></p>
   */
  class DescribeAgentVersionsResult
  {
  public:
    AWS_OPSWORKS_API DescribeAgentVersionsResult() = default;
    AWS_OPSWORKS_API DescribeAgentVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeAgentVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The agent versions for the specified stack or configuration manager. Note
     * that this value is the complete version number, not the abbreviated number used
     * by the console.</p>
     */
    inline const Aws::Vector<AgentVersion>& GetAgentVersions() const { return m_agentVersions; }
    template<typename AgentVersionsT = Aws::Vector<AgentVersion>>
    void SetAgentVersions(AgentVersionsT&& value) { m_agentVersionsHasBeenSet = true; m_agentVersions = std::forward<AgentVersionsT>(value); }
    template<typename AgentVersionsT = Aws::Vector<AgentVersion>>
    DescribeAgentVersionsResult& WithAgentVersions(AgentVersionsT&& value) { SetAgentVersions(std::forward<AgentVersionsT>(value)); return *this;}
    template<typename AgentVersionsT = AgentVersion>
    DescribeAgentVersionsResult& AddAgentVersions(AgentVersionsT&& value) { m_agentVersionsHasBeenSet = true; m_agentVersions.emplace_back(std::forward<AgentVersionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAgentVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AgentVersion> m_agentVersions;
    bool m_agentVersionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
