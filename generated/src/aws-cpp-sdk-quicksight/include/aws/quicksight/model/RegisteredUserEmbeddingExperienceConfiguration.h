/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/RegisteredUserDashboardEmbeddingConfiguration.h>
#include <aws/quicksight/model/RegisteredUserQuickSightConsoleEmbeddingConfiguration.h>
#include <aws/quicksight/model/RegisteredUserQSearchBarEmbeddingConfiguration.h>
#include <aws/quicksight/model/RegisteredUserDashboardVisualEmbeddingConfiguration.h>
#include <aws/quicksight/model/RegisteredUserGenerativeQnAEmbeddingConfiguration.h>
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
   * <p>The type of experience you want to embed. For registered users, you can embed
   * QuickSight dashboards or the QuickSight console.</p>  <p>Exactly one of
   * the experience configurations is required. You can choose <code>Dashboard</code>
   * or <code>QuickSightConsole</code>. You cannot choose more than one experience
   * configuration.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisteredUserEmbeddingExperienceConfiguration">AWS
   * API Reference</a></p>
   */
  class RegisteredUserEmbeddingExperienceConfiguration
  {
  public:
    AWS_QUICKSIGHT_API RegisteredUserEmbeddingExperienceConfiguration() = default;
    AWS_QUICKSIGHT_API RegisteredUserEmbeddingExperienceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RegisteredUserEmbeddingExperienceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration details for providing a dashboard embedding experience.</p>
     */
    inline const RegisteredUserDashboardEmbeddingConfiguration& GetDashboard() const { return m_dashboard; }
    inline bool DashboardHasBeenSet() const { return m_dashboardHasBeenSet; }
    template<typename DashboardT = RegisteredUserDashboardEmbeddingConfiguration>
    void SetDashboard(DashboardT&& value) { m_dashboardHasBeenSet = true; m_dashboard = std::forward<DashboardT>(value); }
    template<typename DashboardT = RegisteredUserDashboardEmbeddingConfiguration>
    RegisteredUserEmbeddingExperienceConfiguration& WithDashboard(DashboardT&& value) { SetDashboard(std::forward<DashboardT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details for providing each QuickSight console embedding
     * experience. This can be used along with custom permissions to restrict access to
     * certain features. For more information, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the QuickSight Console</a> in the <i>Amazon QuickSight User
     * Guide</i>.</p> <p>Use <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_GenerateEmbedUrlForRegisteredUser.html">GenerateEmbedUrlForRegisteredUser</a>
     * </code> where you want to provide an authoring portal that allows users to
     * create data sources, datasets, analyses, and dashboards. The users who accesses
     * an embedded QuickSight console needs to belong to the author or admin security
     * cohort. If you want to restrict permissions to some of these features, add a
     * custom permissions profile to the user with the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdateUser.html">UpdateUser</a>
     * </code> API operation. Use the <code> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_RegisterUser.html">RegisterUser</a>
     * </code> API operation to add a new user with a custom permission profile
     * attached. For more information, see the following sections in the <i>Amazon
     * QuickSight User Guide</i>:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/embedded-analytics-full-console-for-authenticated-users.html">Embedding
     * the Full Functionality of the QuickSight Console for Authenticated Users</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/customizing-permissions-to-the-quicksight-console.html">Customizing
     * Access to the Amazon QuickSight Console</a> </p> </li> </ul> <p>For more
     * information about the high-level steps for embedding and for an interactive demo
     * of the ways you can customize embedding, visit the <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/quicksight-dev-portal.html">Amazon
     * QuickSight Developer Portal</a>.</p>
     */
    inline const RegisteredUserQuickSightConsoleEmbeddingConfiguration& GetQuickSightConsole() const { return m_quickSightConsole; }
    inline bool QuickSightConsoleHasBeenSet() const { return m_quickSightConsoleHasBeenSet; }
    template<typename QuickSightConsoleT = RegisteredUserQuickSightConsoleEmbeddingConfiguration>
    void SetQuickSightConsole(QuickSightConsoleT&& value) { m_quickSightConsoleHasBeenSet = true; m_quickSightConsole = std::forward<QuickSightConsoleT>(value); }
    template<typename QuickSightConsoleT = RegisteredUserQuickSightConsoleEmbeddingConfiguration>
    RegisteredUserEmbeddingExperienceConfiguration& WithQuickSightConsole(QuickSightConsoleT&& value) { SetQuickSightConsole(std::forward<QuickSightConsoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details for embedding the Q search bar.</p> <p>For more
     * information about embedding the Q search bar, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/embedding-overview.html">Embedding
     * Overview</a> in the <i>QuickSight User Guide</i>.</p>
     */
    inline const RegisteredUserQSearchBarEmbeddingConfiguration& GetQSearchBar() const { return m_qSearchBar; }
    inline bool QSearchBarHasBeenSet() const { return m_qSearchBarHasBeenSet; }
    template<typename QSearchBarT = RegisteredUserQSearchBarEmbeddingConfiguration>
    void SetQSearchBar(QSearchBarT&& value) { m_qSearchBarHasBeenSet = true; m_qSearchBar = std::forward<QSearchBarT>(value); }
    template<typename QSearchBarT = RegisteredUserQSearchBarEmbeddingConfiguration>
    RegisteredUserEmbeddingExperienceConfiguration& WithQSearchBar(QSearchBarT&& value) { SetQSearchBar(std::forward<QSearchBarT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of embedding experience. In this case, QuickSight visuals.</p>
     */
    inline const RegisteredUserDashboardVisualEmbeddingConfiguration& GetDashboardVisual() const { return m_dashboardVisual; }
    inline bool DashboardVisualHasBeenSet() const { return m_dashboardVisualHasBeenSet; }
    template<typename DashboardVisualT = RegisteredUserDashboardVisualEmbeddingConfiguration>
    void SetDashboardVisual(DashboardVisualT&& value) { m_dashboardVisualHasBeenSet = true; m_dashboardVisual = std::forward<DashboardVisualT>(value); }
    template<typename DashboardVisualT = RegisteredUserDashboardVisualEmbeddingConfiguration>
    RegisteredUserEmbeddingExperienceConfiguration& WithDashboardVisual(DashboardVisualT&& value) { SetDashboardVisual(std::forward<DashboardVisualT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details for embedding the Generative Q&amp;A
     * experience.</p> <p>For more information about embedding the Generative Q&amp;A
     * experience, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/embedding-overview.html">Embedding
     * Overview</a> in the <i>QuickSight User Guide</i>.</p>
     */
    inline const RegisteredUserGenerativeQnAEmbeddingConfiguration& GetGenerativeQnA() const { return m_generativeQnA; }
    inline bool GenerativeQnAHasBeenSet() const { return m_generativeQnAHasBeenSet; }
    template<typename GenerativeQnAT = RegisteredUserGenerativeQnAEmbeddingConfiguration>
    void SetGenerativeQnA(GenerativeQnAT&& value) { m_generativeQnAHasBeenSet = true; m_generativeQnA = std::forward<GenerativeQnAT>(value); }
    template<typename GenerativeQnAT = RegisteredUserGenerativeQnAEmbeddingConfiguration>
    RegisteredUserEmbeddingExperienceConfiguration& WithGenerativeQnA(GenerativeQnAT&& value) { SetGenerativeQnA(std::forward<GenerativeQnAT>(value)); return *this;}
    ///@}
  private:

    RegisteredUserDashboardEmbeddingConfiguration m_dashboard;
    bool m_dashboardHasBeenSet = false;

    RegisteredUserQuickSightConsoleEmbeddingConfiguration m_quickSightConsole;
    bool m_quickSightConsoleHasBeenSet = false;

    RegisteredUserQSearchBarEmbeddingConfiguration m_qSearchBar;
    bool m_qSearchBarHasBeenSet = false;

    RegisteredUserDashboardVisualEmbeddingConfiguration m_dashboardVisual;
    bool m_dashboardVisualHasBeenSet = false;

    RegisteredUserGenerativeQnAEmbeddingConfiguration m_generativeQnA;
    bool m_generativeQnAHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
