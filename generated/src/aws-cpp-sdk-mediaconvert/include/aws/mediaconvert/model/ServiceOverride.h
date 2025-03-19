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
    AWS_MEDIACONVERT_API ServiceOverride() = default;
    AWS_MEDIACONVERT_API ServiceOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ServiceOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Details about the service override that MediaConvert has applied.
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ServiceOverride& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the setting that MediaConvert has applied an override to.
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ServiceOverride& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The current value of the service override that MediaConvert has applied.
     */
    inline const Aws::String& GetOverrideValue() const { return m_overrideValue; }
    inline bool OverrideValueHasBeenSet() const { return m_overrideValueHasBeenSet; }
    template<typename OverrideValueT = Aws::String>
    void SetOverrideValue(OverrideValueT&& value) { m_overrideValueHasBeenSet = true; m_overrideValue = std::forward<OverrideValueT>(value); }
    template<typename OverrideValueT = Aws::String>
    ServiceOverride& WithOverrideValue(OverrideValueT&& value) { SetOverrideValue(std::forward<OverrideValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The value of the setting that you configured, prior to any overrides that
     * MediaConvert has applied.
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ServiceOverride& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
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
