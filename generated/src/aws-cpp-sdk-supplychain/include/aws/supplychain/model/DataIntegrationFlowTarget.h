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
    AWS_SUPPLYCHAIN_API DataIntegrationFlowTarget() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationFlowTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DataIntegrationFlow target type.</p>
     */
    inline DataIntegrationFlowTargetType GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(DataIntegrationFlowTargetType value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline DataIntegrationFlowTarget& WithTargetType(DataIntegrationFlowTargetType value) { SetTargetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 DataIntegrationFlow target.</p>
     */
    inline const DataIntegrationFlowS3TargetConfiguration& GetS3Target() const { return m_s3Target; }
    inline bool S3TargetHasBeenSet() const { return m_s3TargetHasBeenSet; }
    template<typename S3TargetT = DataIntegrationFlowS3TargetConfiguration>
    void SetS3Target(S3TargetT&& value) { m_s3TargetHasBeenSet = true; m_s3Target = std::forward<S3TargetT>(value); }
    template<typename S3TargetT = DataIntegrationFlowS3TargetConfiguration>
    DataIntegrationFlowTarget& WithS3Target(S3TargetT&& value) { SetS3Target(std::forward<S3TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset DataIntegrationFlow target. Note that for AWS Supply Chain
     * dataset under <b>asc</b> namespace, it has a connection_id internal field that
     * is not allowed to be provided by client directly, they will be auto
     * populated.</p>
     */
    inline const DataIntegrationFlowDatasetTargetConfiguration& GetDatasetTarget() const { return m_datasetTarget; }
    inline bool DatasetTargetHasBeenSet() const { return m_datasetTargetHasBeenSet; }
    template<typename DatasetTargetT = DataIntegrationFlowDatasetTargetConfiguration>
    void SetDatasetTarget(DatasetTargetT&& value) { m_datasetTargetHasBeenSet = true; m_datasetTarget = std::forward<DatasetTargetT>(value); }
    template<typename DatasetTargetT = DataIntegrationFlowDatasetTargetConfiguration>
    DataIntegrationFlowTarget& WithDatasetTarget(DatasetTargetT&& value) { SetDatasetTarget(std::forward<DatasetTargetT>(value)); return *this;}
    ///@}
  private:

    DataIntegrationFlowTargetType m_targetType{DataIntegrationFlowTargetType::NOT_SET};
    bool m_targetTypeHasBeenSet = false;

    DataIntegrationFlowS3TargetConfiguration m_s3Target;
    bool m_s3TargetHasBeenSet = false;

    DataIntegrationFlowDatasetTargetConfiguration m_datasetTarget;
    bool m_datasetTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
