/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/PreferredChannelPipeline.h>
#include <aws/medialive/model/MultiplexProgramServiceDescriptor.h>
#include <aws/medialive/model/MultiplexVideoSettings.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Multiplex Program settings configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexProgramSettings">AWS
   * API Reference</a></p>
   */
  class MultiplexProgramSettings
  {
  public:
    AWS_MEDIALIVE_API MultiplexProgramSettings() = default;
    AWS_MEDIALIVE_API MultiplexProgramSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexProgramSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Indicates which pipeline is preferred by the multiplex for program ingest.
     */
    inline PreferredChannelPipeline GetPreferredChannelPipeline() const { return m_preferredChannelPipeline; }
    inline bool PreferredChannelPipelineHasBeenSet() const { return m_preferredChannelPipelineHasBeenSet; }
    inline void SetPreferredChannelPipeline(PreferredChannelPipeline value) { m_preferredChannelPipelineHasBeenSet = true; m_preferredChannelPipeline = value; }
    inline MultiplexProgramSettings& WithPreferredChannelPipeline(PreferredChannelPipeline value) { SetPreferredChannelPipeline(value); return *this;}
    ///@}

    ///@{
    /**
     * Unique program number.
     */
    inline int GetProgramNumber() const { return m_programNumber; }
    inline bool ProgramNumberHasBeenSet() const { return m_programNumberHasBeenSet; }
    inline void SetProgramNumber(int value) { m_programNumberHasBeenSet = true; m_programNumber = value; }
    inline MultiplexProgramSettings& WithProgramNumber(int value) { SetProgramNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * Transport stream service descriptor configuration for the Multiplex program.
     */
    inline const MultiplexProgramServiceDescriptor& GetServiceDescriptor() const { return m_serviceDescriptor; }
    inline bool ServiceDescriptorHasBeenSet() const { return m_serviceDescriptorHasBeenSet; }
    template<typename ServiceDescriptorT = MultiplexProgramServiceDescriptor>
    void SetServiceDescriptor(ServiceDescriptorT&& value) { m_serviceDescriptorHasBeenSet = true; m_serviceDescriptor = std::forward<ServiceDescriptorT>(value); }
    template<typename ServiceDescriptorT = MultiplexProgramServiceDescriptor>
    MultiplexProgramSettings& WithServiceDescriptor(ServiceDescriptorT&& value) { SetServiceDescriptor(std::forward<ServiceDescriptorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Program video settings configuration.
     */
    inline const MultiplexVideoSettings& GetVideoSettings() const { return m_videoSettings; }
    inline bool VideoSettingsHasBeenSet() const { return m_videoSettingsHasBeenSet; }
    template<typename VideoSettingsT = MultiplexVideoSettings>
    void SetVideoSettings(VideoSettingsT&& value) { m_videoSettingsHasBeenSet = true; m_videoSettings = std::forward<VideoSettingsT>(value); }
    template<typename VideoSettingsT = MultiplexVideoSettings>
    MultiplexProgramSettings& WithVideoSettings(VideoSettingsT&& value) { SetVideoSettings(std::forward<VideoSettingsT>(value)); return *this;}
    ///@}
  private:

    PreferredChannelPipeline m_preferredChannelPipeline{PreferredChannelPipeline::NOT_SET};
    bool m_preferredChannelPipelineHasBeenSet = false;

    int m_programNumber{0};
    bool m_programNumberHasBeenSet = false;

    MultiplexProgramServiceDescriptor m_serviceDescriptor;
    bool m_serviceDescriptorHasBeenSet = false;

    MultiplexVideoSettings m_videoSettings;
    bool m_videoSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
