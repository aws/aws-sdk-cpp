/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ThroughputMode.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The new throughput configuration for the feature group. You can switch
   * between on-demand and provisioned modes or update the read / write capacity of
   * provisioned feature groups. You can switch a feature group to on-demand only
   * once in a 24 hour period. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ThroughputConfigUpdate">AWS
   * API Reference</a></p>
   */
  class ThroughputConfigUpdate
  {
  public:
    AWS_SAGEMAKER_API ThroughputConfigUpdate() = default;
    AWS_SAGEMAKER_API ThroughputConfigUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ThroughputConfigUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Target throughput mode of the feature group. Throughput update is an
     * asynchronous operation, and the outcome should be monitored by polling
     * <code>LastUpdateStatus</code> field in <code>DescribeFeatureGroup</code>
     * response. You cannot update a feature group's throughput while another update is
     * in progress. </p>
     */
    inline ThroughputMode GetThroughputMode() const { return m_throughputMode; }
    inline bool ThroughputModeHasBeenSet() const { return m_throughputModeHasBeenSet; }
    inline void SetThroughputMode(ThroughputMode value) { m_throughputModeHasBeenSet = true; m_throughputMode = value; }
    inline ThroughputConfigUpdate& WithThroughputMode(ThroughputMode value) { SetThroughputMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For provisioned feature groups with online store enabled, this indicates the
     * read throughput you are billed for and can consume without throttling. </p>
     */
    inline int GetProvisionedReadCapacityUnits() const { return m_provisionedReadCapacityUnits; }
    inline bool ProvisionedReadCapacityUnitsHasBeenSet() const { return m_provisionedReadCapacityUnitsHasBeenSet; }
    inline void SetProvisionedReadCapacityUnits(int value) { m_provisionedReadCapacityUnitsHasBeenSet = true; m_provisionedReadCapacityUnits = value; }
    inline ThroughputConfigUpdate& WithProvisionedReadCapacityUnits(int value) { SetProvisionedReadCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For provisioned feature groups, this indicates the write throughput you are
     * billed for and can consume without throttling. </p>
     */
    inline int GetProvisionedWriteCapacityUnits() const { return m_provisionedWriteCapacityUnits; }
    inline bool ProvisionedWriteCapacityUnitsHasBeenSet() const { return m_provisionedWriteCapacityUnitsHasBeenSet; }
    inline void SetProvisionedWriteCapacityUnits(int value) { m_provisionedWriteCapacityUnitsHasBeenSet = true; m_provisionedWriteCapacityUnits = value; }
    inline ThroughputConfigUpdate& WithProvisionedWriteCapacityUnits(int value) { SetProvisionedWriteCapacityUnits(value); return *this;}
    ///@}
  private:

    ThroughputMode m_throughputMode{ThroughputMode::NOT_SET};
    bool m_throughputModeHasBeenSet = false;

    int m_provisionedReadCapacityUnits{0};
    bool m_provisionedReadCapacityUnitsHasBeenSet = false;

    int m_provisionedWriteCapacityUnits{0};
    bool m_provisionedWriteCapacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
