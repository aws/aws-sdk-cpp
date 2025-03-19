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
    AWS_QAPPS_API TextInputCardInput() = default;
    AWS_QAPPS_API TextInputCardInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API TextInputCardInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title or label of the text input card.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    TextInputCardInput& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the text input card.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    TextInputCardInput& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the card.</p>
     */
    inline CardType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CardType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TextInputCardInput& WithType(CardType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The placeholder text to display in the text input field.</p>
     */
    inline const Aws::String& GetPlaceholder() const { return m_placeholder; }
    inline bool PlaceholderHasBeenSet() const { return m_placeholderHasBeenSet; }
    template<typename PlaceholderT = Aws::String>
    void SetPlaceholder(PlaceholderT&& value) { m_placeholderHasBeenSet = true; m_placeholder = std::forward<PlaceholderT>(value); }
    template<typename PlaceholderT = Aws::String>
    TextInputCardInput& WithPlaceholder(PlaceholderT&& value) { SetPlaceholder(std::forward<PlaceholderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default value to pre-populate in the text input field.</p>
     */
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    TextInputCardInput& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    CardType m_type{CardType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_placeholder;
    bool m_placeholderHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
