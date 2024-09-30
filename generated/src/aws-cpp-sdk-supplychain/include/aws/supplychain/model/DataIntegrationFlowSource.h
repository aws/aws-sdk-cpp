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
    AWS_SUPPLYCHAIN_API DataIntegrationFlowSource();
    AWS_SUPPLYCHAIN_API DataIntegrationFlowSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DataIntegrationFlow source type.</p>
     */
    inline const DataIntegrationFlowSourceType& GetSourceType() const{ return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(const DataIntegrationFlowSourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline void SetSourceType(DataIntegrationFlowSourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }
    inline DataIntegrationFlowSource& WithSourceType(const DataIntegrationFlowSourceType& value) { SetSourceType(value); return *this;}
    inline DataIntegrationFlowSource& WithSourceType(DataIntegrationFlowSourceType&& value) { SetSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DataIntegrationFlow source name that can be used as table alias in SQL
     * transformation query.</p>
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }
    inline DataIntegrationFlowSource& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}
    inline DataIntegrationFlowSource& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}
    inline DataIntegrationFlowSource& WithSourceName(const char* value) { SetSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 DataIntegrationFlow source.</p>
     */
    inline const DataIntegrationFlowS3SourceConfiguration& GetS3Source() const{ return m_s3Source; }
    inline bool S3SourceHasBeenSet() const { return m_s3SourceHasBeenSet; }
    inline void SetS3Source(const DataIntegrationFlowS3SourceConfiguration& value) { m_s3SourceHasBeenSet = true; m_s3Source = value; }
    inline void SetS3Source(DataIntegrationFlowS3SourceConfiguration&& value) { m_s3SourceHasBeenSet = true; m_s3Source = std::move(value); }
    inline DataIntegrationFlowSource& WithS3Source(const DataIntegrationFlowS3SourceConfiguration& value) { SetS3Source(value); return *this;}
    inline DataIntegrationFlowSource& WithS3Source(DataIntegrationFlowS3SourceConfiguration&& value) { SetS3Source(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset DataIntegrationFlow source.</p>
     */
    inline const DataIntegrationFlowDatasetSourceConfiguration& GetDatasetSource() const{ return m_datasetSource; }
    inline bool DatasetSourceHasBeenSet() const { return m_datasetSourceHasBeenSet; }
    inline void SetDatasetSource(const DataIntegrationFlowDatasetSourceConfiguration& value) { m_datasetSourceHasBeenSet = true; m_datasetSource = value; }
    inline void SetDatasetSource(DataIntegrationFlowDatasetSourceConfiguration&& value) { m_datasetSourceHasBeenSet = true; m_datasetSource = std::move(value); }
    inline DataIntegrationFlowSource& WithDatasetSource(const DataIntegrationFlowDatasetSourceConfiguration& value) { SetDatasetSource(value); return *this;}
    inline DataIntegrationFlowSource& WithDatasetSource(DataIntegrationFlowDatasetSourceConfiguration&& value) { SetDatasetSource(std::move(value)); return *this;}
    ///@}
  private:

    DataIntegrationFlowSourceType m_sourceType;
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
