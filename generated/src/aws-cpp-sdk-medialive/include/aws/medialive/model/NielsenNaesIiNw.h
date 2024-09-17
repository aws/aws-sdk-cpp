/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/NielsenWatermarkTimezones.h>
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
   * Nielsen Naes Ii Nw<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/NielsenNaesIiNw">AWS
   * API Reference</a></p>
   */
  class NielsenNaesIiNw
  {
  public:
    AWS_MEDIALIVE_API NielsenNaesIiNw();
    AWS_MEDIALIVE_API NielsenNaesIiNw(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API NielsenNaesIiNw& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Enter the check digit string for the watermark
     */
    inline const Aws::String& GetCheckDigitString() const{ return m_checkDigitString; }
    inline bool CheckDigitStringHasBeenSet() const { return m_checkDigitStringHasBeenSet; }
    inline void SetCheckDigitString(const Aws::String& value) { m_checkDigitStringHasBeenSet = true; m_checkDigitString = value; }
    inline void SetCheckDigitString(Aws::String&& value) { m_checkDigitStringHasBeenSet = true; m_checkDigitString = std::move(value); }
    inline void SetCheckDigitString(const char* value) { m_checkDigitStringHasBeenSet = true; m_checkDigitString.assign(value); }
    inline NielsenNaesIiNw& WithCheckDigitString(const Aws::String& value) { SetCheckDigitString(value); return *this;}
    inline NielsenNaesIiNw& WithCheckDigitString(Aws::String&& value) { SetCheckDigitString(std::move(value)); return *this;}
    inline NielsenNaesIiNw& WithCheckDigitString(const char* value) { SetCheckDigitString(value); return *this;}
    ///@}

    ///@{
    /**
     * Enter the Nielsen Source ID (SID) to include in the watermark
     */
    inline double GetSid() const{ return m_sid; }
    inline bool SidHasBeenSet() const { return m_sidHasBeenSet; }
    inline void SetSid(double value) { m_sidHasBeenSet = true; m_sid = value; }
    inline NielsenNaesIiNw& WithSid(double value) { SetSid(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose the timezone for the time stamps in the watermark. If not provided,
the
     * timestamps will be in Coordinated Universal Time (UTC)
     */
    inline const NielsenWatermarkTimezones& GetTimezone() const{ return m_timezone; }
    inline bool TimezoneHasBeenSet() const { return m_timezoneHasBeenSet; }
    inline void SetTimezone(const NielsenWatermarkTimezones& value) { m_timezoneHasBeenSet = true; m_timezone = value; }
    inline void SetTimezone(NielsenWatermarkTimezones&& value) { m_timezoneHasBeenSet = true; m_timezone = std::move(value); }
    inline NielsenNaesIiNw& WithTimezone(const NielsenWatermarkTimezones& value) { SetTimezone(value); return *this;}
    inline NielsenNaesIiNw& WithTimezone(NielsenWatermarkTimezones&& value) { SetTimezone(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_checkDigitString;
    bool m_checkDigitStringHasBeenSet = false;

    double m_sid;
    bool m_sidHasBeenSet = false;

    NielsenWatermarkTimezones m_timezone;
    bool m_timezoneHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
