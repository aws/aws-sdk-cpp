/**
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
   * Placeholder documentation for StartDeleteMonitorDeploymentResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartDeleteMonitorDeploymentResponse">AWS
   * API Reference</a></p>
   */
  class StartDeleteMonitorDeploymentResult
  {
  public:
    AWS_MEDIALIVE_API StartDeleteMonitorDeploymentResult();
    AWS_MEDIALIVE_API StartDeleteMonitorDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API StartDeleteMonitorDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A signal map's ARN (Amazon Resource Name)
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * A signal map's ARN (Amazon Resource Name)
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * A signal map's ARN (Amazon Resource Name)
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * A signal map's ARN (Amazon Resource Name)
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * A signal map's ARN (Amazon Resource Name)
     */
    inline StartDeleteMonitorDeploymentResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * A signal map's ARN (Amazon Resource Name)
     */
    inline StartDeleteMonitorDeploymentResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * A signal map's ARN (Amazon Resource Name)
     */
    inline StartDeleteMonitorDeploymentResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetCloudWatchAlarmTemplateGroupIds() const{ return m_cloudWatchAlarmTemplateGroupIds; }

    
    inline void SetCloudWatchAlarmTemplateGroupIds(const Aws::Vector<Aws::String>& value) { m_cloudWatchAlarmTemplateGroupIds = value; }

    
    inline void SetCloudWatchAlarmTemplateGroupIds(Aws::Vector<Aws::String>&& value) { m_cloudWatchAlarmTemplateGroupIds = std::move(value); }

    
    inline StartDeleteMonitorDeploymentResult& WithCloudWatchAlarmTemplateGroupIds(const Aws::Vector<Aws::String>& value) { SetCloudWatchAlarmTemplateGroupIds(value); return *this;}

    
    inline StartDeleteMonitorDeploymentResult& WithCloudWatchAlarmTemplateGroupIds(Aws::Vector<Aws::String>&& value) { SetCloudWatchAlarmTemplateGroupIds(std::move(value)); return *this;}

    
    inline StartDeleteMonitorDeploymentResult& AddCloudWatchAlarmTemplateGroupIds(const Aws::String& value) { m_cloudWatchAlarmTemplateGroupIds.push_back(value); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddCloudWatchAlarmTemplateGroupIds(Aws::String&& value) { m_cloudWatchAlarmTemplateGroupIds.push_back(std::move(value)); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddCloudWatchAlarmTemplateGroupIds(const char* value) { m_cloudWatchAlarmTemplateGroupIds.push_back(value); return *this; }


    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    
    inline StartDeleteMonitorDeploymentResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    
    inline StartDeleteMonitorDeploymentResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * A resource's optional description.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * A resource's optional description.
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * A resource's optional description.
     */
    inline StartDeleteMonitorDeploymentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A resource's optional description.
     */
    inline StartDeleteMonitorDeploymentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A resource's optional description.
     */
    inline StartDeleteMonitorDeploymentResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline const Aws::String& GetDiscoveryEntryPointArn() const{ return m_discoveryEntryPointArn; }

    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline void SetDiscoveryEntryPointArn(const Aws::String& value) { m_discoveryEntryPointArn = value; }

    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline void SetDiscoveryEntryPointArn(Aws::String&& value) { m_discoveryEntryPointArn = std::move(value); }

    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline void SetDiscoveryEntryPointArn(const char* value) { m_discoveryEntryPointArn.assign(value); }

    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline StartDeleteMonitorDeploymentResult& WithDiscoveryEntryPointArn(const Aws::String& value) { SetDiscoveryEntryPointArn(value); return *this;}

    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline StartDeleteMonitorDeploymentResult& WithDiscoveryEntryPointArn(Aws::String&& value) { SetDiscoveryEntryPointArn(std::move(value)); return *this;}

    /**
     * A top-level supported AWS resource ARN to discovery a signal map from.
     */
    inline StartDeleteMonitorDeploymentResult& WithDiscoveryEntryPointArn(const char* value) { SetDiscoveryEntryPointArn(value); return *this;}


    /**
     * Error message associated with a failed creation or failed update attempt of a
     * signal map.
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * Error message associated with a failed creation or failed update attempt of a
     * signal map.
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }

    /**
     * Error message associated with a failed creation or failed update attempt of a
     * signal map.
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }

    /**
     * Error message associated with a failed creation or failed update attempt of a
     * signal map.
     */
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }

    /**
     * Error message associated with a failed creation or failed update attempt of a
     * signal map.
     */
    inline StartDeleteMonitorDeploymentResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * Error message associated with a failed creation or failed update attempt of a
     * signal map.
     */
    inline StartDeleteMonitorDeploymentResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * Error message associated with a failed creation or failed update attempt of a
     * signal map.
     */
    inline StartDeleteMonitorDeploymentResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetEventBridgeRuleTemplateGroupIds() const{ return m_eventBridgeRuleTemplateGroupIds; }

    
    inline void SetEventBridgeRuleTemplateGroupIds(const Aws::Vector<Aws::String>& value) { m_eventBridgeRuleTemplateGroupIds = value; }

    
    inline void SetEventBridgeRuleTemplateGroupIds(Aws::Vector<Aws::String>&& value) { m_eventBridgeRuleTemplateGroupIds = std::move(value); }

    
    inline StartDeleteMonitorDeploymentResult& WithEventBridgeRuleTemplateGroupIds(const Aws::Vector<Aws::String>& value) { SetEventBridgeRuleTemplateGroupIds(value); return *this;}

    
    inline StartDeleteMonitorDeploymentResult& WithEventBridgeRuleTemplateGroupIds(Aws::Vector<Aws::String>&& value) { SetEventBridgeRuleTemplateGroupIds(std::move(value)); return *this;}

    
    inline StartDeleteMonitorDeploymentResult& AddEventBridgeRuleTemplateGroupIds(const Aws::String& value) { m_eventBridgeRuleTemplateGroupIds.push_back(value); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddEventBridgeRuleTemplateGroupIds(Aws::String&& value) { m_eventBridgeRuleTemplateGroupIds.push_back(std::move(value)); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddEventBridgeRuleTemplateGroupIds(const char* value) { m_eventBridgeRuleTemplateGroupIds.push_back(value); return *this; }


    
    inline const Aws::Map<Aws::String, MediaResource>& GetFailedMediaResourceMap() const{ return m_failedMediaResourceMap; }

    
    inline void SetFailedMediaResourceMap(const Aws::Map<Aws::String, MediaResource>& value) { m_failedMediaResourceMap = value; }

    
    inline void SetFailedMediaResourceMap(Aws::Map<Aws::String, MediaResource>&& value) { m_failedMediaResourceMap = std::move(value); }

    
    inline StartDeleteMonitorDeploymentResult& WithFailedMediaResourceMap(const Aws::Map<Aws::String, MediaResource>& value) { SetFailedMediaResourceMap(value); return *this;}

    
    inline StartDeleteMonitorDeploymentResult& WithFailedMediaResourceMap(Aws::Map<Aws::String, MediaResource>&& value) { SetFailedMediaResourceMap(std::move(value)); return *this;}

    
    inline StartDeleteMonitorDeploymentResult& AddFailedMediaResourceMap(const Aws::String& key, const MediaResource& value) { m_failedMediaResourceMap.emplace(key, value); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddFailedMediaResourceMap(Aws::String&& key, const MediaResource& value) { m_failedMediaResourceMap.emplace(std::move(key), value); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddFailedMediaResourceMap(const Aws::String& key, MediaResource&& value) { m_failedMediaResourceMap.emplace(key, std::move(value)); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddFailedMediaResourceMap(Aws::String&& key, MediaResource&& value) { m_failedMediaResourceMap.emplace(std::move(key), std::move(value)); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddFailedMediaResourceMap(const char* key, MediaResource&& value) { m_failedMediaResourceMap.emplace(key, std::move(value)); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddFailedMediaResourceMap(const char* key, const MediaResource& value) { m_failedMediaResourceMap.emplace(key, value); return *this; }


    /**
     * A signal map's id.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * A signal map's id.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * A signal map's id.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * A signal map's id.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * A signal map's id.
     */
    inline StartDeleteMonitorDeploymentResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * A signal map's id.
     */
    inline StartDeleteMonitorDeploymentResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * A signal map's id.
     */
    inline StartDeleteMonitorDeploymentResult& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetLastDiscoveredAt() const{ return m_lastDiscoveredAt; }

    
    inline void SetLastDiscoveredAt(const Aws::Utils::DateTime& value) { m_lastDiscoveredAt = value; }

    
    inline void SetLastDiscoveredAt(Aws::Utils::DateTime&& value) { m_lastDiscoveredAt = std::move(value); }

    
    inline StartDeleteMonitorDeploymentResult& WithLastDiscoveredAt(const Aws::Utils::DateTime& value) { SetLastDiscoveredAt(value); return *this;}

    
    inline StartDeleteMonitorDeploymentResult& WithLastDiscoveredAt(Aws::Utils::DateTime&& value) { SetLastDiscoveredAt(std::move(value)); return *this;}


    
    inline const SuccessfulMonitorDeployment& GetLastSuccessfulMonitorDeployment() const{ return m_lastSuccessfulMonitorDeployment; }

    
    inline void SetLastSuccessfulMonitorDeployment(const SuccessfulMonitorDeployment& value) { m_lastSuccessfulMonitorDeployment = value; }

    
    inline void SetLastSuccessfulMonitorDeployment(SuccessfulMonitorDeployment&& value) { m_lastSuccessfulMonitorDeployment = std::move(value); }

    
    inline StartDeleteMonitorDeploymentResult& WithLastSuccessfulMonitorDeployment(const SuccessfulMonitorDeployment& value) { SetLastSuccessfulMonitorDeployment(value); return *this;}

    
    inline StartDeleteMonitorDeploymentResult& WithLastSuccessfulMonitorDeployment(SuccessfulMonitorDeployment&& value) { SetLastSuccessfulMonitorDeployment(std::move(value)); return *this;}


    
    inline const Aws::Map<Aws::String, MediaResource>& GetMediaResourceMap() const{ return m_mediaResourceMap; }

    
    inline void SetMediaResourceMap(const Aws::Map<Aws::String, MediaResource>& value) { m_mediaResourceMap = value; }

    
    inline void SetMediaResourceMap(Aws::Map<Aws::String, MediaResource>&& value) { m_mediaResourceMap = std::move(value); }

    
    inline StartDeleteMonitorDeploymentResult& WithMediaResourceMap(const Aws::Map<Aws::String, MediaResource>& value) { SetMediaResourceMap(value); return *this;}

    
    inline StartDeleteMonitorDeploymentResult& WithMediaResourceMap(Aws::Map<Aws::String, MediaResource>&& value) { SetMediaResourceMap(std::move(value)); return *this;}

    
    inline StartDeleteMonitorDeploymentResult& AddMediaResourceMap(const Aws::String& key, const MediaResource& value) { m_mediaResourceMap.emplace(key, value); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddMediaResourceMap(Aws::String&& key, const MediaResource& value) { m_mediaResourceMap.emplace(std::move(key), value); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddMediaResourceMap(const Aws::String& key, MediaResource&& value) { m_mediaResourceMap.emplace(key, std::move(value)); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddMediaResourceMap(Aws::String&& key, MediaResource&& value) { m_mediaResourceMap.emplace(std::move(key), std::move(value)); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddMediaResourceMap(const char* key, MediaResource&& value) { m_mediaResourceMap.emplace(key, std::move(value)); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddMediaResourceMap(const char* key, const MediaResource& value) { m_mediaResourceMap.emplace(key, value); return *this; }


    
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }

    
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }

    
    inline StartDeleteMonitorDeploymentResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    
    inline StartDeleteMonitorDeploymentResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    /**
     * If true, there are pending monitor changes for this signal map that can be
     * deployed.
     */
    inline bool GetMonitorChangesPendingDeployment() const{ return m_monitorChangesPendingDeployment; }

    /**
     * If true, there are pending monitor changes for this signal map that can be
     * deployed.
     */
    inline void SetMonitorChangesPendingDeployment(bool value) { m_monitorChangesPendingDeployment = value; }

    /**
     * If true, there are pending monitor changes for this signal map that can be
     * deployed.
     */
    inline StartDeleteMonitorDeploymentResult& WithMonitorChangesPendingDeployment(bool value) { SetMonitorChangesPendingDeployment(value); return *this;}


    
    inline const MonitorDeployment& GetMonitorDeployment() const{ return m_monitorDeployment; }

    
    inline void SetMonitorDeployment(const MonitorDeployment& value) { m_monitorDeployment = value; }

    
    inline void SetMonitorDeployment(MonitorDeployment&& value) { m_monitorDeployment = std::move(value); }

    
    inline StartDeleteMonitorDeploymentResult& WithMonitorDeployment(const MonitorDeployment& value) { SetMonitorDeployment(value); return *this;}

    
    inline StartDeleteMonitorDeploymentResult& WithMonitorDeployment(MonitorDeployment&& value) { SetMonitorDeployment(std::move(value)); return *this;}


    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline StartDeleteMonitorDeploymentResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline StartDeleteMonitorDeploymentResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * A resource's name. Names must be unique within the scope of a resource type in a
     * specific region.
     */
    inline StartDeleteMonitorDeploymentResult& WithName(const char* value) { SetName(value); return *this;}


    
    inline const SignalMapStatus& GetStatus() const{ return m_status; }

    
    inline void SetStatus(const SignalMapStatus& value) { m_status = value; }

    
    inline void SetStatus(SignalMapStatus&& value) { m_status = std::move(value); }

    
    inline StartDeleteMonitorDeploymentResult& WithStatus(const SignalMapStatus& value) { SetStatus(value); return *this;}

    
    inline StartDeleteMonitorDeploymentResult& WithStatus(SignalMapStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    
    inline StartDeleteMonitorDeploymentResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline StartDeleteMonitorDeploymentResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline StartDeleteMonitorDeploymentResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline StartDeleteMonitorDeploymentResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartDeleteMonitorDeploymentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartDeleteMonitorDeploymentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartDeleteMonitorDeploymentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
