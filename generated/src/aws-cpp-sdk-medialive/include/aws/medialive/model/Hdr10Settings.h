/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

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
   * Hdr10 Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Hdr10Settings">AWS
   * API Reference</a></p>
   */
  class Hdr10Settings
  {
  public:
    AWS_MEDIALIVE_API Hdr10Settings();
    AWS_MEDIALIVE_API Hdr10Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Hdr10Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Maximum Content Light Level
An integer metadata value defining the maximum light
     * level, in nits,
of any single pixel within an encoded HDR video stream or file.
     */
    inline int GetMaxCll() const{ return m_maxCll; }

    /**
     * Maximum Content Light Level
An integer metadata value defining the maximum light
     * level, in nits,
of any single pixel within an encoded HDR video stream or file.
     */
    inline bool MaxCllHasBeenSet() const { return m_maxCllHasBeenSet; }

    /**
     * Maximum Content Light Level
An integer metadata value defining the maximum light
     * level, in nits,
of any single pixel within an encoded HDR video stream or file.
     */
    inline void SetMaxCll(int value) { m_maxCllHasBeenSet = true; m_maxCll = value; }

    /**
     * Maximum Content Light Level
An integer metadata value defining the maximum light
     * level, in nits,
of any single pixel within an encoded HDR video stream or file.
     */
    inline Hdr10Settings& WithMaxCll(int value) { SetMaxCll(value); return *this;}


    /**
     * Maximum Frame Average Light Level
An integer metadata value defining the maximum
     * average light level, in nits,
for any single frame within an encoded HDR video
     * stream or file.
     */
    inline int GetMaxFall() const{ return m_maxFall; }

    /**
     * Maximum Frame Average Light Level
An integer metadata value defining the maximum
     * average light level, in nits,
for any single frame within an encoded HDR video
     * stream or file.
     */
    inline bool MaxFallHasBeenSet() const { return m_maxFallHasBeenSet; }

    /**
     * Maximum Frame Average Light Level
An integer metadata value defining the maximum
     * average light level, in nits,
for any single frame within an encoded HDR video
     * stream or file.
     */
    inline void SetMaxFall(int value) { m_maxFallHasBeenSet = true; m_maxFall = value; }

    /**
     * Maximum Frame Average Light Level
An integer metadata value defining the maximum
     * average light level, in nits,
for any single frame within an encoded HDR video
     * stream or file.
     */
    inline Hdr10Settings& WithMaxFall(int value) { SetMaxFall(value); return *this;}

  private:

    int m_maxCll;
    bool m_maxCllHasBeenSet = false;

    int m_maxFall;
    bool m_maxFallHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
