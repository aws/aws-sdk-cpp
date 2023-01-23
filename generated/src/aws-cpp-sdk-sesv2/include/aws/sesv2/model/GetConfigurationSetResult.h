/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{
  /**
   * <p>Information about a configuration set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetConfigurationSetResponse">AWS
   * API Reference</a></p>
   */
  class GetConfigurationSetResult
  {
  public:
    AWS_SESV2_API GetConfigurationSetResult();
    AWS_SESV2_API GetConfigurationSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API GetConfigurationSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline const TrackingOptions& GetTrackingOptions() const{ return m_trackingOptions; }

    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline void SetTrackingOptions(const TrackingOptions& value) { m_trackingOptions = value; }

    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline void SetTrackingOptions(TrackingOptions&& value) { m_trackingOptions = std::move(value); }

    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithTrackingOptions(const TrackingOptions& value) { SetTrackingOptions(value); return *this;}

    /**
     * <p>An object that defines the open and click tracking options for emails that
     * you send using the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithTrackingOptions(TrackingOptions&& value) { SetTrackingOptions(std::move(value)); return *this;}


    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline const DeliveryOptions& GetDeliveryOptions() const{ return m_deliveryOptions; }

    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline void SetDeliveryOptions(const DeliveryOptions& value) { m_deliveryOptions = value; }

    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline void SetDeliveryOptions(DeliveryOptions&& value) { m_deliveryOptions = std::move(value); }

    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithDeliveryOptions(const DeliveryOptions& value) { SetDeliveryOptions(value); return *this;}

    /**
     * <p>An object that defines the dedicated IP pool that is used to send emails that
     * you send using the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithDeliveryOptions(DeliveryOptions&& value) { SetDeliveryOptions(std::move(value)); return *this;}


    /**
     * <p>An object that defines whether or not Amazon SES collects reputation metrics
     * for the emails that you send that use the configuration set.</p>
     */
    inline const ReputationOptions& GetReputationOptions() const{ return m_reputationOptions; }

    /**
     * <p>An object that defines whether or not Amazon SES collects reputation metrics
     * for the emails that you send that use the configuration set.</p>
     */
    inline void SetReputationOptions(const ReputationOptions& value) { m_reputationOptions = value; }

    /**
     * <p>An object that defines whether or not Amazon SES collects reputation metrics
     * for the emails that you send that use the configuration set.</p>
     */
    inline void SetReputationOptions(ReputationOptions&& value) { m_reputationOptions = std::move(value); }

    /**
     * <p>An object that defines whether or not Amazon SES collects reputation metrics
     * for the emails that you send that use the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithReputationOptions(const ReputationOptions& value) { SetReputationOptions(value); return *this;}

    /**
     * <p>An object that defines whether or not Amazon SES collects reputation metrics
     * for the emails that you send that use the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithReputationOptions(ReputationOptions&& value) { SetReputationOptions(std::move(value)); return *this;}


    /**
     * <p>An object that defines whether or not Amazon SES can send email that you send
     * using the configuration set.</p>
     */
    inline const SendingOptions& GetSendingOptions() const{ return m_sendingOptions; }

    /**
     * <p>An object that defines whether or not Amazon SES can send email that you send
     * using the configuration set.</p>
     */
    inline void SetSendingOptions(const SendingOptions& value) { m_sendingOptions = value; }

    /**
     * <p>An object that defines whether or not Amazon SES can send email that you send
     * using the configuration set.</p>
     */
    inline void SetSendingOptions(SendingOptions&& value) { m_sendingOptions = std::move(value); }

    /**
     * <p>An object that defines whether or not Amazon SES can send email that you send
     * using the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithSendingOptions(const SendingOptions& value) { SetSendingOptions(value); return *this;}

    /**
     * <p>An object that defines whether or not Amazon SES can send email that you send
     * using the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithSendingOptions(SendingOptions&& value) { SetSendingOptions(std::move(value)); return *this;}


    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the configuration set.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the configuration set.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the configuration set.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the configuration set.</p>
     */
    inline GetConfigurationSetResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the configuration set.</p>
     */
    inline GetConfigurationSetResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>An array of objects that define the tags (keys and values) that are
     * associated with the configuration set.</p>
     */
    inline GetConfigurationSetResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>An object that contains information about the suppression list preferences
     * for your account.</p>
     */
    inline const SuppressionOptions& GetSuppressionOptions() const{ return m_suppressionOptions; }

    /**
     * <p>An object that contains information about the suppression list preferences
     * for your account.</p>
     */
    inline void SetSuppressionOptions(const SuppressionOptions& value) { m_suppressionOptions = value; }

    /**
     * <p>An object that contains information about the suppression list preferences
     * for your account.</p>
     */
    inline void SetSuppressionOptions(SuppressionOptions&& value) { m_suppressionOptions = std::move(value); }

    /**
     * <p>An object that contains information about the suppression list preferences
     * for your account.</p>
     */
    inline GetConfigurationSetResult& WithSuppressionOptions(const SuppressionOptions& value) { SetSuppressionOptions(value); return *this;}

    /**
     * <p>An object that contains information about the suppression list preferences
     * for your account.</p>
     */
    inline GetConfigurationSetResult& WithSuppressionOptions(SuppressionOptions&& value) { SetSuppressionOptions(std::move(value)); return *this;}


    /**
     * <p>An object that contains information about the VDM preferences for your
     * configuration set.</p>
     */
    inline const VdmOptions& GetVdmOptions() const{ return m_vdmOptions; }

    /**
     * <p>An object that contains information about the VDM preferences for your
     * configuration set.</p>
     */
    inline void SetVdmOptions(const VdmOptions& value) { m_vdmOptions = value; }

    /**
     * <p>An object that contains information about the VDM preferences for your
     * configuration set.</p>
     */
    inline void SetVdmOptions(VdmOptions&& value) { m_vdmOptions = std::move(value); }

    /**
     * <p>An object that contains information about the VDM preferences for your
     * configuration set.</p>
     */
    inline GetConfigurationSetResult& WithVdmOptions(const VdmOptions& value) { SetVdmOptions(value); return *this;}

    /**
     * <p>An object that contains information about the VDM preferences for your
     * configuration set.</p>
     */
    inline GetConfigurationSetResult& WithVdmOptions(VdmOptions&& value) { SetVdmOptions(std::move(value)); return *this;}

  private:

    Aws::String m_configurationSetName;

    TrackingOptions m_trackingOptions;

    DeliveryOptions m_deliveryOptions;

    ReputationOptions m_reputationOptions;

    SendingOptions m_sendingOptions;

    Aws::Vector<Tag> m_tags;

    SuppressionOptions m_suppressionOptions;

    VdmOptions m_vdmOptions;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
