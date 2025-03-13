/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-featurestore-runtime/model/DeletionMode.h>
#include <aws/sagemaker-featurestore-runtime/model/TargetStore.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SageMakerFeatureStoreRuntime
{
namespace Model
{

  /**
   */
  class DeleteRecordRequest : public SageMakerFeatureStoreRuntimeRequest
  {
  public:
    AWS_SAGEMAKERFEATURESTORERUNTIME_API DeleteRecordRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRecord"; }

    AWS_SAGEMAKERFEATURESTORERUNTIME_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKERFEATURESTORERUNTIME_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the feature group to delete the
     * record from. </p>
     */
    inline const Aws::String& GetFeatureGroupName() const { return m_featureGroupName; }
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }
    template<typename FeatureGroupNameT = Aws::String>
    void SetFeatureGroupName(FeatureGroupNameT&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::forward<FeatureGroupNameT>(value); }
    template<typename FeatureGroupNameT = Aws::String>
    DeleteRecordRequest& WithFeatureGroupName(FeatureGroupNameT&& value) { SetFeatureGroupName(std::forward<FeatureGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the <code>RecordIdentifier</code> that uniquely identifies the
     * record, in string format. </p>
     */
    inline const Aws::String& GetRecordIdentifierValueAsString() const { return m_recordIdentifierValueAsString; }
    inline bool RecordIdentifierValueAsStringHasBeenSet() const { return m_recordIdentifierValueAsStringHasBeenSet; }
    template<typename RecordIdentifierValueAsStringT = Aws::String>
    void SetRecordIdentifierValueAsString(RecordIdentifierValueAsStringT&& value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString = std::forward<RecordIdentifierValueAsStringT>(value); }
    template<typename RecordIdentifierValueAsStringT = Aws::String>
    DeleteRecordRequest& WithRecordIdentifierValueAsString(RecordIdentifierValueAsStringT&& value) { SetRecordIdentifierValueAsString(std::forward<RecordIdentifierValueAsStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp indicating when the deletion event occurred. <code>EventTime</code>
     * can be used to query data at a certain point in time.</p>
     */
    inline const Aws::String& GetEventTime() const { return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    template<typename EventTimeT = Aws::String>
    void SetEventTime(EventTimeT&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::forward<EventTimeT>(value); }
    template<typename EventTimeT = Aws::String>
    DeleteRecordRequest& WithEventTime(EventTimeT&& value) { SetEventTime(std::forward<EventTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of stores from which you're deleting the record. By default, Feature
     * Store deletes the record from all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline const Aws::Vector<TargetStore>& GetTargetStores() const { return m_targetStores; }
    inline bool TargetStoresHasBeenSet() const { return m_targetStoresHasBeenSet; }
    template<typename TargetStoresT = Aws::Vector<TargetStore>>
    void SetTargetStores(TargetStoresT&& value) { m_targetStoresHasBeenSet = true; m_targetStores = std::forward<TargetStoresT>(value); }
    template<typename TargetStoresT = Aws::Vector<TargetStore>>
    DeleteRecordRequest& WithTargetStores(TargetStoresT&& value) { SetTargetStores(std::forward<TargetStoresT>(value)); return *this;}
    inline DeleteRecordRequest& AddTargetStores(TargetStore value) { m_targetStoresHasBeenSet = true; m_targetStores.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the deletion mode for deleting the record. By default, the
     * deletion mode is set to <code>SoftDelete</code>.</p>
     */
    inline DeletionMode GetDeletionMode() const { return m_deletionMode; }
    inline bool DeletionModeHasBeenSet() const { return m_deletionModeHasBeenSet; }
    inline void SetDeletionMode(DeletionMode value) { m_deletionModeHasBeenSet = true; m_deletionMode = value; }
    inline DeleteRecordRequest& WithDeletionMode(DeletionMode value) { SetDeletionMode(value); return *this;}
    ///@}
  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::String m_recordIdentifierValueAsString;
    bool m_recordIdentifierValueAsStringHasBeenSet = false;

    Aws::String m_eventTime;
    bool m_eventTimeHasBeenSet = false;

    Aws::Vector<TargetStore> m_targetStores;
    bool m_targetStoresHasBeenSet = false;

    DeletionMode m_deletionMode{DeletionMode::NOT_SET};
    bool m_deletionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
