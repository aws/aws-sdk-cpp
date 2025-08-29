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
    AWS_XRAY_API TraceSummary() = default;
    AWS_XRAY_API TraceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API TraceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the request that generated the trace's segments and
     * subsegments.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    TraceSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of a trace, based on the earliest trace segment start
     * time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    TraceSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The length of time in seconds between the start time of the earliest segment
     * that started and the end time of the last segment that completed.</p>
     */
    inline double GetDuration() const { return m_duration; }
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
    inline double GetResponseTime() const { return m_responseTime; }
    inline bool ResponseTimeHasBeenSet() const { return m_responseTimeHasBeenSet; }
    inline void SetResponseTime(double value) { m_responseTimeHasBeenSet = true; m_responseTime = value; }
    inline TraceSummary& WithResponseTime(double value) { SetResponseTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root segment document has a 500 series error.</p>
     */
    inline bool GetHasFault() const { return m_hasFault; }
    inline bool HasFaultHasBeenSet() const { return m_hasFaultHasBeenSet; }
    inline void SetHasFault(bool value) { m_hasFaultHasBeenSet = true; m_hasFault = value; }
    inline TraceSummary& WithHasFault(bool value) { SetHasFault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root segment document has a 400 series error.</p>
     */
    inline bool GetHasError() const { return m_hasError; }
    inline bool HasErrorHasBeenSet() const { return m_hasErrorHasBeenSet; }
    inline void SetHasError(bool value) { m_hasErrorHasBeenSet = true; m_hasError = value; }
    inline TraceSummary& WithHasError(bool value) { SetHasError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more of the segment documents has a 429 throttling error.</p>
     */
    inline bool GetHasThrottle() const { return m_hasThrottle; }
    inline bool HasThrottleHasBeenSet() const { return m_hasThrottleHasBeenSet; }
    inline void SetHasThrottle(bool value) { m_hasThrottleHasBeenSet = true; m_hasThrottle = value; }
    inline TraceSummary& WithHasThrottle(bool value) { SetHasThrottle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more of the segment documents is in progress.</p>
     */
    inline bool GetIsPartial() const { return m_isPartial; }
    inline bool IsPartialHasBeenSet() const { return m_isPartialHasBeenSet; }
    inline void SetIsPartial(bool value) { m_isPartialHasBeenSet = true; m_isPartial = value; }
    inline TraceSummary& WithIsPartial(bool value) { SetIsPartial(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the HTTP request served by the trace.</p>
     */
    inline const Http& GetHttp() const { return m_http; }
    inline bool HttpHasBeenSet() const { return m_httpHasBeenSet; }
    template<typename HttpT = Http>
    void SetHttp(HttpT&& value) { m_httpHasBeenSet = true; m_http = std::forward<HttpT>(value); }
    template<typename HttpT = Http>
    TraceSummary& WithHttp(HttpT&& value) { SetHttp(std::forward<HttpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Annotations from the trace's segment documents.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ValueWithServiceIds>>& GetAnnotations() const { return m_annotations; }
    inline bool AnnotationsHasBeenSet() const { return m_annotationsHasBeenSet; }
    template<typename AnnotationsT = Aws::Map<Aws::String, Aws::Vector<ValueWithServiceIds>>>
    void SetAnnotations(AnnotationsT&& value) { m_annotationsHasBeenSet = true; m_annotations = std::forward<AnnotationsT>(value); }
    template<typename AnnotationsT = Aws::Map<Aws::String, Aws::Vector<ValueWithServiceIds>>>
    TraceSummary& WithAnnotations(AnnotationsT&& value) { SetAnnotations(std::forward<AnnotationsT>(value)); return *this;}
    template<typename AnnotationsKeyT = Aws::String, typename AnnotationsValueT = Aws::Vector<ValueWithServiceIds>>
    TraceSummary& AddAnnotations(AnnotationsKeyT&& key, AnnotationsValueT&& value) {
      m_annotationsHasBeenSet = true; m_annotations.emplace(std::forward<AnnotationsKeyT>(key), std::forward<AnnotationsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Users from the trace's segment documents.</p>
     */
    inline const Aws::Vector<TraceUser>& GetUsers() const { return m_users; }
    inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }
    template<typename UsersT = Aws::Vector<TraceUser>>
    void SetUsers(UsersT&& value) { m_usersHasBeenSet = true; m_users = std::forward<UsersT>(value); }
    template<typename UsersT = Aws::Vector<TraceUser>>
    TraceSummary& WithUsers(UsersT&& value) { SetUsers(std::forward<UsersT>(value)); return *this;}
    template<typename UsersT = TraceUser>
    TraceSummary& AddUsers(UsersT&& value) { m_usersHasBeenSet = true; m_users.emplace_back(std::forward<UsersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Service IDs from the trace's segment documents.</p>
     */
    inline const Aws::Vector<ServiceId>& GetServiceIds() const { return m_serviceIds; }
    inline bool ServiceIdsHasBeenSet() const { return m_serviceIdsHasBeenSet; }
    template<typename ServiceIdsT = Aws::Vector<ServiceId>>
    void SetServiceIds(ServiceIdsT&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = std::forward<ServiceIdsT>(value); }
    template<typename ServiceIdsT = Aws::Vector<ServiceId>>
    TraceSummary& WithServiceIds(ServiceIdsT&& value) { SetServiceIds(std::forward<ServiceIdsT>(value)); return *this;}
    template<typename ServiceIdsT = ServiceId>
    TraceSummary& AddServiceIds(ServiceIdsT&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.emplace_back(std::forward<ServiceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of resource ARNs for any resource corresponding to the trace
     * segments.</p>
     */
    inline const Aws::Vector<ResourceARNDetail>& GetResourceARNs() const { return m_resourceARNs; }
    inline bool ResourceARNsHasBeenSet() const { return m_resourceARNsHasBeenSet; }
    template<typename ResourceARNsT = Aws::Vector<ResourceARNDetail>>
    void SetResourceARNs(ResourceARNsT&& value) { m_resourceARNsHasBeenSet = true; m_resourceARNs = std::forward<ResourceARNsT>(value); }
    template<typename ResourceARNsT = Aws::Vector<ResourceARNDetail>>
    TraceSummary& WithResourceARNs(ResourceARNsT&& value) { SetResourceARNs(std::forward<ResourceARNsT>(value)); return *this;}
    template<typename ResourceARNsT = ResourceARNDetail>
    TraceSummary& AddResourceARNs(ResourceARNsT&& value) { m_resourceARNsHasBeenSet = true; m_resourceARNs.emplace_back(std::forward<ResourceARNsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of EC2 instance IDs for any instance corresponding to the trace
     * segments.</p>
     */
    inline const Aws::Vector<InstanceIdDetail>& GetInstanceIds() const { return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    template<typename InstanceIdsT = Aws::Vector<InstanceIdDetail>>
    void SetInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::forward<InstanceIdsT>(value); }
    template<typename InstanceIdsT = Aws::Vector<InstanceIdDetail>>
    TraceSummary& WithInstanceIds(InstanceIdsT&& value) { SetInstanceIds(std::forward<InstanceIdsT>(value)); return *this;}
    template<typename InstanceIdsT = InstanceIdDetail>
    TraceSummary& AddInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Availability Zones for any zone corresponding to the trace
     * segments.</p>
     */
    inline const Aws::Vector<AvailabilityZoneDetail>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<AvailabilityZoneDetail>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<AvailabilityZoneDetail>>
    TraceSummary& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = AvailabilityZoneDetail>
    TraceSummary& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The root of a trace.</p>
     */
    inline const ServiceId& GetEntryPoint() const { return m_entryPoint; }
    inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }
    template<typename EntryPointT = ServiceId>
    void SetEntryPoint(EntryPointT&& value) { m_entryPointHasBeenSet = true; m_entryPoint = std::forward<EntryPointT>(value); }
    template<typename EntryPointT = ServiceId>
    TraceSummary& WithEntryPoint(EntryPointT&& value) { SetEntryPoint(std::forward<EntryPointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of FaultRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline const Aws::Vector<FaultRootCause>& GetFaultRootCauses() const { return m_faultRootCauses; }
    inline bool FaultRootCausesHasBeenSet() const { return m_faultRootCausesHasBeenSet; }
    template<typename FaultRootCausesT = Aws::Vector<FaultRootCause>>
    void SetFaultRootCauses(FaultRootCausesT&& value) { m_faultRootCausesHasBeenSet = true; m_faultRootCauses = std::forward<FaultRootCausesT>(value); }
    template<typename FaultRootCausesT = Aws::Vector<FaultRootCause>>
    TraceSummary& WithFaultRootCauses(FaultRootCausesT&& value) { SetFaultRootCauses(std::forward<FaultRootCausesT>(value)); return *this;}
    template<typename FaultRootCausesT = FaultRootCause>
    TraceSummary& AddFaultRootCauses(FaultRootCausesT&& value) { m_faultRootCausesHasBeenSet = true; m_faultRootCauses.emplace_back(std::forward<FaultRootCausesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of ErrorRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline const Aws::Vector<ErrorRootCause>& GetErrorRootCauses() const { return m_errorRootCauses; }
    inline bool ErrorRootCausesHasBeenSet() const { return m_errorRootCausesHasBeenSet; }
    template<typename ErrorRootCausesT = Aws::Vector<ErrorRootCause>>
    void SetErrorRootCauses(ErrorRootCausesT&& value) { m_errorRootCausesHasBeenSet = true; m_errorRootCauses = std::forward<ErrorRootCausesT>(value); }
    template<typename ErrorRootCausesT = Aws::Vector<ErrorRootCause>>
    TraceSummary& WithErrorRootCauses(ErrorRootCausesT&& value) { SetErrorRootCauses(std::forward<ErrorRootCausesT>(value)); return *this;}
    template<typename ErrorRootCausesT = ErrorRootCause>
    TraceSummary& AddErrorRootCauses(ErrorRootCausesT&& value) { m_errorRootCausesHasBeenSet = true; m_errorRootCauses.emplace_back(std::forward<ErrorRootCausesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A collection of ResponseTimeRootCause structures corresponding to the trace
     * segments.</p>
     */
    inline const Aws::Vector<ResponseTimeRootCause>& GetResponseTimeRootCauses() const { return m_responseTimeRootCauses; }
    inline bool ResponseTimeRootCausesHasBeenSet() const { return m_responseTimeRootCausesHasBeenSet; }
    template<typename ResponseTimeRootCausesT = Aws::Vector<ResponseTimeRootCause>>
    void SetResponseTimeRootCauses(ResponseTimeRootCausesT&& value) { m_responseTimeRootCausesHasBeenSet = true; m_responseTimeRootCauses = std::forward<ResponseTimeRootCausesT>(value); }
    template<typename ResponseTimeRootCausesT = Aws::Vector<ResponseTimeRootCause>>
    TraceSummary& WithResponseTimeRootCauses(ResponseTimeRootCausesT&& value) { SetResponseTimeRootCauses(std::forward<ResponseTimeRootCausesT>(value)); return *this;}
    template<typename ResponseTimeRootCausesT = ResponseTimeRootCause>
    TraceSummary& AddResponseTimeRootCauses(ResponseTimeRootCausesT&& value) { m_responseTimeRootCausesHasBeenSet = true; m_responseTimeRootCauses.emplace_back(std::forward<ResponseTimeRootCausesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The revision number of a trace.</p>
     */
    inline int GetRevision() const { return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(int value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline TraceSummary& WithRevision(int value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The matched time stamp of a defined event.</p>
     */
    inline const Aws::Utils::DateTime& GetMatchedEventTime() const { return m_matchedEventTime; }
    inline bool MatchedEventTimeHasBeenSet() const { return m_matchedEventTimeHasBeenSet; }
    template<typename MatchedEventTimeT = Aws::Utils::DateTime>
    void SetMatchedEventTime(MatchedEventTimeT&& value) { m_matchedEventTimeHasBeenSet = true; m_matchedEventTime = std::forward<MatchedEventTimeT>(value); }
    template<typename MatchedEventTimeT = Aws::Utils::DateTime>
    TraceSummary& WithMatchedEventTime(MatchedEventTimeT&& value) { SetMatchedEventTime(std::forward<MatchedEventTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    double m_duration{0.0};
    bool m_durationHasBeenSet = false;

    double m_responseTime{0.0};
    bool m_responseTimeHasBeenSet = false;

    bool m_hasFault{false};
    bool m_hasFaultHasBeenSet = false;

    bool m_hasError{false};
    bool m_hasErrorHasBeenSet = false;

    bool m_hasThrottle{false};
    bool m_hasThrottleHasBeenSet = false;

    bool m_isPartial{false};
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

    int m_revision{0};
    bool m_revisionHasBeenSet = false;

    Aws::Utils::DateTime m_matchedEventTime{};
    bool m_matchedEventTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
