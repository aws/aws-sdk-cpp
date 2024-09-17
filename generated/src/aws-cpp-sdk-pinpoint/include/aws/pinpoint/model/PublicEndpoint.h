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
   * <p>Specifies the properties and attributes of an endpoint that's associated with
   * an event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/PublicEndpoint">AWS
   * API Reference</a></p>
   */
  class PublicEndpoint
  {
  public:
    AWS_PINPOINT_API PublicEndpoint();
    AWS_PINPOINT_API PublicEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API PublicEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the recipient, such as a device token, email
     * address, or mobile phone number.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }
    inline PublicEndpoint& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}
    inline PublicEndpoint& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}
    inline PublicEndpoint& WithAddress(const char* value) { SetAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more custom attributes that describe the endpoint by associating a
     * name with an array of values. You can use these attributes as filter criteria
     * when you create segments.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline PublicEndpoint& WithAttributes(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetAttributes(value); return *this;}
    inline PublicEndpoint& WithAttributes(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetAttributes(std::move(value)); return *this;}
    inline PublicEndpoint& AddAttributes(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline PublicEndpoint& AddAttributes(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline PublicEndpoint& AddAttributes(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline PublicEndpoint& AddAttributes(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline PublicEndpoint& AddAttributes(const char* key, Aws::Vector<Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline PublicEndpoint& AddAttributes(const char* key, const Aws::Vector<Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
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
    inline PublicEndpoint& WithChannelType(const ChannelType& value) { SetChannelType(value); return *this;}
    inline PublicEndpoint& WithChannelType(ChannelType&& value) { SetChannelType(std::move(value)); return *this;}
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
    inline PublicEndpoint& WithDemographic(const EndpointDemographic& value) { SetDemographic(value); return *this;}
    inline PublicEndpoint& WithDemographic(EndpointDemographic&& value) { SetDemographic(std::move(value)); return *this;}
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
    inline PublicEndpoint& WithEffectiveDate(const Aws::String& value) { SetEffectiveDate(value); return *this;}
    inline PublicEndpoint& WithEffectiveDate(Aws::String&& value) { SetEffectiveDate(std::move(value)); return *this;}
    inline PublicEndpoint& WithEffectiveDate(const char* value) { SetEffectiveDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to send messages or push notifications to the endpoint.
     * Valid values are: ACTIVE, messages are sent to the endpoint; and, INACTIVE,
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
    inline PublicEndpoint& WithEndpointStatus(const Aws::String& value) { SetEndpointStatus(value); return *this;}
    inline PublicEndpoint& WithEndpointStatus(Aws::String&& value) { SetEndpointStatus(std::move(value)); return *this;}
    inline PublicEndpoint& WithEndpointStatus(const char* value) { SetEndpointStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The geographic information for the endpoint.</p>
     */
    inline const EndpointLocation& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const EndpointLocation& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(EndpointLocation&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline PublicEndpoint& WithLocation(const EndpointLocation& value) { SetLocation(value); return *this;}
    inline PublicEndpoint& WithLocation(EndpointLocation&& value) { SetLocation(std::move(value)); return *this;}
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
    inline PublicEndpoint& WithMetrics(const Aws::Map<Aws::String, double>& value) { SetMetrics(value); return *this;}
    inline PublicEndpoint& WithMetrics(Aws::Map<Aws::String, double>&& value) { SetMetrics(std::move(value)); return *this;}
    inline PublicEndpoint& AddMetrics(const Aws::String& key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }
    inline PublicEndpoint& AddMetrics(Aws::String&& key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(std::move(key), value); return *this; }
    inline PublicEndpoint& AddMetrics(const char* key, double value) { m_metricsHasBeenSet = true; m_metrics.emplace(key, value); return *this; }
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
    inline PublicEndpoint& WithOptOut(const Aws::String& value) { SetOptOut(value); return *this;}
    inline PublicEndpoint& WithOptOut(Aws::String&& value) { SetOptOut(std::move(value)); return *this;}
    inline PublicEndpoint& WithOptOut(const char* value) { SetOptOut(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that's generated each time the endpoint is updated.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline PublicEndpoint& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PublicEndpoint& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PublicEndpoint& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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
    inline PublicEndpoint& WithUser(const EndpointUser& value) { SetUser(value); return *this;}
    inline PublicEndpoint& WithUser(EndpointUser&& value) { SetUser(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_attributes;
    bool m_attributesHasBeenSet = false;

    ChannelType m_channelType;
    bool m_channelTypeHasBeenSet = false;

    EndpointDemographic m_demographic;
    bool m_demographicHasBeenSet = false;

    Aws::String m_effectiveDate;
    bool m_effectiveDateHasBeenSet = false;

    Aws::String m_endpointStatus;
    bool m_endpointStatusHasBeenSet = false;

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
