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
    AWS_QUICKSIGHT_API BrandDefinition();
    AWS_QUICKSIGHT_API BrandDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API BrandDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the brand.</p>
     */
    inline const Aws::String& GetBrandName() const{ return m_brandName; }
    inline bool BrandNameHasBeenSet() const { return m_brandNameHasBeenSet; }
    inline void SetBrandName(const Aws::String& value) { m_brandNameHasBeenSet = true; m_brandName = value; }
    inline void SetBrandName(Aws::String&& value) { m_brandNameHasBeenSet = true; m_brandName = std::move(value); }
    inline void SetBrandName(const char* value) { m_brandNameHasBeenSet = true; m_brandName.assign(value); }
    inline BrandDefinition& WithBrandName(const Aws::String& value) { SetBrandName(value); return *this;}
    inline BrandDefinition& WithBrandName(Aws::String&& value) { SetBrandName(std::move(value)); return *this;}
    inline BrandDefinition& WithBrandName(const char* value) { SetBrandName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the brand.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline BrandDefinition& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline BrandDefinition& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline BrandDefinition& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application theme of the brand.</p>
     */
    inline const ApplicationTheme& GetApplicationTheme() const{ return m_applicationTheme; }
    inline bool ApplicationThemeHasBeenSet() const { return m_applicationThemeHasBeenSet; }
    inline void SetApplicationTheme(const ApplicationTheme& value) { m_applicationThemeHasBeenSet = true; m_applicationTheme = value; }
    inline void SetApplicationTheme(ApplicationTheme&& value) { m_applicationThemeHasBeenSet = true; m_applicationTheme = std::move(value); }
    inline BrandDefinition& WithApplicationTheme(const ApplicationTheme& value) { SetApplicationTheme(value); return *this;}
    inline BrandDefinition& WithApplicationTheme(ApplicationTheme&& value) { SetApplicationTheme(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logo configuration of the brand.</p>
     */
    inline const LogoConfiguration& GetLogoConfiguration() const{ return m_logoConfiguration; }
    inline bool LogoConfigurationHasBeenSet() const { return m_logoConfigurationHasBeenSet; }
    inline void SetLogoConfiguration(const LogoConfiguration& value) { m_logoConfigurationHasBeenSet = true; m_logoConfiguration = value; }
    inline void SetLogoConfiguration(LogoConfiguration&& value) { m_logoConfigurationHasBeenSet = true; m_logoConfiguration = std::move(value); }
    inline BrandDefinition& WithLogoConfiguration(const LogoConfiguration& value) { SetLogoConfiguration(value); return *this;}
    inline BrandDefinition& WithLogoConfiguration(LogoConfiguration&& value) { SetLogoConfiguration(std::move(value)); return *this;}
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
