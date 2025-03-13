/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-featurestore-runtime/model/TtlDuration.h>
#include <aws/sagemaker-featurestore-runtime/model/FeatureValue.h>
#include <aws/sagemaker-featurestore-runtime/model/TargetStore.h>
#include <utility>

namespace Aws
{
namespace SageMakerFeatureStoreRuntime
{
namespace Model
{

  /**
   */
  class PutRecordRequest : public SageMakerFeatureStoreRuntimeRequest
  {
  public:
    AWS_SAGEMAKERFEATURESTORERUNTIME_API PutRecordRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRecord"; }

    AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the feature group that you want to
     * insert the record into.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const { return m_featureGroupName; }
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }
    template<typename FeatureGroupNameT = Aws::String>
    void SetFeatureGroupName(FeatureGroupNameT&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::forward<FeatureGroupNameT>(value); }
    template<typename FeatureGroupNameT = Aws::String>
    PutRecordRequest& WithFeatureGroupName(FeatureGroupNameT&& value) { SetFeatureGroupName(std::forward<FeatureGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of FeatureValues to be inserted. This will be a full over-write. If you
     * only want to update few of the feature values, do the following:</p> <ul> <li>
     * <p>Use <code>GetRecord</code> to retrieve the latest record.</p> </li> <li>
     * <p>Update the record returned from <code>GetRecord</code>. </p> </li> <li>
     * <p>Use <code>PutRecord</code> to update feature values.</p> </li> </ul>
     */
    inline const Aws::Vector<FeatureValue>& GetRecord() const { return m_record; }
    inline bool RecordHasBeenSet() const { return m_recordHasBeenSet; }
    template<typename RecordT = Aws::Vector<FeatureValue>>
    void SetRecord(RecordT&& value) { m_recordHasBeenSet = true; m_record = std::forward<RecordT>(value); }
    template<typename RecordT = Aws::Vector<FeatureValue>>
    PutRecordRequest& WithRecord(RecordT&& value) { SetRecord(std::forward<RecordT>(value)); return *this;}
    template<typename RecordT = FeatureValue>
    PutRecordRequest& AddRecord(RecordT&& value) { m_recordHasBeenSet = true; m_record.emplace_back(std::forward<RecordT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of stores to which you're adding the record. By default, Feature Store
     * adds the record to all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline const Aws::Vector<TargetStore>& GetTargetStores() const { return m_targetStores; }
    inline bool TargetStoresHasBeenSet() const { return m_targetStoresHasBeenSet; }
    template<typename TargetStoresT = Aws::Vector<TargetStore>>
    void SetTargetStores(TargetStoresT&& value) { m_targetStoresHasBeenSet = true; m_targetStores = std::forward<TargetStoresT>(value); }
    template<typename TargetStoresT = Aws::Vector<TargetStore>>
    PutRecordRequest& WithTargetStores(TargetStoresT&& value) { SetTargetStores(std::forward<TargetStoresT>(value)); return *this;}
    inline PutRecordRequest& AddTargetStores(TargetStore value) { m_targetStoresHasBeenSet = true; m_targetStores.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Time to live duration, where the record is hard deleted after the expiration
     * time is reached; <code>ExpiresAt</code> = <code>EventTime</code> +
     * <code>TtlDuration</code>. For information on HardDelete, see the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_feature_store_DeleteRecord.html">DeleteRecord</a>
     * API in the Amazon SageMaker API Reference guide.</p>
     */
    inline const TtlDuration& GetTtlDuration() const { return m_ttlDuration; }
    inline bool TtlDurationHasBeenSet() const { return m_ttlDurationHasBeenSet; }
    template<typename TtlDurationT = TtlDuration>
    void SetTtlDuration(TtlDurationT&& value) { m_ttlDurationHasBeenSet = true; m_ttlDuration = std::forward<TtlDurationT>(value); }
    template<typename TtlDurationT = TtlDuration>
    PutRecordRequest& WithTtlDuration(TtlDurationT&& value) { SetTtlDuration(std::forward<TtlDurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::Vector<FeatureValue> m_record;
    bool m_recordHasBeenSet = false;

    Aws::Vector<TargetStore> m_targetStores;
    bool m_targetStoresHasBeenSet = false;

    TtlDuration m_ttlDuration;
    bool m_ttlDurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
