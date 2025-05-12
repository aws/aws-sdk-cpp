/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/DataIntegrationFlowSourceType.h>
#include <aws/supplychain/model/DataIntegrationFlowS3Source.h>
#include <aws/supplychain/model/DataIntegrationFlowDatasetSource.h>
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
   * <p>The source information of a flow execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationFlowExecutionSourceInfo">AWS
   * API Reference</a></p>
   */
  class DataIntegrationFlowExecutionSourceInfo
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationFlowExecutionSourceInfo() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationFlowExecutionSourceInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowExecutionSourceInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data integration flow execution source type.</p>
     */
    inline DataIntegrationFlowSourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(DataIntegrationFlowSourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline DataIntegrationFlowExecutionSourceInfo& WithSourceType(DataIntegrationFlowSourceType value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source details of a flow execution with S3 source.</p>
     */
    inline const DataIntegrationFlowS3Source& GetS3Source() const { return m_s3Source; }
    inline bool S3SourceHasBeenSet() const { return m_s3SourceHasBeenSet; }
    template<typename S3SourceT = DataIntegrationFlowS3Source>
    void SetS3Source(S3SourceT&& value) { m_s3SourceHasBeenSet = true; m_s3Source = std::forward<S3SourceT>(value); }
    template<typename S3SourceT = DataIntegrationFlowS3Source>
    DataIntegrationFlowExecutionSourceInfo& WithS3Source(S3SourceT&& value) { SetS3Source(std::forward<S3SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source details of a flow execution with dataset source.</p>
     */
    inline const DataIntegrationFlowDatasetSource& GetDatasetSource() const { return m_datasetSource; }
    inline bool DatasetSourceHasBeenSet() const { return m_datasetSourceHasBeenSet; }
    template<typename DatasetSourceT = DataIntegrationFlowDatasetSource>
    void SetDatasetSource(DatasetSourceT&& value) { m_datasetSourceHasBeenSet = true; m_datasetSource = std::forward<DatasetSourceT>(value); }
    template<typename DatasetSourceT = DataIntegrationFlowDatasetSource>
    DataIntegrationFlowExecutionSourceInfo& WithDatasetSource(DatasetSourceT&& value) { SetDatasetSource(std::forward<DatasetSourceT>(value)); return *this;}
    ///@}
  private:

    DataIntegrationFlowSourceType m_sourceType{DataIntegrationFlowSourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

    DataIntegrationFlowS3Source m_s3Source;
    bool m_s3SourceHasBeenSet = false;

    DataIntegrationFlowDatasetSource m_datasetSource;
    bool m_datasetSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
