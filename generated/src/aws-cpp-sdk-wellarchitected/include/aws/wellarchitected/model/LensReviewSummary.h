﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/LensStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/Risk.h>
#include <aws/wellarchitected/model/WorkloadProfile.h>
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
   * <p>A lens review summary of a workload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/LensReviewSummary">AWS
   * API Reference</a></p>
   */
  class LensReviewSummary
  {
  public:
    AWS_WELLARCHITECTED_API LensReviewSummary();
    AWS_WELLARCHITECTED_API LensReviewSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API LensReviewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }
    inline void SetLensAlias(const Aws::String& value) { m_lensAliasHasBeenSet = true; m_lensAlias = value; }
    inline void SetLensAlias(Aws::String&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::move(value); }
    inline void SetLensAlias(const char* value) { m_lensAliasHasBeenSet = true; m_lensAlias.assign(value); }
    inline LensReviewSummary& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}
    inline LensReviewSummary& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}
    inline LensReviewSummary& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the lens.</p>
     */
    inline const Aws::String& GetLensArn() const{ return m_lensArn; }
    inline bool LensArnHasBeenSet() const { return m_lensArnHasBeenSet; }
    inline void SetLensArn(const Aws::String& value) { m_lensArnHasBeenSet = true; m_lensArn = value; }
    inline void SetLensArn(Aws::String&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::move(value); }
    inline void SetLensArn(const char* value) { m_lensArnHasBeenSet = true; m_lensArn.assign(value); }
    inline LensReviewSummary& WithLensArn(const Aws::String& value) { SetLensArn(value); return *this;}
    inline LensReviewSummary& WithLensArn(Aws::String&& value) { SetLensArn(std::move(value)); return *this;}
    inline LensReviewSummary& WithLensArn(const char* value) { SetLensArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the lens.</p>
     */
    inline const Aws::String& GetLensVersion() const{ return m_lensVersion; }
    inline bool LensVersionHasBeenSet() const { return m_lensVersionHasBeenSet; }
    inline void SetLensVersion(const Aws::String& value) { m_lensVersionHasBeenSet = true; m_lensVersion = value; }
    inline void SetLensVersion(Aws::String&& value) { m_lensVersionHasBeenSet = true; m_lensVersion = std::move(value); }
    inline void SetLensVersion(const char* value) { m_lensVersionHasBeenSet = true; m_lensVersion.assign(value); }
    inline LensReviewSummary& WithLensVersion(const Aws::String& value) { SetLensVersion(value); return *this;}
    inline LensReviewSummary& WithLensVersion(Aws::String&& value) { SetLensVersion(std::move(value)); return *this;}
    inline LensReviewSummary& WithLensVersion(const char* value) { SetLensVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLensName() const{ return m_lensName; }
    inline bool LensNameHasBeenSet() const { return m_lensNameHasBeenSet; }
    inline void SetLensName(const Aws::String& value) { m_lensNameHasBeenSet = true; m_lensName = value; }
    inline void SetLensName(Aws::String&& value) { m_lensNameHasBeenSet = true; m_lensName = std::move(value); }
    inline void SetLensName(const char* value) { m_lensNameHasBeenSet = true; m_lensName.assign(value); }
    inline LensReviewSummary& WithLensName(const Aws::String& value) { SetLensName(value); return *this;}
    inline LensReviewSummary& WithLensName(Aws::String&& value) { SetLensName(std::move(value)); return *this;}
    inline LensReviewSummary& WithLensName(const char* value) { SetLensName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the lens.</p>
     */
    inline const LensStatus& GetLensStatus() const{ return m_lensStatus; }
    inline bool LensStatusHasBeenSet() const { return m_lensStatusHasBeenSet; }
    inline void SetLensStatus(const LensStatus& value) { m_lensStatusHasBeenSet = true; m_lensStatus = value; }
    inline void SetLensStatus(LensStatus&& value) { m_lensStatusHasBeenSet = true; m_lensStatus = std::move(value); }
    inline LensReviewSummary& WithLensStatus(const LensStatus& value) { SetLensStatus(value); return *this;}
    inline LensReviewSummary& WithLensStatus(LensStatus&& value) { SetLensStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline LensReviewSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline LensReviewSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Risk, int>& GetRiskCounts() const{ return m_riskCounts; }
    inline bool RiskCountsHasBeenSet() const { return m_riskCountsHasBeenSet; }
    inline void SetRiskCounts(const Aws::Map<Risk, int>& value) { m_riskCountsHasBeenSet = true; m_riskCounts = value; }
    inline void SetRiskCounts(Aws::Map<Risk, int>&& value) { m_riskCountsHasBeenSet = true; m_riskCounts = std::move(value); }
    inline LensReviewSummary& WithRiskCounts(const Aws::Map<Risk, int>& value) { SetRiskCounts(value); return *this;}
    inline LensReviewSummary& WithRiskCounts(Aws::Map<Risk, int>&& value) { SetRiskCounts(std::move(value)); return *this;}
    inline LensReviewSummary& AddRiskCounts(const Risk& key, int value) { m_riskCountsHasBeenSet = true; m_riskCounts.emplace(key, value); return *this; }
    inline LensReviewSummary& AddRiskCounts(Risk&& key, int value) { m_riskCountsHasBeenSet = true; m_riskCounts.emplace(std::move(key), value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The profiles associated with the workload.</p>
     */
    inline const Aws::Vector<WorkloadProfile>& GetProfiles() const{ return m_profiles; }
    inline bool ProfilesHasBeenSet() const { return m_profilesHasBeenSet; }
    inline void SetProfiles(const Aws::Vector<WorkloadProfile>& value) { m_profilesHasBeenSet = true; m_profiles = value; }
    inline void SetProfiles(Aws::Vector<WorkloadProfile>&& value) { m_profilesHasBeenSet = true; m_profiles = std::move(value); }
    inline LensReviewSummary& WithProfiles(const Aws::Vector<WorkloadProfile>& value) { SetProfiles(value); return *this;}
    inline LensReviewSummary& WithProfiles(Aws::Vector<WorkloadProfile>&& value) { SetProfiles(std::move(value)); return *this;}
    inline LensReviewSummary& AddProfiles(const WorkloadProfile& value) { m_profilesHasBeenSet = true; m_profiles.push_back(value); return *this; }
    inline LensReviewSummary& AddProfiles(WorkloadProfile&& value) { m_profilesHasBeenSet = true; m_profiles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Risk, int>& GetPrioritizedRiskCounts() const{ return m_prioritizedRiskCounts; }
    inline bool PrioritizedRiskCountsHasBeenSet() const { return m_prioritizedRiskCountsHasBeenSet; }
    inline void SetPrioritizedRiskCounts(const Aws::Map<Risk, int>& value) { m_prioritizedRiskCountsHasBeenSet = true; m_prioritizedRiskCounts = value; }
    inline void SetPrioritizedRiskCounts(Aws::Map<Risk, int>&& value) { m_prioritizedRiskCountsHasBeenSet = true; m_prioritizedRiskCounts = std::move(value); }
    inline LensReviewSummary& WithPrioritizedRiskCounts(const Aws::Map<Risk, int>& value) { SetPrioritizedRiskCounts(value); return *this;}
    inline LensReviewSummary& WithPrioritizedRiskCounts(Aws::Map<Risk, int>&& value) { SetPrioritizedRiskCounts(std::move(value)); return *this;}
    inline LensReviewSummary& AddPrioritizedRiskCounts(const Risk& key, int value) { m_prioritizedRiskCountsHasBeenSet = true; m_prioritizedRiskCounts.emplace(key, value); return *this; }
    inline LensReviewSummary& AddPrioritizedRiskCounts(Risk&& key, int value) { m_prioritizedRiskCountsHasBeenSet = true; m_prioritizedRiskCounts.emplace(std::move(key), value); return *this; }
    ///@}
  private:

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_lensArn;
    bool m_lensArnHasBeenSet = false;

    Aws::String m_lensVersion;
    bool m_lensVersionHasBeenSet = false;

    Aws::String m_lensName;
    bool m_lensNameHasBeenSet = false;

    LensStatus m_lensStatus;
    bool m_lensStatusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Map<Risk, int> m_riskCounts;
    bool m_riskCountsHasBeenSet = false;

    Aws::Vector<WorkloadProfile> m_profiles;
    bool m_profilesHasBeenSet = false;

    Aws::Map<Risk, int> m_prioritizedRiskCounts;
    bool m_prioritizedRiskCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
