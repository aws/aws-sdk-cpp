/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AnonymousUserDashboardEmbeddingConfiguration.h>
#include <aws/quicksight/model/AnonymousUserDashboardVisualEmbeddingConfiguration.h>
#include <aws/quicksight/model/AnonymousUserQSearchBarEmbeddingConfiguration.h>
#include <aws/quicksight/model/AnonymousUserGenerativeQnAEmbeddingConfiguration.h>
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
   * <p>The type of experience you want to embed. For anonymous users, you can embed
   * QuickSight dashboards.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AnonymousUserEmbeddingExperienceConfiguration">AWS
   * API Reference</a></p>
   */
  class AnonymousUserEmbeddingExperienceConfiguration
  {
  public:
    AWS_QUICKSIGHT_API AnonymousUserEmbeddingExperienceConfiguration() = default;
    AWS_QUICKSIGHT_API AnonymousUserEmbeddingExperienceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AnonymousUserEmbeddingExperienceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of embedding experience. In this case, QuickSight dashboards.</p>
     */
    inline const AnonymousUserDashboardEmbeddingConfiguration& GetDashboard() const { return m_dashboard; }
    inline bool DashboardHasBeenSet() const { return m_dashboardHasBeenSet; }
    template<typename DashboardT = AnonymousUserDashboardEmbeddingConfiguration>
    void SetDashboard(DashboardT&& value) { m_dashboardHasBeenSet = true; m_dashboard = std::forward<DashboardT>(value); }
    template<typename DashboardT = AnonymousUserDashboardEmbeddingConfiguration>
    AnonymousUserEmbeddingExperienceConfiguration& WithDashboard(DashboardT&& value) { SetDashboard(std::forward<DashboardT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of embedding experience. In this case, QuickSight visuals.</p>
     */
    inline const AnonymousUserDashboardVisualEmbeddingConfiguration& GetDashboardVisual() const { return m_dashboardVisual; }
    inline bool DashboardVisualHasBeenSet() const { return m_dashboardVisualHasBeenSet; }
    template<typename DashboardVisualT = AnonymousUserDashboardVisualEmbeddingConfiguration>
    void SetDashboardVisual(DashboardVisualT&& value) { m_dashboardVisualHasBeenSet = true; m_dashboardVisual = std::forward<DashboardVisualT>(value); }
    template<typename DashboardVisualT = AnonymousUserDashboardVisualEmbeddingConfiguration>
    AnonymousUserEmbeddingExperienceConfiguration& WithDashboardVisual(DashboardVisualT&& value) { SetDashboardVisual(std::forward<DashboardVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Q search bar that you want to use for anonymous user embedding.</p>
     */
    inline const AnonymousUserQSearchBarEmbeddingConfiguration& GetQSearchBar() const { return m_qSearchBar; }
    inline bool QSearchBarHasBeenSet() const { return m_qSearchBarHasBeenSet; }
    template<typename QSearchBarT = AnonymousUserQSearchBarEmbeddingConfiguration>
    void SetQSearchBar(QSearchBarT&& value) { m_qSearchBarHasBeenSet = true; m_qSearchBar = std::forward<QSearchBarT>(value); }
    template<typename QSearchBarT = AnonymousUserQSearchBarEmbeddingConfiguration>
    AnonymousUserEmbeddingExperienceConfiguration& WithQSearchBar(QSearchBarT&& value) { SetQSearchBar(std::forward<QSearchBarT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Generative Q&amp;A experience that you want to use for anonymous user
     * embedding.</p>
     */
    inline const AnonymousUserGenerativeQnAEmbeddingConfiguration& GetGenerativeQnA() const { return m_generativeQnA; }
    inline bool GenerativeQnAHasBeenSet() const { return m_generativeQnAHasBeenSet; }
    template<typename GenerativeQnAT = AnonymousUserGenerativeQnAEmbeddingConfiguration>
    void SetGenerativeQnA(GenerativeQnAT&& value) { m_generativeQnAHasBeenSet = true; m_generativeQnA = std::forward<GenerativeQnAT>(value); }
    template<typename GenerativeQnAT = AnonymousUserGenerativeQnAEmbeddingConfiguration>
    AnonymousUserEmbeddingExperienceConfiguration& WithGenerativeQnA(GenerativeQnAT&& value) { SetGenerativeQnA(std::forward<GenerativeQnAT>(value)); return *this;}
    ///@}
  private:

    AnonymousUserDashboardEmbeddingConfiguration m_dashboard;
    bool m_dashboardHasBeenSet = false;

    AnonymousUserDashboardVisualEmbeddingConfiguration m_dashboardVisual;
    bool m_dashboardVisualHasBeenSet = false;

    AnonymousUserQSearchBarEmbeddingConfiguration m_qSearchBar;
    bool m_qSearchBarHasBeenSet = false;

    AnonymousUserGenerativeQnAEmbeddingConfiguration m_generativeQnA;
    bool m_generativeQnAHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
