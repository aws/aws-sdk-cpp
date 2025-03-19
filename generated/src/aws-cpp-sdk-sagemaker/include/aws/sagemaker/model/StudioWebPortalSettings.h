/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/MlTools.h>
#include <aws/sagemaker/model/AppType.h>
#include <aws/sagemaker/model/AppInstanceType.h>
#include <aws/sagemaker/model/HiddenSageMakerImage.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Studio settings. If these settings are applied on a user level, they take
   * priority over the settings applied on a domain level.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StudioWebPortalSettings">AWS
   * API Reference</a></p>
   */
  class StudioWebPortalSettings
  {
  public:
    AWS_SAGEMAKER_API StudioWebPortalSettings() = default;
    AWS_SAGEMAKER_API StudioWebPortalSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API StudioWebPortalSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The machine learning tools that are hidden from the Studio left navigation
     * pane.</p>
     */
    inline const Aws::Vector<MlTools>& GetHiddenMlTools() const { return m_hiddenMlTools; }
    inline bool HiddenMlToolsHasBeenSet() const { return m_hiddenMlToolsHasBeenSet; }
    template<typename HiddenMlToolsT = Aws::Vector<MlTools>>
    void SetHiddenMlTools(HiddenMlToolsT&& value) { m_hiddenMlToolsHasBeenSet = true; m_hiddenMlTools = std::forward<HiddenMlToolsT>(value); }
    template<typename HiddenMlToolsT = Aws::Vector<MlTools>>
    StudioWebPortalSettings& WithHiddenMlTools(HiddenMlToolsT&& value) { SetHiddenMlTools(std::forward<HiddenMlToolsT>(value)); return *this;}
    inline StudioWebPortalSettings& AddHiddenMlTools(MlTools value) { m_hiddenMlToolsHasBeenSet = true; m_hiddenMlTools.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/studio-updated-apps.html">Applications
     * supported in Studio</a> that are hidden from the Studio left navigation
     * pane.</p>
     */
    inline const Aws::Vector<AppType>& GetHiddenAppTypes() const { return m_hiddenAppTypes; }
    inline bool HiddenAppTypesHasBeenSet() const { return m_hiddenAppTypesHasBeenSet; }
    template<typename HiddenAppTypesT = Aws::Vector<AppType>>
    void SetHiddenAppTypes(HiddenAppTypesT&& value) { m_hiddenAppTypesHasBeenSet = true; m_hiddenAppTypes = std::forward<HiddenAppTypesT>(value); }
    template<typename HiddenAppTypesT = Aws::Vector<AppType>>
    StudioWebPortalSettings& WithHiddenAppTypes(HiddenAppTypesT&& value) { SetHiddenAppTypes(std::forward<HiddenAppTypesT>(value)); return *this;}
    inline StudioWebPortalSettings& AddHiddenAppTypes(AppType value) { m_hiddenAppTypesHasBeenSet = true; m_hiddenAppTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The instance types you are hiding from the Studio user interface. </p>
     */
    inline const Aws::Vector<AppInstanceType>& GetHiddenInstanceTypes() const { return m_hiddenInstanceTypes; }
    inline bool HiddenInstanceTypesHasBeenSet() const { return m_hiddenInstanceTypesHasBeenSet; }
    template<typename HiddenInstanceTypesT = Aws::Vector<AppInstanceType>>
    void SetHiddenInstanceTypes(HiddenInstanceTypesT&& value) { m_hiddenInstanceTypesHasBeenSet = true; m_hiddenInstanceTypes = std::forward<HiddenInstanceTypesT>(value); }
    template<typename HiddenInstanceTypesT = Aws::Vector<AppInstanceType>>
    StudioWebPortalSettings& WithHiddenInstanceTypes(HiddenInstanceTypesT&& value) { SetHiddenInstanceTypes(std::forward<HiddenInstanceTypesT>(value)); return *this;}
    inline StudioWebPortalSettings& AddHiddenInstanceTypes(AppInstanceType value) { m_hiddenInstanceTypesHasBeenSet = true; m_hiddenInstanceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The version aliases you are hiding from the Studio user interface. </p>
     */
    inline const Aws::Vector<HiddenSageMakerImage>& GetHiddenSageMakerImageVersionAliases() const { return m_hiddenSageMakerImageVersionAliases; }
    inline bool HiddenSageMakerImageVersionAliasesHasBeenSet() const { return m_hiddenSageMakerImageVersionAliasesHasBeenSet; }
    template<typename HiddenSageMakerImageVersionAliasesT = Aws::Vector<HiddenSageMakerImage>>
    void SetHiddenSageMakerImageVersionAliases(HiddenSageMakerImageVersionAliasesT&& value) { m_hiddenSageMakerImageVersionAliasesHasBeenSet = true; m_hiddenSageMakerImageVersionAliases = std::forward<HiddenSageMakerImageVersionAliasesT>(value); }
    template<typename HiddenSageMakerImageVersionAliasesT = Aws::Vector<HiddenSageMakerImage>>
    StudioWebPortalSettings& WithHiddenSageMakerImageVersionAliases(HiddenSageMakerImageVersionAliasesT&& value) { SetHiddenSageMakerImageVersionAliases(std::forward<HiddenSageMakerImageVersionAliasesT>(value)); return *this;}
    template<typename HiddenSageMakerImageVersionAliasesT = HiddenSageMakerImage>
    StudioWebPortalSettings& AddHiddenSageMakerImageVersionAliases(HiddenSageMakerImageVersionAliasesT&& value) { m_hiddenSageMakerImageVersionAliasesHasBeenSet = true; m_hiddenSageMakerImageVersionAliases.emplace_back(std::forward<HiddenSageMakerImageVersionAliasesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<MlTools> m_hiddenMlTools;
    bool m_hiddenMlToolsHasBeenSet = false;

    Aws::Vector<AppType> m_hiddenAppTypes;
    bool m_hiddenAppTypesHasBeenSet = false;

    Aws::Vector<AppInstanceType> m_hiddenInstanceTypes;
    bool m_hiddenInstanceTypesHasBeenSet = false;

    Aws::Vector<HiddenSageMakerImage> m_hiddenSageMakerImageVersionAliases;
    bool m_hiddenSageMakerImageVersionAliasesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
