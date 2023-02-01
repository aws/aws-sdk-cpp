/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>The name of the feature group to delete the record from. </p>
     */
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }

    /**
     * <p>The name of the feature group to delete the record from. </p>
     */
    inline bool FeatureGroupNameHasBeenSet() const { return m_featureGroupNameHasBeenSet; }

    /**
     * <p>The name of the feature group to delete the record from. </p>
     */
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = value; }

    /**
     * <p>The name of the feature group to delete the record from. </p>
     */
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::move(value); }

    /**
     * <p>The name of the feature group to delete the record from. </p>
     */
    inline void SetFeatureGroupName(const char* value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName.assign(value); }

    /**
     * <p>The name of the feature group to delete the record from. </p>
     */
    inline DeleteRecordRequest& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}

    /**
     * <p>The name of the feature group to delete the record from. </p>
     */
    inline DeleteRecordRequest& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the feature group to delete the record from. </p>
     */
    inline DeleteRecordRequest& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}


    /**
     * <p>The value for the <code>RecordIdentifier</code> that uniquely identifies the
     * record, in string format. </p>
     */
    inline const Aws::String& GetRecordIdentifierValueAsString() const{ return m_recordIdentifierValueAsString; }

    /**
     * <p>The value for the <code>RecordIdentifier</code> that uniquely identifies the
     * record, in string format. </p>
     */
    inline bool RecordIdentifierValueAsStringHasBeenSet() const { return m_recordIdentifierValueAsStringHasBeenSet; }

    /**
     * <p>The value for the <code>RecordIdentifier</code> that uniquely identifies the
     * record, in string format. </p>
     */
    inline void SetRecordIdentifierValueAsString(const Aws::String& value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString = value; }

    /**
     * <p>The value for the <code>RecordIdentifier</code> that uniquely identifies the
     * record, in string format. </p>
     */
    inline void SetRecordIdentifierValueAsString(Aws::String&& value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString = std::move(value); }

    /**
     * <p>The value for the <code>RecordIdentifier</code> that uniquely identifies the
     * record, in string format. </p>
     */
    inline void SetRecordIdentifierValueAsString(const char* value) { m_recordIdentifierValueAsStringHasBeenSet = true; m_recordIdentifierValueAsString.assign(value); }

    /**
     * <p>The value for the <code>RecordIdentifier</code> that uniquely identifies the
     * record, in string format. </p>
     */
    inline DeleteRecordRequest& WithRecordIdentifierValueAsString(const Aws::String& value) { SetRecordIdentifierValueAsString(value); return *this;}

    /**
     * <p>The value for the <code>RecordIdentifier</code> that uniquely identifies the
     * record, in string format. </p>
     */
    inline DeleteRecordRequest& WithRecordIdentifierValueAsString(Aws::String&& value) { SetRecordIdentifierValueAsString(std::move(value)); return *this;}

    /**
     * <p>The value for the <code>RecordIdentifier</code> that uniquely identifies the
     * record, in string format. </p>
     */
    inline DeleteRecordRequest& WithRecordIdentifierValueAsString(const char* value) { SetRecordIdentifierValueAsString(value); return *this;}


    /**
     * <p>Timestamp indicating when the deletion event occurred. <code>EventTime</code>
     * can be used to query data at a certain point in time.</p>
     */
    inline const Aws::String& GetEventTime() const{ return m_eventTime; }

    /**
     * <p>Timestamp indicating when the deletion event occurred. <code>EventTime</code>
     * can be used to query data at a certain point in time.</p>
     */
    inline bool EventTimeHasBeenSet() const { return m_eventTimeHasBeenSet; }

    /**
     * <p>Timestamp indicating when the deletion event occurred. <code>EventTime</code>
     * can be used to query data at a certain point in time.</p>
     */
    inline void SetEventTime(const Aws::String& value) { m_eventTimeHasBeenSet = true; m_eventTime = value; }

    /**
     * <p>Timestamp indicating when the deletion event occurred. <code>EventTime</code>
     * can be used to query data at a certain point in time.</p>
     */
    inline void SetEventTime(Aws::String&& value) { m_eventTimeHasBeenSet = true; m_eventTime = std::move(value); }

    /**
     * <p>Timestamp indicating when the deletion event occurred. <code>EventTime</code>
     * can be used to query data at a certain point in time.</p>
     */
    inline void SetEventTime(const char* value) { m_eventTimeHasBeenSet = true; m_eventTime.assign(value); }

    /**
     * <p>Timestamp indicating when the deletion event occurred. <code>EventTime</code>
     * can be used to query data at a certain point in time.</p>
     */
    inline DeleteRecordRequest& WithEventTime(const Aws::String& value) { SetEventTime(value); return *this;}

    /**
     * <p>Timestamp indicating when the deletion event occurred. <code>EventTime</code>
     * can be used to query data at a certain point in time.</p>
     */
    inline DeleteRecordRequest& WithEventTime(Aws::String&& value) { SetEventTime(std::move(value)); return *this;}

    /**
     * <p>Timestamp indicating when the deletion event occurred. <code>EventTime</code>
     * can be used to query data at a certain point in time.</p>
     */
    inline DeleteRecordRequest& WithEventTime(const char* value) { SetEventTime(value); return *this;}


    /**
     * <p>A list of stores from which you're deleting the record. By default, Feature
     * Store deletes the record from all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline const Aws::Vector<TargetStore>& GetTargetStores() const{ return m_targetStores; }

    /**
     * <p>A list of stores from which you're deleting the record. By default, Feature
     * Store deletes the record from all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline bool TargetStoresHasBeenSet() const { return m_targetStoresHasBeenSet; }

    /**
     * <p>A list of stores from which you're deleting the record. By default, Feature
     * Store deletes the record from all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline void SetTargetStores(const Aws::Vector<TargetStore>& value) { m_targetStoresHasBeenSet = true; m_targetStores = value; }

    /**
     * <p>A list of stores from which you're deleting the record. By default, Feature
     * Store deletes the record from all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline void SetTargetStores(Aws::Vector<TargetStore>&& value) { m_targetStoresHasBeenSet = true; m_targetStores = std::move(value); }

    /**
     * <p>A list of stores from which you're deleting the record. By default, Feature
     * Store deletes the record from all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline DeleteRecordRequest& WithTargetStores(const Aws::Vector<TargetStore>& value) { SetTargetStores(value); return *this;}

    /**
     * <p>A list of stores from which you're deleting the record. By default, Feature
     * Store deletes the record from all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline DeleteRecordRequest& WithTargetStores(Aws::Vector<TargetStore>&& value) { SetTargetStores(std::move(value)); return *this;}

    /**
     * <p>A list of stores from which you're deleting the record. By default, Feature
     * Store deletes the record from all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline DeleteRecordRequest& AddTargetStores(const TargetStore& value) { m_targetStoresHasBeenSet = true; m_targetStores.push_back(value); return *this; }

    /**
     * <p>A list of stores from which you're deleting the record. By default, Feature
     * Store deletes the record from all of the stores that you're using for the
     * <code>FeatureGroup</code>.</p>
     */
    inline DeleteRecordRequest& AddTargetStores(TargetStore&& value) { m_targetStoresHasBeenSet = true; m_targetStores.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::String m_recordIdentifierValueAsString;
    bool m_recordIdentifierValueAsStringHasBeenSet = false;

    Aws::String m_eventTime;
    bool m_eventTimeHasBeenSet = false;

    Aws::Vector<TargetStore> m_targetStores;
    bool m_targetStoresHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
