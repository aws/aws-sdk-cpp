/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/InAppMessageBodyConfig.h>
#include <aws/pinpoint/model/InAppMessageHeaderConfig.h>
#include <aws/pinpoint/model/InAppMessageButton.h>
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
   * <p>The configuration for the message content.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/InAppMessageContent">AWS
   * API Reference</a></p>
   */
  class InAppMessageContent
  {
  public:
    AWS_PINPOINT_API InAppMessageContent();
    AWS_PINPOINT_API InAppMessageContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API InAppMessageContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The background color for the message.</p>
     */
    inline const Aws::String& GetBackgroundColor() const{ return m_backgroundColor; }

    /**
     * <p>The background color for the message.</p>
     */
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }

    /**
     * <p>The background color for the message.</p>
     */
    inline void SetBackgroundColor(const Aws::String& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }

    /**
     * <p>The background color for the message.</p>
     */
    inline void SetBackgroundColor(Aws::String&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::move(value); }

    /**
     * <p>The background color for the message.</p>
     */
    inline void SetBackgroundColor(const char* value) { m_backgroundColorHasBeenSet = true; m_backgroundColor.assign(value); }

    /**
     * <p>The background color for the message.</p>
     */
    inline InAppMessageContent& WithBackgroundColor(const Aws::String& value) { SetBackgroundColor(value); return *this;}

    /**
     * <p>The background color for the message.</p>
     */
    inline InAppMessageContent& WithBackgroundColor(Aws::String&& value) { SetBackgroundColor(std::move(value)); return *this;}

    /**
     * <p>The background color for the message.</p>
     */
    inline InAppMessageContent& WithBackgroundColor(const char* value) { SetBackgroundColor(value); return *this;}


    /**
     * <p>The configuration for the message body.</p>
     */
    inline const InAppMessageBodyConfig& GetBodyConfig() const{ return m_bodyConfig; }

    /**
     * <p>The configuration for the message body.</p>
     */
    inline bool BodyConfigHasBeenSet() const { return m_bodyConfigHasBeenSet; }

    /**
     * <p>The configuration for the message body.</p>
     */
    inline void SetBodyConfig(const InAppMessageBodyConfig& value) { m_bodyConfigHasBeenSet = true; m_bodyConfig = value; }

    /**
     * <p>The configuration for the message body.</p>
     */
    inline void SetBodyConfig(InAppMessageBodyConfig&& value) { m_bodyConfigHasBeenSet = true; m_bodyConfig = std::move(value); }

    /**
     * <p>The configuration for the message body.</p>
     */
    inline InAppMessageContent& WithBodyConfig(const InAppMessageBodyConfig& value) { SetBodyConfig(value); return *this;}

    /**
     * <p>The configuration for the message body.</p>
     */
    inline InAppMessageContent& WithBodyConfig(InAppMessageBodyConfig&& value) { SetBodyConfig(std::move(value)); return *this;}


    /**
     * <p>The configuration for the message header.</p>
     */
    inline const InAppMessageHeaderConfig& GetHeaderConfig() const{ return m_headerConfig; }

    /**
     * <p>The configuration for the message header.</p>
     */
    inline bool HeaderConfigHasBeenSet() const { return m_headerConfigHasBeenSet; }

    /**
     * <p>The configuration for the message header.</p>
     */
    inline void SetHeaderConfig(const InAppMessageHeaderConfig& value) { m_headerConfigHasBeenSet = true; m_headerConfig = value; }

    /**
     * <p>The configuration for the message header.</p>
     */
    inline void SetHeaderConfig(InAppMessageHeaderConfig&& value) { m_headerConfigHasBeenSet = true; m_headerConfig = std::move(value); }

    /**
     * <p>The configuration for the message header.</p>
     */
    inline InAppMessageContent& WithHeaderConfig(const InAppMessageHeaderConfig& value) { SetHeaderConfig(value); return *this;}

    /**
     * <p>The configuration for the message header.</p>
     */
    inline InAppMessageContent& WithHeaderConfig(InAppMessageHeaderConfig&& value) { SetHeaderConfig(std::move(value)); return *this;}


    /**
     * <p>The image url for the background of message.</p>
     */
    inline const Aws::String& GetImageUrl() const{ return m_imageUrl; }

    /**
     * <p>The image url for the background of message.</p>
     */
    inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }

    /**
     * <p>The image url for the background of message.</p>
     */
    inline void SetImageUrl(const Aws::String& value) { m_imageUrlHasBeenSet = true; m_imageUrl = value; }

    /**
     * <p>The image url for the background of message.</p>
     */
    inline void SetImageUrl(Aws::String&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::move(value); }

    /**
     * <p>The image url for the background of message.</p>
     */
    inline void SetImageUrl(const char* value) { m_imageUrlHasBeenSet = true; m_imageUrl.assign(value); }

    /**
     * <p>The image url for the background of message.</p>
     */
    inline InAppMessageContent& WithImageUrl(const Aws::String& value) { SetImageUrl(value); return *this;}

    /**
     * <p>The image url for the background of message.</p>
     */
    inline InAppMessageContent& WithImageUrl(Aws::String&& value) { SetImageUrl(std::move(value)); return *this;}

    /**
     * <p>The image url for the background of message.</p>
     */
    inline InAppMessageContent& WithImageUrl(const char* value) { SetImageUrl(value); return *this;}


    /**
     * <p>The first button inside the message.</p>
     */
    inline const InAppMessageButton& GetPrimaryBtn() const{ return m_primaryBtn; }

    /**
     * <p>The first button inside the message.</p>
     */
    inline bool PrimaryBtnHasBeenSet() const { return m_primaryBtnHasBeenSet; }

    /**
     * <p>The first button inside the message.</p>
     */
    inline void SetPrimaryBtn(const InAppMessageButton& value) { m_primaryBtnHasBeenSet = true; m_primaryBtn = value; }

    /**
     * <p>The first button inside the message.</p>
     */
    inline void SetPrimaryBtn(InAppMessageButton&& value) { m_primaryBtnHasBeenSet = true; m_primaryBtn = std::move(value); }

    /**
     * <p>The first button inside the message.</p>
     */
    inline InAppMessageContent& WithPrimaryBtn(const InAppMessageButton& value) { SetPrimaryBtn(value); return *this;}

    /**
     * <p>The first button inside the message.</p>
     */
    inline InAppMessageContent& WithPrimaryBtn(InAppMessageButton&& value) { SetPrimaryBtn(std::move(value)); return *this;}


    /**
     * <p>The second button inside message.</p>
     */
    inline const InAppMessageButton& GetSecondaryBtn() const{ return m_secondaryBtn; }

    /**
     * <p>The second button inside message.</p>
     */
    inline bool SecondaryBtnHasBeenSet() const { return m_secondaryBtnHasBeenSet; }

    /**
     * <p>The second button inside message.</p>
     */
    inline void SetSecondaryBtn(const InAppMessageButton& value) { m_secondaryBtnHasBeenSet = true; m_secondaryBtn = value; }

    /**
     * <p>The second button inside message.</p>
     */
    inline void SetSecondaryBtn(InAppMessageButton&& value) { m_secondaryBtnHasBeenSet = true; m_secondaryBtn = std::move(value); }

    /**
     * <p>The second button inside message.</p>
     */
    inline InAppMessageContent& WithSecondaryBtn(const InAppMessageButton& value) { SetSecondaryBtn(value); return *this;}

    /**
     * <p>The second button inside message.</p>
     */
    inline InAppMessageContent& WithSecondaryBtn(InAppMessageButton&& value) { SetSecondaryBtn(std::move(value)); return *this;}

  private:

    Aws::String m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;

    InAppMessageBodyConfig m_bodyConfig;
    bool m_bodyConfigHasBeenSet = false;

    InAppMessageHeaderConfig m_headerConfig;
    bool m_headerConfigHasBeenSet = false;

    Aws::String m_imageUrl;
    bool m_imageUrlHasBeenSet = false;

    InAppMessageButton m_primaryBtn;
    bool m_primaryBtnHasBeenSet = false;

    InAppMessageButton m_secondaryBtn;
    bool m_secondaryBtnHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
