/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DescribeDeploymentsRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeDeploymentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDeployments"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The stack ID. If you include this parameter, the command returns a
     * description of the commands associated with the specified stack.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    DescribeDeploymentsRequest& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app ID. If you include this parameter, the command returns a description
     * of the commands associated with the specified app.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    DescribeDeploymentsRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of deployment IDs to be described. If you include this parameter,
     * the command returns a description of the specified deployments. Otherwise, it
     * returns a description of every deployment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeploymentIds() const { return m_deploymentIds; }
    inline bool DeploymentIdsHasBeenSet() const { return m_deploymentIdsHasBeenSet; }
    template<typename DeploymentIdsT = Aws::Vector<Aws::String>>
    void SetDeploymentIds(DeploymentIdsT&& value) { m_deploymentIdsHasBeenSet = true; m_deploymentIds = std::forward<DeploymentIdsT>(value); }
    template<typename DeploymentIdsT = Aws::Vector<Aws::String>>
    DescribeDeploymentsRequest& WithDeploymentIds(DeploymentIdsT&& value) { SetDeploymentIds(std::forward<DeploymentIdsT>(value)); return *this;}
    template<typename DeploymentIdsT = Aws::String>
    DescribeDeploymentsRequest& AddDeploymentIds(DeploymentIdsT&& value) { m_deploymentIdsHasBeenSet = true; m_deploymentIds.emplace_back(std::forward<DeploymentIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_deploymentIds;
    bool m_deploymentIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
