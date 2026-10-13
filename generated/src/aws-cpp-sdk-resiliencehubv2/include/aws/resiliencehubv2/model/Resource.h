/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>Represents an AWS resource discovered by Resilience Hub.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/Resource">AWS
 * API Reference</a></p>
 */
class Resource {
 public:
  AWS_RESILIENCEHUBV2_API Resource() = default;
  AWS_RESILIENCEHUBV2_API Resource(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the resource.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  Resource& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Region where the resource is located.</p>
   */
  inline const Aws::String& GetAwsRegion() const { return m_awsRegion; }
  inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
  template <typename AwsRegionT = Aws::String>
  void SetAwsRegion(AwsRegionT&& value) {
    m_awsRegionHasBeenSet = true;
    m_awsRegion = std::forward<AwsRegionT>(value);
  }
  template <typename AwsRegionT = Aws::String>
  Resource& WithAwsRegion(AwsRegionT&& value) {
    SetAwsRegion(std::forward<AwsRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID that owns the resource.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  Resource& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the resource.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  Resource& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone ID of the Availability Zone that hosts the resource,
   * such as use1-az1. The Availability Zone ID is consistent across Amazon Web
   * Services (AWS) accounts, unlike the Availability Zone name.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  Resource& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Availability Zone that hosts the resource, such as
   * us-west-2a.</p>
   */
  inline const Aws::String& GetAvailabilityZoneName() const { return m_availabilityZoneName; }
  inline bool AvailabilityZoneNameHasBeenSet() const { return m_availabilityZoneNameHasBeenSet; }
  template <typename AvailabilityZoneNameT = Aws::String>
  void SetAvailabilityZoneName(AvailabilityZoneNameT&& value) {
    m_availabilityZoneNameHasBeenSet = true;
    m_availabilityZoneName = std::forward<AvailabilityZoneNameT>(value);
  }
  template <typename AvailabilityZoneNameT = Aws::String>
  Resource& WithAvailabilityZoneName(AvailabilityZoneNameT&& value) {
    SetAvailabilityZoneName(std::forward<AvailabilityZoneNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the single parent resource that contains this resource,
   * used to represent containment relationships in the resource topology. A resource
   * has at most one containment parent.</p>
   */
  inline const Aws::String& GetContainmentParentId() const { return m_containmentParentId; }
  inline bool ContainmentParentIdHasBeenSet() const { return m_containmentParentIdHasBeenSet; }
  template <typename ContainmentParentIdT = Aws::String>
  void SetContainmentParentId(ContainmentParentIdT&& value) {
    m_containmentParentIdHasBeenSet = true;
    m_containmentParentId = std::forward<ContainmentParentIdT>(value);
  }
  template <typename ContainmentParentIdT = Aws::String>
  Resource& WithContainmentParentId(ContainmentParentIdT&& value) {
    SetContainmentParentId(std::forward<ContainmentParentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the logical resource group that this resource belongs to.
   * Resources that share this identifier are managed as a single unit.</p>
   */
  inline const Aws::String& GetLogicalResourceGroupId() const { return m_logicalResourceGroupId; }
  inline bool LogicalResourceGroupIdHasBeenSet() const { return m_logicalResourceGroupIdHasBeenSet; }
  template <typename LogicalResourceGroupIdT = Aws::String>
  void SetLogicalResourceGroupId(LogicalResourceGroupIdT&& value) {
    m_logicalResourceGroupIdHasBeenSet = true;
    m_logicalResourceGroupId = std::forward<LogicalResourceGroupIdT>(value);
  }
  template <typename LogicalResourceGroupIdT = Aws::String>
  Resource& WithLogicalResourceGroupId(LogicalResourceGroupIdT&& value) {
    SetLogicalResourceGroupId(std::forward<LogicalResourceGroupIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  Aws::String m_awsRegion;

  Aws::String m_awsAccountId;

  Aws::String m_resourceType;

  Aws::String m_availabilityZoneId;

  Aws::String m_availabilityZoneName;

  Aws::String m_containmentParentId;

  Aws::String m_logicalResourceGroupId;
  bool m_identifierHasBeenSet = false;
  bool m_awsRegionHasBeenSet = false;
  bool m_awsAccountIdHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_availabilityZoneNameHasBeenSet = false;
  bool m_containmentParentIdHasBeenSet = false;
  bool m_logicalResourceGroupIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
