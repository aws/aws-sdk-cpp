/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qbusiness/model/ApplicationStatus.h>
#include <aws/qbusiness/model/IdentityType.h>
#include <aws/qbusiness/model/QuickSightConfiguration.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Summary information for an Amazon Q Business application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/Application">AWS
   * API Reference</a></p>
   */
  class Application
  {
  public:
    AWS_QBUSINESS_API Application() = default;
    AWS_QBUSINESS_API Application(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Application& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    Application& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the Amazon Q Business application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    Application& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Application& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp when the Amazon Q Business application was last updated.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Application& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon Q Business application. The application is ready to
     * use when the status is <code>ACTIVE</code>.</p>
     */
    inline ApplicationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ApplicationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Application& WithStatus(ApplicationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication type being used by a Amazon Q Business application.</p>
     */
    inline IdentityType GetIdentityType() const { return m_identityType; }
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }
    inline void SetIdentityType(IdentityType value) { m_identityTypeHasBeenSet = true; m_identityType = value; }
    inline Application& WithIdentityType(IdentityType value) { SetIdentityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon QuickSight configuration for an Amazon Q Business application that
     * uses QuickSight as the identity provider.</p>
     */
    inline const QuickSightConfiguration& GetQuickSightConfiguration() const { return m_quickSightConfiguration; }
    inline bool QuickSightConfigurationHasBeenSet() const { return m_quickSightConfigurationHasBeenSet; }
    template<typename QuickSightConfigurationT = QuickSightConfiguration>
    void SetQuickSightConfiguration(QuickSightConfigurationT&& value) { m_quickSightConfigurationHasBeenSet = true; m_quickSightConfiguration = std::forward<QuickSightConfigurationT>(value); }
    template<typename QuickSightConfigurationT = QuickSightConfiguration>
    Application& WithQuickSightConfiguration(QuickSightConfigurationT&& value) { SetQuickSightConfiguration(std::forward<QuickSightConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    ApplicationStatus m_status{ApplicationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    IdentityType m_identityType{IdentityType::NOT_SET};
    bool m_identityTypeHasBeenSet = false;

    QuickSightConfiguration m_quickSightConfiguration;
    bool m_quickSightConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
