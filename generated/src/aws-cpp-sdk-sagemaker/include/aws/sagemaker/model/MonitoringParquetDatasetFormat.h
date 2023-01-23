/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
   * <p>Represents the Parquet dataset format used when running a monitoring
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringParquetDatasetFormat">AWS
   * API Reference</a></p>
   */
  class MonitoringParquetDatasetFormat
  {
  public:
    AWS_SAGEMAKER_API MonitoringParquetDatasetFormat();
    AWS_SAGEMAKER_API MonitoringParquetDatasetFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringParquetDatasetFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
