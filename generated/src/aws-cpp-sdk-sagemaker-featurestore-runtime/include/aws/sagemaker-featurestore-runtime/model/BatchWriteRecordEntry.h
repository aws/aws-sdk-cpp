/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/sagemaker-featurestore-runtime/model/FeatureValue.h>
#include <aws/sagemaker-featurestore-runtime/model/TargetStore.h>
#include <aws/sagemaker-featurestore-runtime/model/TtlDuration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMakerFeatureStoreRuntime {
namespace Model {

/**
 * <p>An entry to write as part of a <code>BatchWriteRecord</code>
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-featurestore-runtime-2020-07-01/BatchWriteRecordEntry">AWS
 * API Reference</a></p>
 */
class BatchWriteRecordEntry {
 public:
  AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchWriteRecordEntry() = default;
  AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchWriteRecordEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERFEATURESTORERUNTIME_API BatchWriteRecordEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of the <code>FeatureGroup</code> to
   * write the record to.</p>
   */
  inline const Aws::String& GetFeatureGroupName() const { return m_featureGroupName; }
  inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }
  template <typename FeatureGroupNameT = Aws::String>
  void SetFeatureGroupName(FeatureGroupNameT&& value) {
    m_featureGroupNameHasBeenSet = true;
    m_featureGroupName = std::forward<FeatureGroupNameT>(value);
  }
  template <typename FeatureGroupNameT = Aws::String>
  BatchWriteRecordEntry& WithFeatureGroupName(FeatureGroupNameT&& value) {
    SetFeatureGroupName(std::forward<FeatureGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of FeatureValues to be inserted. This will be a full over-write.</p>
   */
  inline const Aws::Vector<FeatureValue>& GetRecord() const { return m_record; }
  inline bool RecordHasBeenSet() const { return m_recordHasBeenSet; }
  template <typename RecordT = Aws::Vector<FeatureValue>>
  void SetRecord(RecordT&& value) {
    m_recordHasBeenSet = true;
    m_record = std::forward<RecordT>(value);
  }
  template <typename RecordT = Aws::Vector<FeatureValue>>
  BatchWriteRecordEntry& WithRecord(RecordT&& value) {
    SetRecord(std::forward<RecordT>(value));
    return *this;
  }
  template <typename RecordT = FeatureValue>
  BatchWriteRecordEntry& AddRecord(RecordT&& value) {
    m_recordHasBeenSet = true;
    m_record.emplace_back(std::forward<RecordT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of stores to which you're adding the record. By default, Feature Store
   * adds the record to all of the stores that you're using for the
   * <code>FeatureGroup</code>.</p>
   */
  inline const Aws::Vector<TargetStore>& GetTargetStores() const { return m_targetStores; }
  inline bool TargetStoresHasBeenSet() const { return m_targetStoresHasBeenSet; }
  template <typename TargetStoresT = Aws::Vector<TargetStore>>
  void SetTargetStores(TargetStoresT&& value) {
    m_targetStoresHasBeenSet = true;
    m_targetStores = std::forward<TargetStoresT>(value);
  }
  template <typename TargetStoresT = Aws::Vector<TargetStore>>
  BatchWriteRecordEntry& WithTargetStores(TargetStoresT&& value) {
    SetTargetStores(std::forward<TargetStoresT>(value));
    return *this;
  }
  inline BatchWriteRecordEntry& AddTargetStores(TargetStore value) {
    m_targetStoresHasBeenSet = true;
    m_targetStores.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time to live duration for this entry, where the record is hard deleted after
   * the expiration time is reached; <code>ExpiresAt</code> = <code>EventTime</code>
   * + <code>TtlDuration</code>. This overrides the request level
   * <code>TtlDuration</code>.</p>
   */
  inline const TtlDuration& GetTtlDuration() const { return m_ttlDuration; }
  inline bool TtlDurationHasBeenSet() const { return m_ttlDurationHasBeenSet; }
  template <typename TtlDurationT = TtlDuration>
  void SetTtlDuration(TtlDurationT&& value) {
    m_ttlDurationHasBeenSet = true;
    m_ttlDuration = std::forward<TtlDurationT>(value);
  }
  template <typename TtlDurationT = TtlDuration>
  BatchWriteRecordEntry& WithTtlDuration(TtlDurationT&& value) {
    SetTtlDuration(std::forward<TtlDurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_featureGroupName;

  Aws::Vector<FeatureValue> m_record;

  Aws::Vector<TargetStore> m_targetStores;

  TtlDuration m_ttlDuration;
  bool m_featureGroupNameHasBeenSet = false;
  bool m_recordHasBeenSet = false;
  bool m_targetStoresHasBeenSet = false;
  bool m_ttlDurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws
