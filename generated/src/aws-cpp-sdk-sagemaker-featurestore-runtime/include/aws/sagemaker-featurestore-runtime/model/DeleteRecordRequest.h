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
    AWS_SAGEMAKERFEATURESTORERUNTIME_API DeleteRecordRequest();

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
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = value; }
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::move(value); }
    inline void SetFeatureGroupName(const char* value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName.assign(value); }
    inline DeleteRecordRequest& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}
    inline DeleteRecordRequest& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}
    inline DeleteRecordRequest& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the <code>RecordIdentifier</code> that uniquely identifies the
     * record, in string format. </p>
     */
    inline const Aws::String& GetRecordIdentifierValueAsString() const{ return m_recordIdentifierValueAsString; }
    inline bool RecordIdentifierValueAsStringHasBeenSet() const { return m_recordIdentifierValueAsStringHasBeenSet; }
    inline void SetRecordIdentifierValueAsString(const Aws::String& value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString = value; }
    inline void SetRecordIdentifierValueAsString(Aws::String&& value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString = std::move(value); }
    inline void SetRecordIdentifierValueAsString(const char* value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString.assign(value); }
    inline DeleteRecordRequest& WithRecordIdentifierValueAsString(const Aws::String& value) { SetRecordIdentifierValueAsString(value); return *this;}
    inline DeleteRecordRequest& WithRecordIdentifierValueAsString(Aws::String&& value) { SetRecordIdentifierValueAsString(std::move(value)); return *this;}
    inline DeleteRecordRequest& WithRecordIdentifierValueAsString(const char* value) { SetRecordIdentifierValueAsString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp indicating when the deletion event occurred. <code>EventTime</code>
     * can be used to query data at a certain point in time.</p>
     */
    inline const Aws::String& GetEventTime() const{ return m_eventTime; }
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }
    inline void SetEventTime(const Aws::String& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }
    inline void SetEventTime(Aws::String&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }
    inline void SetEventTime(const char* value) { m_eventTimeHasBeenSet = true; m_eventTime.assign(value); }
    inline DeleteRecordRequest& WithEventTime(const Aws::String& value) { SetEventTime(value); return *this;}
    inline DeleteRecordRequest& WithEventTime(Aws::String&& value) { SetEventTime(std::move(value)); return *this;}
    inline DeleteRecordRequest& WithEventTime(const char* value) { SetEventTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of stores from which you're deleting the record. By default, Feature
     * Store deletes the record from all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline const Aws::Vector<TargetStore>& GetTargetStores() const{ return m_targetStores; }
    inline bool TargetStoresHasBeenSet() const { return m_targetStoresHasBeenSet; }
    inline void SetTargetStores(const Aws::Vector<TargetStore>& value) { m_targetStoresHasBeenSet = true; m_targetStores = value; }
    inline void SetTargetStores(Aws::Vector<TargetStore>&& value) { m_targetStoresHasBeenSet = true; m_targetStores = std::move(value); }
    inline DeleteRecordRequest& WithTargetStores(const Aws::Vector<TargetStore>& value) { SetTargetStores(value); return *this;}
    inline DeleteRecordRequest& WithTargetStores(Aws::Vector<TargetStore>&& value) { SetTargetStores(std::move(value)); return *this;}
    inline DeleteRecordRequest& AddTargetStores(const TargetStore& value) { m_targetStoresHasBeenSet = true; m_targetStores.push_back(value); return *this; }
    inline DeleteRecordRequest& AddTargetStores(TargetStore&& value) { m_targetStoresHasBeenSet = true; m_targetStores.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the deletion mode for deleting the record. By default, the
     * deletion mode is set to <code>SoftDelete</code>.</p>
     */
    inline const DeletionMode& GetDeletionMode() const{ return m_deletionMode; }
    inline bool DeletionModeHasBeenSet() const { return m_deletionModeHasBeenSet; }
    inline void SetDeletionMode(const DeletionMode& value) { m_deletionModeHasBeenSet = true; m_deletionMode = value; }
    inline void SetDeletionMode(DeletionMode&& value) { m_deletionModeHasBeenSet = true; m_deletionMode = std::move(value); }
    inline DeleteRecordRequest& WithDeletionMode(const DeletionMode& value) { SetDeletionMode(value); return *this;}
    inline DeleteRecordRequest& WithDeletionMode(DeletionMode&& value) { SetDeletionMode(std::move(value)); return *this;}
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

    DeletionMode m_deletionMode;
    bool m_deletionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
