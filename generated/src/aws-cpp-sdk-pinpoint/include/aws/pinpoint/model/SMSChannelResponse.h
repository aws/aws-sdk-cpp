/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about the status and settings of the SMS channel for an
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/SMSChannelResponse">AWS
   * API Reference</a></p>
   */
  class SMSChannelResponse
  {
  public:
    AWS_PINPOINT_API SMSChannelResponse() = default;
    AWS_PINPOINT_API SMSChannelResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API SMSChannelResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the application that the SMS channel applies
     * to.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    SMSChannelResponse& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO 8601 format, when the SMS channel was enabled.</p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    SMSChannelResponse& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the SMS channel is enabled for the application.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline SMSChannelResponse& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Not used) This property is retained only for backward compatibility.</p>
     */
    inline bool GetHasCredential() const { return m_hasCredential; }
    inline bool HasCredentialHasBeenSet() const { return m_hasCredentialHasBeenSet; }
    inline void SetHasCredential(bool value) { m_hasCredentialHasBeenSet = true; m_hasCredential = value; }
    inline SMSChannelResponse& WithHasCredential(bool value) { SetHasCredential(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Deprecated) An identifier for the SMS channel. This property is retained
     * only for backward compatibility.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SMSChannelResponse& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the SMS channel is archived.</p>
     */
    inline bool GetIsArchived() const { return m_isArchived; }
    inline bool IsArchivedHasBeenSet() const { return m_isArchivedHasBeenSet; }
    inline void SetIsArchived(bool value) { m_isArchivedHasBeenSet = true; m_isArchived = value; }
    inline SMSChannelResponse& WithIsArchived(bool value) { SetIsArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who last modified the SMS channel.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    template<typename LastModifiedByT = Aws::String>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = Aws::String>
    SMSChannelResponse& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in ISO 8601 format, when the SMS channel was last
     * modified.</p>
     */
    inline const Aws::String& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::String>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::String>
    SMSChannelResponse& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of messaging or notification platform for the channel. For the SMS
     * channel, this value is SMS.</p>
     */
    inline const Aws::String& GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    template<typename PlatformT = Aws::String>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = Aws::String>
    SMSChannelResponse& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of promotional messages that you can send through the SMS
     * channel each second.</p>
     */
    inline int GetPromotionalMessagesPerSecond() const { return m_promotionalMessagesPerSecond; }
    inline bool PromotionalMessagesPerSecondHasBeenSet() const { return m_promotionalMessagesPerSecondHasBeenSet; }
    inline void SetPromotionalMessagesPerSecond(int value) { m_promotionalMessagesPerSecondHasBeenSet = true; m_promotionalMessagesPerSecond = value; }
    inline SMSChannelResponse& WithPromotionalMessagesPerSecond(int value) { SetPromotionalMessagesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity that displays on recipients' devices when they receive messages
     * from the SMS channel.</p>
     */
    inline const Aws::String& GetSenderId() const { return m_senderId; }
    inline bool SenderIdHasBeenSet() const { return m_senderIdHasBeenSet; }
    template<typename SenderIdT = Aws::String>
    void SetSenderId(SenderIdT&& value) { m_senderIdHasBeenSet = true; m_senderId = std::forward<SenderIdT>(value); }
    template<typename SenderIdT = Aws::String>
    SMSChannelResponse& WithSenderId(SenderIdT&& value) { SetSenderId(std::forward<SenderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registered short code to use when you send messages through the SMS
     * channel.</p>
     */
    inline const Aws::String& GetShortCode() const { return m_shortCode; }
    inline bool ShortCodeHasBeenSet() const { return m_shortCodeHasBeenSet; }
    template<typename ShortCodeT = Aws::String>
    void SetShortCode(ShortCodeT&& value) { m_shortCodeHasBeenSet = true; m_shortCode = std::forward<ShortCodeT>(value); }
    template<typename ShortCodeT = Aws::String>
    SMSChannelResponse& WithShortCode(ShortCodeT&& value) { SetShortCode(std::forward<ShortCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of transactional messages that you can send through the
     * SMS channel each second.</p>
     */
    inline int GetTransactionalMessagesPerSecond() const { return m_transactionalMessagesPerSecond; }
    inline bool TransactionalMessagesPerSecondHasBeenSet() const { return m_transactionalMessagesPerSecondHasBeenSet; }
    inline void SetTransactionalMessagesPerSecond(int value) { m_transactionalMessagesPerSecondHasBeenSet = true; m_transactionalMessagesPerSecond = value; }
    inline SMSChannelResponse& WithTransactionalMessagesPerSecond(int value) { SetTransactionalMessagesPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the SMS channel.</p>
     */
    inline int GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline SMSChannelResponse& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    bool m_hasCredential{false};
    bool m_hasCredentialHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    bool m_isArchived{false};
    bool m_isArchivedHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::String m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    int m_promotionalMessagesPerSecond{0};
    bool m_promotionalMessagesPerSecondHasBeenSet = false;

    Aws::String m_senderId;
    bool m_senderIdHasBeenSet = false;

    Aws::String m_shortCode;
    bool m_shortCodeHasBeenSet = false;

    int m_transactionalMessagesPerSecond{0};
    bool m_transactionalMessagesPerSecondHasBeenSet = false;

    int m_version{0};
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
