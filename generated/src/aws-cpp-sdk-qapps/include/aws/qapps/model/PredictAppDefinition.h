/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qapps/model/AppDefinitionInput.h>
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
   * <p>The definition of an Amazon Q App generated based on input such as a
   * conversation or problem statement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/PredictAppDefinition">AWS
   * API Reference</a></p>
   */
  class PredictAppDefinition
  {
  public:
    AWS_QAPPS_API PredictAppDefinition() = default;
    AWS_QAPPS_API PredictAppDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API PredictAppDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The title of the generated Q App definition.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    PredictAppDefinition& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the generated Q App definition.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PredictAppDefinition& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition specifying the cards and flow of the generated Q App.</p>
     */
    inline const AppDefinitionInput& GetAppDefinition() const { return m_appDefinition; }
    inline bool AppDefinitionHasBeenSet() const { return m_appDefinitionHasBeenSet; }
    template<typename AppDefinitionT = AppDefinitionInput>
    void SetAppDefinition(AppDefinitionT&& value) { m_appDefinitionHasBeenSet = true; m_appDefinition = std::forward<AppDefinitionT>(value); }
    template<typename AppDefinitionT = AppDefinitionInput>
    PredictAppDefinition& WithAppDefinition(AppDefinitionT&& value) { SetAppDefinition(std::forward<AppDefinitionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AppDefinitionInput m_appDefinition;
    bool m_appDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
