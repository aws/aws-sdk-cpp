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
   * <p>Specifies an endpoint to create or update and the settings and attributes to
   * set or change for the endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/EndpointBatchItem">AWS
   * API Reference</a></p>
   */
  class EndpointBatchItem
  {
  public:
    AWS_PINPOINT_API EndpointBatchItem() = default;
    AWS_PINPOINT_API EndpointBatchItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API EndpointBatchItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The destination address for messages or push notifications that you send to
     * the endpoint. The address varies by channel. For a push-notification channel,
     * use the token provided by the push notification service, such as an Apple Push
     * Notification service (APNs) device token or a Firebase Cloud Messaging (FCM)
     * registration token. For the SMS channel, use a phone number in E.164 format,
     * such as +12065550100. For the email channel, use an email address.</p>
     */
    inline const Aws::String& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Aws::String>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::String>
    EndpointBatchItem& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more custom attributes that describe the endpoint by associating a
     * name with an array of values. For example, the value of a custom attribute named
     * Interests might be: ["Science", "Music", "Travel"]. You can use these attributes
     * as filter criteria when you create segments. Attribute names are case
     * sensitive.</p> <p>An attribute name can contain up to 50 characters. An
     * attribute value can contain up to 100 characters. When you define the name of a
     * custom attribute, avoid using the following characters: number sign (#), colon
     * (:), question mark (?), backslash (\), and slash (/). The Amazon Pinpoint
     * console can't display attribute names that contain these characters. This
     * restriction doesn't apply to attribute values.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    EndpointBatchItem& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::Vector<Aws::String>>
    EndpointBatchItem& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The channel to use when sending messages or push notifications to the
     * endpoint.</p>
     */
    inline ChannelType GetChannelType() const { return m_channelType; }
    inline bool ChannelTypeHasBeenSet() const { return m_channelTypeHasBeenSet; }
    inline void SetChannelType(ChannelType value) { m_channelTypeHasBeenSet = true; m_channelType = value; }
    inline EndpointBatchItem& WithChannelType(ChannelType value) { SetChannelType(value); return *this;}
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
    EndpointBatchItem& WithDemographic(DemographicT&& value) { SetDemographic(std::forward<DemographicT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO 8601 format, when the endpoint was created or
     * updated.</p>
     */
    inline const Aws::String& GetEffectiveDate() const { return m_effectiveDate; }
    inline bool EffectiveDateHasBeenSet() const { return m_effectiveDateHasBeenSet; }
    template<typename EffectiveDateT = Aws::String>
    void SetEffectiveDate(EffectiveDateT&& value) { m_effectiveDateHasBeenSet = true; m_effectiveDate = std::forward<EffectiveDateT>(value); }
    template<typename EffectiveDateT = Aws::String>
    EndpointBatchItem& WithEffectiveDate(EffectiveDateT&& value) { SetEffectiveDate(std::forward<EffectiveDateT>(value)); return *this;}
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
    inline const Aws::String& GetEndpointStatus() const { return m_endpointStatus; }
    inline bool EndpointStatusHasBeenSet() const { return m_endpointStatusHasBeenSet; }
    template<typename EndpointStatusT = Aws::String>
    void SetEndpointStatus(EndpointStatusT&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = std::forward<EndpointStatusT>(value); }
    template<typename EndpointStatusT = Aws::String>
    EndpointBatchItem& WithEndpointStatus(EndpointStatusT&& value) { SetEndpointStatus(std::forward<EndpointStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the endpoint in the context of the batch.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    EndpointBatchItem& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
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
    EndpointBatchItem& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
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
    EndpointBatchItem& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    inline EndpointBatchItem& AddMetrics(Aws::String key, double value) {
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
    EndpointBatchItem& WithOptOut(OptOutT&& value) { SetOptOut(std::forward<OptOutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the request to create or update the endpoint.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    EndpointBatchItem& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more custom attributes that describe the user who's associated with
     * the endpoint.</p>
     */
    inline const EndpointUser& GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    template<typename UserT = EndpointUser>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = EndpointUser>
    EndpointBatchItem& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_attributes;
    bool m_attributesHasBeenSet = false;

    ChannelType m_channelType{ChannelType::NOT_SET};
    bool m_channelTypeHasBeenSet = false;

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
