/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/ActivityMetrics.h>
#include <aws/s3control/model/BucketLevel.h>
#include <aws/s3control/model/AdvancedCostOptimizationMetrics.h>
#include <aws/s3control/model/AdvancedDataProtectionMetrics.h>
#include <aws/s3control/model/DetailedStatusCodesMetrics.h>
#include <aws/s3control/model/StorageLensGroupLevel.h>
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
   * <p>A container element for the account-level Amazon S3 Storage Lens
   * configuration.</p> <p>For more information about S3 Storage Lens, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage_lens.html">Assessing
   * your storage activity and usage with S3 Storage Lens</a> in the <i>Amazon S3
   * User Guide</i>. For a complete list of S3 Storage Lens metrics, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage_lens_metrics_glossary.html">S3
   * Storage Lens metrics glossary</a> in the <i>Amazon S3 User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/AccountLevel">AWS
   * API Reference</a></p>
   */
  class AccountLevel
  {
  public:
    AWS_S3CONTROL_API AccountLevel() = default;
    AWS_S3CONTROL_API AccountLevel(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API AccountLevel& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>A container element for S3 Storage Lens activity metrics.</p>
     */
    inline const ActivityMetrics& GetActivityMetrics() const { return m_activityMetrics; }
    inline bool ActivityMetricsHasBeenSet() const { return m_activityMetricsHasBeenSet; }
    template<typename ActivityMetricsT = ActivityMetrics>
    void SetActivityMetrics(ActivityMetricsT&& value) { m_activityMetricsHasBeenSet = true; m_activityMetrics = std::forward<ActivityMetricsT>(value); }
    template<typename ActivityMetricsT = ActivityMetrics>
    AccountLevel& WithActivityMetrics(ActivityMetricsT&& value) { SetActivityMetrics(std::forward<ActivityMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container element for the S3 Storage Lens bucket-level configuration.</p>
     */
    inline const BucketLevel& GetBucketLevel() const { return m_bucketLevel; }
    inline bool BucketLevelHasBeenSet() const { return m_bucketLevelHasBeenSet; }
    template<typename BucketLevelT = BucketLevel>
    void SetBucketLevel(BucketLevelT&& value) { m_bucketLevelHasBeenSet = true; m_bucketLevel = std::forward<BucketLevelT>(value); }
    template<typename BucketLevelT = BucketLevel>
    AccountLevel& WithBucketLevel(BucketLevelT&& value) { SetBucketLevel(std::forward<BucketLevelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container element for S3 Storage Lens advanced cost-optimization
     * metrics.</p>
     */
    inline const AdvancedCostOptimizationMetrics& GetAdvancedCostOptimizationMetrics() const { return m_advancedCostOptimizationMetrics; }
    inline bool AdvancedCostOptimizationMetricsHasBeenSet() const { return m_advancedCostOptimizationMetricsHasBeenSet; }
    template<typename AdvancedCostOptimizationMetricsT = AdvancedCostOptimizationMetrics>
    void SetAdvancedCostOptimizationMetrics(AdvancedCostOptimizationMetricsT&& value) { m_advancedCostOptimizationMetricsHasBeenSet = true; m_advancedCostOptimizationMetrics = std::forward<AdvancedCostOptimizationMetricsT>(value); }
    template<typename AdvancedCostOptimizationMetricsT = AdvancedCostOptimizationMetrics>
    AccountLevel& WithAdvancedCostOptimizationMetrics(AdvancedCostOptimizationMetricsT&& value) { SetAdvancedCostOptimizationMetrics(std::forward<AdvancedCostOptimizationMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container element for S3 Storage Lens advanced data-protection metrics.</p>
     */
    inline const AdvancedDataProtectionMetrics& GetAdvancedDataProtectionMetrics() const { return m_advancedDataProtectionMetrics; }
    inline bool AdvancedDataProtectionMetricsHasBeenSet() const { return m_advancedDataProtectionMetricsHasBeenSet; }
    template<typename AdvancedDataProtectionMetricsT = AdvancedDataProtectionMetrics>
    void SetAdvancedDataProtectionMetrics(AdvancedDataProtectionMetricsT&& value) { m_advancedDataProtectionMetricsHasBeenSet = true; m_advancedDataProtectionMetrics = std::forward<AdvancedDataProtectionMetricsT>(value); }
    template<typename AdvancedDataProtectionMetricsT = AdvancedDataProtectionMetrics>
    AccountLevel& WithAdvancedDataProtectionMetrics(AdvancedDataProtectionMetricsT&& value) { SetAdvancedDataProtectionMetrics(std::forward<AdvancedDataProtectionMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A container element for detailed status code metrics. </p>
     */
    inline const DetailedStatusCodesMetrics& GetDetailedStatusCodesMetrics() const { return m_detailedStatusCodesMetrics; }
    inline bool DetailedStatusCodesMetricsHasBeenSet() const { return m_detailedStatusCodesMetricsHasBeenSet; }
    template<typename DetailedStatusCodesMetricsT = DetailedStatusCodesMetrics>
    void SetDetailedStatusCodesMetrics(DetailedStatusCodesMetricsT&& value) { m_detailedStatusCodesMetricsHasBeenSet = true; m_detailedStatusCodesMetrics = std::forward<DetailedStatusCodesMetricsT>(value); }
    template<typename DetailedStatusCodesMetricsT = DetailedStatusCodesMetrics>
    AccountLevel& WithDetailedStatusCodesMetrics(DetailedStatusCodesMetricsT&& value) { SetDetailedStatusCodesMetrics(std::forward<DetailedStatusCodesMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A container element for S3 Storage Lens groups metrics. </p>
     */
    inline const StorageLensGroupLevel& GetStorageLensGroupLevel() const { return m_storageLensGroupLevel; }
    inline bool StorageLensGroupLevelHasBeenSet() const { return m_storageLensGroupLevelHasBeenSet; }
    template<typename StorageLensGroupLevelT = StorageLensGroupLevel>
    void SetStorageLensGroupLevel(StorageLensGroupLevelT&& value) { m_storageLensGroupLevelHasBeenSet = true; m_storageLensGroupLevel = std::forward<StorageLensGroupLevelT>(value); }
    template<typename StorageLensGroupLevelT = StorageLensGroupLevel>
    AccountLevel& WithStorageLensGroupLevel(StorageLensGroupLevelT&& value) { SetStorageLensGroupLevel(std::forward<StorageLensGroupLevelT>(value)); return *this;}
    ///@}
  private:

    ActivityMetrics m_activityMetrics;
    bool m_activityMetricsHasBeenSet = false;

    BucketLevel m_bucketLevel;
    bool m_bucketLevelHasBeenSet = false;

    AdvancedCostOptimizationMetrics m_advancedCostOptimizationMetrics;
    bool m_advancedCostOptimizationMetricsHasBeenSet = false;

    AdvancedDataProtectionMetrics m_advancedDataProtectionMetrics;
    bool m_advancedDataProtectionMetricsHasBeenSet = false;

    DetailedStatusCodesMetrics m_detailedStatusCodesMetrics;
    bool m_detailedStatusCodesMetricsHasBeenSet = false;

    StorageLensGroupLevel m_storageLensGroupLevel;
    bool m_storageLensGroupLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
