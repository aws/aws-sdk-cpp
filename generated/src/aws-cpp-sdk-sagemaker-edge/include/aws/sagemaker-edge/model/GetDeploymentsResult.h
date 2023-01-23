/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_SAGEMAKEREDGEMANAGER_API GetDeploymentsResult();
    AWS_SAGEMAKEREDGEMANAGER_API GetDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKEREDGEMANAGER_API GetDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns a list of the configurations of the active deployments on the
     * device.</p>
     */
    inline const Aws::Vector<EdgeDeployment>& GetDeployments() const{ return m_deployments; }

    /**
     * <p>Returns a list of the configurations of the active deployments on the
     * device.</p>
     */
    inline void SetDeployments(const Aws::Vector<EdgeDeployment>& value) { m_deployments = value; }

    /**
     * <p>Returns a list of the configurations of the active deployments on the
     * device.</p>
     */
    inline void SetDeployments(Aws::Vector<EdgeDeployment>&& value) { m_deployments = std::move(value); }

    /**
     * <p>Returns a list of the configurations of the active deployments on the
     * device.</p>
     */
    inline GetDeploymentsResult& WithDeployments(const Aws::Vector<EdgeDeployment>& value) { SetDeployments(value); return *this;}

    /**
     * <p>Returns a list of the configurations of the active deployments on the
     * device.</p>
     */
    inline GetDeploymentsResult& WithDeployments(Aws::Vector<EdgeDeployment>&& value) { SetDeployments(std::move(value)); return *this;}

    /**
     * <p>Returns a list of the configurations of the active deployments on the
     * device.</p>
     */
    inline GetDeploymentsResult& AddDeployments(const EdgeDeployment& value) { m_deployments.push_back(value); return *this; }

    /**
     * <p>Returns a list of the configurations of the active deployments on the
     * device.</p>
     */
    inline GetDeploymentsResult& AddDeployments(EdgeDeployment&& value) { m_deployments.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<EdgeDeployment> m_deployments;
  };

} // namespace Model
} // namespace SagemakerEdgeManager
} // namespace Aws
