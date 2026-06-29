/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeRequest.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/sagemaker-featurestore-runtime/model/BatchWriteRecordEntry.h>
#include <aws/sagemaker-featurestore-runtime/model/TtlDuration.h>

#include <utility>

namespace Aws {
namespace SageMakerFeatureStoreRuntime {
namespace Model {

/**
 */
class BatchWriteRecordRequest : public SageMakerFeatureStoreRuntimeRequest {
 public:
  AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchWriteRecordRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchWriteRecord"; }

  AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A list of records to write. Each entry specifies the
   * <code>FeatureGroup</code>, the record data, and optionally target stores and a
   * TTL duration.</p>
   */
  inline const Aws::Vector<BatchWriteRecordEntry>& GetEntries() const { return m_entries; }
  inline bool EntriesHasBeenSet() const { return m_entriesHasBeenSet; }
  template <typename EntriesT = Aws::Vector<BatchWriteRecordEntry>>
  void SetEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries = std::forward<EntriesT>(value);
  }
  template <typename EntriesT = Aws::Vector<BatchWriteRecordEntry>>
  BatchWriteRecordRequest& WithEntries(EntriesT&& value) {
    SetEntries(std::forward<EntriesT>(value));
    return *this;
  }
  template <typename EntriesT = BatchWriteRecordEntry>
  BatchWriteRecordRequest& AddEntries(EntriesT&& value) {
    m_entriesHasBeenSet = true;
    m_entries.emplace_back(std::forward<EntriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time to live duration applied to all entries in the batch that do not specify
   * their own <code>TtlDuration</code>; <code>ExpiresAt</code> =
   * <code>EventTime</code> + <code>TtlDuration</code>. For information on
   * HardDelete, see the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_DeleteRecord.html">DeleteRecord</a>
   * API in the Amazon SageMaker API Reference guide.</p>
   */
  inline const TtlDuration& GetTtlDuration() const { return m_ttlDuration; }
  inline bool TtlDurationHasBeenSet() const { return m_ttlDurationHasBeenSet; }
  template <typename TtlDurationT = TtlDuration>
  void SetTtlDuration(TtlDurationT&& value) {
    m_ttlDurationHasBeenSet = true;
    m_ttlDuration = std::forward<TtlDurationT>(value);
  }
  template <typename TtlDurationT = TtlDuration>
  BatchWriteRecordRequest& WithTtlDuration(TtlDurationT&& value) {
    SetTtlDuration(std::forward<TtlDurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<BatchWriteRecordEntry> m_entries;

  TtlDuration m_ttlDuration;
  bool m_entriesHasBeenSet = false;
  bool m_ttlDurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws
