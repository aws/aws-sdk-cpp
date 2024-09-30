/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/DataIntegrationFlowTargetType.h>
#include <aws/supplychain/model/DataIntegrationFlowS3TargetConfiguration.h>
#include <aws/supplychain/model/DataIntegrationFlowDatasetTargetConfiguration.h>
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
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The DataIntegrationFlow target parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationFlowTarget">AWS
   * API Reference</a></p>
   */
  class DataIntegrationFlowTarget
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationFlowTarget();
    AWS_SUPPLYCHAIN_API DataIntegrationFlowTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DataIntegrationFlow target type.</p>
     */
    inline const DataIntegrationFlowTargetType& GetTargetType() const{ return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(const DataIntegrationFlowTargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline void SetTargetType(DataIntegrationFlowTargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }
    inline DataIntegrationFlowTarget& WithTargetType(const DataIntegrationFlowTargetType& value) { SetTargetType(value); return *this;}
    inline DataIntegrationFlowTarget& WithTargetType(DataIntegrationFlowTargetType&& value) { SetTargetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 DataIntegrationFlow target.</p>
     */
    inline const DataIntegrationFlowS3TargetConfiguration& GetS3Target() const{ return m_s3Target; }
    inline bool S3TargetHasBeenSet() const { return m_s3TargetHasBeenSet; }
    inline void SetS3Target(const DataIntegrationFlowS3TargetConfiguration& value) { m_s3TargetHasBeenSet = true; m_s3Target = value; }
    inline void SetS3Target(DataIntegrationFlowS3TargetConfiguration&& value) { m_s3TargetHasBeenSet = true; m_s3Target = std::move(value); }
    inline DataIntegrationFlowTarget& WithS3Target(const DataIntegrationFlowS3TargetConfiguration& value) { SetS3Target(value); return *this;}
    inline DataIntegrationFlowTarget& WithS3Target(DataIntegrationFlowS3TargetConfiguration&& value) { SetS3Target(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset DataIntegrationFlow target.</p>
     */
    inline const DataIntegrationFlowDatasetTargetConfiguration& GetDatasetTarget() const{ return m_datasetTarget; }
    inline bool DatasetTargetHasBeenSet() const { return m_datasetTargetHasBeenSet; }
    inline void SetDatasetTarget(const DataIntegrationFlowDatasetTargetConfiguration& value) { m_datasetTargetHasBeenSet = true; m_datasetTarget = value; }
    inline void SetDatasetTarget(DataIntegrationFlowDatasetTargetConfiguration&& value) { m_datasetTargetHasBeenSet = true; m_datasetTarget = std::move(value); }
    inline DataIntegrationFlowTarget& WithDatasetTarget(const DataIntegrationFlowDatasetTargetConfiguration& value) { SetDatasetTarget(value); return *this;}
    inline DataIntegrationFlowTarget& WithDatasetTarget(DataIntegrationFlowDatasetTargetConfiguration&& value) { SetDatasetTarget(std::move(value)); return *this;}
    ///@}
  private:

    DataIntegrationFlowTargetType m_targetType;
    bool m_targetTypeHasBeenSet = false;

    DataIntegrationFlowS3TargetConfiguration m_s3Target;
    bool m_s3TargetHasBeenSet = false;

    DataIntegrationFlowDatasetTargetConfiguration m_datasetTarget;
    bool m_datasetTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
