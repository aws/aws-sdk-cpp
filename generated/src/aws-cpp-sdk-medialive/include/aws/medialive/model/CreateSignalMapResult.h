﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/medialive/model/SuccessfulMonitorDeployment.h>
#include <aws/medialive/model/MonitorDeployment.h>
#include <aws/medialive/model/SignalMapStatus.h>
#include <aws/medialive/model/MediaResource.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for CreateSignalMapResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/CreateSignalMapResponse">AWS
   * API Reference</a></p>
   */
  class CreateSignalMapResult
  {
  public:
    AWS_MEDIALIVE_API CreateSignalMapResult();
    AWS_MEDIALIVE_API CreateSignalMapResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API CreateSignalMapResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A signal map's ARN (Amazon Resource Name)
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateSignalMapResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateSignalMapResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateSignalMapResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetCloudWatchAlarmTemplateGroupIds() const{ return m_cloudWatchAlarmTemplateGroupIds; }
    inline void SetCloudWatchAlarmTemplateGroupIds(const Aws::Vector<Aws::String>& value) { m_cloudWatchAlarmTemplateGroupIds = value; }
    inline void SetCloudWatchAlarmTemplateGroupIds(Aws::Vector<Aws::String>&& value) { m_cloudWatchAlarmTemplateGroupIds = std::move(value); }
    inline CreateSignalMapResult& WithCloudWatchAlarmTemplateGroupIds(const Aws::Vector<Aws::String>& value) { SetCloudWatchAlarmTemplateGroupIds(value); return *this;}
    inline CreateSignalMapResult& WithCloudWatchAlarmTemplateGroupIds(Aws::Vector<Aws::String>&& value) { SetCloudWatchAlarmTemplateGroupIds(std::move(value)); return *this;}
    inline CreateSignalMapResult& AddCloudWatchAlarmTemplateGroupIds(const Aws::String& value) { m_cloudWatchAlarmTemplateGroupIds.push_back(value); return *this; }
    inline CreateSignalMapResult& AddCloudWatchAlarmTemplateGroupIds(Aws::String&& value) { m_cloudWatchAlarmTemplateGroupIds.push_back(std::move(value)); return *this; }
    inline CreateSignalMapResult& AddCloudWatchAlarmTemplateGroupIds(const char* value) { m_cloudWatchAlarmTemplateGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreateSignalMapResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreateSignalMapResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A resource's optional description.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateSignalMapResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateSignalMapResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateSignalMapResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline const Aws::String& GetDiscoveryEntryPointArn() const{ return m_discoveryEntryPointArn; }
    inline void SetDiscoveryEntryPointArn(const Aws::String& value) { m_discoveryEntryPointArn = value; }
    inline void SetDiscoveryEntryPointArn(Aws::String&& value) { m_discoveryEntryPointArn = std::move(value); }
    inline void SetDiscoveryEntryPointArn(const char* value) { m_discoveryEntryPointArn.assign(value); }
    inline CreateSignalMapResult& WithDiscoveryEntryPointArn(const Aws::String& value) { SetDiscoveryEntryPointArn(value); return *this;}
    inline CreateSignalMapResult& WithDiscoveryEntryPointArn(Aws::String&& value) { SetDiscoveryEntryPointArn(std::move(value)); return *this;}
    inline CreateSignalMapResult& WithDiscoveryEntryPointArn(const char* value) { SetDiscoveryEntryPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * Error message associated with a failed creation or failed update attempt of a
     * signal map.
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline CreateSignalMapResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline CreateSignalMapResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline CreateSignalMapResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetEventBridgeRuleTemplateGroupIds() const{ return m_eventBridgeRuleTemplateGroupIds; }
    inline void SetEventBridgeRuleTemplateGroupIds(const Aws::Vector<Aws::String>& value) { m_eventBridgeRuleTemplateGroupIds = value; }
    inline void SetEventBridgeRuleTemplateGroupIds(Aws::Vector<Aws::String>&& value) { m_eventBridgeRuleTemplateGroupIds = std::move(value); }
    inline CreateSignalMapResult& WithEventBridgeRuleTemplateGroupIds(const Aws::Vector<Aws::String>& value) { SetEventBridgeRuleTemplateGroupIds(value); return *this;}
    inline CreateSignalMapResult& WithEventBridgeRuleTemplateGroupIds(Aws::Vector<Aws::String>&& value) { SetEventBridgeRuleTemplateGroupIds(std::move(value)); return *this;}
    inline CreateSignalMapResult& AddEventBridgeRuleTemplateGroupIds(const Aws::String& value) { m_eventBridgeRuleTemplateGroupIds.push_back(value); return *this; }
    inline CreateSignalMapResult& AddEventBridgeRuleTemplateGroupIds(Aws::String&& value) { m_eventBridgeRuleTemplateGroupIds.push_back(std::move(value)); return *this; }
    inline CreateSignalMapResult& AddEventBridgeRuleTemplateGroupIds(const char* value) { m_eventBridgeRuleTemplateGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, MediaResource>& GetFailedMediaResourceMap() const{ return m_failedMediaResourceMap; }
    inline void SetFailedMediaResourceMap(const Aws::Map<Aws::String, MediaResource>& value) { m_failedMediaResourceMap = value; }
    inline void SetFailedMediaResourceMap(Aws::Map<Aws::String, MediaResource>&& value) { m_failedMediaResourceMap = std::move(value); }
    inline CreateSignalMapResult& WithFailedMediaResourceMap(const Aws::Map<Aws::String, MediaResource>& value) { SetFailedMediaResourceMap(value); return *this;}
    inline CreateSignalMapResult& WithFailedMediaResourceMap(Aws::Map<Aws::String, MediaResource>&& value) { SetFailedMediaResourceMap(std::move(value)); return *this;}
    inline CreateSignalMapResult& AddFailedMediaResourceMap(const Aws::String& key, const MediaResource& value) { m_failedMediaResourceMap.emplace(key, value); return *this; }
    inline CreateSignalMapResult& AddFailedMediaResourceMap(Aws::String&& key, const MediaResource& value) { m_failedMediaResourceMap.emplace(std::move(key), value); return *this; }
    inline CreateSignalMapResult& AddFailedMediaResourceMap(const Aws::String& key, MediaResource&& value) { m_failedMediaResourceMap.emplace(key, std::move(value)); return *this; }
    inline CreateSignalMapResult& AddFailedMediaResourceMap(Aws::String&& key, MediaResource&& value) { m_failedMediaResourceMap.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateSignalMapResult& AddFailedMediaResourceMap(const char* key, MediaResource&& value) { m_failedMediaResourceMap.emplace(key, std::move(value)); return *this; }
    inline CreateSignalMapResult& AddFailedMediaResourceMap(const char* key, const MediaResource& value) { m_failedMediaResourceMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * A signal map's id.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateSignalMapResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateSignalMapResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateSignalMapResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetLastDiscoveredAt() const{ return m_lastDiscoveredAt; }
    inline void SetLastDiscoveredAt(const Aws::Utils::DateTime& value) { m_lastDiscoveredAt = value; }
    inline void SetLastDiscoveredAt(Aws::Utils::DateTime&& value) { m_lastDiscoveredAt = std::move(value); }
    inline CreateSignalMapResult& WithLastDiscoveredAt(const Aws::Utils::DateTime& value) { SetLastDiscoveredAt(value); return *this;}
    inline CreateSignalMapResult& WithLastDiscoveredAt(Aws::Utils::DateTime&& value) { SetLastDiscoveredAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SuccessfulMonitorDeployment& GetLastSuccessfulMonitorDeployment() const{ return m_lastSuccessfulMonitorDeployment; }
    inline void SetLastSuccessfulMonitorDeployment(const SuccessfulMonitorDeployment& value) { m_lastSuccessfulMonitorDeployment = value; }
    inline void SetLastSuccessfulMonitorDeployment(SuccessfulMonitorDeployment&& value) { m_lastSuccessfulMonitorDeployment = std::move(value); }
    inline CreateSignalMapResult& WithLastSuccessfulMonitorDeployment(const SuccessfulMonitorDeployment& value) { SetLastSuccessfulMonitorDeployment(value); return *this;}
    inline CreateSignalMapResult& WithLastSuccessfulMonitorDeployment(SuccessfulMonitorDeployment&& value) { SetLastSuccessfulMonitorDeployment(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, MediaResource>& GetMediaResourceMap() const{ return m_mediaResourceMap; }
    inline void SetMediaResourceMap(const Aws::Map<Aws::String, MediaResource>& value) { m_mediaResourceMap = value; }
    inline void SetMediaResourceMap(Aws::Map<Aws::String, MediaResource>&& value) { m_mediaResourceMap = std::move(value); }
    inline CreateSignalMapResult& WithMediaResourceMap(const Aws::Map<Aws::String, MediaResource>& value) { SetMediaResourceMap(value); return *this;}
    inline CreateSignalMapResult& WithMediaResourceMap(Aws::Map<Aws::String, MediaResource>&& value) { SetMediaResourceMap(std::move(value)); return *this;}
    inline CreateSignalMapResult& AddMediaResourceMap(const Aws::String& key, const MediaResource& value) { m_mediaResourceMap.emplace(key, value); return *this; }
    inline CreateSignalMapResult& AddMediaResourceMap(Aws::String&& key, const MediaResource& value) { m_mediaResourceMap.emplace(std::move(key), value); return *this; }
    inline CreateSignalMapResult& AddMediaResourceMap(const Aws::String& key, MediaResource&& value) { m_mediaResourceMap.emplace(key, std::move(value)); return *this; }
    inline CreateSignalMapResult& AddMediaResourceMap(Aws::String&& key, MediaResource&& value) { m_mediaResourceMap.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateSignalMapResult& AddMediaResourceMap(const char* key, MediaResource&& value) { m_mediaResourceMap.emplace(key, std::move(value)); return *this; }
    inline CreateSignalMapResult& AddMediaResourceMap(const char* key, const MediaResource& value) { m_mediaResourceMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }
    inline CreateSignalMapResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline CreateSignalMapResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * If true, there are pending monitor changes for this signal map that can be
     * deployed.
     */
    inline bool GetMonitorChangesPendingDeployment() const{ return m_monitorChangesPendingDeployment; }
    inline void SetMonitorChangesPendingDeployment(bool value) { m_monitorChangesPendingDeployment = value; }
    inline CreateSignalMapResult& WithMonitorChangesPendingDeployment(bool value) { SetMonitorChangesPendingDeployment(value); return *this;}
    ///@}

    ///@{
    
    inline const MonitorDeployment& GetMonitorDeployment() const{ return m_monitorDeployment; }
    inline void SetMonitorDeployment(const MonitorDeployment& value) { m_monitorDeployment = value; }
    inline void SetMonitorDeployment(MonitorDeployment&& value) { m_monitorDeployment = std::move(value); }
    inline CreateSignalMapResult& WithMonitorDeployment(const MonitorDeployment& value) { SetMonitorDeployment(value); return *this;}
    inline CreateSignalMapResult& WithMonitorDeployment(MonitorDeployment&& value) { SetMonitorDeployment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateSignalMapResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateSignalMapResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateSignalMapResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const SignalMapStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SignalMapStatus& value) { m_status = value; }
    inline void SetStatus(SignalMapStatus&& value) { m_status = std::move(value); }
    inline CreateSignalMapResult& WithStatus(const SignalMapStatus& value) { SetStatus(value); return *this;}
    inline CreateSignalMapResult& WithStatus(SignalMapStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateSignalMapResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateSignalMapResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSignalMapResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateSignalMapResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSignalMapResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSignalMapResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateSignalMapResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSignalMapResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSignalMapResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSignalMapResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSignalMapResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSignalMapResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Vector<Aws::String> m_cloudWatchAlarmTemplateGroupIds;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_description;

    Aws::String m_discoveryEntryPointArn;

    Aws::String m_errorMessage;

    Aws::Vector<Aws::String> m_eventBridgeRuleTemplateGroupIds;

    Aws::Map<Aws::String, MediaResource> m_failedMediaResourceMap;

    Aws::String m_id;

    Aws::Utils::DateTime m_lastDiscoveredAt;

    SuccessfulMonitorDeployment m_lastSuccessfulMonitorDeployment;

    Aws::Map<Aws::String, MediaResource> m_mediaResourceMap;

    Aws::Utils::DateTime m_modifiedAt;

    bool m_monitorChangesPendingDeployment;

    MonitorDeployment m_monitorDeployment;

    Aws::String m_name;

    SignalMapStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
