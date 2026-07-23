/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/AmdSevSnpEnum.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace WorkspacesInstances {
namespace Model {

/**
 * <p>Configures CPU-specific settings for WorkSpace Instance.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/CpuOptionsRequest">AWS
 * API Reference</a></p>
 */
class CpuOptionsRequest {
 public:
  AWS_WORKSPACESINSTANCES_API CpuOptionsRequest() = default;
  AWS_WORKSPACESINSTANCES_API CpuOptionsRequest(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACESINSTANCES_API CpuOptionsRequest& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACESINSTANCES_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>AMD Secure Encrypted Virtualization configuration.</p>
   */
  inline AmdSevSnpEnum GetAmdSevSnp() const { return m_amdSevSnp; }
  inline bool AmdSevSnpHasBeenSet() const { return m_amdSevSnpHasBeenSet; }
  inline void SetAmdSevSnp(AmdSevSnpEnum value) {
    m_amdSevSnpHasBeenSet = true;
    m_amdSevSnp = value;
  }
  inline CpuOptionsRequest& WithAmdSevSnp(AmdSevSnpEnum value) {
    SetAmdSevSnp(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of CPU cores to allocate.</p>
   */
  inline int64_t GetCoreCount() const { return m_coreCount; }
  inline bool CoreCountHasBeenSet() const { return m_coreCountHasBeenSet; }
  inline void SetCoreCount(int64_t value) {
    m_coreCountHasBeenSet = true;
    m_coreCount = value;
  }
  inline CpuOptionsRequest& WithCoreCount(int64_t value) {
    SetCoreCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of threads per CPU core.</p>
   */
  inline int64_t GetThreadsPerCore() const { return m_threadsPerCore; }
  inline bool ThreadsPerCoreHasBeenSet() const { return m_threadsPerCoreHasBeenSet; }
  inline void SetThreadsPerCore(int64_t value) {
    m_threadsPerCoreHasBeenSet = true;
    m_threadsPerCore = value;
  }
  inline CpuOptionsRequest& WithThreadsPerCore(int64_t value) {
    SetThreadsPerCore(value);
    return *this;
  }
  ///@}
 private:
  AmdSevSnpEnum m_amdSevSnp{AmdSevSnpEnum::NOT_SET};

  int64_t m_coreCount{0};

  int64_t m_threadsPerCore{0};
  bool m_amdSevSnpHasBeenSet = false;
  bool m_coreCountHasBeenSet = false;
  bool m_threadsPerCoreHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
