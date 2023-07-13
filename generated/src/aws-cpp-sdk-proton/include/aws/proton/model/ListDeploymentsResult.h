/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/DeploymentSummary.h>
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
namespace Proton
{
namespace Model
{
  class ListDeploymentsResult
  {
  public:
    AWS_PROTON_API ListDeploymentsResult();
    AWS_PROTON_API ListDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of deployment with summary data.</p>
     */
    inline const Aws::Vector<DeploymentSummary>& GetDeployments() const{ return m_deployments; }

    /**
     * <p>An array of deployment with summary data.</p>
     */
    inline void SetDeployments(const Aws::Vector<DeploymentSummary>& value) { m_deployments = value; }

    /**
     * <p>An array of deployment with summary data.</p>
     */
    inline void SetDeployments(Aws::Vector<DeploymentSummary>&& value) { m_deployments = std::move(value); }

    /**
     * <p>An array of deployment with summary data.</p>
     */
    inline ListDeploymentsResult& WithDeployments(const Aws::Vector<DeploymentSummary>& value) { SetDeployments(value); return *this;}

    /**
     * <p>An array of deployment with summary data.</p>
     */
    inline ListDeploymentsResult& WithDeployments(Aws::Vector<DeploymentSummary>&& value) { SetDeployments(std::move(value)); return *this;}

    /**
     * <p>An array of deployment with summary data.</p>
     */
    inline ListDeploymentsResult& AddDeployments(const DeploymentSummary& value) { m_deployments.push_back(value); return *this; }

    /**
     * <p>An array of deployment with summary data.</p>
     */
    inline ListDeploymentsResult& AddDeployments(DeploymentSummary&& value) { m_deployments.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates the location of the next deployment in the array of
     * deployment, after the current requested list of deployment.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the location of the next deployment in the array of
     * deployment, after the current requested list of deployment.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates the location of the next deployment in the array of
     * deployment, after the current requested list of deployment.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the location of the next deployment in the array of
     * deployment, after the current requested list of deployment.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the location of the next deployment in the array of
     * deployment, after the current requested list of deployment.</p>
     */
    inline ListDeploymentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the location of the next deployment in the array of
     * deployment, after the current requested list of deployment.</p>
     */
    inline ListDeploymentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the location of the next deployment in the array of
     * deployment, after the current requested list of deployment.</p>
     */
    inline ListDeploymentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDeploymentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDeploymentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDeploymentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DeploymentSummary> m_deployments;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
