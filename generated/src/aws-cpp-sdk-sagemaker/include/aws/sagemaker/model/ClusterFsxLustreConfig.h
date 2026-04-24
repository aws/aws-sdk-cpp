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
 * <p>Defines the configuration for attaching an Amazon FSx for Lustre file system
 * to instances in a SageMaker HyperPod cluster instance group.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterFsxLustreConfig">AWS
 * API Reference</a></p>
 */
class ClusterFsxLustreConfig {
 public:
  AWS_SAGEMAKER_API ClusterFsxLustreConfig() = default;
  AWS_SAGEMAKER_API ClusterFsxLustreConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterFsxLustreConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The DNS name of the Amazon FSx for Lustre file system.</p>
   */
  inline const Aws::String& GetDnsName() const { return m_dnsName; }
  inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
  template <typename DnsNameT = Aws::String>
  void SetDnsName(DnsNameT&& value) {
    m_dnsNameHasBeenSet = true;
    m_dnsName = std::forward<DnsNameT>(value);
  }
  template <typename DnsNameT = Aws::String>
  ClusterFsxLustreConfig& WithDnsName(DnsNameT&& value) {
    SetDnsName(std::forward<DnsNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mount name of the Amazon FSx for Lustre file system.</p>
   */
  inline const Aws::String& GetMountName() const { return m_mountName; }
  inline bool MountNameHasBeenSet() const { return m_mountNameHasBeenSet; }
  template <typename MountNameT = Aws::String>
  void SetMountName(MountNameT&& value) {
    m_mountNameHasBeenSet = true;
    m_mountName = std::forward<MountNameT>(value);
  }
  template <typename MountNameT = Aws::String>
  ClusterFsxLustreConfig& WithMountName(MountNameT&& value) {
    SetMountName(std::forward<MountNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The local path where the Amazon FSx for Lustre file system is mounted on
   * instances.</p>
   */
  inline const Aws::String& GetMountPath() const { return m_mountPath; }
  inline bool MountPathHasBeenSet() const { return m_mountPathHasBeenSet; }
  template <typename MountPathT = Aws::String>
  void SetMountPath(MountPathT&& value) {
    m_mountPathHasBeenSet = true;
    m_mountPath = std::forward<MountPathT>(value);
  }
  template <typename MountPathT = Aws::String>
  ClusterFsxLustreConfig& WithMountPath(MountPathT&& value) {
    SetMountPath(std::forward<MountPathT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dnsName;

  Aws::String m_mountName;

  Aws::String m_mountPath;
  bool m_dnsNameHasBeenSet = false;
  bool m_mountNameHasBeenSet = false;
  bool m_mountPathHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
