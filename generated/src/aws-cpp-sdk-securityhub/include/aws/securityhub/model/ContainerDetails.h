/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/VolumeMount.h>
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
   * <p>Container details related to a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ContainerDetails">AWS
   * API Reference</a></p>
   */
  class ContainerDetails
  {
  public:
    AWS_SECURITYHUB_API ContainerDetails() = default;
    AWS_SECURITYHUB_API ContainerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ContainerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The runtime of the container. </p>
     */
    inline const Aws::String& GetContainerRuntime() const { return m_containerRuntime; }
    inline bool ContainerRuntimeHasBeenSet() const { return m_containerRuntimeHasBeenSet; }
    template<typename ContainerRuntimeT = Aws::String>
    void SetContainerRuntime(ContainerRuntimeT&& value) { m_containerRuntimeHasBeenSet = true; m_containerRuntime = std::forward<ContainerRuntimeT>(value); }
    template<typename ContainerRuntimeT = Aws::String>
    ContainerDetails& WithContainerRuntime(ContainerRuntimeT&& value) { SetContainerRuntime(std::forward<ContainerRuntimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the container related to a finding.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ContainerDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the container image related to a finding.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    ContainerDetails& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the container image related to a finding.</p>
     */
    inline const Aws::String& GetImageName() const { return m_imageName; }
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }
    template<typename ImageNameT = Aws::String>
    void SetImageName(ImageNameT&& value) { m_imageNameHasBeenSet = true; m_imageName = std::forward<ImageNameT>(value); }
    template<typename ImageNameT = Aws::String>
    ContainerDetails& WithImageName(ImageNameT&& value) { SetImageName(std::forward<ImageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the container started.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLaunchedAt() const { return m_launchedAt; }
    inline bool LaunchedAtHasBeenSet() const { return m_launchedAtHasBeenSet; }
    template<typename LaunchedAtT = Aws::String>
    void SetLaunchedAt(LaunchedAtT&& value) { m_launchedAtHasBeenSet = true; m_launchedAt = std::forward<LaunchedAtT>(value); }
    template<typename LaunchedAtT = Aws::String>
    ContainerDetails& WithLaunchedAt(LaunchedAtT&& value) { SetLaunchedAt(std::forward<LaunchedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the mounting of a volume in a container. </p>
     */
    inline const Aws::Vector<VolumeMount>& GetVolumeMounts() const { return m_volumeMounts; }
    inline bool VolumeMountsHasBeenSet() const { return m_volumeMountsHasBeenSet; }
    template<typename VolumeMountsT = Aws::Vector<VolumeMount>>
    void SetVolumeMounts(VolumeMountsT&& value) { m_volumeMountsHasBeenSet = true; m_volumeMounts = std::forward<VolumeMountsT>(value); }
    template<typename VolumeMountsT = Aws::Vector<VolumeMount>>
    ContainerDetails& WithVolumeMounts(VolumeMountsT&& value) { SetVolumeMounts(std::forward<VolumeMountsT>(value)); return *this;}
    template<typename VolumeMountsT = VolumeMount>
    ContainerDetails& AddVolumeMounts(VolumeMountsT&& value) { m_volumeMountsHasBeenSet = true; m_volumeMounts.emplace_back(std::forward<VolumeMountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When this parameter is <code>true</code>, the container is given elevated
     * privileges on the host container instance (similar to the root user). </p>
     */
    inline bool GetPrivileged() const { return m_privileged; }
    inline bool PrivilegedHasBeenSet() const { return m_privilegedHasBeenSet; }
    inline void SetPrivileged(bool value) { m_privilegedHasBeenSet = true; m_privileged = value; }
    inline ContainerDetails& WithPrivileged(bool value) { SetPrivileged(value); return *this;}
    ///@}
  private:

    Aws::String m_containerRuntime;
    bool m_containerRuntimeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet = false;

    Aws::String m_launchedAt;
    bool m_launchedAtHasBeenSet = false;

    Aws::Vector<VolumeMount> m_volumeMounts;
    bool m_volumeMountsHasBeenSet = false;

    bool m_privileged{false};
    bool m_privilegedHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
