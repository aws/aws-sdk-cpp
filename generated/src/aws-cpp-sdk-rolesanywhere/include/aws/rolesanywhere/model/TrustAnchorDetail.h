/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rolesanywhere/RolesAnywhere_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rolesanywhere/model/Source.h>
#include <aws/rolesanywhere/model/NotificationSettingDetail.h>
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
namespace RolesAnywhere
{
namespace Model
{

  /**
   * <p>The state of the trust anchor after a read or write operation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rolesanywhere-2018-05-10/TrustAnchorDetail">AWS
   * API Reference</a></p>
   */
  class TrustAnchorDetail
  {
  public:
    AWS_ROLESANYWHERE_API TrustAnchorDetail() = default;
    AWS_ROLESANYWHERE_API TrustAnchorDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API TrustAnchorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROLESANYWHERE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ISO-8601 timestamp when the trust anchor was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    TrustAnchorDetail& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the trust anchor is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline TrustAnchorDetail& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the trust anchor.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TrustAnchorDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of notification settings to be associated to the trust anchor.</p>
     */
    inline const Aws::Vector<NotificationSettingDetail>& GetNotificationSettings() const { return m_notificationSettings; }
    inline bool NotificationSettingsHasBeenSet() const { return m_notificationSettingsHasBeenSet; }
    template<typename NotificationSettingsT = Aws::Vector<NotificationSettingDetail>>
    void SetNotificationSettings(NotificationSettingsT&& value) { m_notificationSettingsHasBeenSet = true; m_notificationSettings = std::forward<NotificationSettingsT>(value); }
    template<typename NotificationSettingsT = Aws::Vector<NotificationSettingDetail>>
    TrustAnchorDetail& WithNotificationSettings(NotificationSettingsT&& value) { SetNotificationSettings(std::forward<NotificationSettingsT>(value)); return *this;}
    template<typename NotificationSettingsT = NotificationSettingDetail>
    TrustAnchorDetail& AddNotificationSettings(NotificationSettingsT&& value) { m_notificationSettingsHasBeenSet = true; m_notificationSettings.emplace_back(std::forward<NotificationSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The trust anchor type and its related certificate data.</p>
     */
    inline const Source& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Source>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Source>
    TrustAnchorDetail& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the trust anchor.</p>
     */
    inline const Aws::String& GetTrustAnchorArn() const { return m_trustAnchorArn; }
    inline bool TrustAnchorArnHasBeenSet() const { return m_trustAnchorArnHasBeenSet; }
    template<typename TrustAnchorArnT = Aws::String>
    void SetTrustAnchorArn(TrustAnchorArnT&& value) { m_trustAnchorArnHasBeenSet = true; m_trustAnchorArn = std::forward<TrustAnchorArnT>(value); }
    template<typename TrustAnchorArnT = Aws::String>
    TrustAnchorDetail& WithTrustAnchorArn(TrustAnchorArnT&& value) { SetTrustAnchorArn(std::forward<TrustAnchorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the trust anchor.</p>
     */
    inline const Aws::String& GetTrustAnchorId() const { return m_trustAnchorId; }
    inline bool TrustAnchorIdHasBeenSet() const { return m_trustAnchorIdHasBeenSet; }
    template<typename TrustAnchorIdT = Aws::String>
    void SetTrustAnchorId(TrustAnchorIdT&& value) { m_trustAnchorIdHasBeenSet = true; m_trustAnchorId = std::forward<TrustAnchorIdT>(value); }
    template<typename TrustAnchorIdT = Aws::String>
    TrustAnchorDetail& WithTrustAnchorId(TrustAnchorIdT&& value) { SetTrustAnchorId(std::forward<TrustAnchorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO-8601 timestamp when the trust anchor was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    TrustAnchorDetail& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<NotificationSettingDetail> m_notificationSettings;
    bool m_notificationSettingsHasBeenSet = false;

    Source m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_trustAnchorArn;
    bool m_trustAnchorArnHasBeenSet = false;

    Aws::String m_trustAnchorId;
    bool m_trustAnchorIdHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
