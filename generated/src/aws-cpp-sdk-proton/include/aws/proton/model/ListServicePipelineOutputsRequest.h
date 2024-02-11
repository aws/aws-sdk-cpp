/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class ListServicePipelineOutputsRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API ListServicePipelineOutputsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServicePipelineOutputs"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the deployment you want the outputs for.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The ID of the deployment you want the outputs for.</p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p>The ID of the deployment you want the outputs for.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The ID of the deployment you want the outputs for.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p>The ID of the deployment you want the outputs for.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The ID of the deployment you want the outputs for.</p>
     */
    inline ListServicePipelineOutputsRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The ID of the deployment you want the outputs for.</p>
     */
    inline ListServicePipelineOutputsRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the deployment you want the outputs for.</p>
     */
    inline ListServicePipelineOutputsRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>A token that indicates the location of the next output in the array of
     * outputs, after the list of outputs that was previously requested.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the location of the next output in the array of
     * outputs, after the list of outputs that was previously requested.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that indicates the location of the next output in the array of
     * outputs, after the list of outputs that was previously requested.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates the location of the next output in the array of
     * outputs, after the list of outputs that was previously requested.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the location of the next output in the array of
     * outputs, after the list of outputs that was previously requested.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the location of the next output in the array of
     * outputs, after the list of outputs that was previously requested.</p>
     */
    inline ListServicePipelineOutputsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the location of the next output in the array of
     * outputs, after the list of outputs that was previously requested.</p>
     */
    inline ListServicePipelineOutputsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the location of the next output in the array of
     * outputs, after the list of outputs that was previously requested.</p>
     */
    inline ListServicePipelineOutputsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The name of the service whose pipeline's outputs you want.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service whose pipeline's outputs you want.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service whose pipeline's outputs you want.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service whose pipeline's outputs you want.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service whose pipeline's outputs you want.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service whose pipeline's outputs you want.</p>
     */
    inline ListServicePipelineOutputsRequest& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service whose pipeline's outputs you want.</p>
     */
    inline ListServicePipelineOutputsRequest& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service whose pipeline's outputs you want.</p>
     */
    inline ListServicePipelineOutputsRequest& WithServiceName(const char* value) { SetServiceName(value); return *this;}

  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
