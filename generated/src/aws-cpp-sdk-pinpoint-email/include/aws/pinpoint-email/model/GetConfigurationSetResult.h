/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/TrackingOptions.h>
#include <aws/pinpoint-email/model/DeliveryOptions.h>
#include <aws/pinpoint-email/model/ReputationOptions.h>
#include <aws/pinpoint-email/model/SendingOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-email/model/Tag.h>
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
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>Information about a configuration set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetConfigurationSetResponse">AWS
   * API Reference</a></p>
   */
  class GetConfigurationSetResult
  {
  public:
    AWS_PINPOINTEMAIL_API GetConfigurationSetResult() = default;
    AWS_PINPOINTEMAIL_API GetConfigurationSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API GetConfigurationSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const { return m_configurationSetName; }
    template<typename ConfigurationSetNameT = Aws::String>
    void SetConfigurationSetName(ConfigurationSetNameT&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::forward<ConfigurationSetNameT>(value); }
    template<typename ConfigurationSetNameT = Aws::String>
    GetConfigurationSetResult& WithConfigurationSetName(ConfigurationSetNameT&& value) { SetConfigurationSetName(std::forward<ConfigurationSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline const TrackingOptions& GetTrackingOptions() const { return m_trackingOptions; }
    template<typename TrackingOptionsT = TrackingOptions>
    void SetTrackingOptions(TrackingOptionsT&& value) { m_trackingOptionsHasBeenSet = true; m_trackingOptions = std::forward<TrackingOptionsT>(value); }
    template<typename TrackingOptionsT = TrackingOptions>
    GetConfigurationSetResult& WithTrackingOptions(TrackingOptionsT&& value) { SetTrackingOptions(std::forward<TrackingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline const DeliveryOptions& GetDeliveryOptions() const { return m_deliveryOptions; }
    template<typename DeliveryOptionsT = DeliveryOptions>
    void SetDeliveryOptions(DeliveryOptionsT&& value) { m_deliveryOptionsHasBeenSet = true; m_deliveryOptions = std::forward<DeliveryOptionsT>(value); }
    template<typename DeliveryOptionsT = DeliveryOptions>
    GetConfigurationSetResult& WithDeliveryOptions(DeliveryOptionsT&& value) { SetDeliveryOptions(std::forward<DeliveryOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines whether or not Amazon Pinpoint collects reputation
     * metrics for the emails that you send that use the configuration set.</p>
     */
    inline const ReputationOptions& GetReputationOptions() const { return m_reputationOptions; }
    template<typename ReputationOptionsT = ReputationOptions>
    void SetReputationOptions(ReputationOptionsT&& value) { m_reputationOptionsHasBeenSet = true; m_reputationOptions = std::forward<ReputationOptionsT>(value); }
    template<typename ReputationOptionsT = ReputationOptions>
    GetConfigurationSetResult& WithReputationOptions(ReputationOptionsT&& value) { SetReputationOptions(std::forward<ReputationOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines whether or not Amazon Pinpoint can send email that you
     * send using the configuration set.</p>
     */
    inline const SendingOptions& GetSendingOptions() const { return m_sendingOptions; }
    template<typename SendingOptionsT = SendingOptions>
    void SetSendingOptions(SendingOptionsT&& value) { m_sendingOptionsHasBeenSet = true; m_sendingOptions = std::forward<SendingOptionsT>(value); }
    template<typename SendingOptionsT = SendingOptions>
    GetConfigurationSetResult& WithSendingOptions(SendingOptionsT&& value) { SetSendingOptions(std::forward<SendingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the configuration set.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    GetConfigurationSetResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    GetConfigurationSetResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetConfigurationSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    TrackingOptions m_trackingOptions;
    bool m_trackingOptionsHasBeenSet = false;

    DeliveryOptions m_deliveryOptions;
    bool m_deliveryOptionsHasBeenSet = false;

    ReputationOptions m_reputationOptions;
    bool m_reputationOptionsHasBeenSet = false;

    SendingOptions m_sendingOptions;
    bool m_sendingOptionsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
