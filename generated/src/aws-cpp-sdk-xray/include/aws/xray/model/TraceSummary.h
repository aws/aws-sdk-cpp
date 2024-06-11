/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/xray/model/Http.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/ServiceId.h>
#include <aws/xray/model/TraceUser.h>
#include <aws/xray/model/ResourceARNDetail.h>
#include <aws/xray/model/InstanceIdDetail.h>
#include <aws/xray/model/AvailabilityZoneDetail.h>
#include <aws/xray/model/FaultRootCause.h>
#include <aws/xray/model/ErrorRootCause.h>
#include <aws/xray/model/ResponseTimeRootCause.h>
#include <aws/xray/model/ValueWithServiceIds.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace XRay
{
namespace Model
{

  /**
   * <p>Metadata generated from the segment documents in a trace.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/TraceSummary">AWS
   * API Reference</a></p>
   */
  class TraceSummary
  {
  public:
    AWS_XRAY_API TraceSummary();
    AWS_XRAY_API TraceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API TraceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the request that generated the trace's segments and
     * subsegments.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline TraceSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline TraceSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline TraceSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of a trace, based on the earliest trace segment start
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline TraceSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline TraceSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of time in seconds between the start time of the root segment and
     * the end time of the last segment that completed.</p>
     */
    inline double GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(double value) { m_durationHasBeenSet = true; m_duration = value; }
    inline TraceSummary& WithDuration(double value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of time in seconds between the start and end times of the root
     * segment. If the service performs work asynchronously, the response time measures
     * the time before the response is sent to the user, while the duration measures
     * the amount of time before the last traced activity completes.</p>
     */
    inline double GetResponseTime() const{ return m_responseTime; }
    inline bool ResponseTimeHasBeenSet() const { return m_responseTimeHasBeenSet; }
    inline void SetResponseTime(double value) { m_responseTimeHasBeenSet = true; m_responseTime = value; }
    inline TraceSummary& WithResponseTime(double value) { SetResponseTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root segment document has a 500 series error.</p>
     */
    inline bool GetHasFault() const{ return m_hasFault; }
    inline bool HasFaultHasBeenSet() const { return m_hasFaultHasBeenSet; }
    inline void SetHasFault(bool value) { m_hasFaultHasBeenSet = true; m_hasFault = value; }
    inline TraceSummary& WithHasFault(bool value) { SetHasFault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root segment document has a 400 series error.</p>
     */
    inline bool GetHasError() const{ return m_hasError; }
    inline bool HasErrorHasBeenSet() const { return m_hasErrorHasBeenSet; }
    inline void SetHasError(bool value) { m_hasErrorHasBeenSet = true; m_hasError = value; }
    inline TraceSummary& WithHasError(bool value) { SetHasError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more of the segment documents has a 429 throttling error.</p>
     */
    inline bool GetHasThrottle() const{ return m_hasThrottle; }
    inline bool HasThrottleHasBeenSet() const { return m_hasThrottleHasBeenSet; }
    inline void SetHasThrottle(bool value) { m_hasThrottleHasBeenSet = true; m_hasThrottle = value; }
    inline TraceSummary& WithHasThrottle(bool value) { SetHasThrottle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more of the segment documents is in progress.</p>
     */
    inline bool GetIsPartial() const{ return m_isPartial; }
    inline bool IsPartialHasBeenSet() const { return m_isPartialHasBeenSet; }
    inline void SetIsPartial(bool value) { m_isPartialHasBeenSet = true; m_isPartial = value; }
    inline TraceSummary& WithIsPartial(bool value) { SetIsPartial(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the HTTP request served by the trace.</p>
     */
    inline const Http& GetHttp() const{ return m_http; }
    inline bool HttpHasBeenSet() const { return m_httpHasBeenSet; }
    inline void SetHttp(const Http& value) { m_httpHasBeenSet = true; m_http = value; }
    inline void SetHttp(Http&& value) { m_httpHasBeenSet = true; m_http = std::move(value); }
    inline TraceSummary& WithHttp(const Http& value) { SetHttp(value); return *this;}
    inline TraceSummary& WithHttp(Http&& value) { SetHttp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Annotations from the trace's segment documents.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ValueWithServiceIds>>& GetAnnotations() const{ return m_annotations; }
    inline bool AnnotationsHasBeenSet() const { return m_annotationsHasBeenSet; }
    inline void SetAnnotations(const Aws::Map<Aws::String, Aws::Vector<ValueWithServiceIds>>& value) { m_annotationsHasBeenSet = true; m_annotations = value; }
    inline void SetAnnotations(Aws::Map<Aws::String, Aws::Vector<ValueWithServiceIds>>&& value) { m_annotationsHasBeenSet = true; m_annotations = std::move(value); }
    inline TraceSummary& WithAnnotations(const Aws::Map<Aws::String, Aws::Vector<ValueWithServiceIds>>& value) { SetAnnotations(value); return *this;}
    inline TraceSummary& WithAnnotations(Aws::Map<Aws::String, Aws::Vector<ValueWithServiceIds>>&& value) { SetAnnotations(std::move(value)); return *this;}
    inline TraceSummary& AddAnnotations(const Aws::String& key, const Aws::Vector<ValueWithServiceIds>& value) { m_annotationsHasBeenSet = true; m_annotations.emplace(key, value); return *this; }
    inline TraceSummary& AddAnnotations(Aws::String&& key, const Aws::Vector<ValueWithServiceIds>& value) { m_annotationsHasBeenSet = true; m_annotations.emplace(std::move(key), value); return *this; }
    inline TraceSummary& AddAnnotations(const Aws::String& key, Aws::Vector<ValueWithServiceIds>&& value) { m_annotationsHasBeenSet = true; m_annotations.emplace(key, std::move(value)); return *this; }
    inline TraceSummary& AddAnnotations(Aws::String&& key, Aws::Vector<ValueWithServiceIds>&& value) { m_annotationsHasBeenSet = true; m_annotations.emplace(std::move(key), std::move(value)); return *this; }
    inline TraceSummary& AddAnnotations(const char* key, Aws::Vector<ValueWithServiceIds>&& value) { m_annotationsHasBeenSet = true; m_annotations.emplace(key, std::move(value)); return *this; }
    inline TraceSummary& AddAnnotations(const char* key, const Aws::Vector<ValueWithServiceIds>& value) { m_annotationsHasBeenSet = true; m_annotations.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Users from the trace's segment documents.</p>
     */
    inline const Aws::Vector<TraceUser>& GetUsers() const{ return m_users; }
    inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }
    inline void SetUsers(const Aws::Vector<TraceUser>& value) { m_usersHasBeenSet = true; m_users = value; }
    inline void SetUsers(Aws::Vector<TraceUser>&& value) { m_usersHasBeenSet = true; m_users = std::move(value); }
    inline TraceSummary& WithUsers(const Aws::Vector<TraceUser>& value) { SetUsers(value); return *this;}
    inline TraceSummary& WithUsers(Aws::Vector<TraceUser>&& value) { SetUsers(std::move(value)); return *this;}
    inline TraceSummary& AddUsers(const TraceUser& value) { m_usersHasBeenSet = true; m_users.push_back(value); return *this; }
    inline TraceSummary& AddUsers(TraceUser&& value) { m_usersHasBeenSet = true; m_users.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Service IDs from the trace's segment documents.</p>
     */
    inline const Aws::Vector<ServiceId>& GetServiceIds() const{ return m_serviceIds; }
    inline bool ServiceIdsHasBeenSet() const { return m_serviceIdsHasBeenSet; }
    inline void SetServiceIds(const Aws::Vector<ServiceId>& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = value; }
    inline void SetServiceIds(Aws::Vector<ServiceId>&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = std::move(value); }
    inline TraceSummary& WithServiceIds(const Aws::Vector<ServiceId>& value) { SetServiceIds(value); return *this;}
    inline TraceSummary& WithServiceIds(Aws::Vector<ServiceId>&& value) { SetServiceIds(std::move(value)); return *this;}
    inline TraceSummary& AddServiceIds(const ServiceId& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(value); return *this; }
    inline TraceSummary& AddServiceIds(ServiceId&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of resource ARNs for any resource corresponding to the trace
     * segments.</p>
     */
    inline const Aws::Vector<ResourceARNDetail>& GetResourceARNs() const{ return m_resourceARNs; }
    inline bool ResourceARNsHasBeenSet() const { return m_resourceARNsHasBeenSet; }
    inline void SetResourceARNs(const Aws::Vector<ResourceARNDetail>& value) { m_resourceARNsHasBeenSet = true; m_resourceARNs = value; }
    inline void SetResourceARNs(Aws::Vector<ResourceARNDetail>&& value) { m_resourceARNsHasBeenSet = true; m_resourceARNs = std::move(value); }
    inline TraceSummary& WithResourceARNs(const Aws::Vector<ResourceARNDetail>& value) { SetResourceARNs(value); return *this;}
    inline TraceSummary& WithResourceARNs(Aws::Vector<ResourceARNDetail>&& value) { SetResourceARNs(std::move(value)); return *this;}
    inline TraceSummary& AddResourceARNs(const ResourceARNDetail& value) { m_resourceARNsHasBeenSet = true; m_resourceARNs.push_back(value); return *this; }
    inline TraceSummary& AddResourceARNs(ResourceARNDetail&& value) { m_resourceARNsHasBeenSet = true; m_resourceARNs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of EC2 instance IDs for any instance corresponding to the trace
     * segments.</p>
     */
    inline const Aws::Vector<InstanceIdDetail>& GetInstanceIds() const{ return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    inline void SetInstanceIds(const Aws::Vector<InstanceIdDetail>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }
    inline void SetInstanceIds(Aws::Vector<InstanceIdDetail>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }
    inline TraceSummary& WithInstanceIds(const Aws::Vector<InstanceIdDetail>& value) { SetInstanceIds(value); return *this;}
    inline TraceSummary& WithInstanceIds(Aws::Vector<InstanceIdDetail>&& value) { SetInstanceIds(std::move(value)); return *this;}
    inline TraceSummary& AddInstanceIds(const InstanceIdDetail& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }
    inline TraceSummary& AddInstanceIds(InstanceIdDetail&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Availability Zones for any zone corresponding to the trace
     * segments.</p>
     */
    inline const Aws::Vector<AvailabilityZoneDetail>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<AvailabilityZoneDetail>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<AvailabilityZoneDetail>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline TraceSummary& WithAvailabilityZones(const Aws::Vector<AvailabilityZoneDetail>& value) { SetAvailabilityZones(value); return *this;}
    inline TraceSummary& WithAvailabilityZones(Aws::Vector<AvailabilityZoneDetail>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline TraceSummary& AddAvailabilityZones(const AvailabilityZoneDetail& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline TraceSummary& AddAvailabilityZones(AvailabilityZoneDetail&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The root of a trace.</p>
     */
    inline const ServiceId& GetEntryPoint() const{ return m_entryPoint; }
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }
    inline void SetEntryPoint(const ServiceId& value) { m_entryPointHasBeenSet = true; m_entryPoint = value; }
    inline void SetEntryPoint(ServiceId&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::move(value); }
    inline TraceSummary& WithEntryPoint(const ServiceId& value) { SetEntryPoint(value); return *this;}
    inline TraceSummary& WithEntryPoint(ServiceId&& value) { SetEntryPoint(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of FaultRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline const Aws::Vector<FaultRootCause>& GetFaultRootCauses() const{ return m_faultRootCauses; }
    inline bool FaultRootCausesHasBeenSet() const { return m_faultRootCausesHasBeenSet; }
    inline void SetFaultRootCauses(const Aws::Vector<FaultRootCause>& value) { m_faultRootCausesHasBeenSet = true; m_faultRootCauses = value; }
    inline void SetFaultRootCauses(Aws::Vector<FaultRootCause>&& value) { m_faultRootCausesHasBeenSet = true; m_faultRootCauses = std::move(value); }
    inline TraceSummary& WithFaultRootCauses(const Aws::Vector<FaultRootCause>& value) { SetFaultRootCauses(value); return *this;}
    inline TraceSummary& WithFaultRootCauses(Aws::Vector<FaultRootCause>&& value) { SetFaultRootCauses(std::move(value)); return *this;}
    inline TraceSummary& AddFaultRootCauses(const FaultRootCause& value) { m_faultRootCausesHasBeenSet = true; m_faultRootCauses.push_back(value); return *this; }
    inline TraceSummary& AddFaultRootCauses(FaultRootCause&& value) { m_faultRootCausesHasBeenSet = true; m_faultRootCauses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of ErrorRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline const Aws::Vector<ErrorRootCause>& GetErrorRootCauses() const{ return m_errorRootCauses; }
    inline bool ErrorRootCausesHasBeenSet() const { return m_errorRootCausesHasBeenSet; }
    inline void SetErrorRootCauses(const Aws::Vector<ErrorRootCause>& value) { m_errorRootCausesHasBeenSet = true; m_errorRootCauses = value; }
    inline void SetErrorRootCauses(Aws::Vector<ErrorRootCause>&& value) { m_errorRootCausesHasBeenSet = true; m_errorRootCauses = std::move(value); }
    inline TraceSummary& WithErrorRootCauses(const Aws::Vector<ErrorRootCause>& value) { SetErrorRootCauses(value); return *this;}
    inline TraceSummary& WithErrorRootCauses(Aws::Vector<ErrorRootCause>&& value) { SetErrorRootCauses(std::move(value)); return *this;}
    inline TraceSummary& AddErrorRootCauses(const ErrorRootCause& value) { m_errorRootCausesHasBeenSet = true; m_errorRootCauses.push_back(value); return *this; }
    inline TraceSummary& AddErrorRootCauses(ErrorRootCause&& value) { m_errorRootCausesHasBeenSet = true; m_errorRootCauses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of ResponseTimeRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline const Aws::Vector<ResponseTimeRootCause>& GetResponseTimeRootCauses() const{ return m_responseTimeRootCauses; }
    inline bool ResponseTimeRootCausesHasBeenSet() const { return m_responseTimeRootCausesHasBeenSet; }
    inline void SetResponseTimeRootCauses(const Aws::Vector<ResponseTimeRootCause>& value) { m_responseTimeRootCausesHasBeenSet = true; m_responseTimeRootCauses = value; }
    inline void SetResponseTimeRootCauses(Aws::Vector<ResponseTimeRootCause>&& value) { m_responseTimeRootCausesHasBeenSet = true; m_responseTimeRootCauses = std::move(value); }
    inline TraceSummary& WithResponseTimeRootCauses(const Aws::Vector<ResponseTimeRootCause>& value) { SetResponseTimeRootCauses(value); return *this;}
    inline TraceSummary& WithResponseTimeRootCauses(Aws::Vector<ResponseTimeRootCause>&& value) { SetResponseTimeRootCauses(std::move(value)); return *this;}
    inline TraceSummary& AddResponseTimeRootCauses(const ResponseTimeRootCause& value) { m_responseTimeRootCausesHasBeenSet = true; m_responseTimeRootCauses.push_back(value); return *this; }
    inline TraceSummary& AddResponseTimeRootCauses(ResponseTimeRootCause&& value) { m_responseTimeRootCausesHasBeenSet = true; m_responseTimeRootCauses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The revision number of a trace.</p>
     */
    inline int GetRevision() const{ return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline TraceSummary& WithRevision(int value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The matched time stamp of a defined event.</p>
     */
    inline const Aws::Utils::DateTime& GetMatchedEventTime() const{ return m_matchedEventTime; }
    inline bool MatchedEventTimeHasBeenSet() const { return m_matchedEventTimeHasBeenSet; }
    inline void SetMatchedEventTime(const Aws::Utils::DateTime& value) { m_matchedEventTimeHasBeenSet = true; m_matchedEventTime = value; }
    inline void SetMatchedEventTime(Aws::Utils::DateTime&& value) { m_matchedEventTimeHasBeenSet = true; m_matchedEventTime = std::move(value); }
    inline TraceSummary& WithMatchedEventTime(const Aws::Utils::DateTime& value) { SetMatchedEventTime(value); return *this;}
    inline TraceSummary& WithMatchedEventTime(Aws::Utils::DateTime&& value) { SetMatchedEventTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    double m_duration;
    bool m_durationHasBeenSet = false;

    double m_responseTime;
    bool m_responseTimeHasBeenSet = false;

    bool m_hasFault;
    bool m_hasFaultHasBeenSet = false;

    bool m_hasError;
    bool m_hasErrorHasBeenSet = false;

    bool m_hasThrottle;
    bool m_hasThrottleHasBeenSet = false;

    bool m_isPartial;
    bool m_isPartialHasBeenSet = false;

    Http m_http;
    bool m_httpHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<ValueWithServiceIds>> m_annotations;
    bool m_annotationsHasBeenSet = false;

    Aws::Vector<TraceUser> m_users;
    bool m_usersHasBeenSet = false;

    Aws::Vector<ServiceId> m_serviceIds;
    bool m_serviceIdsHasBeenSet = false;

    Aws::Vector<ResourceARNDetail> m_resourceARNs;
    bool m_resourceARNsHasBeenSet = false;

    Aws::Vector<InstanceIdDetail> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    Aws::Vector<AvailabilityZoneDetail> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    ServiceId m_entryPoint;
    bool m_entryPointHasBeenSet = false;

    Aws::Vector<FaultRootCause> m_faultRootCauses;
    bool m_faultRootCausesHasBeenSet = false;

    Aws::Vector<ErrorRootCause> m_errorRootCauses;
    bool m_errorRootCausesHasBeenSet = false;

    Aws::Vector<ResponseTimeRootCause> m_responseTimeRootCauses;
    bool m_responseTimeRootCausesHasBeenSet = false;

    int m_revision;
    bool m_revisionHasBeenSet = false;

    Aws::Utils::DateTime m_matchedEventTime;
    bool m_matchedEventTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
