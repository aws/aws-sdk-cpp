/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/ActivityMetrics.h>
#include <aws/s3control/model/PrefixLevel.h>
#include <aws/s3control/model/AdvancedCostOptimizationMetrics.h>
#include <aws/s3control/model/AdvancedDataProtectionMetrics.h>
#include <aws/s3control/model/DetailedStatusCodesMetrics.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>A container for the bucket-level configuration for Amazon S3 Storage
   * Lens.</p> <p>For more information about S3 Storage Lens, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage_lens.html">Assessing
   * your storage activity and usage with S3 Storage Lens</a> in the <i>Amazon S3
   * User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/BucketLevel">AWS
   * API Reference</a></p>
   */
  class BucketLevel
  {
  public:
    AWS_S3CONTROL_API BucketLevel() = default;
    AWS_S3CONTROL_API BucketLevel(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API BucketLevel& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A container for the bucket-level activity metrics for S3 Storage Lens.</p>
     */
    inline const ActivityMetrics& GetActivityMetrics() const { return m_activityMetrics; }
    inline bool ActivityMetricsHasBeenSet() const { return m_activityMetricsHasBeenSet; }
    template<typename ActivityMetricsT = ActivityMetrics>
    void SetActivityMetrics(ActivityMetricsT&& value) { m_activityMetricsHasBeenSet = true; m_activityMetrics = std::forward<ActivityMetricsT>(value); }
    template<typename ActivityMetricsT = ActivityMetrics>
    BucketLevel& WithActivityMetrics(ActivityMetricsT&& value) { SetActivityMetrics(std::forward<ActivityMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for the prefix-level metrics for S3 Storage Lens. </p>
     */
    inline const PrefixLevel& GetPrefixLevel() const { return m_prefixLevel; }
    inline bool PrefixLevelHasBeenSet() const { return m_prefixLevelHasBeenSet; }
    template<typename PrefixLevelT = PrefixLevel>
    void SetPrefixLevel(PrefixLevelT&& value) { m_prefixLevelHasBeenSet = true; m_prefixLevel = std::forward<PrefixLevelT>(value); }
    template<typename PrefixLevelT = PrefixLevel>
    BucketLevel& WithPrefixLevel(PrefixLevelT&& value) { SetPrefixLevel(std::forward<PrefixLevelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for bucket-level advanced cost-optimization metrics for S3
     * Storage Lens.</p>
     */
    inline const AdvancedCostOptimizationMetrics& GetAdvancedCostOptimizationMetrics() const { return m_advancedCostOptimizationMetrics; }
    inline bool AdvancedCostOptimizationMetricsHasBeenSet() const { return m_advancedCostOptimizationMetricsHasBeenSet; }
    template<typename AdvancedCostOptimizationMetricsT = AdvancedCostOptimizationMetrics>
    void SetAdvancedCostOptimizationMetrics(AdvancedCostOptimizationMetricsT&& value) { m_advancedCostOptimizationMetricsHasBeenSet = true; m_advancedCostOptimizationMetrics = std::forward<AdvancedCostOptimizationMetricsT>(value); }
    template<typename AdvancedCostOptimizationMetricsT = AdvancedCostOptimizationMetrics>
    BucketLevel& WithAdvancedCostOptimizationMetrics(AdvancedCostOptimizationMetricsT&& value) { SetAdvancedCostOptimizationMetrics(std::forward<AdvancedCostOptimizationMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for bucket-level advanced data-protection metrics for S3 Storage
     * Lens.</p>
     */
    inline const AdvancedDataProtectionMetrics& GetAdvancedDataProtectionMetrics() const { return m_advancedDataProtectionMetrics; }
    inline bool AdvancedDataProtectionMetricsHasBeenSet() const { return m_advancedDataProtectionMetricsHasBeenSet; }
    template<typename AdvancedDataProtectionMetricsT = AdvancedDataProtectionMetrics>
    void SetAdvancedDataProtectionMetrics(AdvancedDataProtectionMetricsT&& value) { m_advancedDataProtectionMetricsHasBeenSet = true; m_advancedDataProtectionMetrics = std::forward<AdvancedDataProtectionMetricsT>(value); }
    template<typename AdvancedDataProtectionMetricsT = AdvancedDataProtectionMetrics>
    BucketLevel& WithAdvancedDataProtectionMetrics(AdvancedDataProtectionMetricsT&& value) { SetAdvancedDataProtectionMetrics(std::forward<AdvancedDataProtectionMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container for bucket-level detailed status code metrics for S3 Storage
     * Lens.</p>
     */
    inline const DetailedStatusCodesMetrics& GetDetailedStatusCodesMetrics() const { return m_detailedStatusCodesMetrics; }
    inline bool DetailedStatusCodesMetricsHasBeenSet() const { return m_detailedStatusCodesMetricsHasBeenSet; }
    template<typename DetailedStatusCodesMetricsT = DetailedStatusCodesMetrics>
    void SetDetailedStatusCodesMetrics(DetailedStatusCodesMetricsT&& value) { m_detailedStatusCodesMetricsHasBeenSet = true; m_detailedStatusCodesMetrics = std::forward<DetailedStatusCodesMetricsT>(value); }
    template<typename DetailedStatusCodesMetricsT = DetailedStatusCodesMetrics>
    BucketLevel& WithDetailedStatusCodesMetrics(DetailedStatusCodesMetricsT&& value) { SetDetailedStatusCodesMetrics(std::forward<DetailedStatusCodesMetricsT>(value)); return *this;}
    ///@}
  private:

    ActivityMetrics m_activityMetrics;
    bool m_activityMetricsHasBeenSet = false;

    PrefixLevel m_prefixLevel;
    bool m_prefixLevelHasBeenSet = false;

    AdvancedCostOptimizationMetrics m_advancedCostOptimizationMetrics;
    bool m_advancedCostOptimizationMetricsHasBeenSet = false;

    AdvancedDataProtectionMetrics m_advancedDataProtectionMetrics;
    bool m_advancedDataProtectionMetricsHasBeenSet = false;

    DetailedStatusCodesMetrics m_detailedStatusCodesMetrics;
    bool m_detailedStatusCodesMetricsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
