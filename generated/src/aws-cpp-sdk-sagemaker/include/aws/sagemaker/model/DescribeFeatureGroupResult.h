﻿/**
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
    AWS_SAGEMAKER_API DescribeFeatureGroupResult();
    AWS_SAGEMAKER_API DescribeFeatureGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeFeatureGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <code>FeatureGroup</code>. </p>
     */
    inline const Aws::String& GetFeatureGroupArn() const{ return m_featureGroupArn; }
    inline void SetFeatureGroupArn(const Aws::String& value) { m_featureGroupArn = value; }
    inline void SetFeatureGroupArn(Aws::String&& value) { m_featureGroupArn = std::move(value); }
    inline void SetFeatureGroupArn(const char* value) { m_featureGroupArn.assign(value); }
    inline DescribeFeatureGroupResult& WithFeatureGroupArn(const Aws::String& value) { SetFeatureGroupArn(value); return *this;}
    inline DescribeFeatureGroupResult& WithFeatureGroupArn(Aws::String&& value) { SetFeatureGroupArn(std::move(value)); return *this;}
    inline DescribeFeatureGroupResult& WithFeatureGroupArn(const char* value) { SetFeatureGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>he name of the <code>FeatureGroup</code>.</p>
     */
    inline const Aws::String& GetFeatureGroupName() const{ return m_featureGroupName; }
    inline void SetFeatureGroupName(const Aws::String& value) { m_featureGroupName = value; }
    inline void SetFeatureGroupName(Aws::String&& value) { m_featureGroupName = std::move(value); }
    inline void SetFeatureGroupName(const char* value) { m_featureGroupName.assign(value); }
    inline DescribeFeatureGroupResult& WithFeatureGroupName(const Aws::String& value) { SetFeatureGroupName(value); return *this;}
    inline DescribeFeatureGroupResult& WithFeatureGroupName(Aws::String&& value) { SetFeatureGroupName(std::move(value)); return *this;}
    inline DescribeFeatureGroupResult& WithFeatureGroupName(const char* value) { SetFeatureGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>Feature</code> used for <code>RecordIdentifier</code>,
     * whose value uniquely identifies a record stored in the feature store.</p>
     */
    inline const Aws::String& GetRecordIdentifierFeatureName() const{ return m_recordIdentifierFeatureName; }
    inline void SetRecordIdentifierFeatureName(const Aws::String& value) { m_recordIdentifierFeatureName = value; }
    inline void SetRecordIdentifierFeatureName(Aws::String&& value) { m_recordIdentifierFeatureName = std::move(value); }
    inline void SetRecordIdentifierFeatureName(const char* value) { m_recordIdentifierFeatureName.assign(value); }
    inline DescribeFeatureGroupResult& WithRecordIdentifierFeatureName(const Aws::String& value) { SetRecordIdentifierFeatureName(value); return *this;}
    inline DescribeFeatureGroupResult& WithRecordIdentifierFeatureName(Aws::String&& value) { SetRecordIdentifierFeatureName(std::move(value)); return *this;}
    inline DescribeFeatureGroupResult& WithRecordIdentifierFeatureName(const char* value) { SetRecordIdentifierFeatureName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the feature that stores the <code>EventTime</code> of a Record in
     * a <code>FeatureGroup</code>.</p> <p> An <code>EventTime</code> is a point in
     * time when a new event occurs that corresponds to the creation or update of a
     * <code>Record</code> in a <code>FeatureGroup</code>. All <code>Records</code> in
     * the <code>FeatureGroup</code> have a corresponding <code>EventTime</code>.</p>
     */
    inline const Aws::String& GetEventTimeFeatureName() const{ return m_eventTimeFeatureName; }
    inline void SetEventTimeFeatureName(const Aws::String& value) { m_eventTimeFeatureName = value; }
    inline void SetEventTimeFeatureName(Aws::String&& value) { m_eventTimeFeatureName = std::move(value); }
    inline void SetEventTimeFeatureName(const char* value) { m_eventTimeFeatureName.assign(value); }
    inline DescribeFeatureGroupResult& WithEventTimeFeatureName(const Aws::String& value) { SetEventTimeFeatureName(value); return *this;}
    inline DescribeFeatureGroupResult& WithEventTimeFeatureName(Aws::String&& value) { SetEventTimeFeatureName(std::move(value)); return *this;}
    inline DescribeFeatureGroupResult& WithEventTimeFeatureName(const char* value) { SetEventTimeFeatureName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the <code>Features</code> in the <code>FeatureGroup</code>. Each
     * feature is defined by a <code>FeatureName</code> and
     * <code>FeatureType</code>.</p>
     */
    inline const Aws::Vector<FeatureDefinition>& GetFeatureDefinitions() const{ return m_featureDefinitions; }
    inline void SetFeatureDefinitions(const Aws::Vector<FeatureDefinition>& value) { m_featureDefinitions = value; }
    inline void SetFeatureDefinitions(Aws::Vector<FeatureDefinition>&& value) { m_featureDefinitions = std::move(value); }
    inline DescribeFeatureGroupResult& WithFeatureDefinitions(const Aws::Vector<FeatureDefinition>& value) { SetFeatureDefinitions(value); return *this;}
    inline DescribeFeatureGroupResult& WithFeatureDefinitions(Aws::Vector<FeatureDefinition>&& value) { SetFeatureDefinitions(std::move(value)); return *this;}
    inline DescribeFeatureGroupResult& AddFeatureDefinitions(const FeatureDefinition& value) { m_featureDefinitions.push_back(value); return *this; }
    inline DescribeFeatureGroupResult& AddFeatureDefinitions(FeatureDefinition&& value) { m_featureDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating when SageMaker created the
     * <code>FeatureGroup</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeFeatureGroupResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeFeatureGroupResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp indicating when the feature group was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeFeatureGroupResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeFeatureGroupResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the <code>OnlineStore</code>.</p>
     */
    inline const OnlineStoreConfig& GetOnlineStoreConfig() const{ return m_onlineStoreConfig; }
    inline void SetOnlineStoreConfig(const OnlineStoreConfig& value) { m_onlineStoreConfig = value; }
    inline void SetOnlineStoreConfig(OnlineStoreConfig&& value) { m_onlineStoreConfig = std::move(value); }
    inline DescribeFeatureGroupResult& WithOnlineStoreConfig(const OnlineStoreConfig& value) { SetOnlineStoreConfig(value); return *this;}
    inline DescribeFeatureGroupResult& WithOnlineStoreConfig(OnlineStoreConfig&& value) { SetOnlineStoreConfig(std::move(value)); return *this;}
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
    inline const OfflineStoreConfig& GetOfflineStoreConfig() const{ return m_offlineStoreConfig; }
    inline void SetOfflineStoreConfig(const OfflineStoreConfig& value) { m_offlineStoreConfig = value; }
    inline void SetOfflineStoreConfig(OfflineStoreConfig&& value) { m_offlineStoreConfig = std::move(value); }
    inline DescribeFeatureGroupResult& WithOfflineStoreConfig(const OfflineStoreConfig& value) { SetOfflineStoreConfig(value); return *this;}
    inline DescribeFeatureGroupResult& WithOfflineStoreConfig(OfflineStoreConfig&& value) { SetOfflineStoreConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ThroughputConfigDescription& GetThroughputConfig() const{ return m_throughputConfig; }
    inline void SetThroughputConfig(const ThroughputConfigDescription& value) { m_throughputConfig = value; }
    inline void SetThroughputConfig(ThroughputConfigDescription&& value) { m_throughputConfig = std::move(value); }
    inline DescribeFeatureGroupResult& WithThroughputConfig(const ThroughputConfigDescription& value) { SetThroughputConfig(value); return *this;}
    inline DescribeFeatureGroupResult& WithThroughputConfig(ThroughputConfigDescription&& value) { SetThroughputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM execution role used to persist data
     * into the OfflineStore if an OfflineStoreConfig is provided.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeFeatureGroupResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeFeatureGroupResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeFeatureGroupResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the feature group.</p>
     */
    inline const FeatureGroupStatus& GetFeatureGroupStatus() const{ return m_featureGroupStatus; }
    inline void SetFeatureGroupStatus(const FeatureGroupStatus& value) { m_featureGroupStatus = value; }
    inline void SetFeatureGroupStatus(FeatureGroupStatus&& value) { m_featureGroupStatus = std::move(value); }
    inline DescribeFeatureGroupResult& WithFeatureGroupStatus(const FeatureGroupStatus& value) { SetFeatureGroupStatus(value); return *this;}
    inline DescribeFeatureGroupResult& WithFeatureGroupStatus(FeatureGroupStatus&& value) { SetFeatureGroupStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the <code>OfflineStore</code>. Notifies you if replicating data
     * into the <code>OfflineStore</code> has failed. Returns either:
     * <code>Active</code> or <code>Blocked</code> </p>
     */
    inline const OfflineStoreStatus& GetOfflineStoreStatus() const{ return m_offlineStoreStatus; }
    inline void SetOfflineStoreStatus(const OfflineStoreStatus& value) { m_offlineStoreStatus = value; }
    inline void SetOfflineStoreStatus(OfflineStoreStatus&& value) { m_offlineStoreStatus = std::move(value); }
    inline DescribeFeatureGroupResult& WithOfflineStoreStatus(const OfflineStoreStatus& value) { SetOfflineStoreStatus(value); return *this;}
    inline DescribeFeatureGroupResult& WithOfflineStoreStatus(OfflineStoreStatus&& value) { SetOfflineStoreStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value indicating whether the update made to the feature group was
     * successful.</p>
     */
    inline const LastUpdateStatus& GetLastUpdateStatus() const{ return m_lastUpdateStatus; }
    inline void SetLastUpdateStatus(const LastUpdateStatus& value) { m_lastUpdateStatus = value; }
    inline void SetLastUpdateStatus(LastUpdateStatus&& value) { m_lastUpdateStatus = std::move(value); }
    inline DescribeFeatureGroupResult& WithLastUpdateStatus(const LastUpdateStatus& value) { SetLastUpdateStatus(value); return *this;}
    inline DescribeFeatureGroupResult& WithLastUpdateStatus(LastUpdateStatus&& value) { SetLastUpdateStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the <code>FeatureGroup</code> failed to be replicated in the
     * <code>OfflineStore</code>. This is failure can occur because:</p> <ul> <li>
     * <p>The <code>FeatureGroup</code> could not be created in the
     * <code>OfflineStore</code>.</p> </li> <li> <p>The <code>FeatureGroup</code> could
     * not be deleted from the <code>OfflineStore</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeFeatureGroupResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeFeatureGroupResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeFeatureGroupResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A free form description of the feature group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeFeatureGroupResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeFeatureGroupResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeFeatureGroupResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to resume pagination of the list of <code>Features</code>
     * (<code>FeatureDefinitions</code>).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeFeatureGroupResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeFeatureGroupResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeFeatureGroupResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the <code>OnlineStore</code> in bytes.</p>
     */
    inline long long GetOnlineStoreTotalSizeBytes() const{ return m_onlineStoreTotalSizeBytes; }
    inline void SetOnlineStoreTotalSizeBytes(long long value) { m_onlineStoreTotalSizeBytes = value; }
    inline DescribeFeatureGroupResult& WithOnlineStoreTotalSizeBytes(long long value) { SetOnlineStoreTotalSizeBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFeatureGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFeatureGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFeatureGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_featureGroupArn;

    Aws::String m_featureGroupName;

    Aws::String m_recordIdentifierFeatureName;

    Aws::String m_eventTimeFeatureName;

    Aws::Vector<FeatureDefinition> m_featureDefinitions;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    OnlineStoreConfig m_onlineStoreConfig;

    OfflineStoreConfig m_offlineStoreConfig;

    ThroughputConfigDescription m_throughputConfig;

    Aws::String m_roleArn;

    FeatureGroupStatus m_featureGroupStatus;

    OfflineStoreStatus m_offlineStoreStatus;

    LastUpdateStatus m_lastUpdateStatus;

    Aws::String m_failureReason;

    Aws::String m_description;

    Aws::String m_nextToken;

    long long m_onlineStoreTotalSizeBytes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
