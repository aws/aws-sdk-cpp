/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/OnlineStoreConfig.h>
#include <aws/sagemaker/model/OfflineStoreConfig.h>
#include <aws/sagemaker/model/ThroughputConfigDescription.h>
#include <aws/sagemaker/model/FeatureGroupStatus.h>
#include <aws/sagemaker/model/OfflineStoreStatus.h>
#include <aws/sagemaker/model/LastUpdateStatus.h>
#include <aws/sagemaker/model/FeatureDefinition.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeFeatureGroupResult
  {
  public:
    AWS_SAGEMAKER_API DescribeFeatureGroupResult() = default;
    AWS_SAGEMAKER_API DescribeFeatureGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeFeatureGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <code>FeatureGroup</code>. </p>
     */
    inline const Aws::String& GetFeatureGroupArn() const { return m_featureGroupArn; }
    template<typename FeatureGroupArnT = Aws::String>
    void SetFeatureGroupArn(FeatureGroupArnT&& value) { m_featureGroupArnHasBeenSet = true; m_featureGroupArn = std::forward<FeatureGroupArnT>(value); }
    template<typename FeatureGroupArnT = Aws::String>
    DescribeFeatureGroupResult& WithFeatureGroupArn(FeatureGroupArnT&& value) { SetFeatureGroupArn(std::forward<FeatureGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>he name of the <code>FeatureGroup</code>.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const { return m_featureGroupName; }
    template<typename FeatureGroupNameT = Aws::String>
    void SetFeatureGroupName(FeatureGroupNameT&& value) { m_featureGroupNameHasBeenSet = true; m_featureGroupName = std::forward<FeatureGroupNameT>(value); }
    template<typename FeatureGroupNameT = Aws::String>
    DescribeFeatureGroupResult& WithFeatureGroupName(FeatureGroupNameT&& value) { SetFeatureGroupName(std::forward<FeatureGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>Feature</code> used for <code>RecordIdentifier</code>,
     * whose value uniquely identifies a record stored in the feature store.</p>
     */
    inline const Aws::String& GetRecordIdentifierFeatureName() const { return m_recordIdentifierFeatureName; }
    template<typename RecordIdentifierFeatureNameT = Aws::String>
    void SetRecordIdentifierFeatureName(RecordIdentifierFeatureNameT&& value) { m_recordIdentifierFeatureNameHasBeenSet = true; m_recordIdentifierFeatureName = std::forward<RecordIdentifierFeatureNameT>(value); }
    template<typename RecordIdentifierFeatureNameT = Aws::String>
    DescribeFeatureGroupResult& WithRecordIdentifierFeatureName(RecordIdentifierFeatureNameT&& value) { SetRecordIdentifierFeatureName(std::forward<RecordIdentifierFeatureNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the feature that stores the <code>EventTime</code> of a Record in
     * a <code>FeatureGroup</code>.</p> <p> An <code>EventTime</code> is a point in
     * time when a new event occurs that corresponds to the creation or update of a
     * <code>Record</code> in a <code>FeatureGroup</code>. All <code>Records</code> in
     * the <code>FeatureGroup</code> have a corresponding <code>EventTime</code>.</p>
     */
    inline const Aws::String& GetEventTimeFeatureName() const { return m_eventTimeFeatureName; }
    template<typename EventTimeFeatureNameT = Aws::String>
    void SetEventTimeFeatureName(EventTimeFeatureNameT&& value) { m_eventTimeFeatureNameHasBeenSet = true; m_eventTimeFeatureName = std::forward<EventTimeFeatureNameT>(value); }
    template<typename EventTimeFeatureNameT = Aws::String>
    DescribeFeatureGroupResult& WithEventTimeFeatureName(EventTimeFeatureNameT&& value) { SetEventTimeFeatureName(std::forward<EventTimeFeatureNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the <code>Features</code> in the <code>FeatureGroup</code>. Each
     * feature is defined by a <code>FeatureName</code> and
     * <code>FeatureType</code>.</p>
     */
    inline const Aws::Vector<FeatureDefinition>& GetFeatureDefinitions() const { return m_featureDefinitions; }
    template<typename FeatureDefinitionsT = Aws::Vector<FeatureDefinition>>
    void SetFeatureDefinitions(FeatureDefinitionsT&& value) { m_featureDefinitionsHasBeenSet = true; m_featureDefinitions = std::forward<FeatureDefinitionsT>(value); }
    template<typename FeatureDefinitionsT = Aws::Vector<FeatureDefinition>>
    DescribeFeatureGroupResult& WithFeatureDefinitions(FeatureDefinitionsT&& value) { SetFeatureDefinitions(std::forward<FeatureDefinitionsT>(value)); return *this;}
    template<typename FeatureDefinitionsT = FeatureDefinition>
    DescribeFeatureGroupResult& AddFeatureDefinitions(FeatureDefinitionsT&& value) { m_featureDefinitionsHasBeenSet = true; m_featureDefinitions.emplace_back(std::forward<FeatureDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating when SageMaker created the
     * <code>FeatureGroup</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeFeatureGroupResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating when the feature group was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeFeatureGroupResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the <code>OnlineStore</code>.</p>
     */
    inline const OnlineStoreConfig& GetOnlineStoreConfig() const { return m_onlineStoreConfig; }
    template<typename OnlineStoreConfigT = OnlineStoreConfig>
    void SetOnlineStoreConfig(OnlineStoreConfigT&& value) { m_onlineStoreConfigHasBeenSet = true; m_onlineStoreConfig = std::forward<OnlineStoreConfigT>(value); }
    template<typename OnlineStoreConfigT = OnlineStoreConfig>
    DescribeFeatureGroupResult& WithOnlineStoreConfig(OnlineStoreConfigT&& value) { SetOnlineStoreConfig(std::forward<OnlineStoreConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the offline store. It includes the following
     * configurations:</p> <ul> <li> <p>Amazon S3 location of the offline store.</p>
     * </li> <li> <p>Configuration of the Glue data catalog.</p> </li> <li> <p>Table
     * format of the offline store.</p> </li> <li> <p>Option to disable the automatic
     * creation of a Glue table for the offline store.</p> </li> <li> <p>Encryption
     * configuration.</p> </li> </ul>
     */
    inline const OfflineStoreConfig& GetOfflineStoreConfig() const { return m_offlineStoreConfig; }
    template<typename OfflineStoreConfigT = OfflineStoreConfig>
    void SetOfflineStoreConfig(OfflineStoreConfigT&& value) { m_offlineStoreConfigHasBeenSet = true; m_offlineStoreConfig = std::forward<OfflineStoreConfigT>(value); }
    template<typename OfflineStoreConfigT = OfflineStoreConfig>
    DescribeFeatureGroupResult& WithOfflineStoreConfig(OfflineStoreConfigT&& value) { SetOfflineStoreConfig(std::forward<OfflineStoreConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ThroughputConfigDescription& GetThroughputConfig() const { return m_throughputConfig; }
    template<typename ThroughputConfigT = ThroughputConfigDescription>
    void SetThroughputConfig(ThroughputConfigT&& value) { m_throughputConfigHasBeenSet = true; m_throughputConfig = std::forward<ThroughputConfigT>(value); }
    template<typename ThroughputConfigT = ThroughputConfigDescription>
    DescribeFeatureGroupResult& WithThroughputConfig(ThroughputConfigT&& value) { SetThroughputConfig(std::forward<ThroughputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to persist data
     * into the OfflineStore if an OfflineStoreConfig is provided.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeFeatureGroupResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the feature group.</p>
     */
    inline FeatureGroupStatus GetFeatureGroupStatus() const { return m_featureGroupStatus; }
    inline void SetFeatureGroupStatus(FeatureGroupStatus value) { m_featureGroupStatusHasBeenSet = true; m_featureGroupStatus = value; }
    inline DescribeFeatureGroupResult& WithFeatureGroupStatus(FeatureGroupStatus value) { SetFeatureGroupStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the <code>OfflineStore</code>. Notifies you if replicating data
     * into the <code>OfflineStore</code> has failed. Returns either:
     * <code>Active</code> or <code>Blocked</code> </p>
     */
    inline const OfflineStoreStatus& GetOfflineStoreStatus() const { return m_offlineStoreStatus; }
    template<typename OfflineStoreStatusT = OfflineStoreStatus>
    void SetOfflineStoreStatus(OfflineStoreStatusT&& value) { m_offlineStoreStatusHasBeenSet = true; m_offlineStoreStatus = std::forward<OfflineStoreStatusT>(value); }
    template<typename OfflineStoreStatusT = OfflineStoreStatus>
    DescribeFeatureGroupResult& WithOfflineStoreStatus(OfflineStoreStatusT&& value) { SetOfflineStoreStatus(std::forward<OfflineStoreStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value indicating whether the update made to the feature group was
     * successful.</p>
     */
    inline const LastUpdateStatus& GetLastUpdateStatus() const { return m_lastUpdateStatus; }
    template<typename LastUpdateStatusT = LastUpdateStatus>
    void SetLastUpdateStatus(LastUpdateStatusT&& value) { m_lastUpdateStatusHasBeenSet = true; m_lastUpdateStatus = std::forward<LastUpdateStatusT>(value); }
    template<typename LastUpdateStatusT = LastUpdateStatus>
    DescribeFeatureGroupResult& WithLastUpdateStatus(LastUpdateStatusT&& value) { SetLastUpdateStatus(std::forward<LastUpdateStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the <code>FeatureGroup</code> failed to be replicated in the
     * <code>OfflineStore</code>. This is failure can occur because:</p> <ul> <li>
     * <p>The <code>FeatureGroup</code> could not be created in the
     * <code>OfflineStore</code>.</p> </li> <li> <p>The <code>FeatureGroup</code> could
     * not be deleted from the <code>OfflineStore</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeFeatureGroupResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A free form description of the feature group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeFeatureGroupResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to resume pagination of the list of <code>Features</code>
     * (<code>FeatureDefinitions</code>).</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeFeatureGroupResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the <code>OnlineStore</code> in bytes.</p>
     */
    inline long long GetOnlineStoreTotalSizeBytes() const { return m_onlineStoreTotalSizeBytes; }
    inline void SetOnlineStoreTotalSizeBytes(long long value) { m_onlineStoreTotalSizeBytesHasBeenSet = true; m_onlineStoreTotalSizeBytes = value; }
    inline DescribeFeatureGroupResult& WithOnlineStoreTotalSizeBytes(long long value) { SetOnlineStoreTotalSizeBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFeatureGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_featureGroupArn;
    bool m_featureGroupArnHasBeenSet = false;

    Aws::String m_featureGroupName;
    bool m_featureGroupNameHasBeenSet = false;

    Aws::String m_recordIdentifierFeatureName;
    bool m_recordIdentifierFeatureNameHasBeenSet = false;

    Aws::String m_eventTimeFeatureName;
    bool m_eventTimeFeatureNameHasBeenSet = false;

    Aws::Vector<FeatureDefinition> m_featureDefinitions;
    bool m_featureDefinitionsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    OnlineStoreConfig m_onlineStoreConfig;
    bool m_onlineStoreConfigHasBeenSet = false;

    OfflineStoreConfig m_offlineStoreConfig;
    bool m_offlineStoreConfigHasBeenSet = false;

    ThroughputConfigDescription m_throughputConfig;
    bool m_throughputConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    FeatureGroupStatus m_featureGroupStatus{FeatureGroupStatus::NOT_SET};
    bool m_featureGroupStatusHasBeenSet = false;

    OfflineStoreStatus m_offlineStoreStatus;
    bool m_offlineStoreStatusHasBeenSet = false;

    LastUpdateStatus m_lastUpdateStatus;
    bool m_lastUpdateStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    long long m_onlineStoreTotalSizeBytes{0};
    bool m_onlineStoreTotalSizeBytesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
