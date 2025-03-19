/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A mount point for the data volumes in the container.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails() = default;
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path on the container to mount the host volume at.</p>
     */
    inline const Aws::String& GetContainerPath() const { return m_containerPath; }
    inline bool ContainerPathHasBeenSet() const { return m_containerPathHasBeenSet; }
    template<typename ContainerPathT = Aws::String>
    void SetContainerPath(ContainerPathT&& value) { m_containerPathHasBeenSet = true; m_containerPath = std::forward<ContainerPathT>(value); }
    template<typename ContainerPathT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails& WithContainerPath(ContainerPathT&& value) { SetContainerPath(std::forward<ContainerPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the container has read-only access to the volume.</p>
     */
    inline bool GetReadOnly() const { return m_readOnly; }
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }
    inline AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails& WithReadOnly(bool value) { SetReadOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the volume to mount. Must match the name of a volume listed in
     * <code>VolumeDetails</code> for the task definition.</p>
     */
    inline const Aws::String& GetSourceVolume() const { return m_sourceVolume; }
    inline bool SourceVolumeHasBeenSet() const { return m_sourceVolumeHasBeenSet; }
    template<typename SourceVolumeT = Aws::String>
    void SetSourceVolume(SourceVolumeT&& value) { m_sourceVolumeHasBeenSet = true; m_sourceVolume = std::forward<SourceVolumeT>(value); }
    template<typename SourceVolumeT = Aws::String>
    AwsEcsTaskDefinitionContainerDefinitionsMountPointsDetails& WithSourceVolume(SourceVolumeT&& value) { SetSourceVolume(std::forward<SourceVolumeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_containerPath;
    bool m_containerPathHasBeenSet = false;

    bool m_readOnly{false};
    bool m_readOnlyHasBeenSet = false;

    Aws::String m_sourceVolume;
    bool m_sourceVolumeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
