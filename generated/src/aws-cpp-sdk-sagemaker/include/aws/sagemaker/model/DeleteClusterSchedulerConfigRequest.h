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
  class DeleteClusterSchedulerConfigRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteClusterSchedulerConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteClusterSchedulerConfig"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>ID of the cluster policy.</p>
     */
    inline const Aws::String& GetClusterSchedulerConfigId() const{ return m_clusterSchedulerConfigId; }
    inline bool ClusterSchedulerConfigIdHasBeenSet() const { return m_clusterSchedulerConfigIdHasBeenSet; }
    inline void SetClusterSchedulerConfigId(const Aws::String& value) { m_clusterSchedulerConfigIdHasBeenSet = true; m_clusterSchedulerConfigId = value; }
    inline void SetClusterSchedulerConfigId(Aws::String&& value) { m_clusterSchedulerConfigIdHasBeenSet = true; m_clusterSchedulerConfigId = std::move(value); }
    inline void SetClusterSchedulerConfigId(const char* value) { m_clusterSchedulerConfigIdHasBeenSet = true; m_clusterSchedulerConfigId.assign(value); }
    inline DeleteClusterSchedulerConfigRequest& WithClusterSchedulerConfigId(const Aws::String& value) { SetClusterSchedulerConfigId(value); return *this;}
    inline DeleteClusterSchedulerConfigRequest& WithClusterSchedulerConfigId(Aws::String&& value) { SetClusterSchedulerConfigId(std::move(value)); return *this;}
    inline DeleteClusterSchedulerConfigRequest& WithClusterSchedulerConfigId(const char* value) { SetClusterSchedulerConfigId(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterSchedulerConfigId;
    bool m_clusterSchedulerConfigIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
