/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/EventDestinationDefinition.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to add an event destination to a configuration set.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/CreateConfigurationSetEventDestinationRequest">AWS
   * API Reference</a></p>
   */
  class CreateConfigurationSetEventDestinationRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API CreateConfigurationSetEventDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfigurationSetEventDestination"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the configuration set that you want to add an event destination
     * to.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set that you want to add an event destination
     * to.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set that you want to add an event destination
     * to.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set that you want to add an event destination
     * to.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set that you want to add an event destination
     * to.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set that you want to add an event destination
     * to.</p>
     */
    inline CreateConfigurationSetEventDestinationRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set that you want to add an event destination
     * to.</p>
     */
    inline CreateConfigurationSetEventDestinationRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set that you want to add an event destination
     * to.</p>
     */
    inline CreateConfigurationSetEventDestinationRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>A name that identifies the event destination within the configuration
     * set.</p>
     */
    inline const Aws::String& GetEventDestinationName() const{ return m_eventDestinationName; }

    /**
     * <p>A name that identifies the event destination within the configuration
     * set.</p>
     */
    inline bool EventDestinationNameHasBeenSet() const { return m_eventDestinationNameHasBeenSet; }

    /**
     * <p>A name that identifies the event destination within the configuration
     * set.</p>
     */
    inline void SetEventDestinationName(const Aws::String& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = value; }

    /**
     * <p>A name that identifies the event destination within the configuration
     * set.</p>
     */
    inline void SetEventDestinationName(Aws::String&& value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName = std::move(value); }

    /**
     * <p>A name that identifies the event destination within the configuration
     * set.</p>
     */
    inline void SetEventDestinationName(const char* value) { m_eventDestinationNameHasBeenSet = true; m_eventDestinationName.assign(value); }

    /**
     * <p>A name that identifies the event destination within the configuration
     * set.</p>
     */
    inline CreateConfigurationSetEventDestinationRequest& WithEventDestinationName(const Aws::String& value) { SetEventDestinationName(value); return *this;}

    /**
     * <p>A name that identifies the event destination within the configuration
     * set.</p>
     */
    inline CreateConfigurationSetEventDestinationRequest& WithEventDestinationName(Aws::String&& value) { SetEventDestinationName(std::move(value)); return *this;}

    /**
     * <p>A name that identifies the event destination within the configuration
     * set.</p>
     */
    inline CreateConfigurationSetEventDestinationRequest& WithEventDestinationName(const char* value) { SetEventDestinationName(value); return *this;}


    /**
     * <p>An object that defines the event destination.</p>
     */
    inline const EventDestinationDefinition& GetEventDestination() const{ return m_eventDestination; }

    /**
     * <p>An object that defines the event destination.</p>
     */
    inline bool EventDestinationHasBeenSet() const { return m_eventDestinationHasBeenSet; }

    /**
     * <p>An object that defines the event destination.</p>
     */
    inline void SetEventDestination(const EventDestinationDefinition& value) { m_eventDestinationHasBeenSet = true; m_eventDestination = value; }

    /**
     * <p>An object that defines the event destination.</p>
     */
    inline void SetEventDestination(EventDestinationDefinition&& value) { m_eventDestinationHasBeenSet = true; m_eventDestination = std::move(value); }

    /**
     * <p>An object that defines the event destination.</p>
     */
    inline CreateConfigurationSetEventDestinationRequest& WithEventDestination(const EventDestinationDefinition& value) { SetEventDestination(value); return *this;}

    /**
     * <p>An object that defines the event destination.</p>
     */
    inline CreateConfigurationSetEventDestinationRequest& WithEventDestination(EventDestinationDefinition&& value) { SetEventDestination(std::move(value)); return *this;}

  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    Aws::String m_eventDestinationName;
    bool m_eventDestinationNameHasBeenSet = false;

    EventDestinationDefinition m_eventDestination;
    bool m_eventDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
