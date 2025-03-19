/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/DataIntegrationFlowSourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/supplychain/model/DataIntegrationFlowS3SourceConfiguration.h>
#include <aws/supplychain/model/DataIntegrationFlowDatasetSourceConfiguration.h>
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
   * <p>The DataIntegrationFlow source parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationFlowSource">AWS
   * API Reference</a></p>
   */
  class DataIntegrationFlowSource
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationFlowSource() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationFlowSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DataIntegrationFlow source type.</p>
     */
    inline DataIntegrationFlowSourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(DataIntegrationFlowSourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline DataIntegrationFlowSource& WithSourceType(DataIntegrationFlowSourceType value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DataIntegrationFlow source name that can be used as table alias in SQL
     * transformation query.</p>
     */
    inline const Aws::String& GetSourceName() const { return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    template<typename SourceNameT = Aws::String>
    void SetSourceName(SourceNameT&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::forward<SourceNameT>(value); }
    template<typename SourceNameT = Aws::String>
    DataIntegrationFlowSource& WithSourceName(SourceNameT&& value) { SetSourceName(std::forward<SourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 DataIntegrationFlow source.</p>
     */
    inline const DataIntegrationFlowS3SourceConfiguration& GetS3Source() const { return m_s3Source; }
    inline bool S3SourceHasBeenSet() const { return m_s3SourceHasBeenSet; }
    template<typename S3SourceT = DataIntegrationFlowS3SourceConfiguration>
    void SetS3Source(S3SourceT&& value) { m_s3SourceHasBeenSet = true; m_s3Source = std::forward<S3SourceT>(value); }
    template<typename S3SourceT = DataIntegrationFlowS3SourceConfiguration>
    DataIntegrationFlowSource& WithS3Source(S3SourceT&& value) { SetS3Source(std::forward<S3SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset DataIntegrationFlow source.</p>
     */
    inline const DataIntegrationFlowDatasetSourceConfiguration& GetDatasetSource() const { return m_datasetSource; }
    inline bool DatasetSourceHasBeenSet() const { return m_datasetSourceHasBeenSet; }
    template<typename DatasetSourceT = DataIntegrationFlowDatasetSourceConfiguration>
    void SetDatasetSource(DatasetSourceT&& value) { m_datasetSourceHasBeenSet = true; m_datasetSource = std::forward<DatasetSourceT>(value); }
    template<typename DatasetSourceT = DataIntegrationFlowDatasetSourceConfiguration>
    DataIntegrationFlowSource& WithDatasetSource(DatasetSourceT&& value) { SetDatasetSource(std::forward<DatasetSourceT>(value)); return *this;}
    ///@}
  private:

    DataIntegrationFlowSourceType m_sourceType{DataIntegrationFlowSourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    DataIntegrationFlowS3SourceConfiguration m_s3Source;
    bool m_s3SourceHasBeenSet = false;

    DataIntegrationFlowDatasetSourceConfiguration m_datasetSource;
    bool m_datasetSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
