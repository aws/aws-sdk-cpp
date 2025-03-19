/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Lens upgrade summary return object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/LensUpgradeSummary">AWS
   * API Reference</a></p>
   */
  class LensUpgradeSummary
  {
  public:
    AWS_WELLARCHITECTED_API LensUpgradeSummary() = default;
    AWS_WELLARCHITECTED_API LensUpgradeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API LensUpgradeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetWorkloadId() const { return m_workloadId; }
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }
    template<typename WorkloadIdT = Aws::String>
    void SetWorkloadId(WorkloadIdT&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::forward<WorkloadIdT>(value); }
    template<typename WorkloadIdT = Aws::String>
    LensUpgradeSummary& WithWorkloadId(WorkloadIdT&& value) { SetWorkloadId(std::forward<WorkloadIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    template<typename WorkloadNameT = Aws::String>
    void SetWorkloadName(WorkloadNameT&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::forward<WorkloadNameT>(value); }
    template<typename WorkloadNameT = Aws::String>
    LensUpgradeSummary& WithWorkloadName(WorkloadNameT&& value) { SetWorkloadName(std::forward<WorkloadNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLensAlias() const { return m_lensAlias; }
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }
    template<typename LensAliasT = Aws::String>
    void SetLensAlias(LensAliasT&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::forward<LensAliasT>(value); }
    template<typename LensAliasT = Aws::String>
    LensUpgradeSummary& WithLensAlias(LensAliasT&& value) { SetLensAlias(std::forward<LensAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the lens.</p>
     */
    inline const Aws::String& GetLensArn() const { return m_lensArn; }
    inline bool LensArnHasBeenSet() const { return m_lensArnHasBeenSet; }
    template<typename LensArnT = Aws::String>
    void SetLensArn(LensArnT&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::forward<LensArnT>(value); }
    template<typename LensArnT = Aws::String>
    LensUpgradeSummary& WithLensArn(LensArnT&& value) { SetLensArn(std::forward<LensArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the lens.</p>
     */
    inline const Aws::String& GetCurrentLensVersion() const { return m_currentLensVersion; }
    inline bool CurrentLensVersionHasBeenSet() const { return m_currentLensVersionHasBeenSet; }
    template<typename CurrentLensVersionT = Aws::String>
    void SetCurrentLensVersion(CurrentLensVersionT&& value) { m_currentLensVersionHasBeenSet = true; m_currentLensVersion = std::forward<CurrentLensVersionT>(value); }
    template<typename CurrentLensVersionT = Aws::String>
    LensUpgradeSummary& WithCurrentLensVersion(CurrentLensVersionT&& value) { SetCurrentLensVersion(std::forward<CurrentLensVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest version of the lens.</p>
     */
    inline const Aws::String& GetLatestLensVersion() const { return m_latestLensVersion; }
    inline bool LatestLensVersionHasBeenSet() const { return m_latestLensVersionHasBeenSet; }
    template<typename LatestLensVersionT = Aws::String>
    void SetLatestLensVersion(LatestLensVersionT&& value) { m_latestLensVersionHasBeenSet = true; m_latestLensVersion = std::forward<LatestLensVersionT>(value); }
    template<typename LatestLensVersionT = Aws::String>
    LensUpgradeSummary& WithLatestLensVersion(LatestLensVersionT&& value) { SetLatestLensVersion(std::forward<LatestLensVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>ResourceArn</code> of the lens being upgraded</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    LensUpgradeSummary& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    LensUpgradeSummary& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_lensArn;
    bool m_lensArnHasBeenSet = false;

    Aws::String m_currentLensVersion;
    bool m_currentLensVersionHasBeenSet = false;

    Aws::String m_latestLensVersion;
    bool m_latestLensVersionHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
