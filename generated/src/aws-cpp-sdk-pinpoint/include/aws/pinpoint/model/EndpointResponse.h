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
    AWS_PINPOINT_API EndpointResponse();
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
    inline const Aws::String& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }
    inline EndpointResponse& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}
    inline EndpointResponse& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}
    inline EndpointResponse& WithAddress(const char* value) { SetAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the application that's associated with the
     * endpoint.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline EndpointResponse& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline EndpointResponse& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline EndpointResponse& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more custom attributes that describe the endpoint by associating a
     * name with an array of values. For example, the value of a custom attribute named
     * Interests might be: ["Science", "Music", "Travel"]. You can use these attributes
     * as filter criteria when you create segments.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline EndpointResponse& WithAttributes(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetAttributes(value); return *this;}
    inline EndpointResponse& WithAttributes(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetAttributes(std::move(value)); return *this;}
    inline EndpointResponse& AddAttributes(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline EndpointResponse& AddAttributes(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline EndpointResponse& AddAttributes(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline EndpointResponse& AddAttributes(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline EndpointResponse& AddAttributes(const char* key, Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline EndpointResponse& AddAttributes(const char* key, const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The channel that's used when sending messages or push notifications to the
     * endpoint.</p>
     */
    inline const ChannelType& GetChannelType() const{ return m_channelType; }
    inline bool ChannelTypeHasBeenSet() const { return m_channelTypeHasBeenSet; }
    inline void SetChannelType(const ChannelType& value) { m_channelTypeHasBeenSet = true; m_channelType = value; }
    inline void SetChannelType(ChannelType&& value) { m_channelTypeHasBeenSet = true; m_channelType = std::move(value); }
    inline EndpointResponse& WithChannelType(const ChannelType& value) { SetChannelType(value); return *this;}
    inline EndpointResponse& WithChannelType(ChannelType&& value) { SetChannelType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number from 0-99 that represents the cohort that the endpoint is assigned
     * to. Endpoints are grouped into cohorts randomly, and each cohort contains
     * approximately 1 percent of the endpoints for an application. Amazon Pinpoint
     * assigns cohorts to the holdout or treatment allocations for campaigns.</p>
     */
    inline const Aws::String& GetCohortId() const{ return m_cohortId; }
    inline bool CohortIdHasBeenSet() const { return m_cohortIdHasBeenSet; }
    inline void SetCohortId(const Aws::String& value) { m_cohortIdHasBeenSet = true; m_cohortId = value; }
    inline void SetCohortId(Aws::String&& value) { m_cohortIdHasBeenSet = true; m_cohortId = std::move(value); }
    inline void SetCohortId(const char* value) { m_cohortIdHasBeenSet = true; m_cohortId.assign(value); }
    inline EndpointResponse& WithCohortId(const Aws::String& value) { SetCohortId(value); return *this;}
    inline EndpointResponse& WithCohortId(Aws::String&& value) { SetCohortId(std::move(value)); return *this;}
    inline EndpointResponse& WithCohortId(const char* value) { SetCohortId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO 8601 format, when the endpoint was created.</p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }
    inline EndpointResponse& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}
    inline EndpointResponse& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}
    inline EndpointResponse& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The demographic information for the endpoint, such as the time zone and
     * platform.</p>
     */
    inline const EndpointDemographic& GetDemographic() const{ return m_demographic; }
    inline bool DemographicHasBeenSet() const { return m_demographicHasBeenSet; }
    inline void SetDemographic(const EndpointDemographic& value) { m_demographicHasBeenSet = true; m_demographic = value; }
    inline void SetDemographic(EndpointDemographic&& value) { m_demographicHasBeenSet = true; m_demographic = std::move(value); }
    inline EndpointResponse& WithDemographic(const EndpointDemographic& value) { SetDemographic(value); return *this;}
    inline EndpointResponse& WithDemographic(EndpointDemographic&& value) { SetDemographic(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO 8601 format, when the endpoint was last
     * updated.</p>
     */
    inline const Aws::String& GetEffectiveDate() const{ return m_effectiveDate; }
    inline bool EffectiveDateHasBeenSet() const { return m_effectiveDateHasBeenSet; }
    inline void SetEffectiveDate(const Aws::String& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = value; }
    inline void SetEffectiveDate(Aws::String&& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = std::move(value); }
    inline void SetEffectiveDate(const char* value) { m_effectiveDateHasBeenSet = true; m_effectiveDate.assign(value); }
    inline EndpointResponse& WithEffectiveDate(const Aws::String& value) { SetEffectiveDate(value); return *this;}
    inline EndpointResponse& WithEffectiveDate(Aws::String&& value) { SetEffectiveDate(std::move(value)); return *this;}
    inline EndpointResponse& WithEffectiveDate(const char* value) { SetEffectiveDate(value); return *this;}
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
    inline const Aws::String& GetEndpointStatus() const{ return m_endpointStatus; }
    inline bool EndpointStatusHasBeenSet() const { return m_endpointStatusHasBeenSet; }
    inline void SetEndpointStatus(const Aws::String& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = value; }
    inline void SetEndpointStatus(Aws::String&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = std::move(value); }
    inline void SetEndpointStatus(const char* value) { m_endpointStatusHasBeenSet = true; m_endpointStatus.assign(value); }
    inline EndpointResponse& WithEndpointStatus(const Aws::String& value) { SetEndpointStatus(value); return *this;}
    inline EndpointResponse& WithEndpointStatus(Aws::String&& value) { SetEndpointStatus(std::move(value)); return *this;}
    inline EndpointResponse& WithEndpointStatus(const char* value) { SetEndpointStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier that you assigned to the endpoint. The identifier
     * should be a globally unique identifier (GUID) to ensure that it doesn't conflict
     * with other endpoint identifiers that are associated with the application.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline EndpointResponse& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline EndpointResponse& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline EndpointResponse& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The geographic information for the endpoint.</p>
     */
    inline const EndpointLocation& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const EndpointLocation& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(EndpointLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline EndpointResponse& WithLocation(const EndpointLocation& value) { SetLocation(value); return *this;}
    inline EndpointResponse& WithLocation(EndpointLocation&& value) { SetLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more custom metrics that your app reports to Amazon Pinpoint for the
     * endpoint.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetMetrics() const{ return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    inline void SetMetrics(const Aws::Map<Aws::String, double>& value) { m_metricsHasBeenSet = true; m_metrics = value; }
    inline void SetMetrics(Aws::Map<Aws::String, double>&& value) { m_metricsHasBeenSet = true; m_metrics = std::move(value); }
    inline EndpointResponse& WithMetrics(const Aws::Map<Aws::String, double>& value) { SetMetrics(value); return *this;}
    inline EndpointResponse& WithMetrics(Aws::Map<Aws::String, double>&& value) { SetMetrics(std::move(value)); return *this;}
    inline EndpointResponse& AddMetrics(const Aws::String& key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }
    inline EndpointResponse& AddMetrics(Aws::String&& key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }
    inline EndpointResponse& AddMetrics(const char* key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user who's associated with the endpoint has opted out
     * of receiving messages and push notifications from you. Possible values are: ALL,
     * the user has opted out and doesn't want to receive any messages or push
     * notifications; and, NONE, the user hasn't opted out and wants to receive all
     * messages and push notifications.</p>
     */
    inline const Aws::String& GetOptOut() const{ return m_optOut; }
    inline bool OptOutHasBeenSet() const { return m_optOutHasBeenSet; }
    inline void SetOptOut(const Aws::String& value) { m_optOutHasBeenSet = true; m_optOut = value; }
    inline void SetOptOut(Aws::String&& value) { m_optOutHasBeenSet = true; m_optOut = std::move(value); }
    inline void SetOptOut(const char* value) { m_optOutHasBeenSet = true; m_optOut.assign(value); }
    inline EndpointResponse& WithOptOut(const Aws::String& value) { SetOptOut(value); return *this;}
    inline EndpointResponse& WithOptOut(Aws::String&& value) { SetOptOut(std::move(value)); return *this;}
    inline EndpointResponse& WithOptOut(const char* value) { SetOptOut(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the most recent request to update the endpoint.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline EndpointResponse& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline EndpointResponse& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline EndpointResponse& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more custom user attributes that your app reports to Amazon Pinpoint
     * for the user who's associated with the endpoint.</p>
     */
    inline const EndpointUser& GetUser() const{ return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    inline void SetUser(const EndpointUser& value) { m_userHasBeenSet = true; m_user = value; }
    inline void SetUser(EndpointUser&& value) { m_userHasBeenSet = true; m_user = std::move(value); }
    inline EndpointResponse& WithUser(const EndpointUser& value) { SetUser(value); return *this;}
    inline EndpointResponse& WithUser(EndpointUser&& value) { SetUser(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_attributes;
    bool m_attributesHasBeenSet = false;

    ChannelType m_channelType;
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
