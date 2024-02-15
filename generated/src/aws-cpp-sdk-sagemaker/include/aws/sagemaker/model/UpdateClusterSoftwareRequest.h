/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateClusterSoftwareRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateClusterSoftwareRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateClusterSoftware"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specify the name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster you want to update for security patching.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>Specify the name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster you want to update for security patching.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>Specify the name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster you want to update for security patching.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>Specify the name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster you want to update for security patching.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>Specify the name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster you want to update for security patching.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>Specify the name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster you want to update for security patching.</p>
     */
    inline UpdateClusterSoftwareRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>Specify the name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster you want to update for security patching.</p>
     */
    inline UpdateClusterSoftwareRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>Specify the name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster you want to update for security patching.</p>
     */
    inline UpdateClusterSoftwareRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
