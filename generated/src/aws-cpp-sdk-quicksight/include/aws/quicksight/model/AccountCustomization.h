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
    AWS_QUICKSIGHT_API AccountCustomization();
    AWS_QUICKSIGHT_API AccountCustomization(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AccountCustomization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The default theme for this Amazon QuickSight subscription.</p>
     */
    inline const Aws::String& GetDefaultTheme() const{ return m_defaultTheme; }
    inline bool DefaultThemeHasBeenSet() const { return m_defaultThemeHasBeenSet; }
    inline void SetDefaultTheme(const Aws::String& value) { m_defaultThemeHasBeenSet = true; m_defaultTheme = value; }
    inline void SetDefaultTheme(Aws::String&& value) { m_defaultThemeHasBeenSet = true; m_defaultTheme = std::move(value); }
    inline void SetDefaultTheme(const char* value) { m_defaultThemeHasBeenSet = true; m_defaultTheme.assign(value); }
    inline AccountCustomization& WithDefaultTheme(const Aws::String& value) { SetDefaultTheme(value); return *this;}
    inline AccountCustomization& WithDefaultTheme(Aws::String&& value) { SetDefaultTheme(std::move(value)); return *this;}
    inline AccountCustomization& WithDefaultTheme(const char* value) { SetDefaultTheme(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default email customization template.</p>
     */
    inline const Aws::String& GetDefaultEmailCustomizationTemplate() const{ return m_defaultEmailCustomizationTemplate; }
    inline bool DefaultEmailCustomizationTemplateHasBeenSet() const { return m_defaultEmailCustomizationTemplateHasBeenSet; }
    inline void SetDefaultEmailCustomizationTemplate(const Aws::String& value) { m_defaultEmailCustomizationTemplateHasBeenSet = true; m_defaultEmailCustomizationTemplate = value; }
    inline void SetDefaultEmailCustomizationTemplate(Aws::String&& value) { m_defaultEmailCustomizationTemplateHasBeenSet = true; m_defaultEmailCustomizationTemplate = std::move(value); }
    inline void SetDefaultEmailCustomizationTemplate(const char* value) { m_defaultEmailCustomizationTemplateHasBeenSet = true; m_defaultEmailCustomizationTemplate.assign(value); }
    inline AccountCustomization& WithDefaultEmailCustomizationTemplate(const Aws::String& value) { SetDefaultEmailCustomizationTemplate(value); return *this;}
    inline AccountCustomization& WithDefaultEmailCustomizationTemplate(Aws::String&& value) { SetDefaultEmailCustomizationTemplate(std::move(value)); return *this;}
    inline AccountCustomization& WithDefaultEmailCustomizationTemplate(const char* value) { SetDefaultEmailCustomizationTemplate(value); return *this;}
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
