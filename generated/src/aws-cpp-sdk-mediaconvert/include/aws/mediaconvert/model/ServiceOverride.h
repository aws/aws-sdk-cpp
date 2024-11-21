/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * A service override applied by MediaConvert to the settings that you have
   * configured. If you see any overrides, we recommend that you contact AWS
   * Support.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ServiceOverride">AWS
   * API Reference</a></p>
   */
  class ServiceOverride
  {
  public:
    AWS_MEDIACONVERT_API ServiceOverride();
    AWS_MEDIACONVERT_API ServiceOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ServiceOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Details about the service override that MediaConvert has applied.
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ServiceOverride& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ServiceOverride& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ServiceOverride& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the setting that MediaConvert has applied an override to.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ServiceOverride& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ServiceOverride& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ServiceOverride& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * The current value of the service override that MediaConvert has applied.
     */
    inline const Aws::String& GetOverrideValue() const{ return m_overrideValue; }
    inline bool OverrideValueHasBeenSet() const { return m_overrideValueHasBeenSet; }
    inline void SetOverrideValue(const Aws::String& value) { m_overrideValueHasBeenSet = true; m_overrideValue = value; }
    inline void SetOverrideValue(Aws::String&& value) { m_overrideValueHasBeenSet = true; m_overrideValue = std::move(value); }
    inline void SetOverrideValue(const char* value) { m_overrideValueHasBeenSet = true; m_overrideValue.assign(value); }
    inline ServiceOverride& WithOverrideValue(const Aws::String& value) { SetOverrideValue(value); return *this;}
    inline ServiceOverride& WithOverrideValue(Aws::String&& value) { SetOverrideValue(std::move(value)); return *this;}
    inline ServiceOverride& WithOverrideValue(const char* value) { SetOverrideValue(value); return *this;}
    ///@}

    ///@{
    /**
     * The value of the setting that you configured, prior to any overrides that
     * MediaConvert has applied.
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ServiceOverride& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ServiceOverride& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ServiceOverride& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_overrideValue;
    bool m_overrideValueHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
