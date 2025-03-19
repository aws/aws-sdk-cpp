/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/Alignment.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Text config for Message Header.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/InAppMessageHeaderConfig">AWS
   * API Reference</a></p>
   */
  class InAppMessageHeaderConfig
  {
  public:
    AWS_PINPOINT_API InAppMessageHeaderConfig() = default;
    AWS_PINPOINT_API InAppMessageHeaderConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API InAppMessageHeaderConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The alignment of the text. Valid values: LEFT, CENTER, RIGHT.</p>
     */
    inline Alignment GetAlignment() const { return m_alignment; }
    inline bool AlignmentHasBeenSet() const { return m_alignmentHasBeenSet; }
    inline void SetAlignment(Alignment value) { m_alignmentHasBeenSet = true; m_alignment = value; }
    inline InAppMessageHeaderConfig& WithAlignment(Alignment value) { SetAlignment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message Header.</p>
     */
    inline const Aws::String& GetHeader() const { return m_header; }
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }
    template<typename HeaderT = Aws::String>
    void SetHeader(HeaderT&& value) { m_headerHasBeenSet = true; m_header = std::forward<HeaderT>(value); }
    template<typename HeaderT = Aws::String>
    InAppMessageHeaderConfig& WithHeader(HeaderT&& value) { SetHeader(std::forward<HeaderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text color.</p>
     */
    inline const Aws::String& GetTextColor() const { return m_textColor; }
    inline bool TextColorHasBeenSet() const { return m_textColorHasBeenSet; }
    template<typename TextColorT = Aws::String>
    void SetTextColor(TextColorT&& value) { m_textColorHasBeenSet = true; m_textColor = std::forward<TextColorT>(value); }
    template<typename TextColorT = Aws::String>
    InAppMessageHeaderConfig& WithTextColor(TextColorT&& value) { SetTextColor(std::forward<TextColorT>(value)); return *this;}
    ///@}
  private:

    Alignment m_alignment{Alignment::NOT_SET};
    bool m_alignmentHasBeenSet = false;

    Aws::String m_header;
    bool m_headerHasBeenSet = false;

    Aws::String m_textColor;
    bool m_textColorHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
