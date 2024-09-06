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
    AWS_QAPPS_API UserAppItem();
    AWS_QAPPS_API UserAppItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API UserAppItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the Q App.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline UserAppItem& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline UserAppItem& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline UserAppItem& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Q App.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }
    inline UserAppItem& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline UserAppItem& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline UserAppItem& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the Q App.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline UserAppItem& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline UserAppItem& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline UserAppItem& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Q App.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UserAppItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UserAppItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UserAppItem& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the user's association with the Q App was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline UserAppItem& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline UserAppItem& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether the user can edit the Q App.</p>
     */
    inline bool GetCanEdit() const{ return m_canEdit; }
    inline bool CanEditHasBeenSet() const { return m_canEditHasBeenSet; }
    inline void SetCanEdit(bool value) { m_canEditHasBeenSet = true; m_canEdit = value; }
    inline UserAppItem& WithCanEdit(bool value) { SetCanEdit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the user's association with the Q App.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline UserAppItem& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline UserAppItem& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline UserAppItem& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the Q App has been verified.</p>
     */
    inline bool GetIsVerified() const{ return m_isVerified; }
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

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    bool m_canEdit;
    bool m_canEditHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    bool m_isVerified;
    bool m_isVerifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
