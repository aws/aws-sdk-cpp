/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>The configuration that describes specifications of the instance groups to
 * update.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UpdateClusterSoftwareInstanceGroupSpecification">AWS
 * API Reference</a></p>
 */
class UpdateClusterSoftwareInstanceGroupSpecification {
 public:
  AWS_SAGEMAKER_API UpdateClusterSoftwareInstanceGroupSpecification() = default;
  AWS_SAGEMAKER_API UpdateClusterSoftwareInstanceGroupSpecification(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API UpdateClusterSoftwareInstanceGroupSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the instance group to update.</p>
   */
  inline const Aws::String& GetInstanceGroupName() const { return m_instanceGroupName; }
  inline bool InstanceGroupNameHasBeenSet() const { return m_instanceGroupNameHasBeenSet; }
  template <typename InstanceGroupNameT = Aws::String>
  void SetInstanceGroupName(InstanceGroupNameT&& value) {
    m_instanceGroupNameHasBeenSet = true;
    m_instanceGroupName = std::forward<InstanceGroupNameT>(value);
  }
  template <typename InstanceGroupNameT = Aws::String>
  UpdateClusterSoftwareInstanceGroupSpecification& WithInstanceGroupName(InstanceGroupNameT&& value) {
    SetInstanceGroupName(std::forward<InstanceGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the HyperPod-managed AMI to update to for the instance group.
   * Uses semantic versioning in the format <code>MAJOR.MINOR.PATCH</code>.</p>
   */
  inline const Aws::String& GetImageReleaseVersion() const { return m_imageReleaseVersion; }
  inline bool ImageReleaseVersionHasBeenSet() const { return m_imageReleaseVersionHasBeenSet; }
  template <typename ImageReleaseVersionT = Aws::String>
  void SetImageReleaseVersion(ImageReleaseVersionT&& value) {
    m_imageReleaseVersionHasBeenSet = true;
    m_imageReleaseVersion = std::forward<ImageReleaseVersionT>(value);
  }
  template <typename ImageReleaseVersionT = Aws::String>
  UpdateClusterSoftwareInstanceGroupSpecification& WithImageReleaseVersion(ImageReleaseVersionT&& value) {
    SetImageReleaseVersion(std::forward<ImageReleaseVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceGroupName;

  Aws::String m_imageReleaseVersion;
  bool m_instanceGroupNameHasBeenSet = false;
  bool m_imageReleaseVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
