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
    AWS_PINPOINT_API InAppMessageContent() = default;
    AWS_PINPOINT_API InAppMessageContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API InAppMessageContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The background color for the message.</p>
     */
    inline const Aws::String& GetBackgroundColor() const { return m_backgroundColor; }
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }
    template<typename BackgroundColorT = Aws::String>
    void SetBackgroundColor(BackgroundColorT&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::forward<BackgroundColorT>(value); }
    template<typename BackgroundColorT = Aws::String>
    InAppMessageContent& WithBackgroundColor(BackgroundColorT&& value) { SetBackgroundColor(std::forward<BackgroundColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the message body.</p>
     */
    inline const InAppMessageBodyConfig& GetBodyConfig() const { return m_bodyConfig; }
    inline bool BodyConfigHasBeenSet() const { return m_bodyConfigHasBeenSet; }
    template<typename BodyConfigT = InAppMessageBodyConfig>
    void SetBodyConfig(BodyConfigT&& value) { m_bodyConfigHasBeenSet = true; m_bodyConfig = std::forward<BodyConfigT>(value); }
    template<typename BodyConfigT = InAppMessageBodyConfig>
    InAppMessageContent& WithBodyConfig(BodyConfigT&& value) { SetBodyConfig(std::forward<BodyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the message header.</p>
     */
    inline const InAppMessageHeaderConfig& GetHeaderConfig() const { return m_headerConfig; }
    inline bool HeaderConfigHasBeenSet() const { return m_headerConfigHasBeenSet; }
    template<typename HeaderConfigT = InAppMessageHeaderConfig>
    void SetHeaderConfig(HeaderConfigT&& value) { m_headerConfigHasBeenSet = true; m_headerConfig = std::forward<HeaderConfigT>(value); }
    template<typename HeaderConfigT = InAppMessageHeaderConfig>
    InAppMessageContent& WithHeaderConfig(HeaderConfigT&& value) { SetHeaderConfig(std::forward<HeaderConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image url for the background of message.</p>
     */
    inline const Aws::String& GetImageUrl() const { return m_imageUrl; }
    inline bool ImageUrlHasBeenSet() const { return m_imageUrlHasBeenSet; }
    template<typename ImageUrlT = Aws::String>
    void SetImageUrl(ImageUrlT&& value) { m_imageUrlHasBeenSet = true; m_imageUrl = std::forward<ImageUrlT>(value); }
    template<typename ImageUrlT = Aws::String>
    InAppMessageContent& WithImageUrl(ImageUrlT&& value) { SetImageUrl(std::forward<ImageUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first button inside the message.</p>
     */
    inline const InAppMessageButton& GetPrimaryBtn() const { return m_primaryBtn; }
    inline bool PrimaryBtnHasBeenSet() const { return m_primaryBtnHasBeenSet; }
    template<typename PrimaryBtnT = InAppMessageButton>
    void SetPrimaryBtn(PrimaryBtnT&& value) { m_primaryBtnHasBeenSet = true; m_primaryBtn = std::forward<PrimaryBtnT>(value); }
    template<typename PrimaryBtnT = InAppMessageButton>
    InAppMessageContent& WithPrimaryBtn(PrimaryBtnT&& value) { SetPrimaryBtn(std::forward<PrimaryBtnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The second button inside message.</p>
     */
    inline const InAppMessageButton& GetSecondaryBtn() const { return m_secondaryBtn; }
    inline bool SecondaryBtnHasBeenSet() const { return m_secondaryBtnHasBeenSet; }
    template<typename SecondaryBtnT = InAppMessageButton>
    void SetSecondaryBtn(SecondaryBtnT&& value) { m_secondaryBtnHasBeenSet = true; m_secondaryBtn = std::forward<SecondaryBtnT>(value); }
    template<typename SecondaryBtnT = InAppMessageButton>
    InAppMessageContent& WithSecondaryBtn(SecondaryBtnT&& value) { SetSecondaryBtn(std::forward<SecondaryBtnT>(value)); return *this;}
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
