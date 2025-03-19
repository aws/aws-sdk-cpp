/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/EncodingName.h>
#include <aws/mediaconnect/model/EncodingParameters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/DestinationConfiguration.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p> The media stream that is associated with the output, and the parameters for
   * that association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MediaStreamOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class MediaStreamOutputConfiguration
  {
  public:
    AWS_MEDIACONNECT_API MediaStreamOutputConfiguration() = default;
    AWS_MEDIACONNECT_API MediaStreamOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API MediaStreamOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The transport parameters that are associated with each outbound media
     * stream.</p>
     */
    inline const Aws::Vector<DestinationConfiguration>& GetDestinationConfigurations() const { return m_destinationConfigurations; }
    inline bool DestinationConfigurationsHasBeenSet() const { return m_destinationConfigurationsHasBeenSet; }
    template<typename DestinationConfigurationsT = Aws::Vector<DestinationConfiguration>>
    void SetDestinationConfigurations(DestinationConfigurationsT&& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations = std::forward<DestinationConfigurationsT>(value); }
    template<typename DestinationConfigurationsT = Aws::Vector<DestinationConfiguration>>
    MediaStreamOutputConfiguration& WithDestinationConfigurations(DestinationConfigurationsT&& value) { SetDestinationConfigurations(std::forward<DestinationConfigurationsT>(value)); return *this;}
    template<typename DestinationConfigurationsT = DestinationConfiguration>
    MediaStreamOutputConfiguration& AddDestinationConfigurations(DestinationConfigurationsT&& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations.emplace_back(std::forward<DestinationConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The format that was used to encode the data. For ancillary data streams, set
     * the encoding name to smpte291. For audio streams, set the encoding name to pcm.
     * For video, 2110 streams, set the encoding name to raw. For video, JPEG XS
     * streams, set the encoding name to jxsv.</p>
     */
    inline EncodingName GetEncodingName() const { return m_encodingName; }
    inline bool EncodingNameHasBeenSet() const { return m_encodingNameHasBeenSet; }
    inline void SetEncodingName(EncodingName value) { m_encodingNameHasBeenSet = true; m_encodingName = value; }
    inline MediaStreamOutputConfiguration& WithEncodingName(EncodingName value) { SetEncodingName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of parameters that determine how MediaConnect will convert the
     * content. These fields only apply to outputs on flows that have a CDI source.
     * </p>
     */
    inline const EncodingParameters& GetEncodingParameters() const { return m_encodingParameters; }
    inline bool EncodingParametersHasBeenSet() const { return m_encodingParametersHasBeenSet; }
    template<typename EncodingParametersT = EncodingParameters>
    void SetEncodingParameters(EncodingParametersT&& value) { m_encodingParametersHasBeenSet = true; m_encodingParameters = std::forward<EncodingParametersT>(value); }
    template<typename EncodingParametersT = EncodingParameters>
    MediaStreamOutputConfiguration& WithEncodingParameters(EncodingParametersT&& value) { SetEncodingParameters(std::forward<EncodingParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the media stream.</p>
     */
    inline const Aws::String& GetMediaStreamName() const { return m_mediaStreamName; }
    inline bool MediaStreamNameHasBeenSet() const { return m_mediaStreamNameHasBeenSet; }
    template<typename MediaStreamNameT = Aws::String>
    void SetMediaStreamName(MediaStreamNameT&& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = std::forward<MediaStreamNameT>(value); }
    template<typename MediaStreamNameT = Aws::String>
    MediaStreamOutputConfiguration& WithMediaStreamName(MediaStreamNameT&& value) { SetMediaStreamName(std::forward<MediaStreamNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DestinationConfiguration> m_destinationConfigurations;
    bool m_destinationConfigurationsHasBeenSet = false;

    EncodingName m_encodingName{EncodingName::NOT_SET};
    bool m_encodingNameHasBeenSet = false;

    EncodingParameters m_encodingParameters;
    bool m_encodingParametersHasBeenSet = false;

    Aws::String m_mediaStreamName;
    bool m_mediaStreamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
