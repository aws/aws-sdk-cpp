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
    AWS_TRANSLATE_API UnsupportedDisplayLanguageCodeException();
    AWS_TRANSLATE_API UnsupportedDisplayLanguageCodeException(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API UnsupportedDisplayLanguageCodeException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSLATE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline UnsupportedDisplayLanguageCodeException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline UnsupportedDisplayLanguageCodeException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline UnsupportedDisplayLanguageCodeException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Language code passed in with the request.</p>
     */
    inline const Aws::String& GetDisplayLanguageCode() const{ return m_displayLanguageCode; }

    /**
     * <p>Language code passed in with the request.</p>
     */
    inline bool DisplayLanguageCodeHasBeenSet() const { return m_displayLanguageCodeHasBeenSet; }

    /**
     * <p>Language code passed in with the request.</p>
     */
    inline void SetDisplayLanguageCode(const Aws::String& value) { m_displayLanguageCodeHasBeenSet = true; m_displayLanguageCode = value; }

    /**
     * <p>Language code passed in with the request.</p>
     */
    inline void SetDisplayLanguageCode(Aws::String&& value) { m_displayLanguageCodeHasBeenSet = true; m_displayLanguageCode = std::move(value); }

    /**
     * <p>Language code passed in with the request.</p>
     */
    inline void SetDisplayLanguageCode(const char* value) { m_displayLanguageCodeHasBeenSet = true; m_displayLanguageCode.assign(value); }

    /**
     * <p>Language code passed in with the request.</p>
     */
    inline UnsupportedDisplayLanguageCodeException& WithDisplayLanguageCode(const Aws::String& value) { SetDisplayLanguageCode(value); return *this;}

    /**
     * <p>Language code passed in with the request.</p>
     */
    inline UnsupportedDisplayLanguageCodeException& WithDisplayLanguageCode(Aws::String&& value) { SetDisplayLanguageCode(std::move(value)); return *this;}

    /**
     * <p>Language code passed in with the request.</p>
     */
    inline UnsupportedDisplayLanguageCodeException& WithDisplayLanguageCode(const char* value) { SetDisplayLanguageCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_displayLanguageCode;
    bool m_displayLanguageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
