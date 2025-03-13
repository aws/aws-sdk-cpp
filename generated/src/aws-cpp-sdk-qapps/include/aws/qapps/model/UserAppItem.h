/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>An Amazon Q App associated with a user, either owned by the user or
   * favorited.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/UserAppItem">AWS
   * API Reference</a></p>
   */
  class UserAppItem
  {
  public:
    AWS_QAPPS_API UserAppItem() = default;
    AWS_QAPPS_API UserAppItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API UserAppItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the Q App.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    UserAppItem& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Q App.</p>
     */
    inline const Aws::String& GetAppArn() const { return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    template<typename AppArnT = Aws::String>
    void SetAppArn(AppArnT&& value) { m_appArnHasBeenSet = true; m_appArn = std::forward<AppArnT>(value); }
    template<typename AppArnT = Aws::String>
    UserAppItem& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the Q App.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    UserAppItem& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Q App.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UserAppItem& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the user's association with the Q App was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    UserAppItem& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether the user can edit the Q App.</p>
     */
    inline bool GetCanEdit() const { return m_canEdit; }
    inline bool CanEditHasBeenSet() const { return m_canEditHasBeenSet; }
    inline void SetCanEdit(bool value) { m_canEditHasBeenSet = true; m_canEdit = value; }
    inline UserAppItem& WithCanEdit(bool value) { SetCanEdit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the user's association with the Q App.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    UserAppItem& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the Q App has been verified.</p>
     */
    inline bool GetIsVerified() const { return m_isVerified; }
    inline bool IsVerifiedHasBeenSet() const { return m_isVerifiedHasBeenSet; }
    inline void SetIsVerified(bool value) { m_isVerifiedHasBeenSet = true; m_isVerified = value; }
    inline UserAppItem& WithIsVerified(bool value) { SetIsVerified(value); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    bool m_canEdit{false};
    bool m_canEditHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    bool m_isVerified{false};
    bool m_isVerifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
