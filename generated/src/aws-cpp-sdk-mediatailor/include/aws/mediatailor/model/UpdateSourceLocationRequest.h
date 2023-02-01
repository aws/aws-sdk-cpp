/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/MediaTailorRequest.h>
#include <aws/mediatailor/model/AccessConfiguration.h>
#include <aws/mediatailor/model/DefaultSegmentDeliveryConfiguration.h>
#include <aws/mediatailor/model/HttpConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/SegmentDeliveryConfiguration.h>
#include <utility>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

  /**
   */
  class UpdateSourceLocationRequest : public MediaTailorRequest
  {
  public:
    AWS_MEDIATAILOR_API UpdateSourceLocationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSourceLocation"; }

    AWS_MEDIATAILOR_API Aws::String SerializePayload() const override;


    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline const AccessConfiguration& GetAccessConfiguration() const{ return m_accessConfiguration; }

    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline bool AccessConfigurationHasBeenSet() const { return m_accessConfigurationHasBeenSet; }

    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline void SetAccessConfiguration(const AccessConfiguration& value) { m_accessConfigurationHasBeenSet = true; m_accessConfiguration = value; }

    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline void SetAccessConfiguration(AccessConfiguration&& value) { m_accessConfigurationHasBeenSet = true; m_accessConfiguration = std::move(value); }

    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline UpdateSourceLocationRequest& WithAccessConfiguration(const AccessConfiguration& value) { SetAccessConfiguration(value); return *this;}

    /**
     * <p>Access configuration parameters. Configures the type of authentication used
     * to access content from your source location.</p>
     */
    inline UpdateSourceLocationRequest& WithAccessConfiguration(AccessConfiguration&& value) { SetAccessConfiguration(std::move(value)); return *this;}


    /**
     * <p>The optional configuration for the host server that serves segments.</p>
     */
    inline const DefaultSegmentDeliveryConfiguration& GetDefaultSegmentDeliveryConfiguration() const{ return m_defaultSegmentDeliveryConfiguration; }

    /**
     * <p>The optional configuration for the host server that serves segments.</p>
     */
    inline bool DefaultSegmentDeliveryConfigurationHasBeenSet() const { return m_defaultSegmentDeliveryConfigurationHasBeenSet; }

    /**
     * <p>The optional configuration for the host server that serves segments.</p>
     */
    inline void SetDefaultSegmentDeliveryConfiguration(const DefaultSegmentDeliveryConfiguration& value) { m_defaultSegmentDeliveryConfigurationHasBeenSet = true; m_defaultSegmentDeliveryConfiguration = value; }

    /**
     * <p>The optional configuration for the host server that serves segments.</p>
     */
    inline void SetDefaultSegmentDeliveryConfiguration(DefaultSegmentDeliveryConfiguration&& value) { m_defaultSegmentDeliveryConfigurationHasBeenSet = true; m_defaultSegmentDeliveryConfiguration = std::move(value); }

    /**
     * <p>The optional configuration for the host server that serves segments.</p>
     */
    inline UpdateSourceLocationRequest& WithDefaultSegmentDeliveryConfiguration(const DefaultSegmentDeliveryConfiguration& value) { SetDefaultSegmentDeliveryConfiguration(value); return *this;}

    /**
     * <p>The optional configuration for the host server that serves segments.</p>
     */
    inline UpdateSourceLocationRequest& WithDefaultSegmentDeliveryConfiguration(DefaultSegmentDeliveryConfiguration&& value) { SetDefaultSegmentDeliveryConfiguration(std::move(value)); return *this;}


    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline const HttpConfiguration& GetHttpConfiguration() const{ return m_httpConfiguration; }

    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline bool HttpConfigurationHasBeenSet() const { return m_httpConfigurationHasBeenSet; }

    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline void SetHttpConfiguration(const HttpConfiguration& value) { m_httpConfigurationHasBeenSet = true; m_httpConfiguration = value; }

    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline void SetHttpConfiguration(HttpConfiguration&& value) { m_httpConfigurationHasBeenSet = true; m_httpConfiguration = std::move(value); }

    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline UpdateSourceLocationRequest& WithHttpConfiguration(const HttpConfiguration& value) { SetHttpConfiguration(value); return *this;}

    /**
     * <p>The HTTP configuration for the source location.</p>
     */
    inline UpdateSourceLocationRequest& WithHttpConfiguration(HttpConfiguration&& value) { SetHttpConfiguration(std::move(value)); return *this;}


    /**
     * <p>A list of the segment delivery configurations associated with this
     * resource.</p>
     */
    inline const Aws::Vector<SegmentDeliveryConfiguration>& GetSegmentDeliveryConfigurations() const{ return m_segmentDeliveryConfigurations; }

    /**
     * <p>A list of the segment delivery configurations associated with this
     * resource.</p>
     */
    inline bool SegmentDeliveryConfigurationsHasBeenSet() const { return m_segmentDeliveryConfigurationsHasBeenSet; }

    /**
     * <p>A list of the segment delivery configurations associated with this
     * resource.</p>
     */
    inline void SetSegmentDeliveryConfigurations(const Aws::Vector<SegmentDeliveryConfiguration>& value) { m_segmentDeliveryConfigurationsHasBeenSet = true; m_segmentDeliveryConfigurations = value; }

    /**
     * <p>A list of the segment delivery configurations associated with this
     * resource.</p>
     */
    inline void SetSegmentDeliveryConfigurations(Aws::Vector<SegmentDeliveryConfiguration>&& value) { m_segmentDeliveryConfigurationsHasBeenSet = true; m_segmentDeliveryConfigurations = std::move(value); }

    /**
     * <p>A list of the segment delivery configurations associated with this
     * resource.</p>
     */
    inline UpdateSourceLocationRequest& WithSegmentDeliveryConfigurations(const Aws::Vector<SegmentDeliveryConfiguration>& value) { SetSegmentDeliveryConfigurations(value); return *this;}

    /**
     * <p>A list of the segment delivery configurations associated with this
     * resource.</p>
     */
    inline UpdateSourceLocationRequest& WithSegmentDeliveryConfigurations(Aws::Vector<SegmentDeliveryConfiguration>&& value) { SetSegmentDeliveryConfigurations(std::move(value)); return *this;}

    /**
     * <p>A list of the segment delivery configurations associated with this
     * resource.</p>
     */
    inline UpdateSourceLocationRequest& AddSegmentDeliveryConfigurations(const SegmentDeliveryConfiguration& value) { m_segmentDeliveryConfigurationsHasBeenSet = true; m_segmentDeliveryConfigurations.push_back(value); return *this; }

    /**
     * <p>A list of the segment delivery configurations associated with this
     * resource.</p>
     */
    inline UpdateSourceLocationRequest& AddSegmentDeliveryConfigurations(SegmentDeliveryConfiguration&& value) { m_segmentDeliveryConfigurationsHasBeenSet = true; m_segmentDeliveryConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the source location.</p>
     */
    inline const Aws::String& GetSourceLocationName() const{ return m_sourceLocationName; }

    /**
     * <p>The name of the source location.</p>
     */
    inline bool SourceLocationNameHasBeenSet() const { return m_sourceLocationNameHasBeenSet; }

    /**
     * <p>The name of the source location.</p>
     */
    inline void SetSourceLocationName(const Aws::String& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = value; }

    /**
     * <p>The name of the source location.</p>
     */
    inline void SetSourceLocationName(Aws::String&& value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName = std::move(value); }

    /**
     * <p>The name of the source location.</p>
     */
    inline void SetSourceLocationName(const char* value) { m_sourceLocationNameHasBeenSet = true; m_sourceLocationName.assign(value); }

    /**
     * <p>The name of the source location.</p>
     */
    inline UpdateSourceLocationRequest& WithSourceLocationName(const Aws::String& value) { SetSourceLocationName(value); return *this;}

    /**
     * <p>The name of the source location.</p>
     */
    inline UpdateSourceLocationRequest& WithSourceLocationName(Aws::String&& value) { SetSourceLocationName(std::move(value)); return *this;}

    /**
     * <p>The name of the source location.</p>
     */
    inline UpdateSourceLocationRequest& WithSourceLocationName(const char* value) { SetSourceLocationName(value); return *this;}

  private:

    AccessConfiguration m_accessConfiguration;
    bool m_accessConfigurationHasBeenSet = false;

    DefaultSegmentDeliveryConfiguration m_defaultSegmentDeliveryConfiguration;
    bool m_defaultSegmentDeliveryConfigurationHasBeenSet = false;

    HttpConfiguration m_httpConfiguration;
    bool m_httpConfigurationHasBeenSet = false;

    Aws::Vector<SegmentDeliveryConfiguration> m_segmentDeliveryConfigurations;
    bool m_segmentDeliveryConfigurationsHasBeenSet = false;

    Aws::String m_sourceLocationName;
    bool m_sourceLocationNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
