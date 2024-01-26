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
   * <p>Active throughput configuration of the feature group. There are two modes:
   * <code>ON_DEMAND</code> and <code>PROVISIONED</code>. With on-demand mode, you
   * are charged for data reads and writes that your application performs on your
   * feature group. You do not need to specify read and write throughput because
   * Feature Store accommodates your workloads as they ramp up and down. You can
   * switch a feature group to on-demand only once in a 24 hour period. With
   * provisioned throughput mode, you specify the read and write capacity per second
   * that you expect your application to require, and you are billed based on those
   * limits. Exceeding provisioned throughput will result in your requests being
   * throttled. </p> <p>Note: <code>PROVISIONED</code> throughput mode is supported
   * only for feature groups that are offline-only, or use the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_OnlineStoreConfig.html#sagemaker-Type-OnlineStoreConfig-StorageType">
   * <code>Standard</code> </a> tier online store. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ThroughputConfigDescription">AWS
   * API Reference</a></p>
   */
  class ThroughputConfigDescription
  {
  public:
    AWS_SAGEMAKER_API ThroughputConfigDescription();
    AWS_SAGEMAKER_API ThroughputConfigDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ThroughputConfigDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The mode used for your feature group throughput: <code>ON_DEMAND</code> or
     * <code>PROVISIONED</code>. </p>
     */
    inline const ThroughputMode& GetThroughputMode() const{ return m_throughputMode; }

    /**
     * <p>The mode used for your feature group throughput: <code>ON_DEMAND</code> or
     * <code>PROVISIONED</code>. </p>
     */
    inline bool ThroughputModeHasBeenSet() const { return m_throughputModeHasBeenSet; }

    /**
     * <p>The mode used for your feature group throughput: <code>ON_DEMAND</code> or
     * <code>PROVISIONED</code>. </p>
     */
    inline void SetThroughputMode(const ThroughputMode& value) { m_throughputModeHasBeenSet = true; m_throughputMode = value; }

    /**
     * <p>The mode used for your feature group throughput: <code>ON_DEMAND</code> or
     * <code>PROVISIONED</code>. </p>
     */
    inline void SetThroughputMode(ThroughputMode&& value) { m_throughputModeHasBeenSet = true; m_throughputMode = std::move(value); }

    /**
     * <p>The mode used for your feature group throughput: <code>ON_DEMAND</code> or
     * <code>PROVISIONED</code>. </p>
     */
    inline ThroughputConfigDescription& WithThroughputMode(const ThroughputMode& value) { SetThroughputMode(value); return *this;}

    /**
     * <p>The mode used for your feature group throughput: <code>ON_DEMAND</code> or
     * <code>PROVISIONED</code>. </p>
     */
    inline ThroughputConfigDescription& WithThroughputMode(ThroughputMode&& value) { SetThroughputMode(std::move(value)); return *this;}


    /**
     * <p> For provisioned feature groups with online store enabled, this indicates the
     * read throughput you are billed for and can consume without throttling. </p>
     * <p>This field is not applicable for on-demand feature groups. </p>
     */
    inline int GetProvisionedReadCapacityUnits() const{ return m_provisionedReadCapacityUnits; }

    /**
     * <p> For provisioned feature groups with online store enabled, this indicates the
     * read throughput you are billed for and can consume without throttling. </p>
     * <p>This field is not applicable for on-demand feature groups. </p>
     */
    inline bool ProvisionedReadCapacityUnitsHasBeenSet() const { return m_provisionedReadCapacityUnitsHasBeenSet; }

    /**
     * <p> For provisioned feature groups with online store enabled, this indicates the
     * read throughput you are billed for and can consume without throttling. </p>
     * <p>This field is not applicable for on-demand feature groups. </p>
     */
    inline void SetProvisionedReadCapacityUnits(int value) { m_provisionedReadCapacityUnitsHasBeenSet = true; m_provisionedReadCapacityUnits = value; }

    /**
     * <p> For provisioned feature groups with online store enabled, this indicates the
     * read throughput you are billed for and can consume without throttling. </p>
     * <p>This field is not applicable for on-demand feature groups. </p>
     */
    inline ThroughputConfigDescription& WithProvisionedReadCapacityUnits(int value) { SetProvisionedReadCapacityUnits(value); return *this;}


    /**
     * <p> For provisioned feature groups, this indicates the write throughput you are
     * billed for and can consume without throttling. </p> <p>This field is not
     * applicable for on-demand feature groups. </p>
     */
    inline int GetProvisionedWriteCapacityUnits() const{ return m_provisionedWriteCapacityUnits; }

    /**
     * <p> For provisioned feature groups, this indicates the write throughput you are
     * billed for and can consume without throttling. </p> <p>This field is not
     * applicable for on-demand feature groups. </p>
     */
    inline bool ProvisionedWriteCapacityUnitsHasBeenSet() const { return m_provisionedWriteCapacityUnitsHasBeenSet; }

    /**
     * <p> For provisioned feature groups, this indicates the write throughput you are
     * billed for and can consume without throttling. </p> <p>This field is not
     * applicable for on-demand feature groups. </p>
     */
    inline void SetProvisionedWriteCapacityUnits(int value) { m_provisionedWriteCapacityUnitsHasBeenSet = true; m_provisionedWriteCapacityUnits = value; }

    /**
     * <p> For provisioned feature groups, this indicates the write throughput you are
     * billed for and can consume without throttling. </p> <p>This field is not
     * applicable for on-demand feature groups. </p>
     */
    inline ThroughputConfigDescription& WithProvisionedWriteCapacityUnits(int value) { SetProvisionedWriteCapacityUnits(value); return *this;}

  private:

    ThroughputMode m_throughputMode;
    bool m_throughputModeHasBeenSet = false;

    int m_provisionedReadCapacityUnits;
    bool m_provisionedReadCapacityUnitsHasBeenSet = false;

    int m_provisionedWriteCapacityUnits;
    bool m_provisionedWriteCapacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
