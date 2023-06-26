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


    /**
     * <p>The alignment of the text. Valid values: LEFT, CENTER, RIGHT.</p>
     */
    inline const Alignment& GetAlignment() const{ return m_alignment; }

    /**
     * <p>The alignment of the text. Valid values: LEFT, CENTER, RIGHT.</p>
     */
    inline bool AlignmentHasBeenSet() const { return m_alignmentHasBeenSet; }

    /**
     * <p>The alignment of the text. Valid values: LEFT, CENTER, RIGHT.</p>
     */
    inline void SetAlignment(const Alignment& value) { m_alignmentHasBeenSet = true; m_alignment = value; }

    /**
     * <p>The alignment of the text. Valid values: LEFT, CENTER, RIGHT.</p>
     */
    inline void SetAlignment(Alignment&& value) { m_alignmentHasBeenSet = true; m_alignment = std::move(value); }

    /**
     * <p>The alignment of the text. Valid values: LEFT, CENTER, RIGHT.</p>
     */
    inline InAppMessageBodyConfig& WithAlignment(const Alignment& value) { SetAlignment(value); return *this;}

    /**
     * <p>The alignment of the text. Valid values: LEFT, CENTER, RIGHT.</p>
     */
    inline InAppMessageBodyConfig& WithAlignment(Alignment&& value) { SetAlignment(std::move(value)); return *this;}


    /**
     * <p>Message Body.</p>
     */
    inline const Aws::String& GetBody() const{ return m_body; }

    /**
     * <p>Message Body.</p>
     */
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }

    /**
     * <p>Message Body.</p>
     */
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }

    /**
     * <p>Message Body.</p>
     */
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }

    /**
     * <p>Message Body.</p>
     */
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }

    /**
     * <p>Message Body.</p>
     */
    inline InAppMessageBodyConfig& WithBody(const Aws::String& value) { SetBody(value); return *this;}

    /**
     * <p>Message Body.</p>
     */
    inline InAppMessageBodyConfig& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}

    /**
     * <p>Message Body.</p>
     */
    inline InAppMessageBodyConfig& WithBody(const char* value) { SetBody(value); return *this;}


    /**
     * <p>The text color.</p>
     */
    inline const Aws::String& GetTextColor() const{ return m_textColor; }

    /**
     * <p>The text color.</p>
     */
    inline bool TextColorHasBeenSet() const { return m_textColorHasBeenSet; }

    /**
     * <p>The text color.</p>
     */
    inline void SetTextColor(const Aws::String& value) { m_textColorHasBeenSet = true; m_textColor = value; }

    /**
     * <p>The text color.</p>
     */
    inline void SetTextColor(Aws::String&& value) { m_textColorHasBeenSet = true; m_textColor = std::move(value); }

    /**
     * <p>The text color.</p>
     */
    inline void SetTextColor(const char* value) { m_textColorHasBeenSet = true; m_textColor.assign(value); }

    /**
     * <p>The text color.</p>
     */
    inline InAppMessageBodyConfig& WithTextColor(const Aws::String& value) { SetTextColor(value); return *this;}

    /**
     * <p>The text color.</p>
     */
    inline InAppMessageBodyConfig& WithTextColor(Aws::String&& value) { SetTextColor(std::move(value)); return *this;}

    /**
     * <p>The text color.</p>
     */
    inline InAppMessageBodyConfig& WithTextColor(const char* value) { SetTextColor(value); return *this;}

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
