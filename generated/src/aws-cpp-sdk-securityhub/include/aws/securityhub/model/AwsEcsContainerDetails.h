﻿/**
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
    AWS_SECURITYHUB_API AwsEcsContainerDetails();
    AWS_SECURITYHUB_API AwsEcsContainerDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsContainerDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the container. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AwsEcsContainerDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AwsEcsContainerDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AwsEcsContainerDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image used for the container. </p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }
    inline AwsEcsContainerDetails& WithImage(const Aws::String& value) { SetImage(value); return *this;}
    inline AwsEcsContainerDetails& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}
    inline AwsEcsContainerDetails& WithImage(const char* value) { SetImage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mount points for data volumes in your container. </p>
     */
    inline const Aws::Vector<AwsMountPoint>& GetMountPoints() const{ return m_mountPoints; }
    inline bool MountPointsHasBeenSet() const { return m_mountPointsHasBeenSet; }
    inline void SetMountPoints(const Aws::Vector<AwsMountPoint>& value) { m_mountPointsHasBeenSet = true; m_mountPoints = value; }
    inline void SetMountPoints(Aws::Vector<AwsMountPoint>&& value) { m_mountPointsHasBeenSet = true; m_mountPoints = std::move(value); }
    inline AwsEcsContainerDetails& WithMountPoints(const Aws::Vector<AwsMountPoint>& value) { SetMountPoints(value); return *this;}
    inline AwsEcsContainerDetails& WithMountPoints(Aws::Vector<AwsMountPoint>&& value) { SetMountPoints(std::move(value)); return *this;}
    inline AwsEcsContainerDetails& AddMountPoints(const AwsMountPoint& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(value); return *this; }
    inline AwsEcsContainerDetails& AddMountPoints(AwsMountPoint&& value) { m_mountPointsHasBeenSet = true; m_mountPoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When this parameter is true, the container is given elevated privileges on
     * the host container instance (similar to the root user). </p>
     */
    inline bool GetPrivileged() const{ return m_privileged; }
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

    bool m_privileged;
    bool m_privilegedHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
