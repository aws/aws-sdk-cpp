/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to enable or disable tracking of reputation metrics for a
   * configuration set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/PutConfigurationSetReputationOptionsRequest">AWS
   * API Reference</a></p>
   */
  class PutConfigurationSetReputationOptionsRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API PutConfigurationSetReputationOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutConfigurationSetReputationOptions"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the configuration set that you want to enable or disable
     * reputation metric tracking for.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the configuration set that you want to enable or disable
     * reputation metric tracking for.</p>
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * <p>The name of the configuration set that you want to enable or disable
     * reputation metric tracking for.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * <p>The name of the configuration set that you want to enable or disable
     * reputation metric tracking for.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the configuration set that you want to enable or disable
     * reputation metric tracking for.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * <p>The name of the configuration set that you want to enable or disable
     * reputation metric tracking for.</p>
     */
    inline PutConfigurationSetReputationOptionsRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the configuration set that you want to enable or disable
     * reputation metric tracking for.</p>
     */
    inline PutConfigurationSetReputationOptionsRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration set that you want to enable or disable
     * reputation metric tracking for.</p>
     */
    inline PutConfigurationSetReputationOptionsRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>If <code>true</code>, tracking of reputation metrics is enabled for the
     * configuration set. If <code>false</code>, tracking of reputation metrics is
     * disabled for the configuration set.</p>
     */
    inline bool GetReputationMetricsEnabled() const{ return m_reputationMetricsEnabled; }

    /**
     * <p>If <code>true</code>, tracking of reputation metrics is enabled for the
     * configuration set. If <code>false</code>, tracking of reputation metrics is
     * disabled for the configuration set.</p>
     */
    inline bool ReputationMetricsEnabledHasBeenSet() const { return m_reputationMetricsEnabledHasBeenSet; }

    /**
     * <p>If <code>true</code>, tracking of reputation metrics is enabled for the
     * configuration set. If <code>false</code>, tracking of reputation metrics is
     * disabled for the configuration set.</p>
     */
    inline void SetReputationMetricsEnabled(bool value) { m_reputationMetricsEnabledHasBeenSet = true; m_reputationMetricsEnabled = value; }

    /**
     * <p>If <code>true</code>, tracking of reputation metrics is enabled for the
     * configuration set. If <code>false</code>, tracking of reputation metrics is
     * disabled for the configuration set.</p>
     */
    inline PutConfigurationSetReputationOptionsRequest& WithReputationMetricsEnabled(bool value) { SetReputationMetricsEnabled(value); return *this;}

  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;

    bool m_reputationMetricsEnabled;
    bool m_reputationMetricsEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
