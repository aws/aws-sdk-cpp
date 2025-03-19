/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/EncodingName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/InputConfiguration.h>
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
   * <p>The media stream that is associated with the source, and the parameters for
   * that association. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MediaStreamSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class MediaStreamSourceConfiguration
  {
  public:
    AWS_MEDIACONNECT_API MediaStreamSourceConfiguration() = default;
    AWS_MEDIACONNECT_API MediaStreamSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API MediaStreamSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The format that was used to encode the data. For ancillary data streams, set
     * the encoding name to smpte291. For audio streams, set the encoding name to pcm.
     * For video, 2110 streams, set the encoding name to raw. For video, JPEG XS
     * streams, set the encoding name to jxsv. </p>
     */
    inline EncodingName GetEncodingName() const { return m_encodingName; }
    inline bool EncodingNameHasBeenSet() const { return m_encodingNameHasBeenSet; }
    inline void SetEncodingName(EncodingName value) { m_encodingNameHasBeenSet = true; m_encodingName = value; }
    inline MediaStreamSourceConfiguration& WithEncodingName(EncodingName value) { SetEncodingName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The media streams that you want to associate with the source. </p>
     */
    inline const Aws::Vector<InputConfiguration>& GetInputConfigurations() const { return m_inputConfigurations; }
    inline bool InputConfigurationsHasBeenSet() const { return m_inputConfigurationsHasBeenSet; }
    template<typename InputConfigurationsT = Aws::Vector<InputConfiguration>>
    void SetInputConfigurations(InputConfigurationsT&& value) { m_inputConfigurationsHasBeenSet = true; m_inputConfigurations = std::forward<InputConfigurationsT>(value); }
    template<typename InputConfigurationsT = Aws::Vector<InputConfiguration>>
    MediaStreamSourceConfiguration& WithInputConfigurations(InputConfigurationsT&& value) { SetInputConfigurations(std::forward<InputConfigurationsT>(value)); return *this;}
    template<typename InputConfigurationsT = InputConfiguration>
    MediaStreamSourceConfiguration& AddInputConfigurations(InputConfigurationsT&& value) { m_inputConfigurationsHasBeenSet = true; m_inputConfigurations.emplace_back(std::forward<InputConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A name that helps you distinguish one media stream from another. </p>
     */
    inline const Aws::String& GetMediaStreamName() const { return m_mediaStreamName; }
    inline bool MediaStreamNameHasBeenSet() const { return m_mediaStreamNameHasBeenSet; }
    template<typename MediaStreamNameT = Aws::String>
    void SetMediaStreamName(MediaStreamNameT&& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = std::forward<MediaStreamNameT>(value); }
    template<typename MediaStreamNameT = Aws::String>
    MediaStreamSourceConfiguration& WithMediaStreamName(MediaStreamNameT&& value) { SetMediaStreamName(std::forward<MediaStreamNameT>(value)); return *this;}
    ///@}
  private:

    EncodingName m_encodingName{EncodingName::NOT_SET};
    bool m_encodingNameHasBeenSet = false;

    Aws::Vector<InputConfiguration> m_inputConfigurations;
    bool m_inputConfigurationsHasBeenSet = false;

    Aws::String m_mediaStreamName;
    bool m_mediaStreamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
