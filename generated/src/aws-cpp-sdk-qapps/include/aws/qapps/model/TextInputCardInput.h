/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/CardType.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>The input shape for defining a text input card in an Amazon Q
   * App.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/TextInputCardInput">AWS
   * API Reference</a></p>
   */
  class TextInputCardInput
  {
  public:
    AWS_QAPPS_API TextInputCardInput();
    AWS_QAPPS_API TextInputCardInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API TextInputCardInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title or label of the text input card.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline TextInputCardInput& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline TextInputCardInput& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline TextInputCardInput& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the text input card.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline TextInputCardInput& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline TextInputCardInput& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline TextInputCardInput& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the card.</p>
     */
    inline const CardType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CardType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CardType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline TextInputCardInput& WithType(const CardType& value) { SetType(value); return *this;}
    inline TextInputCardInput& WithType(CardType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The placeholder text to display in the text input field.</p>
     */
    inline const Aws::String& GetPlaceholder() const{ return m_placeholder; }
    inline bool PlaceholderHasBeenSet() const { return m_placeholderHasBeenSet; }
    inline void SetPlaceholder(const Aws::String& value) { m_placeholderHasBeenSet = true; m_placeholder = value; }
    inline void SetPlaceholder(Aws::String&& value) { m_placeholderHasBeenSet = true; m_placeholder = std::move(value); }
    inline void SetPlaceholder(const char* value) { m_placeholderHasBeenSet = true; m_placeholder.assign(value); }
    inline TextInputCardInput& WithPlaceholder(const Aws::String& value) { SetPlaceholder(value); return *this;}
    inline TextInputCardInput& WithPlaceholder(Aws::String&& value) { SetPlaceholder(std::move(value)); return *this;}
    inline TextInputCardInput& WithPlaceholder(const char* value) { SetPlaceholder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value to pre-populate in the text input field.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }
    inline TextInputCardInput& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline TextInputCardInput& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline TextInputCardInput& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    CardType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_placeholder;
    bool m_placeholderHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
