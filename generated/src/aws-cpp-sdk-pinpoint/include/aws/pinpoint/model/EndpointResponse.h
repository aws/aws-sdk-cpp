/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/pinpoint/model/ChannelType.h>
#include <aws/pinpoint/model/EndpointDemographic.h>
#include <aws/pinpoint/model/EndpointLocation.h>
#include <aws/pinpoint/model/EndpointUser.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about the channel type and other settings for an
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EndpointResponse">AWS
   * API Reference</a></p>
   */
  class EndpointResponse
  {
  public:
    AWS_PINPOINT_API EndpointResponse() = default;
    AWS_PINPOINT_API EndpointResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EndpointResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The destination address for messages or push notifications that you send to
     * the endpoint. The address varies by channel. For example, the address for a
     * push-notification channel is typically the token provided by a push notification
     * service, such as an Apple Push Notification service (APNs) device token or a
     * Firebase Cloud Messaging (FCM) registration token. The address for the SMS
     * channel is a phone number in E.164 format, such as +12065550100. The address for
     * the email channel is an email address.</p>
     */
    inline const Aws::String& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Aws::String>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::String>
    EndpointResponse& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the application that's associated with the
     * endpoint.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    EndpointResponse& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more custom attributes that describe the endpoint by associating a
     * name with an array of values. For example, the value of a custom attribute named
     * Interests might be: ["Science", "Music", "Travel"]. You can use these attributes
     * as filter criteria when you create segments.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    EndpointResponse& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::Vector<Aws::String>>
    EndpointResponse& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The channel that's used when sending messages or push notifications to the
     * endpoint.</p>
     */
    inline ChannelType GetChannelType() const { return m_channelType; }
    inline bool ChannelTypeHasBeenSet() const { return m_channelTypeHasBeenSet; }
    inline void SetChannelType(ChannelType value) { m_channelTypeHasBeenSet = true; m_channelType = value; }
    inline EndpointResponse& WithChannelType(ChannelType value) { SetChannelType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number from 0-99 that represents the cohort that the endpoint is assigned
     * to. Endpoints are grouped into cohorts randomly, and each cohort contains
     * approximately 1 percent of the endpoints for an application. Amazon Pinpoint
     * assigns cohorts to the holdout or treatment allocations for campaigns.</p>
     */
    inline const Aws::String& GetCohortId() const { return m_cohortId; }
    inline bool CohortIdHasBeenSet() const { return m_cohortIdHasBeenSet; }
    template<typename CohortIdT = Aws::String>
    void SetCohortId(CohortIdT&& value) { m_cohortIdHasBeenSet = true; m_cohortId = std::forward<CohortIdT>(value); }
    template<typename CohortIdT = Aws::String>
    EndpointResponse& WithCohortId(CohortIdT&& value) { SetCohortId(std::forward<CohortIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO 8601 format, when the endpoint was created.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    EndpointResponse& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The demographic information for the endpoint, such as the time zone and
     * platform.</p>
     */
    inline const EndpointDemographic& GetDemographic() const { return m_demographic; }
    inline bool DemographicHasBeenSet() const { return m_demographicHasBeenSet; }
    template<typename DemographicT = EndpointDemographic>
    void SetDemographic(DemographicT&& value) { m_demographicHasBeenSet = true; m_demographic = std::forward<DemographicT>(value); }
    template<typename DemographicT = EndpointDemographic>
    EndpointResponse& WithDemographic(DemographicT&& value) { SetDemographic(std::forward<DemographicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO 8601 format, when the endpoint was last
     * updated.</p>
     */
    inline const Aws::String& GetEffectiveDate() const { return m_effectiveDate; }
    inline bool EffectiveDateHasBeenSet() const { return m_effectiveDateHasBeenSet; }
    template<typename EffectiveDateT = Aws::String>
    void SetEffectiveDate(EffectiveDateT&& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = std::forward<EffectiveDateT>(value); }
    template<typename EffectiveDateT = Aws::String>
    EndpointResponse& WithEffectiveDate(EffectiveDateT&& value) { SetEffectiveDate(std::forward<EffectiveDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether messages or push notifications are sent to the endpoint.
     * Possible values are: ACTIVE, messages are sent to the endpoint; and, INACTIVE,
     * messages aren’t sent to the endpoint.</p> <p>Amazon Pinpoint automatically sets
     * this value to ACTIVE when you create an endpoint or update an existing endpoint.
     * Amazon Pinpoint automatically sets this value to INACTIVE if you update another
     * endpoint that has the same address specified by the Address property.</p>
     */
    inline const Aws::String& GetEndpointStatus() const { return m_endpointStatus; }
    inline bool EndpointStatusHasBeenSet() const { return m_endpointStatusHasBeenSet; }
    template<typename EndpointStatusT = Aws::String>
    void SetEndpointStatus(EndpointStatusT&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = std::forward<EndpointStatusT>(value); }
    template<typename EndpointStatusT = Aws::String>
    EndpointResponse& WithEndpointStatus(EndpointStatusT&& value) { SetEndpointStatus(std::forward<EndpointStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier that you assigned to the endpoint. The identifier
     * should be a globally unique identifier (GUID) to ensure that it doesn't conflict
     * with other endpoint identifiers that are associated with the application.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    EndpointResponse& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The geographic information for the endpoint.</p>
     */
    inline const EndpointLocation& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = EndpointLocation>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = EndpointLocation>
    EndpointResponse& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more custom metrics that your app reports to Amazon Pinpoint for the
     * endpoint.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = Aws::Map<Aws::String, double>>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = Aws::Map<Aws::String, double>>
    EndpointResponse& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    inline EndpointResponse& AddMetrics(Aws::String key, double value) {
      m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user who's associated with the endpoint has opted out
     * of receiving messages and push notifications from you. Possible values are: ALL,
     * the user has opted out and doesn't want to receive any messages or push
     * notifications; and, NONE, the user hasn't opted out and wants to receive all
     * messages and push notifications.</p>
     */
    inline const Aws::String& GetOptOut() const { return m_optOut; }
    inline bool OptOutHasBeenSet() const { return m_optOutHasBeenSet; }
    template<typename OptOutT = Aws::String>
    void SetOptOut(OptOutT&& value) { m_optOutHasBeenSet = true; m_optOut = std::forward<OptOutT>(value); }
    template<typename OptOutT = Aws::String>
    EndpointResponse& WithOptOut(OptOutT&& value) { SetOptOut(std::forward<OptOutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the most recent request to update the endpoint.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    EndpointResponse& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more custom user attributes that your app reports to Amazon Pinpoint
     * for the user who's associated with the endpoint.</p>
     */
    inline const EndpointUser& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = EndpointUser>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = EndpointUser>
    EndpointResponse& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_attributes;
    bool m_attributesHasBeenSet = false;

    ChannelType m_channelType{ChannelType::NOT_SET};
    bool m_channelTypeHasBeenSet = false;

    Aws::String m_cohortId;
    bool m_cohortIdHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    EndpointDemographic m_demographic;
    bool m_demographicHasBeenSet = false;

    Aws::String m_effectiveDate;
    bool m_effectiveDateHasBeenSet = false;

    Aws::String m_endpointStatus;
    bool m_endpointStatusHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    EndpointLocation m_location;
    bool m_locationHasBeenSet = false;

    Aws::Map<Aws::String, double> m_metrics;
    bool m_metricsHasBeenSet = false;

    Aws::String m_optOut;
    bool m_optOutHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    EndpointUser m_user;
    bool m_userHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
