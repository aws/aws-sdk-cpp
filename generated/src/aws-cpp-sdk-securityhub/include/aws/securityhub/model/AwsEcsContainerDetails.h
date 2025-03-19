/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsMountPoint.h>
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
   * <p>Provides information about an Amazon ECS container. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsContainerDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsContainerDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsContainerDetails() = default;
    AWS_SECURITYHUB_API AwsEcsContainerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsContainerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the container. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsEcsContainerDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image used for the container. </p>
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    AwsEcsContainerDetails& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mount points for data volumes in your container. </p>
     */
    inline const Aws::Vector<AwsMountPoint>& GetMountPoints() const { return m_mountPoints; }
    inline bool MountPointsHasBeenSet() const { return m_mountPointsHasBeenSet; }
    template<typename MountPointsT = Aws::Vector<AwsMountPoint>>
    void SetMountPoints(MountPointsT&& value) { m_mountPointsHasBeenSet = true; m_mountPoints = std::forward<MountPointsT>(value); }
    template<typename MountPointsT = Aws::Vector<AwsMountPoint>>
    AwsEcsContainerDetails& WithMountPoints(MountPointsT&& value) { SetMountPoints(std::forward<MountPointsT>(value)); return *this;}
    template<typename MountPointsT = AwsMountPoint>
    AwsEcsContainerDetails& AddMountPoints(MountPointsT&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.emplace_back(std::forward<MountPointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When this parameter is true, the container is given elevated privileges on
     * the host container instance (similar to the root user). </p>
     */
    inline bool GetPrivileged() const { return m_privileged; }
    inline bool PrivilegedHasBeenSet() const { return m_privilegedHasBeenSet; }
    inline void SetPrivileged(bool value) { m_privilegedHasBeenSet = true; m_privileged = value; }
    inline AwsEcsContainerDetails& WithPrivileged(bool value) { SetPrivileged(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::Vector<AwsMountPoint> m_mountPoints;
    bool m_mountPointsHasBeenSet = false;

    bool m_privileged{false};
    bool m_privilegedHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
