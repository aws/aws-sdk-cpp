/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ApplicationTheme.h>
#include <aws/quicksight/model/LogoConfiguration.h>
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
   * <p>The definition of the brand.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BrandDefinition">AWS
   * API Reference</a></p>
   */
  class BrandDefinition
  {
  public:
    AWS_QUICKSIGHT_API BrandDefinition() = default;
    AWS_QUICKSIGHT_API BrandDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BrandDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the brand.</p>
     */
    inline const Aws::String& GetBrandName() const { return m_brandName; }
    inline bool BrandNameHasBeenSet() const { return m_brandNameHasBeenSet; }
    template<typename BrandNameT = Aws::String>
    void SetBrandName(BrandNameT&& value) { m_brandNameHasBeenSet = true; m_brandName = std::forward<BrandNameT>(value); }
    template<typename BrandNameT = Aws::String>
    BrandDefinition& WithBrandName(BrandNameT&& value) { SetBrandName(std::forward<BrandNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the brand.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    BrandDefinition& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application theme of the brand.</p>
     */
    inline const ApplicationTheme& GetApplicationTheme() const { return m_applicationTheme; }
    inline bool ApplicationThemeHasBeenSet() const { return m_applicationThemeHasBeenSet; }
    template<typename ApplicationThemeT = ApplicationTheme>
    void SetApplicationTheme(ApplicationThemeT&& value) { m_applicationThemeHasBeenSet = true; m_applicationTheme = std::forward<ApplicationThemeT>(value); }
    template<typename ApplicationThemeT = ApplicationTheme>
    BrandDefinition& WithApplicationTheme(ApplicationThemeT&& value) { SetApplicationTheme(std::forward<ApplicationThemeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logo configuration of the brand.</p>
     */
    inline const LogoConfiguration& GetLogoConfiguration() const { return m_logoConfiguration; }
    inline bool LogoConfigurationHasBeenSet() const { return m_logoConfigurationHasBeenSet; }
    template<typename LogoConfigurationT = LogoConfiguration>
    void SetLogoConfiguration(LogoConfigurationT&& value) { m_logoConfigurationHasBeenSet = true; m_logoConfiguration = std::forward<LogoConfigurationT>(value); }
    template<typename LogoConfigurationT = LogoConfiguration>
    BrandDefinition& WithLogoConfiguration(LogoConfigurationT&& value) { SetLogoConfiguration(std::forward<LogoConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_brandName;
    bool m_brandNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ApplicationTheme m_applicationTheme;
    bool m_applicationThemeHasBeenSet = false;

    LogoConfiguration m_logoConfiguration;
    bool m_logoConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
