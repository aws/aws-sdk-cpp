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
   * The media stream that is associated with the output, and the parameters for that
   * association.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MediaStreamOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class MediaStreamOutputConfiguration
  {
  public:
    AWS_MEDIACONNECT_API MediaStreamOutputConfiguration();
    AWS_MEDIACONNECT_API MediaStreamOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API MediaStreamOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The transport parameters that are associated with each outbound media stream.
     */
    inline const Aws::Vector<DestinationConfiguration>& GetDestinationConfigurations() const{ return m_destinationConfigurations; }

    /**
     * The transport parameters that are associated with each outbound media stream.
     */
    inline bool DestinationConfigurationsHasBeenSet() const { return m_destinationConfigurationsHasBeenSet; }

    /**
     * The transport parameters that are associated with each outbound media stream.
     */
    inline void SetDestinationConfigurations(const Aws::Vector<DestinationConfiguration>& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations = value; }

    /**
     * The transport parameters that are associated with each outbound media stream.
     */
    inline void SetDestinationConfigurations(Aws::Vector<DestinationConfiguration>&& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations = std::move(value); }

    /**
     * The transport parameters that are associated with each outbound media stream.
     */
    inline MediaStreamOutputConfiguration& WithDestinationConfigurations(const Aws::Vector<DestinationConfiguration>& value) { SetDestinationConfigurations(value); return *this;}

    /**
     * The transport parameters that are associated with each outbound media stream.
     */
    inline MediaStreamOutputConfiguration& WithDestinationConfigurations(Aws::Vector<DestinationConfiguration>&& value) { SetDestinationConfigurations(std::move(value)); return *this;}

    /**
     * The transport parameters that are associated with each outbound media stream.
     */
    inline MediaStreamOutputConfiguration& AddDestinationConfigurations(const DestinationConfiguration& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations.push_back(value); return *this; }

    /**
     * The transport parameters that are associated with each outbound media stream.
     */
    inline MediaStreamOutputConfiguration& AddDestinationConfigurations(DestinationConfiguration&& value) { m_destinationConfigurationsHasBeenSet = true; m_destinationConfigurations.push_back(std::move(value)); return *this; }


    /**
     * The format that was used to encode the data. For ancillary data streams, set the
     * encoding name to smpte291. For audio streams, set the encoding name to pcm. For
     * video, 2110 streams, set the encoding name to raw. For video, JPEG XS streams,
     * set the encoding name to jxsv.
     */
    inline const EncodingName& GetEncodingName() const{ return m_encodingName; }

    /**
     * The format that was used to encode the data. For ancillary data streams, set the
     * encoding name to smpte291. For audio streams, set the encoding name to pcm. For
     * video, 2110 streams, set the encoding name to raw. For video, JPEG XS streams,
     * set the encoding name to jxsv.
     */
    inline bool EncodingNameHasBeenSet() const { return m_encodingNameHasBeenSet; }

    /**
     * The format that was used to encode the data. For ancillary data streams, set the
     * encoding name to smpte291. For audio streams, set the encoding name to pcm. For
     * video, 2110 streams, set the encoding name to raw. For video, JPEG XS streams,
     * set the encoding name to jxsv.
     */
    inline void SetEncodingName(const EncodingName& value) { m_encodingNameHasBeenSet = true; m_encodingName = value; }

    /**
     * The format that was used to encode the data. For ancillary data streams, set the
     * encoding name to smpte291. For audio streams, set the encoding name to pcm. For
     * video, 2110 streams, set the encoding name to raw. For video, JPEG XS streams,
     * set the encoding name to jxsv.
     */
    inline void SetEncodingName(EncodingName&& value) { m_encodingNameHasBeenSet = true; m_encodingName = std::move(value); }

    /**
     * The format that was used to encode the data. For ancillary data streams, set the
     * encoding name to smpte291. For audio streams, set the encoding name to pcm. For
     * video, 2110 streams, set the encoding name to raw. For video, JPEG XS streams,
     * set the encoding name to jxsv.
     */
    inline MediaStreamOutputConfiguration& WithEncodingName(const EncodingName& value) { SetEncodingName(value); return *this;}

    /**
     * The format that was used to encode the data. For ancillary data streams, set the
     * encoding name to smpte291. For audio streams, set the encoding name to pcm. For
     * video, 2110 streams, set the encoding name to raw. For video, JPEG XS streams,
     * set the encoding name to jxsv.
     */
    inline MediaStreamOutputConfiguration& WithEncodingName(EncodingName&& value) { SetEncodingName(std::move(value)); return *this;}


    /**
     * Encoding parameters
     */
    inline const EncodingParameters& GetEncodingParameters() const{ return m_encodingParameters; }

    /**
     * Encoding parameters
     */
    inline bool EncodingParametersHasBeenSet() const { return m_encodingParametersHasBeenSet; }

    /**
     * Encoding parameters
     */
    inline void SetEncodingParameters(const EncodingParameters& value) { m_encodingParametersHasBeenSet = true; m_encodingParameters = value; }

    /**
     * Encoding parameters
     */
    inline void SetEncodingParameters(EncodingParameters&& value) { m_encodingParametersHasBeenSet = true; m_encodingParameters = std::move(value); }

    /**
     * Encoding parameters
     */
    inline MediaStreamOutputConfiguration& WithEncodingParameters(const EncodingParameters& value) { SetEncodingParameters(value); return *this;}

    /**
     * Encoding parameters
     */
    inline MediaStreamOutputConfiguration& WithEncodingParameters(EncodingParameters&& value) { SetEncodingParameters(std::move(value)); return *this;}


    /**
     * The name of the media stream.
     */
    inline const Aws::String& GetMediaStreamName() const{ return m_mediaStreamName; }

    /**
     * The name of the media stream.
     */
    inline bool MediaStreamNameHasBeenSet() const { return m_mediaStreamNameHasBeenSet; }

    /**
     * The name of the media stream.
     */
    inline void SetMediaStreamName(const Aws::String& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = value; }

    /**
     * The name of the media stream.
     */
    inline void SetMediaStreamName(Aws::String&& value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName = std::move(value); }

    /**
     * The name of the media stream.
     */
    inline void SetMediaStreamName(const char* value) { m_mediaStreamNameHasBeenSet = true; m_mediaStreamName.assign(value); }

    /**
     * The name of the media stream.
     */
    inline MediaStreamOutputConfiguration& WithMediaStreamName(const Aws::String& value) { SetMediaStreamName(value); return *this;}

    /**
     * The name of the media stream.
     */
    inline MediaStreamOutputConfiguration& WithMediaStreamName(Aws::String&& value) { SetMediaStreamName(std::move(value)); return *this;}

    /**
     * The name of the media stream.
     */
    inline MediaStreamOutputConfiguration& WithMediaStreamName(const char* value) { SetMediaStreamName(value); return *this;}

  private:

    Aws::Vector<DestinationConfiguration> m_destinationConfigurations;
    bool m_destinationConfigurationsHasBeenSet = false;

    EncodingName m_encodingName;
    bool m_encodingNameHasBeenSet = false;

    EncodingParameters m_encodingParameters;
    bool m_encodingParametersHasBeenSet = false;

    Aws::String m_mediaStreamName;
    bool m_mediaStreamNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
