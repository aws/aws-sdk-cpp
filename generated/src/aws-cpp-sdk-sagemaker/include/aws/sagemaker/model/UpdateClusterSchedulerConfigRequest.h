/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SchedulerConfig.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateClusterSchedulerConfigRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateClusterSchedulerConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateClusterSchedulerConfig"; }

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
    inline UpdateClusterSchedulerConfigRequest& WithClusterSchedulerConfigId(const Aws::String& value) { SetClusterSchedulerConfigId(value); return *this;}
    inline UpdateClusterSchedulerConfigRequest& WithClusterSchedulerConfigId(Aws::String&& value) { SetClusterSchedulerConfigId(std::move(value)); return *this;}
    inline UpdateClusterSchedulerConfigRequest& WithClusterSchedulerConfigId(const char* value) { SetClusterSchedulerConfigId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Target version.</p>
     */
    inline int GetTargetVersion() const{ return m_targetVersion; }
    inline bool TargetVersionHasBeenSet() const { return m_targetVersionHasBeenSet; }
    inline void SetTargetVersion(int value) { m_targetVersionHasBeenSet = true; m_targetVersion = value; }
    inline UpdateClusterSchedulerConfigRequest& WithTargetVersion(int value) { SetTargetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cluster policy configuration.</p>
     */
    inline const SchedulerConfig& GetSchedulerConfig() const{ return m_schedulerConfig; }
    inline bool SchedulerConfigHasBeenSet() const { return m_schedulerConfigHasBeenSet; }
    inline void SetSchedulerConfig(const SchedulerConfig& value) { m_schedulerConfigHasBeenSet = true; m_schedulerConfig = value; }
    inline void SetSchedulerConfig(SchedulerConfig&& value) { m_schedulerConfigHasBeenSet = true; m_schedulerConfig = std::move(value); }
    inline UpdateClusterSchedulerConfigRequest& WithSchedulerConfig(const SchedulerConfig& value) { SetSchedulerConfig(value); return *this;}
    inline UpdateClusterSchedulerConfigRequest& WithSchedulerConfig(SchedulerConfig&& value) { SetSchedulerConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the cluster policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateClusterSchedulerConfigRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateClusterSchedulerConfigRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateClusterSchedulerConfigRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterSchedulerConfigId;
    bool m_clusterSchedulerConfigIdHasBeenSet = false;

    int m_targetVersion;
    bool m_targetVersionHasBeenSet = false;

    SchedulerConfig m_schedulerConfig;
    bool m_schedulerConfigHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
