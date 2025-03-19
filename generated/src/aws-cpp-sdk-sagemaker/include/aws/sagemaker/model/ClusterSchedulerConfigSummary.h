/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/SchedulerResourceStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Summary of the cluster policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterSchedulerConfigSummary">AWS
   * API Reference</a></p>
   */
  class ClusterSchedulerConfigSummary
  {
  public:
    AWS_SAGEMAKER_API ClusterSchedulerConfigSummary() = default;
    AWS_SAGEMAKER_API ClusterSchedulerConfigSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterSchedulerConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of the cluster policy.</p>
     */
    inline const Aws::String& GetClusterSchedulerConfigArn() const { return m_clusterSchedulerConfigArn; }
    inline bool ClusterSchedulerConfigArnHasBeenSet() const { return m_clusterSchedulerConfigArnHasBeenSet; }
    template<typename ClusterSchedulerConfigArnT = Aws::String>
    void SetClusterSchedulerConfigArn(ClusterSchedulerConfigArnT&& value) { m_clusterSchedulerConfigArnHasBeenSet = true; m_clusterSchedulerConfigArn = std::forward<ClusterSchedulerConfigArnT>(value); }
    template<typename ClusterSchedulerConfigArnT = Aws::String>
    ClusterSchedulerConfigSummary& WithClusterSchedulerConfigArn(ClusterSchedulerConfigArnT&& value) { SetClusterSchedulerConfigArn(std::forward<ClusterSchedulerConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the cluster policy.</p>
     */
    inline const Aws::String& GetClusterSchedulerConfigId() const { return m_clusterSchedulerConfigId; }
    inline bool ClusterSchedulerConfigIdHasBeenSet() const { return m_clusterSchedulerConfigIdHasBeenSet; }
    template<typename ClusterSchedulerConfigIdT = Aws::String>
    void SetClusterSchedulerConfigId(ClusterSchedulerConfigIdT&& value) { m_clusterSchedulerConfigIdHasBeenSet = true; m_clusterSchedulerConfigId = std::forward<ClusterSchedulerConfigIdT>(value); }
    template<typename ClusterSchedulerConfigIdT = Aws::String>
    ClusterSchedulerConfigSummary& WithClusterSchedulerConfigId(ClusterSchedulerConfigIdT&& value) { SetClusterSchedulerConfigId(std::forward<ClusterSchedulerConfigIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the cluster policy.</p>
     */
    inline int GetClusterSchedulerConfigVersion() const { return m_clusterSchedulerConfigVersion; }
    inline bool ClusterSchedulerConfigVersionHasBeenSet() const { return m_clusterSchedulerConfigVersionHasBeenSet; }
    inline void SetClusterSchedulerConfigVersion(int value) { m_clusterSchedulerConfigVersionHasBeenSet = true; m_clusterSchedulerConfigVersion = value; }
    inline ClusterSchedulerConfigSummary& WithClusterSchedulerConfigVersion(int value) { SetClusterSchedulerConfigVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the cluster policy.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ClusterSchedulerConfigSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the cluster policy.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ClusterSchedulerConfigSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last modified time of the cluster policy.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    ClusterSchedulerConfigSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the cluster policy.</p>
     */
    inline SchedulerResourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SchedulerResourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ClusterSchedulerConfigSummary& WithStatus(SchedulerResourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    ClusterSchedulerConfigSummary& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterSchedulerConfigArn;
    bool m_clusterSchedulerConfigArnHasBeenSet = false;

    Aws::String m_clusterSchedulerConfigId;
    bool m_clusterSchedulerConfigIdHasBeenSet = false;

    int m_clusterSchedulerConfigVersion{0};
    bool m_clusterSchedulerConfigVersionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    SchedulerResourceStatus m_status{SchedulerResourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
