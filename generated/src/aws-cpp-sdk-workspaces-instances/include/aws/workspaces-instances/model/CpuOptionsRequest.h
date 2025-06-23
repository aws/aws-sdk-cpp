/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/AmdSevSnpEnum.h>
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
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Configures CPU-specific settings for WorkSpace Instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/CpuOptionsRequest">AWS
   * API Reference</a></p>
   */
  class CpuOptionsRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API CpuOptionsRequest() = default;
    AWS_WORKSPACESINSTANCES_API CpuOptionsRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API CpuOptionsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>AMD Secure Encrypted Virtualization configuration.</p>
     */
    inline AmdSevSnpEnum GetAmdSevSnp() const { return m_amdSevSnp; }
    inline bool AmdSevSnpHasBeenSet() const { return m_amdSevSnpHasBeenSet; }
    inline void SetAmdSevSnp(AmdSevSnpEnum value) { m_amdSevSnpHasBeenSet = true; m_amdSevSnp = value; }
    inline CpuOptionsRequest& WithAmdSevSnp(AmdSevSnpEnum value) { SetAmdSevSnp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of CPU cores to allocate.</p>
     */
    inline int GetCoreCount() const { return m_coreCount; }
    inline bool CoreCountHasBeenSet() const { return m_coreCountHasBeenSet; }
    inline void SetCoreCount(int value) { m_coreCountHasBeenSet = true; m_coreCount = value; }
    inline CpuOptionsRequest& WithCoreCount(int value) { SetCoreCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of threads per CPU core.</p>
     */
    inline int GetThreadsPerCore() const { return m_threadsPerCore; }
    inline bool ThreadsPerCoreHasBeenSet() const { return m_threadsPerCoreHasBeenSet; }
    inline void SetThreadsPerCore(int value) { m_threadsPerCoreHasBeenSet = true; m_threadsPerCore = value; }
    inline CpuOptionsRequest& WithThreadsPerCore(int value) { SetThreadsPerCore(value); return *this;}
    ///@}
  private:

    AmdSevSnpEnum m_amdSevSnp{AmdSevSnpEnum::NOT_SET};
    bool m_amdSevSnpHasBeenSet = false;

    int m_coreCount{0};
    bool m_coreCountHasBeenSet = false;

    int m_threadsPerCore{0};
    bool m_threadsPerCoreHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
