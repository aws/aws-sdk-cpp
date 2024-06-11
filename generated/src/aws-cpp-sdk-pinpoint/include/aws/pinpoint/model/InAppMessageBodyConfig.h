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
   * <p>Text config for Message Body.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/InAppMessageBodyConfig">AWS
   * API Reference</a></p>
   */
  class InAppMessageBodyConfig
  {
  public:
    AWS_PINPOINT_API InAppMessageBodyConfig();
    AWS_PINPOINT_API InAppMessageBodyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API InAppMessageBodyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The alignment of the text. Valid values: LEFT, CENTER, RIGHT.</p>
     */
    inline const Alignment& GetAlignment() const{ return m_alignment; }
    inline bool AlignmentHasBeenSet() const { return m_alignmentHasBeenSet; }
    inline void SetAlignment(const Alignment& value) { m_alignmentHasBeenSet = true; m_alignment = value; }
    inline void SetAlignment(Alignment&& value) { m_alignmentHasBeenSet = true; m_alignment = std::move(value); }
    inline InAppMessageBodyConfig& WithAlignment(const Alignment& value) { SetAlignment(value); return *this;}
    inline InAppMessageBodyConfig& WithAlignment(Alignment&& value) { SetAlignment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message Body.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }
    inline InAppMessageBodyConfig& WithBody(const Aws::String& value) { SetBody(value); return *this;}
    inline InAppMessageBodyConfig& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}
    inline InAppMessageBodyConfig& WithBody(const char* value) { SetBody(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text color.</p>
     */
    inline const Aws::String& GetTextColor() const{ return m_textColor; }
    inline bool TextColorHasBeenSet() const { return m_textColorHasBeenSet; }
    inline void SetTextColor(const Aws::String& value) { m_textColorHasBeenSet = true; m_textColor = value; }
    inline void SetTextColor(Aws::String&& value) { m_textColorHasBeenSet = true; m_textColor = std::move(value); }
    inline void SetTextColor(const char* value) { m_textColorHasBeenSet = true; m_textColor.assign(value); }
    inline InAppMessageBodyConfig& WithTextColor(const Aws::String& value) { SetTextColor(value); return *this;}
    inline InAppMessageBodyConfig& WithTextColor(Aws::String&& value) { SetTextColor(std::move(value)); return *this;}
    inline InAppMessageBodyConfig& WithTextColor(const char* value) { SetTextColor(value); return *this;}
    ///@}
  private:

    Alignment m_alignment;
    bool m_alignmentHasBeenSet = false;

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_textColor;
    bool m_textColorHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
