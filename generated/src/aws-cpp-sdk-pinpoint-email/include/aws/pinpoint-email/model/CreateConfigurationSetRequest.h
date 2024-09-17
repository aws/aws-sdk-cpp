/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to create a configuration set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/CreateConfigurationSetRequest">AWS
   * API Reference</a></p>
   */
  class CreateConfigurationSetRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API CreateConfigurationSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfigurationSet"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }
    inline CreateConfigurationSetRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}
    inline CreateConfigurationSetRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}
    inline CreateConfigurationSetRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline const TrackingOptions& GetTrackingOptions() const{ return m_trackingOptions; }
    inline bool TrackingOptionsHasBeenSet() const { return m_trackingOptionsHasBeenSet; }
    inline void SetTrackingOptions(const TrackingOptions& value) { m_trackingOptionsHasBeenSet = true; m_trackingOptions = value; }
    inline void SetTrackingOptions(TrackingOptions&& value) { m_trackingOptionsHasBeenSet = true; m_trackingOptions = std::move(value); }
    inline CreateConfigurationSetRequest& WithTrackingOptions(const TrackingOptions& value) { SetTrackingOptions(value); return *this;}
    inline CreateConfigurationSetRequest& WithTrackingOptions(TrackingOptions&& value) { SetTrackingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline const DeliveryOptions& GetDeliveryOptions() const{ return m_deliveryOptions; }
    inline bool DeliveryOptionsHasBeenSet() const { return m_deliveryOptionsHasBeenSet; }
    inline void SetDeliveryOptions(const DeliveryOptions& value) { m_deliveryOptionsHasBeenSet = true; m_deliveryOptions = value; }
    inline void SetDeliveryOptions(DeliveryOptions&& value) { m_deliveryOptionsHasBeenSet = true; m_deliveryOptions = std::move(value); }
    inline CreateConfigurationSetRequest& WithDeliveryOptions(const DeliveryOptions& value) { SetDeliveryOptions(value); return *this;}
    inline CreateConfigurationSetRequest& WithDeliveryOptions(DeliveryOptions&& value) { SetDeliveryOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines whether or not Amazon Pinpoint collects reputation
     * metrics for the emails that you send that use the configuration set.</p>
     */
    inline const ReputationOptions& GetReputationOptions() const{ return m_reputationOptions; }
    inline bool ReputationOptionsHasBeenSet() const { return m_reputationOptionsHasBeenSet; }
    inline void SetReputationOptions(const ReputationOptions& value) { m_reputationOptionsHasBeenSet = true; m_reputationOptions = value; }
    inline void SetReputationOptions(ReputationOptions&& value) { m_reputationOptionsHasBeenSet = true; m_reputationOptions = std::move(value); }
    inline CreateConfigurationSetRequest& WithReputationOptions(const ReputationOptions& value) { SetReputationOptions(value); return *this;}
    inline CreateConfigurationSetRequest& WithReputationOptions(ReputationOptions&& value) { SetReputationOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines whether or not Amazon Pinpoint can send email that you
     * send using the configuration set.</p>
     */
    inline const SendingOptions& GetSendingOptions() const{ return m_sendingOptions; }
    inline bool SendingOptionsHasBeenSet() const { return m_sendingOptionsHasBeenSet; }
    inline void SetSendingOptions(const SendingOptions& value) { m_sendingOptionsHasBeenSet = true; m_sendingOptions = value; }
    inline void SetSendingOptions(SendingOptions&& value) { m_sendingOptionsHasBeenSet = true; m_sendingOptions = std::move(value); }
    inline CreateConfigurationSetRequest& WithSendingOptions(const SendingOptions& value) { SetSendingOptions(value); return *this;}
    inline CreateConfigurationSetRequest& WithSendingOptions(SendingOptions&& value) { SetSendingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that define the tags (keys and values) that you want to
     * associate with the configuration set.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateConfigurationSetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateConfigurationSetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateConfigurationSetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateConfigurationSetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
