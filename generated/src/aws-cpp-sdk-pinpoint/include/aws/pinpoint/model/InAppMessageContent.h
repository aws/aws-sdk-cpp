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


    ///@{
    /**
     * <p>The background color for the message.</p>
     */
    inline const Aws::String& GetBackgroundColor() const{ return m_backgroundColor; }
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }
    inline void SetBackgroundColor(const Aws::String& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }
    inline void SetBackgroundColor(Aws::String&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::move(value); }
    inline void SetBackgroundColor(const char* value) { m_backgroundColorHasBeenSet = true; m_backgroundColor.assign(value); }
    inline InAppMessageContent& WithBackgroundColor(const Aws::String& value) { SetBackgroundColor(value); return *this;}
    inline InAppMessageContent& WithBackgroundColor(Aws::String&& value) { SetBackgroundColor(std::move(value)); return *this;}
    inline InAppMessageContent& WithBackgroundColor(const char* value) { SetBackgroundColor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the message body.</p>
     */
    inline const InAppMessageBodyConfig& GetBodyConfig() const{ return m_bodyConfig; }
    inline bool BodyConfigHasBeenSet() const { return m_bodyConfigHasBeenSet; }
    inline void SetBodyConfig(const InAppMessageBodyConfig& value) { m_bodyConfigHasBeenSet = true; m_bodyConfig = value; }
    inline void SetBodyConfig(InAppMessageBodyConfig&& value) { m_bodyConfigHasBeenSet = true; m_bodyConfig = std::move(value); }
    inline InAppMessageContent& WithBodyConfig(const InAppMessageBodyConfig& value) { SetBodyConfig(value); return *this;}
    inline InAppMessageContent& WithBodyConfig(InAppMessageBodyConfig&& value) { SetBodyConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the message header.</p>
     */
    inline const InAppMessageHeaderConfig& GetHeaderConfig() const{ return m_headerConfig; }
    inline bool HeaderConfigHasBeenSet() const { return m_headerConfigHasBeenSet; }
    inline void SetHeaderConfig(const InAppMessageHeaderConfig& value) { m_headerConfigHasBeenSet = true; m_headerConfig = value; }
    inline void SetHeaderConfig(InAppMessageHeaderConfig&& value) { m_headerConfigHasBeenSet = true; m_headerConfig = std::move(value); }
    inline InAppMessageContent& WithHeaderConfig(const InAppMessageHeaderConfig& value) { SetHeaderConfig(value); return *this;}
    inline InAppMessageContent& WithHeaderConfig(InAppMessageHeaderConfig&& value) { SetHeaderConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image url for the background of message.</p>
     */
    inline const Aws::String& GetImageUrl() const{ return m_imageUrl; }
    inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }
    inline void SetImageUrl(const Aws::String& value) { m_imageUrlHasBeenSet = true; m_imageUrl = value; }
    inline void SetImageUrl(Aws::String&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::move(value); }
    inline void SetImageUrl(const char* value) { m_imageUrlHasBeenSet = true; m_imageUrl.assign(value); }
    inline InAppMessageContent& WithImageUrl(const Aws::String& value) { SetImageUrl(value); return *this;}
    inline InAppMessageContent& WithImageUrl(Aws::String&& value) { SetImageUrl(std::move(value)); return *this;}
    inline InAppMessageContent& WithImageUrl(const char* value) { SetImageUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first button inside the message.</p>
     */
    inline const InAppMessageButton& GetPrimaryBtn() const{ return m_primaryBtn; }
    inline bool PrimaryBtnHasBeenSet() const { return m_primaryBtnHasBeenSet; }
    inline void SetPrimaryBtn(const InAppMessageButton& value) { m_primaryBtnHasBeenSet = true; m_primaryBtn = value; }
    inline void SetPrimaryBtn(InAppMessageButton&& value) { m_primaryBtnHasBeenSet = true; m_primaryBtn = std::move(value); }
    inline InAppMessageContent& WithPrimaryBtn(const InAppMessageButton& value) { SetPrimaryBtn(value); return *this;}
    inline InAppMessageContent& WithPrimaryBtn(InAppMessageButton&& value) { SetPrimaryBtn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second button inside message.</p>
     */
    inline const InAppMessageButton& GetSecondaryBtn() const{ return m_secondaryBtn; }
    inline bool SecondaryBtnHasBeenSet() const { return m_secondaryBtnHasBeenSet; }
    inline void SetSecondaryBtn(const InAppMessageButton& value) { m_secondaryBtnHasBeenSet = true; m_secondaryBtn = value; }
    inline void SetSecondaryBtn(InAppMessageButton&& value) { m_secondaryBtnHasBeenSet = true; m_secondaryBtn = std::move(value); }
    inline InAppMessageContent& WithSecondaryBtn(const InAppMessageButton& value) { SetSecondaryBtn(value); return *this;}
    inline InAppMessageContent& WithSecondaryBtn(InAppMessageButton&& value) { SetSecondaryBtn(std::move(value)); return *this;}
    ///@}
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
