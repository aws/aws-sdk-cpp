/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>A single AWS resource that AWS Fault Injection Service (AWS FIS) resolved as
 * a target during a test run.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ResolvedTargetResource">AWS
 * API Reference</a></p>
 */
class ResolvedTargetResource {
 public:
  AWS_RESILIENCEHUBV2_API ResolvedTargetResource() = default;
  AWS_RESILIENCEHUBV2_API ResolvedTargetResource(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ResolvedTargetResource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AWS FIS resource type the target belongs to, such as aws:ec2:instance,
   * aws:ecs:task, or aws:eks:pod.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  ResolvedTargetResource& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the target in the AWS FIS experiment template.</p>
   */
  inline const Aws::String& GetTargetName() const { return m_targetName; }
  inline bool TargetNameHasBeenSet() const { return m_targetNameHasBeenSet; }
  template <typename TargetNameT = Aws::String>
  void SetTargetName(TargetNameT&& value) {
    m_targetNameHasBeenSet = true;
    m_targetName = std::forward<TargetNameT>(value);
  }
  template <typename TargetNameT = Aws::String>
  ResolvedTargetResource& WithTargetName(TargetNameT&& value) {
    SetTargetName(std::forward<TargetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The raw target information map as returned by AWS FIS.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTargetInformation() const { return m_targetInformation; }
  inline bool TargetInformationHasBeenSet() const { return m_targetInformationHasBeenSet; }
  template <typename TargetInformationT = Aws::Map<Aws::String, Aws::String>>
  void SetTargetInformation(TargetInformationT&& value) {
    m_targetInformationHasBeenSet = true;
    m_targetInformation = std::forward<TargetInformationT>(value);
  }
  template <typename TargetInformationT = Aws::Map<Aws::String, Aws::String>>
  ResolvedTargetResource& WithTargetInformation(TargetInformationT&& value) {
    SetTargetInformation(std::forward<TargetInformationT>(value));
    return *this;
  }
  template <typename TargetInformationKeyT = Aws::String, typename TargetInformationValueT = Aws::String>
  ResolvedTargetResource& AddTargetInformation(TargetInformationKeyT&& key, TargetInformationValueT&& value) {
    m_targetInformationHasBeenSet = true;
    m_targetInformation.emplace(std::forward<TargetInformationKeyT>(key), std::forward<TargetInformationValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceType;

  Aws::String m_targetName;

  Aws::Map<Aws::String, Aws::String> m_targetInformation;
  bool m_resourceTypeHasBeenSet = false;
  bool m_targetNameHasBeenSet = false;
  bool m_targetInformationHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
