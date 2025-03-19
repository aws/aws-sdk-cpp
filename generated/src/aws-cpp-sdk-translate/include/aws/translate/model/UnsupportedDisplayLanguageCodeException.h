/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
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
namespace Translate
{
namespace Model
{

  /**
   * <p>Requested display language code is not supported.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/translate-2017-07-01/UnsupportedDisplayLanguageCodeException">AWS
   * API Reference</a></p>
   */
  class UnsupportedDisplayLanguageCodeException
  {
  public:
    AWS_TRANSLATE_API UnsupportedDisplayLanguageCodeException() = default;
    AWS_TRANSLATE_API UnsupportedDisplayLanguageCodeException(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API UnsupportedDisplayLanguageCodeException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    UnsupportedDisplayLanguageCodeException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Language code passed in with the request.</p>
     */
    inline const Aws::String& GetDisplayLanguageCode() const { return m_displayLanguageCode; }
    inline bool DisplayLanguageCodeHasBeenSet() const { return m_displayLanguageCodeHasBeenSet; }
    template<typename DisplayLanguageCodeT = Aws::String>
    void SetDisplayLanguageCode(DisplayLanguageCodeT&& value) { m_displayLanguageCodeHasBeenSet = true; m_displayLanguageCode = std::forward<DisplayLanguageCodeT>(value); }
    template<typename DisplayLanguageCodeT = Aws::String>
    UnsupportedDisplayLanguageCodeException& WithDisplayLanguageCode(DisplayLanguageCodeT&& value) { SetDisplayLanguageCode(std::forward<DisplayLanguageCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_displayLanguageCode;
    bool m_displayLanguageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
