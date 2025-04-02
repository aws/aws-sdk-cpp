/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * The location of the SDP file for one of the SMPTE 2110 streams in a receiver
   * group.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputSdpLocation">AWS
   * API Reference</a></p>
   */
  class InputSdpLocation
  {
  public:
    AWS_MEDIALIVE_API InputSdpLocation() = default;
    AWS_MEDIALIVE_API InputSdpLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputSdpLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The index of the media stream in the SDP file for one SMPTE 2110 stream.
     */
    inline int GetMediaIndex() const { return m_mediaIndex; }
    inline bool MediaIndexHasBeenSet() const { return m_mediaIndexHasBeenSet; }
    inline void SetMediaIndex(int value) { m_mediaIndexHasBeenSet = true; m_mediaIndex = value; }
    inline InputSdpLocation& WithMediaIndex(int value) { SetMediaIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * The URL of the SDP file for one SMPTE 2110 stream.
     */
    inline const Aws::String& GetSdpUrl() const { return m_sdpUrl; }
    inline bool SdpUrlHasBeenSet() const { return m_sdpUrlHasBeenSet; }
    template<typename SdpUrlT = Aws::String>
    void SetSdpUrl(SdpUrlT&& value) { m_sdpUrlHasBeenSet = true; m_sdpUrl = std::forward<SdpUrlT>(value); }
    template<typename SdpUrlT = Aws::String>
    InputSdpLocation& WithSdpUrl(SdpUrlT&& value) { SetSdpUrl(std::forward<SdpUrlT>(value)); return *this;}
    ///@}
  private:

    int m_mediaIndex{0};
    bool m_mediaIndexHasBeenSet = false;

    Aws::String m_sdpUrl;
    bool m_sdpUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
