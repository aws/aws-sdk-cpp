﻿/**
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
    AWS_PINPOINTEMAIL_API GetConfigurationSetResult();
    AWS_PINPOINTEMAIL_API GetConfigurationSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API GetConfigurationSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetName = value; }
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetName = std::move(value); }
    inline void SetConfigurationSetName(const char* value) { m_configurationSetName.assign(value); }
    inline GetConfigurationSetResult& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}
    inline GetConfigurationSetResult& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}
    inline GetConfigurationSetResult& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline const TrackingOptions& GetTrackingOptions() const{ return m_trackingOptions; }
    inline void SetTrackingOptions(const TrackingOptions& value) { m_trackingOptions = value; }
    inline void SetTrackingOptions(TrackingOptions&& value) { m_trackingOptions = std::move(value); }
    inline GetConfigurationSetResult& WithTrackingOptions(const TrackingOptions& value) { SetTrackingOptions(value); return *this;}
    inline GetConfigurationSetResult& WithTrackingOptions(TrackingOptions&& value) { SetTrackingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline const DeliveryOptions& GetDeliveryOptions() const{ return m_deliveryOptions; }
    inline void SetDeliveryOptions(const DeliveryOptions& value) { m_deliveryOptions = value; }
    inline void SetDeliveryOptions(DeliveryOptions&& value) { m_deliveryOptions = std::move(value); }
    inline GetConfigurationSetResult& WithDeliveryOptions(const DeliveryOptions& value) { SetDeliveryOptions(value); return *this;}
    inline GetConfigurationSetResult& WithDeliveryOptions(DeliveryOptions&& value) { SetDeliveryOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines whether or not Amazon Pinpoint collects reputation
     * metrics for the emails that you send that use the configuration set.</p>
     */
    inline const ReputationOptions& GetReputationOptions() const{ return m_reputationOptions; }
    inline void SetReputationOptions(const ReputationOptions& value) { m_reputationOptions = value; }
    inline void SetReputationOptions(ReputationOptions&& value) { m_reputationOptions = std::move(value); }
    inline GetConfigurationSetResult& WithReputationOptions(const ReputationOptions& value) { SetReputationOptions(value); return *this;}
    inline GetConfigurationSetResult& WithReputationOptions(ReputationOptions&& value) { SetReputationOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines whether or not Amazon Pinpoint can send email that you
     * send using the configuration set.</p>
     */
    inline const SendingOptions& GetSendingOptions() const{ return m_sendingOptions; }
    inline void SetSendingOptions(const SendingOptions& value) { m_sendingOptions = value; }
    inline void SetSendingOptions(SendingOptions&& value) { m_sendingOptions = std::move(value); }
    inline GetConfigurationSetResult& WithSendingOptions(const SendingOptions& value) { SetSendingOptions(value); return *this;}
    inline GetConfigurationSetResult& WithSendingOptions(SendingOptions&& value) { SetSendingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the configuration set.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline GetConfigurationSetResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline GetConfigurationSetResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline GetConfigurationSetResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline GetConfigurationSetResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetConfigurationSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetConfigurationSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetConfigurationSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationSetName;

    TrackingOptions m_trackingOptions;

    DeliveryOptions m_deliveryOptions;

    ReputationOptions m_reputationOptions;

    SendingOptions m_sendingOptions;

    Aws::Vector<Tag> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
