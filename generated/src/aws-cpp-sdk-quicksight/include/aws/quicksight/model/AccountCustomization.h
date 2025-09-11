/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The Amazon QuickSight customizations associated with your Amazon Web Services
   * account or a QuickSight namespace in a specific Amazon Web Services
   * Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AccountCustomization">AWS
   * API Reference</a></p>
   */
  class AccountCustomization
  {
  public:
    AWS_QUICKSIGHT_API AccountCustomization() = default;
    AWS_QUICKSIGHT_API AccountCustomization(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AccountCustomization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default theme for this QuickSight subscription.</p>
     */
    inline const Aws::String& GetDefaultTheme() const { return m_defaultTheme; }
    inline bool DefaultThemeHasBeenSet() const { return m_defaultThemeHasBeenSet; }
    template<typename DefaultThemeT = Aws::String>
    void SetDefaultTheme(DefaultThemeT&& value) { m_defaultThemeHasBeenSet = true; m_defaultTheme = std::forward<DefaultThemeT>(value); }
    template<typename DefaultThemeT = Aws::String>
    AccountCustomization& WithDefaultTheme(DefaultThemeT&& value) { SetDefaultTheme(std::forward<DefaultThemeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default email customization template.</p>
     */
    inline const Aws::String& GetDefaultEmailCustomizationTemplate() const { return m_defaultEmailCustomizationTemplate; }
    inline bool DefaultEmailCustomizationTemplateHasBeenSet() const { return m_defaultEmailCustomizationTemplateHasBeenSet; }
    template<typename DefaultEmailCustomizationTemplateT = Aws::String>
    void SetDefaultEmailCustomizationTemplate(DefaultEmailCustomizationTemplateT&& value) { m_defaultEmailCustomizationTemplateHasBeenSet = true; m_defaultEmailCustomizationTemplate = std::forward<DefaultEmailCustomizationTemplateT>(value); }
    template<typename DefaultEmailCustomizationTemplateT = Aws::String>
    AccountCustomization& WithDefaultEmailCustomizationTemplate(DefaultEmailCustomizationTemplateT&& value) { SetDefaultEmailCustomizationTemplate(std::forward<DefaultEmailCustomizationTemplateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_defaultTheme;
    bool m_defaultThemeHasBeenSet = false;

    Aws::String m_defaultEmailCustomizationTemplate;
    bool m_defaultEmailCustomizationTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
