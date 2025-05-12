/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/DataIntegrationFlowLoadType.h>
#include <aws/supplychain/model/DataIntegrationFlowDedupeStrategy.h>
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
   * <p>The dataset options used in dataset source and target
   * configurations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationFlowDatasetOptions">AWS
   * API Reference</a></p>
   */
  class DataIntegrationFlowDatasetOptions
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationFlowDatasetOptions() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationFlowDatasetOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationFlowDatasetOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target dataset's data load type. This only affects how source S3 files
     * are selected in the S3-to-dataset flow.</p> <ul> <li> <p> <b>REPLACE</b> -
     * Target dataset will get replaced with the new file added under the source s3
     * prefix.</p> </li> <li> <p> <b>INCREMENTAL</b> - Target dataset will get updated
     * with the up-to-date content under S3 prefix incorporating any file additions or
     * removals there.</p> </li> </ul>
     */
    inline DataIntegrationFlowLoadType GetLoadType() const { return m_loadType; }
    inline bool LoadTypeHasBeenSet() const { return m_loadTypeHasBeenSet; }
    inline void SetLoadType(DataIntegrationFlowLoadType value) { m_loadTypeHasBeenSet = true; m_loadType = value; }
    inline DataIntegrationFlowDatasetOptions& WithLoadType(DataIntegrationFlowLoadType value) { SetLoadType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option to perform deduplication on data records sharing same primary key
     * values. If disabled, transformed data with duplicate primary key values will
     * ingest into dataset, for datasets within <b>asc</b> namespace, such duplicates
     * will cause ingestion fail. If enabled without dedupeStrategy, deduplication is
     * done by retaining a random data record among those sharing the same primary key
     * values. If enabled with dedupeStragtegy, the deduplication is done following the
     * strategy.</p> <p>Note that target dataset may have partition configured, when
     * dedupe is enabled, it only dedupe against primary keys and retain only one
     * record out of those duplicates regardless of its partition status.</p>
     */
    inline bool GetDedupeRecords() const { return m_dedupeRecords; }
    inline bool DedupeRecordsHasBeenSet() const { return m_dedupeRecordsHasBeenSet; }
    inline void SetDedupeRecords(bool value) { m_dedupeRecordsHasBeenSet = true; m_dedupeRecords = value; }
    inline DataIntegrationFlowDatasetOptions& WithDedupeRecords(bool value) { SetDedupeRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deduplication strategy to dedupe the data records sharing same primary
     * key values of the target dataset. This strategy only applies to target dataset
     * with primary keys and with dedupeRecords option enabled. If transformed data
     * still got duplicates after the dedupeStrategy evaluation, a random data record
     * is chosen to be retained.</p>
     */
    inline const DataIntegrationFlowDedupeStrategy& GetDedupeStrategy() const { return m_dedupeStrategy; }
    inline bool DedupeStrategyHasBeenSet() const { return m_dedupeStrategyHasBeenSet; }
    template<typename DedupeStrategyT = DataIntegrationFlowDedupeStrategy>
    void SetDedupeStrategy(DedupeStrategyT&& value) { m_dedupeStrategyHasBeenSet = true; m_dedupeStrategy = std::forward<DedupeStrategyT>(value); }
    template<typename DedupeStrategyT = DataIntegrationFlowDedupeStrategy>
    DataIntegrationFlowDatasetOptions& WithDedupeStrategy(DedupeStrategyT&& value) { SetDedupeStrategy(std::forward<DedupeStrategyT>(value)); return *this;}
    ///@}
  private:

    DataIntegrationFlowLoadType m_loadType{DataIntegrationFlowLoadType::NOT_SET};
    bool m_loadTypeHasBeenSet = false;

    bool m_dedupeRecords{false};
    bool m_dedupeRecordsHasBeenSet = false;

    DataIntegrationFlowDedupeStrategy m_dedupeStrategy;
    bool m_dedupeStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
