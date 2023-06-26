/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/TrackingOptions.h>
#include <aws/sesv2/model/DeliveryOptions.h>
#include <aws/sesv2/model/ReputationOptions.h>
#include <aws/sesv2/model/SendingOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/SuppressionOptions.h>
#include <aws/sesv2/model/VdmOptions.h>
#include <aws/sesv2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to create a configuration set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateConfigurationSetRequest">AWS
   * API Reference</a></p>
   */
  class CreateConfigurationSetRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API CreateConfigurationSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfigurationSet"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the configuration set. The name can contain up to 64 alphanumeric
     * characters, including letters, numbers, hyphens (-) and underscores (_)
     * only.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set. The name can contain up to 64 alphanumeric
     * characters, including letters, numbers, hyphens (-) and underscores (_)
     * only.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set. The name can contain up to 64 alphanumeric
     * characters, including letters, numbers, hyphens (-) and underscores (_)
     * only.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set. The name can contain up to 64 alphanumeric
     * characters, including letters, numbers, hyphens (-) and underscores (_)
     * only.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set. The name can contain up to 64 alphanumeric
     * characters, including letters, numbers, hyphens (-) and underscores (_)
     * only.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set. The name can contain up to 64 alphanumeric
     * characters, including letters, numbers, hyphens (-) and underscores (_)
     * only.</p>
     */
    inline CreateConfigurationSetRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set. The name can contain up to 64 alphanumeric
     * characters, including letters, numbers, hyphens (-) and underscores (_)
     * only.</p>
     */
    inline CreateConfigurationSetRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set. The name can contain up to 64 alphanumeric
     * characters, including letters, numbers, hyphens (-) and underscores (_)
     * only.</p>
     */
    inline CreateConfigurationSetRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline const TrackingOptions& GetTrackingOptions() const{ return m_trackingOptions; }

    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline bool TrackingOptionsHasBeenSet() const { return m_trackingOptionsHasBeenSet; }

    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline void SetTrackingOptions(const TrackingOptions& value) { m_trackingOptionsHasBeenSet = true; m_trackingOptions = value; }

    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline void SetTrackingOptions(TrackingOptions&& value) { m_trackingOptionsHasBeenSet = true; m_trackingOptions = std::move(value); }

    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline CreateConfigurationSetRequest& WithTrackingOptions(const TrackingOptions& value) { SetTrackingOptions(value); return *this;}

    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline CreateConfigurationSetRequest& WithTrackingOptions(TrackingOptions&& value) { SetTrackingOptions(std::move(value)); return *this;}


    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline const DeliveryOptions& GetDeliveryOptions() const{ return m_deliveryOptions; }

    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline bool DeliveryOptionsHasBeenSet() const { return m_deliveryOptionsHasBeenSet; }

    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline void SetDeliveryOptions(const DeliveryOptions& value) { m_deliveryOptionsHasBeenSet = true; m_deliveryOptions = value; }

    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline void SetDeliveryOptions(DeliveryOptions&& value) { m_deliveryOptionsHasBeenSet = true; m_deliveryOptions = std::move(value); }

    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline CreateConfigurationSetRequest& WithDeliveryOptions(const DeliveryOptions& value) { SetDeliveryOptions(value); return *this;}

    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline CreateConfigurationSetRequest& WithDeliveryOptions(DeliveryOptions&& value) { SetDeliveryOptions(std::move(value)); return *this;}


    /**
     * <p>An object that defines whether or not Amazon SES collects reputation metrics
     * for the emails that you send that use the configuration set.</p>
     */
    inline const ReputationOptions& GetReputationOptions() const{ return m_reputationOptions; }

    /**
     * <p>An object that defines whether or not Amazon SES collects reputation metrics
     * for the emails that you send that use the configuration set.</p>
     */
    inline bool ReputationOptionsHasBeenSet() const { return m_reputationOptionsHasBeenSet; }

    /**
     * <p>An object that defines whether or not Amazon SES collects reputation metrics
     * for the emails that you send that use the configuration set.</p>
     */
    inline void SetReputationOptions(const ReputationOptions& value) { m_reputationOptionsHasBeenSet = true; m_reputationOptions = value; }

    /**
     * <p>An object that defines whether or not Amazon SES collects reputation metrics
     * for the emails that you send that use the configuration set.</p>
     */
    inline void SetReputationOptions(ReputationOptions&& value) { m_reputationOptionsHasBeenSet = true; m_reputationOptions = std::move(value); }

    /**
     * <p>An object that defines whether or not Amazon SES collects reputation metrics
     * for the emails that you send that use the configuration set.</p>
     */
    inline CreateConfigurationSetRequest& WithReputationOptions(const ReputationOptions& value) { SetReputationOptions(value); return *this;}

    /**
     * <p>An object that defines whether or not Amazon SES collects reputation metrics
     * for the emails that you send that use the configuration set.</p>
     */
    inline CreateConfigurationSetRequest& WithReputationOptions(ReputationOptions&& value) { SetReputationOptions(std::move(value)); return *this;}


    /**
     * <p>An object that defines whether or not Amazon SES can send email that you send
     * using the configuration set.</p>
     */
    inline const SendingOptions& GetSendingOptions() const{ return m_sendingOptions; }

    /**
     * <p>An object that defines whether or not Amazon SES can send email that you send
     * using the configuration set.</p>
     */
    inline bool SendingOptionsHasBeenSet() const { return m_sendingOptionsHasBeenSet; }

    /**
     * <p>An object that defines whether or not Amazon SES can send email that you send
     * using the configuration set.</p>
     */
    inline void SetSendingOptions(const SendingOptions& value) { m_sendingOptionsHasBeenSet = true; m_sendingOptions = value; }

    /**
     * <p>An object that defines whether or not Amazon SES can send email that you send
     * using the configuration set.</p>
     */
    inline void SetSendingOptions(SendingOptions&& value) { m_sendingOptionsHasBeenSet = true; m_sendingOptions = std::move(value); }

    /**
     * <p>An object that defines whether or not Amazon SES can send email that you send
     * using the configuration set.</p>
     */
    inline CreateConfigurationSetRequest& WithSendingOptions(const SendingOptions& value) { SetSendingOptions(value); return *this;}

    /**
     * <p>An object that defines whether or not Amazon SES can send email that you send
     * using the configuration set.</p>
     */
    inline CreateConfigurationSetRequest& WithSendingOptions(SendingOptions&& value) { SetSendingOptions(std::move(value)); return *this;}


    /**
     * <p>An array of objects that define the tags (keys and values) to associate with
     * the configuration set.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of objects that define the tags (keys and values) to associate with
     * the configuration set.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of objects that define the tags (keys and values) to associate with
     * the configuration set.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of objects that define the tags (keys and values) to associate with
     * the configuration set.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of objects that define the tags (keys and values) to associate with
     * the configuration set.</p>
     */
    inline CreateConfigurationSetRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of objects that define the tags (keys and values) to associate with
     * the configuration set.</p>
     */
    inline CreateConfigurationSetRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of objects that define the tags (keys and values) to associate with
     * the configuration set.</p>
     */
    inline CreateConfigurationSetRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of objects that define the tags (keys and values) to associate with
     * the configuration set.</p>
     */
    inline CreateConfigurationSetRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    
    inline const SuppressionOptions& GetSuppressionOptions() const{ return m_suppressionOptions; }

    
    inline bool SuppressionOptionsHasBeenSet() const { return m_suppressionOptionsHasBeenSet; }

    
    inline void SetSuppressionOptions(const SuppressionOptions& value) { m_suppressionOptionsHasBeenSet = true; m_suppressionOptions = value; }

    
    inline void SetSuppressionOptions(SuppressionOptions&& value) { m_suppressionOptionsHasBeenSet = true; m_suppressionOptions = std::move(value); }

    
    inline CreateConfigurationSetRequest& WithSuppressionOptions(const SuppressionOptions& value) { SetSuppressionOptions(value); return *this;}

    
    inline CreateConfigurationSetRequest& WithSuppressionOptions(SuppressionOptions&& value) { SetSuppressionOptions(std::move(value)); return *this;}


    /**
     * <p>An object that defines the VDM options for emails that you send using the
     * configuration set.</p>
     */
    inline const VdmOptions& GetVdmOptions() const{ return m_vdmOptions; }

    /**
     * <p>An object that defines the VDM options for emails that you send using the
     * configuration set.</p>
     */
    inline bool VdmOptionsHasBeenSet() const { return m_vdmOptionsHasBeenSet; }

    /**
     * <p>An object that defines the VDM options for emails that you send using the
     * configuration set.</p>
     */
    inline void SetVdmOptions(const VdmOptions& value) { m_vdmOptionsHasBeenSet = true; m_vdmOptions = value; }

    /**
     * <p>An object that defines the VDM options for emails that you send using the
     * configuration set.</p>
     */
    inline void SetVdmOptions(VdmOptions&& value) { m_vdmOptionsHasBeenSet = true; m_vdmOptions = std::move(value); }

    /**
     * <p>An object that defines the VDM options for emails that you send using the
     * configuration set.</p>
     */
    inline CreateConfigurationSetRequest& WithVdmOptions(const VdmOptions& value) { SetVdmOptions(value); return *this;}

    /**
     * <p>An object that defines the VDM options for emails that you send using the
     * configuration set.</p>
     */
    inline CreateConfigurationSetRequest& WithVdmOptions(VdmOptions&& value) { SetVdmOptions(std::move(value)); return *this;}

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

    SuppressionOptions m_suppressionOptions;
    bool m_suppressionOptionsHasBeenSet = false;

    VdmOptions m_vdmOptions;
    bool m_vdmOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
