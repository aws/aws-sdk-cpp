/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeRequest.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/sagemaker-featurestore-runtime/model/FeatureValue.h>
#include <aws/sagemaker-featurestore-runtime/model/TargetStore.h>
#include <aws/sagemaker-featurestore-runtime/model/TtlDuration.h>

#include <utility>

namespace Aws {
namespace SageMakerFeatureStoreRuntime {
namespace Model {

/**
 */
class UpdateRecordRequest : public SageMakerFeatureStoreRuntimeRequest {
 public:
  AWS_SAGEMAKERFEATURESTORERUNTIME_API UpdateRecordRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateRecord"; }

  AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier for the feature group that contains the record to update. You
   * can specify one of the following:</p> <ul> <li> <p>The feature group name.</p>
   * </li> <li> <p>The feature group Amazon Resource Name (ARN).</p> </li> </ul>
   */
  inline const Aws::String& GetFeatureGroupName() const { return m_featureGroupName; }
  inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }
  template <typename FeatureGroupNameT = Aws::String>
  void SetFeatureGroupName(FeatureGroupNameT&& value) {
    m_featureGroupNameHasBeenSet = true;
    m_featureGroupName = std::forward<FeatureGroupNameT>(value);
  }
  template <typename FeatureGroupNameT = Aws::String>
  UpdateRecordRequest& WithFeatureGroupName(FeatureGroupNameT&& value) {
    SetFeatureGroupName(std::forward<FeatureGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value that uniquely identifies the record in the feature group. This must
   * match the value defined by the feature group's record identifier feature.</p>
   */
  inline const Aws::String& GetRecordIdentifierValueAsString() const { return m_recordIdentifierValueAsString; }
  inline bool RecordIdentifierValueAsStringHasBeenSet() const { return m_recordIdentifierValueAsStringHasBeenSet; }
  template <typename RecordIdentifierValueAsStringT = Aws::String>
  void SetRecordIdentifierValueAsString(RecordIdentifierValueAsStringT&& value) {
    m_recordIdentifierValueAsStringHasBeenSet = true;
    m_recordIdentifierValueAsString = std::forward<RecordIdentifierValueAsStringT>(value);
  }
  template <typename RecordIdentifierValueAsStringT = Aws::String>
  UpdateRecordRequest& WithRecordIdentifierValueAsString(RecordIdentifierValueAsStringT&& value) {
    SetRecordIdentifierValueAsString(std::forward<RecordIdentifierValueAsStringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The feature values to write to the record.</p>
   */
  inline const Aws::Vector<FeatureValue>& GetFeatures() const { return m_features; }
  inline bool FeaturesHasBeenSet() const { return m_featuresHasBeenSet; }
  template <typename FeaturesT = Aws::Vector<FeatureValue>>
  void SetFeatures(FeaturesT&& value) {
    m_featuresHasBeenSet = true;
    m_features = std::forward<FeaturesT>(value);
  }
  template <typename FeaturesT = Aws::Vector<FeatureValue>>
  UpdateRecordRequest& WithFeatures(FeaturesT&& value) {
    SetFeatures(std::forward<FeaturesT>(value));
    return *this;
  }
  template <typename FeaturesT = FeatureValue>
  UpdateRecordRequest& AddFeatures(FeaturesT&& value) {
    m_featuresHasBeenSet = true;
    m_features.emplace_back(std::forward<FeaturesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target stores for the record update. By default, Amazon SageMaker Feature
   * Store updates the record in all stores associated with the
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
  UpdateRecordRequest& WithTargetStores(TargetStoresT&& value) {
    SetTargetStores(std::forward<TargetStoresT>(value));
    return *this;
  }
  inline UpdateRecordRequest& AddTargetStores(TargetStore value) {
    m_targetStoresHasBeenSet = true;
    m_targetStores.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time-to-live (TTL) duration for the record. Amazon SageMaker Feature
   * Store deletes the record when <code>EventTime</code> + <code>TtlDuration</code>
   * elapses. If you omit this parameter, the record's existing TTL setting remains
   * unchanged. For information about <code>HardDelete</code>, see the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_DeleteRecord.html">DeleteRecord</a>
   * operation in the Amazon SageMaker API Reference.</p>
   */
  inline const TtlDuration& GetTtlDuration() const { return m_ttlDuration; }
  inline bool TtlDurationHasBeenSet() const { return m_ttlDurationHasBeenSet; }
  template <typename TtlDurationT = TtlDuration>
  void SetTtlDuration(TtlDurationT&& value) {
    m_ttlDurationHasBeenSet = true;
    m_ttlDuration = std::forward<TtlDurationT>(value);
  }
  template <typename TtlDurationT = TtlDuration>
  UpdateRecordRequest& WithTtlDuration(TtlDurationT&& value) {
    SetTtlDuration(std::forward<TtlDurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_featureGroupName;

  Aws::String m_recordIdentifierValueAsString;

  Aws::Vector<FeatureValue> m_features;

  Aws::Vector<TargetStore> m_targetStores;

  TtlDuration m_ttlDuration;
  bool m_featureGroupNameHasBeenSet = false;
  bool m_recordIdentifierValueAsStringHasBeenSet = false;
  bool m_featuresHasBeenSet = false;
  bool m_targetStoresHasBeenSet = false;
  bool m_ttlDurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws
