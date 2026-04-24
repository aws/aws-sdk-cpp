/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/NetworkMigrationDeployedStackStatus.h>
#include <aws/mgn/model/NetworkMigrationFailedResourceDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>Details about a CloudFormation stack that has been deployed as part of the
 * network migration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/NetworkMigrationDeployedStackDetails">AWS
 * API Reference</a></p>
 */
class NetworkMigrationDeployedStackDetails {
 public:
  AWS_MGN_API NetworkMigrationDeployedStackDetails() = default;
  AWS_MGN_API NetworkMigrationDeployedStackDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API NetworkMigrationDeployedStackDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current status of the deployed stack.</p>
   */
  inline NetworkMigrationDeployedStackStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(NetworkMigrationDeployedStackStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline NetworkMigrationDeployedStackDetails& WithStatus(NetworkMigrationDeployedStackStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The physical ID of the CloudFormation stack.</p>
   */
  inline const Aws::String& GetStackPhysicalID() const { return m_stackPhysicalID; }
  inline bool StackPhysicalIDHasBeenSet() const { return m_stackPhysicalIDHasBeenSet; }
  template <typename StackPhysicalIDT = Aws::String>
  void SetStackPhysicalID(StackPhysicalIDT&& value) {
    m_stackPhysicalIDHasBeenSet = true;
    m_stackPhysicalID = std::forward<StackPhysicalIDT>(value);
  }
  template <typename StackPhysicalIDT = Aws::String>
  NetworkMigrationDeployedStackDetails& WithStackPhysicalID(StackPhysicalIDT&& value) {
    SetStackPhysicalID(std::forward<StackPhysicalIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logical ID of the stack.</p>
   */
  inline const Aws::String& GetStackLogicalID() const { return m_stackLogicalID; }
  inline bool StackLogicalIDHasBeenSet() const { return m_stackLogicalIDHasBeenSet; }
  template <typename StackLogicalIDT = Aws::String>
  void SetStackLogicalID(StackLogicalIDT&& value) {
    m_stackLogicalIDHasBeenSet = true;
    m_stackLogicalID = std::forward<StackLogicalIDT>(value);
  }
  template <typename StackLogicalIDT = Aws::String>
  NetworkMigrationDeployedStackDetails& WithStackLogicalID(StackLogicalIDT&& value) {
    SetStackLogicalID(std::forward<StackLogicalIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the segment that this stack was deployed for.</p>
   */
  inline const Aws::String& GetSegmentID() const { return m_segmentID; }
  inline bool SegmentIDHasBeenSet() const { return m_segmentIDHasBeenSet; }
  template <typename SegmentIDT = Aws::String>
  void SetSegmentID(SegmentIDT&& value) {
    m_segmentIDHasBeenSet = true;
    m_segmentID = std::forward<SegmentIDT>(value);
  }
  template <typename SegmentIDT = Aws::String>
  NetworkMigrationDeployedStackDetails& WithSegmentID(SegmentIDT&& value) {
    SetSegmentID(std::forward<SegmentIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target AWS account where the stack was deployed.</p>
   */
  inline const Aws::String& GetTargetAccount() const { return m_targetAccount; }
  inline bool TargetAccountHasBeenSet() const { return m_targetAccountHasBeenSet; }
  template <typename TargetAccountT = Aws::String>
  void SetTargetAccount(TargetAccountT&& value) {
    m_targetAccountHasBeenSet = true;
    m_targetAccount = std::forward<TargetAccountT>(value);
  }
  template <typename TargetAccountT = Aws::String>
  NetworkMigrationDeployedStackDetails& WithTargetAccount(TargetAccountT&& value) {
    SetTargetAccount(std::forward<TargetAccountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of resources that failed to deploy.</p>
   */
  inline const Aws::Vector<NetworkMigrationFailedResourceDetails>& GetFailedResources() const { return m_failedResources; }
  inline bool FailedResourcesHasBeenSet() const { return m_failedResourcesHasBeenSet; }
  template <typename FailedResourcesT = Aws::Vector<NetworkMigrationFailedResourceDetails>>
  void SetFailedResources(FailedResourcesT&& value) {
    m_failedResourcesHasBeenSet = true;
    m_failedResources = std::forward<FailedResourcesT>(value);
  }
  template <typename FailedResourcesT = Aws::Vector<NetworkMigrationFailedResourceDetails>>
  NetworkMigrationDeployedStackDetails& WithFailedResources(FailedResourcesT&& value) {
    SetFailedResources(std::forward<FailedResourcesT>(value));
    return *this;
  }
  template <typename FailedResourcesT = NetworkMigrationFailedResourceDetails>
  NetworkMigrationDeployedStackDetails& AddFailedResources(FailedResourcesT&& value) {
    m_failedResourcesHasBeenSet = true;
    m_failedResources.emplace_back(std::forward<FailedResourcesT>(value));
    return *this;
  }
  ///@}
 private:
  NetworkMigrationDeployedStackStatus m_status{NetworkMigrationDeployedStackStatus::NOT_SET};

  Aws::String m_stackPhysicalID;

  Aws::String m_stackLogicalID;

  Aws::String m_segmentID;

  Aws::String m_targetAccount;

  Aws::Vector<NetworkMigrationFailedResourceDetails> m_failedResources;
  bool m_statusHasBeenSet = false;
  bool m_stackPhysicalIDHasBeenSet = false;
  bool m_stackLogicalIDHasBeenSet = false;
  bool m_segmentIDHasBeenSet = false;
  bool m_targetAccountHasBeenSet = false;
  bool m_failedResourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
