/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/NielsenWatermarksCbetStepaside.h>
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
   * Nielsen CBET<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/NielsenCBET">AWS
   * API Reference</a></p>
   */
  class NielsenCBET
  {
  public:
    AWS_MEDIALIVE_API NielsenCBET();
    AWS_MEDIALIVE_API NielsenCBET(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API NielsenCBET& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Enter the CBET check digits to use in the watermark.
     */
    inline const Aws::String& GetCbetCheckDigitString() const{ return m_cbetCheckDigitString; }

    /**
     * Enter the CBET check digits to use in the watermark.
     */
    inline bool CbetCheckDigitStringHasBeenSet() const { return m_cbetCheckDigitStringHasBeenSet; }

    /**
     * Enter the CBET check digits to use in the watermark.
     */
    inline void SetCbetCheckDigitString(const Aws::String& value) { m_cbetCheckDigitStringHasBeenSet = true; m_cbetCheckDigitString = value; }

    /**
     * Enter the CBET check digits to use in the watermark.
     */
    inline void SetCbetCheckDigitString(Aws::String&& value) { m_cbetCheckDigitStringHasBeenSet = true; m_cbetCheckDigitString = std::move(value); }

    /**
     * Enter the CBET check digits to use in the watermark.
     */
    inline void SetCbetCheckDigitString(const char* value) { m_cbetCheckDigitStringHasBeenSet = true; m_cbetCheckDigitString.assign(value); }

    /**
     * Enter the CBET check digits to use in the watermark.
     */
    inline NielsenCBET& WithCbetCheckDigitString(const Aws::String& value) { SetCbetCheckDigitString(value); return *this;}

    /**
     * Enter the CBET check digits to use in the watermark.
     */
    inline NielsenCBET& WithCbetCheckDigitString(Aws::String&& value) { SetCbetCheckDigitString(std::move(value)); return *this;}

    /**
     * Enter the CBET check digits to use in the watermark.
     */
    inline NielsenCBET& WithCbetCheckDigitString(const char* value) { SetCbetCheckDigitString(value); return *this;}


    /**
     * Determines the method of CBET insertion mode when prior encoding is detected on
     * the same layer.
     */
    inline const NielsenWatermarksCbetStepaside& GetCbetStepaside() const{ return m_cbetStepaside; }

    /**
     * Determines the method of CBET insertion mode when prior encoding is detected on
     * the same layer.
     */
    inline bool CbetStepasideHasBeenSet() const { return m_cbetStepasideHasBeenSet; }

    /**
     * Determines the method of CBET insertion mode when prior encoding is detected on
     * the same layer.
     */
    inline void SetCbetStepaside(const NielsenWatermarksCbetStepaside& value) { m_cbetStepasideHasBeenSet = true; m_cbetStepaside = value; }

    /**
     * Determines the method of CBET insertion mode when prior encoding is detected on
     * the same layer.
     */
    inline void SetCbetStepaside(NielsenWatermarksCbetStepaside&& value) { m_cbetStepasideHasBeenSet = true; m_cbetStepaside = std::move(value); }

    /**
     * Determines the method of CBET insertion mode when prior encoding is detected on
     * the same layer.
     */
    inline NielsenCBET& WithCbetStepaside(const NielsenWatermarksCbetStepaside& value) { SetCbetStepaside(value); return *this;}

    /**
     * Determines the method of CBET insertion mode when prior encoding is detected on
     * the same layer.
     */
    inline NielsenCBET& WithCbetStepaside(NielsenWatermarksCbetStepaside&& value) { SetCbetStepaside(std::move(value)); return *this;}


    /**
     * Enter the CBET Source ID (CSID) to use in the watermark
     */
    inline const Aws::String& GetCsid() const{ return m_csid; }

    /**
     * Enter the CBET Source ID (CSID) to use in the watermark
     */
    inline bool CsidHasBeenSet() const { return m_csidHasBeenSet; }

    /**
     * Enter the CBET Source ID (CSID) to use in the watermark
     */
    inline void SetCsid(const Aws::String& value) { m_csidHasBeenSet = true; m_csid = value; }

    /**
     * Enter the CBET Source ID (CSID) to use in the watermark
     */
    inline void SetCsid(Aws::String&& value) { m_csidHasBeenSet = true; m_csid = std::move(value); }

    /**
     * Enter the CBET Source ID (CSID) to use in the watermark
     */
    inline void SetCsid(const char* value) { m_csidHasBeenSet = true; m_csid.assign(value); }

    /**
     * Enter the CBET Source ID (CSID) to use in the watermark
     */
    inline NielsenCBET& WithCsid(const Aws::String& value) { SetCsid(value); return *this;}

    /**
     * Enter the CBET Source ID (CSID) to use in the watermark
     */
    inline NielsenCBET& WithCsid(Aws::String&& value) { SetCsid(std::move(value)); return *this;}

    /**
     * Enter the CBET Source ID (CSID) to use in the watermark
     */
    inline NielsenCBET& WithCsid(const char* value) { SetCsid(value); return *this;}

  private:

    Aws::String m_cbetCheckDigitString;
    bool m_cbetCheckDigitStringHasBeenSet = false;

    NielsenWatermarksCbetStepaside m_cbetStepaside;
    bool m_cbetStepasideHasBeenSet = false;

    Aws::String m_csid;
    bool m_csidHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
