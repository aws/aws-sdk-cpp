/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A card in an Amazon Q App that allows the user to input text.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/TextInputCard">AWS
   * API Reference</a></p>
   */
  class TextInputCard
  {
  public:
    AWS_QAPPS_API TextInputCard();
    AWS_QAPPS_API TextInputCard(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API TextInputCard& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the text input card.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline TextInputCard& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline TextInputCard& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline TextInputCard& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title or label of the text input card.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline TextInputCard& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline TextInputCard& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline TextInputCard& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any dependencies or requirements for the text input card.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDependencies() const{ return m_dependencies; }
    inline bool DependenciesHasBeenSet() const { return m_dependenciesHasBeenSet; }
    inline void SetDependencies(const Aws::Vector<Aws::String>& value) { m_dependenciesHasBeenSet = true; m_dependencies = value; }
    inline void SetDependencies(Aws::Vector<Aws::String>&& value) { m_dependenciesHasBeenSet = true; m_dependencies = std::move(value); }
    inline TextInputCard& WithDependencies(const Aws::Vector<Aws::String>& value) { SetDependencies(value); return *this;}
    inline TextInputCard& WithDependencies(Aws::Vector<Aws::String>&& value) { SetDependencies(std::move(value)); return *this;}
    inline TextInputCard& AddDependencies(const Aws::String& value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(value); return *this; }
    inline TextInputCard& AddDependencies(Aws::String&& value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(std::move(value)); return *this; }
    inline TextInputCard& AddDependencies(const char* value) { m_dependenciesHasBeenSet = true; m_dependencies.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the card.</p>
     */
    inline const CardType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const CardType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(CardType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline TextInputCard& WithType(const CardType& value) { SetType(value); return *this;}
    inline TextInputCard& WithType(CardType&& value) { SetType(std::move(value)); return *this;}
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
    inline TextInputCard& WithPlaceholder(const Aws::String& value) { SetPlaceholder(value); return *this;}
    inline TextInputCard& WithPlaceholder(Aws::String&& value) { SetPlaceholder(std::move(value)); return *this;}
    inline TextInputCard& WithPlaceholder(const char* value) { SetPlaceholder(value); return *this;}
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
    inline TextInputCard& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}
    inline TextInputCard& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}
    inline TextInputCard& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::Vector<Aws::String> m_dependencies;
    bool m_dependenciesHasBeenSet = false;

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
