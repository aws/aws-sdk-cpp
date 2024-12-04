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
    AWS_SAGEMAKER_API ClusterSchedulerConfigSummary();
    AWS_SAGEMAKER_API ClusterSchedulerConfigSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterSchedulerConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of the cluster policy.</p>
     */
    inline const Aws::String& GetClusterSchedulerConfigArn() const{ return m_clusterSchedulerConfigArn; }
    inline bool ClusterSchedulerConfigArnHasBeenSet() const { return m_clusterSchedulerConfigArnHasBeenSet; }
    inline void SetClusterSchedulerConfigArn(const Aws::String& value) { m_clusterSchedulerConfigArnHasBeenSet = true; m_clusterSchedulerConfigArn = value; }
    inline void SetClusterSchedulerConfigArn(Aws::String&& value) { m_clusterSchedulerConfigArnHasBeenSet = true; m_clusterSchedulerConfigArn = std::move(value); }
    inline void SetClusterSchedulerConfigArn(const char* value) { m_clusterSchedulerConfigArnHasBeenSet = true; m_clusterSchedulerConfigArn.assign(value); }
    inline ClusterSchedulerConfigSummary& WithClusterSchedulerConfigArn(const Aws::String& value) { SetClusterSchedulerConfigArn(value); return *this;}
    inline ClusterSchedulerConfigSummary& WithClusterSchedulerConfigArn(Aws::String&& value) { SetClusterSchedulerConfigArn(std::move(value)); return *this;}
    inline ClusterSchedulerConfigSummary& WithClusterSchedulerConfigArn(const char* value) { SetClusterSchedulerConfigArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the cluster policy.</p>
     */
    inline const Aws::String& GetClusterSchedulerConfigId() const{ return m_clusterSchedulerConfigId; }
    inline bool ClusterSchedulerConfigIdHasBeenSet() const { return m_clusterSchedulerConfigIdHasBeenSet; }
    inline void SetClusterSchedulerConfigId(const Aws::String& value) { m_clusterSchedulerConfigIdHasBeenSet = true; m_clusterSchedulerConfigId = value; }
    inline void SetClusterSchedulerConfigId(Aws::String&& value) { m_clusterSchedulerConfigIdHasBeenSet = true; m_clusterSchedulerConfigId = std::move(value); }
    inline void SetClusterSchedulerConfigId(const char* value) { m_clusterSchedulerConfigIdHasBeenSet = true; m_clusterSchedulerConfigId.assign(value); }
    inline ClusterSchedulerConfigSummary& WithClusterSchedulerConfigId(const Aws::String& value) { SetClusterSchedulerConfigId(value); return *this;}
    inline ClusterSchedulerConfigSummary& WithClusterSchedulerConfigId(Aws::String&& value) { SetClusterSchedulerConfigId(std::move(value)); return *this;}
    inline ClusterSchedulerConfigSummary& WithClusterSchedulerConfigId(const char* value) { SetClusterSchedulerConfigId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of the cluster policy.</p>
     */
    inline int GetClusterSchedulerConfigVersion() const{ return m_clusterSchedulerConfigVersion; }
    inline bool ClusterSchedulerConfigVersionHasBeenSet() const { return m_clusterSchedulerConfigVersionHasBeenSet; }
    inline void SetClusterSchedulerConfigVersion(int value) { m_clusterSchedulerConfigVersionHasBeenSet = true; m_clusterSchedulerConfigVersion = value; }
    inline ClusterSchedulerConfigSummary& WithClusterSchedulerConfigVersion(int value) { SetClusterSchedulerConfigVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the cluster policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ClusterSchedulerConfigSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ClusterSchedulerConfigSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ClusterSchedulerConfigSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the cluster policy.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ClusterSchedulerConfigSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ClusterSchedulerConfigSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last modified time of the cluster policy.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline ClusterSchedulerConfigSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline ClusterSchedulerConfigSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the cluster policy.</p>
     */
    inline const SchedulerResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SchedulerResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SchedulerResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ClusterSchedulerConfigSummary& WithStatus(const SchedulerResourceStatus& value) { SetStatus(value); return *this;}
    inline ClusterSchedulerConfigSummary& WithStatus(SchedulerResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline ClusterSchedulerConfigSummary& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline ClusterSchedulerConfigSummary& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline ClusterSchedulerConfigSummary& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterSchedulerConfigArn;
    bool m_clusterSchedulerConfigArnHasBeenSet = false;

    Aws::String m_clusterSchedulerConfigId;
    bool m_clusterSchedulerConfigIdHasBeenSet = false;

    int m_clusterSchedulerConfigVersion;
    bool m_clusterSchedulerConfigVersionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    SchedulerResourceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
