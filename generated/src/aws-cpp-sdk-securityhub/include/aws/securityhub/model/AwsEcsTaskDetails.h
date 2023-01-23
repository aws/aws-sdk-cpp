/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEcsTaskVolumeDetails.h>
#include <aws/securityhub/model/AwsEcsContainerDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides details about a task in a cluster. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDetails();
    AWS_SECURITYHUB_API AwsEcsTaskDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that hosts the task. </p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that hosts the task. </p>
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that hosts the task. </p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that hosts the task. </p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that hosts the task. </p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that hosts the task. </p>
     */
    inline AwsEcsTaskDetails& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that hosts the task. </p>
     */
    inline AwsEcsTaskDetails& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the cluster that hosts the task. </p>
     */
    inline AwsEcsTaskDetails& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * <p>The ARN of the task definition that creates the task. </p>
     */
    inline const Aws::String& GetTaskDefinitionArn() const{ return m_taskDefinitionArn; }

    /**
     * <p>The ARN of the task definition that creates the task. </p>
     */
    inline bool TaskDefinitionArnHasBeenSet() const { return m_taskDefinitionArnHasBeenSet; }

    /**
     * <p>The ARN of the task definition that creates the task. </p>
     */
    inline void SetTaskDefinitionArn(const Aws::String& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = value; }

    /**
     * <p>The ARN of the task definition that creates the task. </p>
     */
    inline void SetTaskDefinitionArn(Aws::String&& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = std::move(value); }

    /**
     * <p>The ARN of the task definition that creates the task. </p>
     */
    inline void SetTaskDefinitionArn(const char* value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn.assign(value); }

    /**
     * <p>The ARN of the task definition that creates the task. </p>
     */
    inline AwsEcsTaskDetails& WithTaskDefinitionArn(const Aws::String& value) { SetTaskDefinitionArn(value); return *this;}

    /**
     * <p>The ARN of the task definition that creates the task. </p>
     */
    inline AwsEcsTaskDetails& WithTaskDefinitionArn(Aws::String&& value) { SetTaskDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the task definition that creates the task. </p>
     */
    inline AwsEcsTaskDetails& WithTaskDefinitionArn(const char* value) { SetTaskDefinitionArn(value); return *this;}


    /**
     * <p>The version counter for the task. </p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version counter for the task. </p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version counter for the task. </p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version counter for the task. </p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version counter for the task. </p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version counter for the task. </p>
     */
    inline AwsEcsTaskDetails& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version counter for the task. </p>
     */
    inline AwsEcsTaskDetails& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version counter for the task. </p>
     */
    inline AwsEcsTaskDetails& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The Unix timestamp for the time when the task was created. More specifically,
     * it's for the time when the task entered the <code>PENDING</code> state. </p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix timestamp for the time when the task was created. More specifically,
     * it's for the time when the task entered the <code>PENDING</code> state. </p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for the time when the task was created. More specifically,
     * it's for the time when the task entered the <code>PENDING</code> state. </p>
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix timestamp for the time when the task was created. More specifically,
     * it's for the time when the task entered the <code>PENDING</code> state. </p>
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The Unix timestamp for the time when the task was created. More specifically,
     * it's for the time when the task entered the <code>PENDING</code> state. </p>
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * <p>The Unix timestamp for the time when the task was created. More specifically,
     * it's for the time when the task entered the <code>PENDING</code> state. </p>
     */
    inline AwsEcsTaskDetails& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for the time when the task was created. More specifically,
     * it's for the time when the task entered the <code>PENDING</code> state. </p>
     */
    inline AwsEcsTaskDetails& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * <p>The Unix timestamp for the time when the task was created. More specifically,
     * it's for the time when the task entered the <code>PENDING</code> state. </p>
     */
    inline AwsEcsTaskDetails& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}


    /**
     * <p>The Unix timestamp for the time when the task started. More specifically,
     * it's for the time when the task transitioned from the <code>PENDING</code> state
     * to the <code>RUNNING</code> state. </p>
     */
    inline const Aws::String& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The Unix timestamp for the time when the task started. More specifically,
     * it's for the time when the task transitioned from the <code>PENDING</code> state
     * to the <code>RUNNING</code> state. </p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for the time when the task started. More specifically,
     * it's for the time when the task transitioned from the <code>PENDING</code> state
     * to the <code>RUNNING</code> state. </p>
     */
    inline void SetStartedAt(const Aws::String& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The Unix timestamp for the time when the task started. More specifically,
     * it's for the time when the task transitioned from the <code>PENDING</code> state
     * to the <code>RUNNING</code> state. </p>
     */
    inline void SetStartedAt(Aws::String&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>The Unix timestamp for the time when the task started. More specifically,
     * it's for the time when the task transitioned from the <code>PENDING</code> state
     * to the <code>RUNNING</code> state. </p>
     */
    inline void SetStartedAt(const char* value) { m_startedAtHasBeenSet = true; m_startedAt.assign(value); }

    /**
     * <p>The Unix timestamp for the time when the task started. More specifically,
     * it's for the time when the task transitioned from the <code>PENDING</code> state
     * to the <code>RUNNING</code> state. </p>
     */
    inline AwsEcsTaskDetails& WithStartedAt(const Aws::String& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The Unix timestamp for the time when the task started. More specifically,
     * it's for the time when the task transitioned from the <code>PENDING</code> state
     * to the <code>RUNNING</code> state. </p>
     */
    inline AwsEcsTaskDetails& WithStartedAt(Aws::String&& value) { SetStartedAt(std::move(value)); return *this;}

    /**
     * <p>The Unix timestamp for the time when the task started. More specifically,
     * it's for the time when the task transitioned from the <code>PENDING</code> state
     * to the <code>RUNNING</code> state. </p>
     */
    inline AwsEcsTaskDetails& WithStartedAt(const char* value) { SetStartedAt(value); return *this;}


    /**
     * <p>The tag specified when a task is started. If an Amazon ECS service started
     * the task, the <code>startedBy</code> parameter contains the deployment ID of
     * that service. </p>
     */
    inline const Aws::String& GetStartedBy() const{ return m_startedBy; }

    /**
     * <p>The tag specified when a task is started. If an Amazon ECS service started
     * the task, the <code>startedBy</code> parameter contains the deployment ID of
     * that service. </p>
     */
    inline bool StartedByHasBeenSet() const { return m_startedByHasBeenSet; }

    /**
     * <p>The tag specified when a task is started. If an Amazon ECS service started
     * the task, the <code>startedBy</code> parameter contains the deployment ID of
     * that service. </p>
     */
    inline void SetStartedBy(const Aws::String& value) { m_startedByHasBeenSet = true; m_startedBy = value; }

    /**
     * <p>The tag specified when a task is started. If an Amazon ECS service started
     * the task, the <code>startedBy</code> parameter contains the deployment ID of
     * that service. </p>
     */
    inline void SetStartedBy(Aws::String&& value) { m_startedByHasBeenSet = true; m_startedBy = std::move(value); }

    /**
     * <p>The tag specified when a task is started. If an Amazon ECS service started
     * the task, the <code>startedBy</code> parameter contains the deployment ID of
     * that service. </p>
     */
    inline void SetStartedBy(const char* value) { m_startedByHasBeenSet = true; m_startedBy.assign(value); }

    /**
     * <p>The tag specified when a task is started. If an Amazon ECS service started
     * the task, the <code>startedBy</code> parameter contains the deployment ID of
     * that service. </p>
     */
    inline AwsEcsTaskDetails& WithStartedBy(const Aws::String& value) { SetStartedBy(value); return *this;}

    /**
     * <p>The tag specified when a task is started. If an Amazon ECS service started
     * the task, the <code>startedBy</code> parameter contains the deployment ID of
     * that service. </p>
     */
    inline AwsEcsTaskDetails& WithStartedBy(Aws::String&& value) { SetStartedBy(std::move(value)); return *this;}

    /**
     * <p>The tag specified when a task is started. If an Amazon ECS service started
     * the task, the <code>startedBy</code> parameter contains the deployment ID of
     * that service. </p>
     */
    inline AwsEcsTaskDetails& WithStartedBy(const char* value) { SetStartedBy(value); return *this;}


    /**
     * <p>The name of the task group that's associated with the task. </p>
     */
    inline const Aws::String& GetGroup() const{ return m_group; }

    /**
     * <p>The name of the task group that's associated with the task. </p>
     */
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }

    /**
     * <p>The name of the task group that's associated with the task. </p>
     */
    inline void SetGroup(const Aws::String& value) { m_groupHasBeenSet = true; m_group = value; }

    /**
     * <p>The name of the task group that's associated with the task. </p>
     */
    inline void SetGroup(Aws::String&& value) { m_groupHasBeenSet = true; m_group = std::move(value); }

    /**
     * <p>The name of the task group that's associated with the task. </p>
     */
    inline void SetGroup(const char* value) { m_groupHasBeenSet = true; m_group.assign(value); }

    /**
     * <p>The name of the task group that's associated with the task. </p>
     */
    inline AwsEcsTaskDetails& WithGroup(const Aws::String& value) { SetGroup(value); return *this;}

    /**
     * <p>The name of the task group that's associated with the task. </p>
     */
    inline AwsEcsTaskDetails& WithGroup(Aws::String&& value) { SetGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the task group that's associated with the task. </p>
     */
    inline AwsEcsTaskDetails& WithGroup(const char* value) { SetGroup(value); return *this;}


    /**
     * <p>Details about the data volume that is used in a task definition. </p>
     */
    inline const Aws::Vector<AwsEcsTaskVolumeDetails>& GetVolumes() const{ return m_volumes; }

    /**
     * <p>Details about the data volume that is used in a task definition. </p>
     */
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }

    /**
     * <p>Details about the data volume that is used in a task definition. </p>
     */
    inline void SetVolumes(const Aws::Vector<AwsEcsTaskVolumeDetails>& value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>Details about the data volume that is used in a task definition. </p>
     */
    inline void SetVolumes(Aws::Vector<AwsEcsTaskVolumeDetails>&& value) { m_volumesHasBeenSet = true; m_volumes = std::move(value); }

    /**
     * <p>Details about the data volume that is used in a task definition. </p>
     */
    inline AwsEcsTaskDetails& WithVolumes(const Aws::Vector<AwsEcsTaskVolumeDetails>& value) { SetVolumes(value); return *this;}

    /**
     * <p>Details about the data volume that is used in a task definition. </p>
     */
    inline AwsEcsTaskDetails& WithVolumes(Aws::Vector<AwsEcsTaskVolumeDetails>&& value) { SetVolumes(std::move(value)); return *this;}

    /**
     * <p>Details about the data volume that is used in a task definition. </p>
     */
    inline AwsEcsTaskDetails& AddVolumes(const AwsEcsTaskVolumeDetails& value) { m_volumesHasBeenSet = true; m_volumes.push_back(value); return *this; }

    /**
     * <p>Details about the data volume that is used in a task definition. </p>
     */
    inline AwsEcsTaskDetails& AddVolumes(AwsEcsTaskVolumeDetails&& value) { m_volumesHasBeenSet = true; m_volumes.push_back(std::move(value)); return *this; }


    /**
     * <p>The containers that are associated with the task. </p>
     */
    inline const Aws::Vector<AwsEcsContainerDetails>& GetContainers() const{ return m_containers; }

    /**
     * <p>The containers that are associated with the task. </p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>The containers that are associated with the task. </p>
     */
    inline void SetContainers(const Aws::Vector<AwsEcsContainerDetails>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>The containers that are associated with the task. </p>
     */
    inline void SetContainers(Aws::Vector<AwsEcsContainerDetails>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>The containers that are associated with the task. </p>
     */
    inline AwsEcsTaskDetails& WithContainers(const Aws::Vector<AwsEcsContainerDetails>& value) { SetContainers(value); return *this;}

    /**
     * <p>The containers that are associated with the task. </p>
     */
    inline AwsEcsTaskDetails& WithContainers(Aws::Vector<AwsEcsContainerDetails>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>The containers that are associated with the task. </p>
     */
    inline AwsEcsTaskDetails& AddContainers(const AwsEcsContainerDetails& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }

    /**
     * <p>The containers that are associated with the task. </p>
     */
    inline AwsEcsTaskDetails& AddContainers(AwsEcsContainerDetails&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_taskDefinitionArn;
    bool m_taskDefinitionArnHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::String m_startedBy;
    bool m_startedByHasBeenSet = false;

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::Vector<AwsEcsTaskVolumeDetails> m_volumes;
    bool m_volumesHasBeenSet = false;

    Aws::Vector<AwsEcsContainerDetails> m_containers;
    bool m_containersHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
