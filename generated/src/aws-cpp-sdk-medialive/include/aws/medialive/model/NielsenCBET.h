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


    ///@{
    /**
     * Enter the CBET check digits to use in the watermark.
     */
    inline const Aws::String& GetCbetCheckDigitString() const{ return m_cbetCheckDigitString; }
    inline bool CbetCheckDigitStringHasBeenSet() const { return m_cbetCheckDigitStringHasBeenSet; }
    inline void SetCbetCheckDigitString(const Aws::String& value) { m_cbetCheckDigitStringHasBeenSet = true; m_cbetCheckDigitString = value; }
    inline void SetCbetCheckDigitString(Aws::String&& value) { m_cbetCheckDigitStringHasBeenSet = true; m_cbetCheckDigitString = std::move(value); }
    inline void SetCbetCheckDigitString(const char* value) { m_cbetCheckDigitStringHasBeenSet = true; m_cbetCheckDigitString.assign(value); }
    inline NielsenCBET& WithCbetCheckDigitString(const Aws::String& value) { SetCbetCheckDigitString(value); return *this;}
    inline NielsenCBET& WithCbetCheckDigitString(Aws::String&& value) { SetCbetCheckDigitString(std::move(value)); return *this;}
    inline NielsenCBET& WithCbetCheckDigitString(const char* value) { SetCbetCheckDigitString(value); return *this;}
    ///@}

    ///@{
    /**
     * Determines the method of CBET insertion mode when prior encoding is detected on
     * the same layer.
     */
    inline const NielsenWatermarksCbetStepaside& GetCbetStepaside() const{ return m_cbetStepaside; }
    inline bool CbetStepasideHasBeenSet() const { return m_cbetStepasideHasBeenSet; }
    inline void SetCbetStepaside(const NielsenWatermarksCbetStepaside& value) { m_cbetStepasideHasBeenSet = true; m_cbetStepaside = value; }
    inline void SetCbetStepaside(NielsenWatermarksCbetStepaside&& value) { m_cbetStepasideHasBeenSet = true; m_cbetStepaside = std::move(value); }
    inline NielsenCBET& WithCbetStepaside(const NielsenWatermarksCbetStepaside& value) { SetCbetStepaside(value); return *this;}
    inline NielsenCBET& WithCbetStepaside(NielsenWatermarksCbetStepaside&& value) { SetCbetStepaside(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Enter the CBET Source ID (CSID) to use in the watermark
     */
    inline const Aws::String& GetCsid() const{ return m_csid; }
    inline bool CsidHasBeenSet() const { return m_csidHasBeenSet; }
    inline void SetCsid(const Aws::String& value) { m_csidHasBeenSet = true; m_csid = value; }
    inline void SetCsid(Aws::String&& value) { m_csidHasBeenSet = true; m_csid = std::move(value); }
    inline void SetCsid(const char* value) { m_csidHasBeenSet = true; m_csid.assign(value); }
    inline NielsenCBET& WithCsid(const Aws::String& value) { SetCsid(value); return *this;}
    inline NielsenCBET& WithCsid(Aws::String&& value) { SetCsid(std::move(value)); return *this;}
    inline NielsenCBET& WithCsid(const char* value) { SetCsid(value); return *this;}
    ///@}
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
