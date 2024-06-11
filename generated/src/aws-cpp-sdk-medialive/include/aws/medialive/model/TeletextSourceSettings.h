﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/CaptionRectangle.h>
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
   * Teletext Source Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TeletextSourceSettings">AWS
   * API Reference</a></p>
   */
  class TeletextSourceSettings
  {
  public:
    AWS_MEDIALIVE_API TeletextSourceSettings();
    AWS_MEDIALIVE_API TeletextSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API TeletextSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Optionally defines a region where TTML style captions will be displayed
     */
    inline const CaptionRectangle& GetOutputRectangle() const{ return m_outputRectangle; }
    inline bool OutputRectangleHasBeenSet() const { return m_outputRectangleHasBeenSet; }
    inline void SetOutputRectangle(const CaptionRectangle& value) { m_outputRectangleHasBeenSet = true; m_outputRectangle = value; }
    inline void SetOutputRectangle(CaptionRectangle&& value) { m_outputRectangleHasBeenSet = true; m_outputRectangle = std::move(value); }
    inline TeletextSourceSettings& WithOutputRectangle(const CaptionRectangle& value) { SetOutputRectangle(value); return *this;}
    inline TeletextSourceSettings& WithOutputRectangle(CaptionRectangle&& value) { SetOutputRectangle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the teletext page number within the data stream from which to extract
     * captions. Range of 0x100 (256) to 0x8FF (2303). Unused for passthrough. Should
     * be specified as a hexadecimal string with no "0x" prefix.
     */
    inline const Aws::String& GetPageNumber() const{ return m_pageNumber; }
    inline bool PageNumberHasBeenSet() const { return m_pageNumberHasBeenSet; }
    inline void SetPageNumber(const Aws::String& value) { m_pageNumberHasBeenSet = true; m_pageNumber = value; }
    inline void SetPageNumber(Aws::String&& value) { m_pageNumberHasBeenSet = true; m_pageNumber = std::move(value); }
    inline void SetPageNumber(const char* value) { m_pageNumberHasBeenSet = true; m_pageNumber.assign(value); }
    inline TeletextSourceSettings& WithPageNumber(const Aws::String& value) { SetPageNumber(value); return *this;}
    inline TeletextSourceSettings& WithPageNumber(Aws::String&& value) { SetPageNumber(std::move(value)); return *this;}
    inline TeletextSourceSettings& WithPageNumber(const char* value) { SetPageNumber(value); return *this;}
    ///@}
  private:

    CaptionRectangle m_outputRectangle;
    bool m_outputRectangleHasBeenSet = false;

    Aws::String m_pageNumber;
    bool m_pageNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
