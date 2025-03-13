/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-edge/model/EdgeDeployment.h>
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
namespace SagemakerEdgeManager
{
namespace Model
{
  class GetDeploymentsResult
  {
  public:
    AWS_SAGEMAKEREDGEMANAGER_API GetDeploymentsResult() = default;
    AWS_SAGEMAKEREDGEMANAGER_API GetDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKEREDGEMANAGER_API GetDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of the configurations of the active deployments on the
     * device.</p>
     */
    inline const Aws::Vector<EdgeDeployment>& GetDeployments() const { return m_deployments; }
    template<typename DeploymentsT = Aws::Vector<EdgeDeployment>>
    void SetDeployments(DeploymentsT&& value) { m_deploymentsHasBeenSet = true; m_deployments = std::forward<DeploymentsT>(value); }
    template<typename DeploymentsT = Aws::Vector<EdgeDeployment>>
    GetDeploymentsResult& WithDeployments(DeploymentsT&& value) { SetDeployments(std::forward<DeploymentsT>(value)); return *this;}
    template<typename DeploymentsT = EdgeDeployment>
    GetDeploymentsResult& AddDeployments(DeploymentsT&& value) { m_deploymentsHasBeenSet = true; m_deployments.emplace_back(std::forward<DeploymentsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeploymentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EdgeDeployment> m_deployments;
    bool m_deploymentsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
