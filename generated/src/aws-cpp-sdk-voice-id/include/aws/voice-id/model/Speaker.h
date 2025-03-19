/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/model/SpeakerStatus.h>
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
namespace VoiceID
{
namespace Model
{

  /**
   * <p>Contains all the information about a speaker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/Speaker">AWS
   * API Reference</a></p>
   */
  class Speaker
  {
  public:
    AWS_VOICEID_API Speaker() = default;
    AWS_VOICEID_API Speaker(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Speaker& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A timestamp of when the speaker was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Speaker& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client-provided identifier for the speaker.</p>
     */
    inline const Aws::String& GetCustomerSpeakerId() const { return m_customerSpeakerId; }
    inline bool CustomerSpeakerIdHasBeenSet() const { return m_customerSpeakerIdHasBeenSet; }
    template<typename CustomerSpeakerIdT = Aws::String>
    void SetCustomerSpeakerId(CustomerSpeakerIdT&& value) { m_customerSpeakerIdHasBeenSet = true; m_customerSpeakerId = std::forward<CustomerSpeakerIdT>(value); }
    template<typename CustomerSpeakerIdT = Aws::String>
    Speaker& WithCustomerSpeakerId(CustomerSpeakerIdT&& value) { SetCustomerSpeakerId(std::forward<CustomerSpeakerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the domain that contains the speaker.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    Speaker& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service-generated identifier for the speaker.</p>
     */
    inline const Aws::String& GetGeneratedSpeakerId() const { return m_generatedSpeakerId; }
    inline bool GeneratedSpeakerIdHasBeenSet() const { return m_generatedSpeakerIdHasBeenSet; }
    template<typename GeneratedSpeakerIdT = Aws::String>
    void SetGeneratedSpeakerId(GeneratedSpeakerIdT&& value) { m_generatedSpeakerIdHasBeenSet = true; m_generatedSpeakerId = std::forward<GeneratedSpeakerIdT>(value); }
    template<typename GeneratedSpeakerIdT = Aws::String>
    Speaker& WithGeneratedSpeakerId(GeneratedSpeakerIdT&& value) { SetGeneratedSpeakerId(std::forward<GeneratedSpeakerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the speaker was last accessed for enrollment,
     * re-enrollment or a successful authentication. This timestamp is accurate to one
     * hour.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAccessedAt() const { return m_lastAccessedAt; }
    inline bool LastAccessedAtHasBeenSet() const { return m_lastAccessedAtHasBeenSet; }
    template<typename LastAccessedAtT = Aws::Utils::DateTime>
    void SetLastAccessedAt(LastAccessedAtT&& value) { m_lastAccessedAtHasBeenSet = true; m_lastAccessedAt = std::forward<LastAccessedAtT>(value); }
    template<typename LastAccessedAtT = Aws::Utils::DateTime>
    Speaker& WithLastAccessedAt(LastAccessedAtT&& value) { SetLastAccessedAt(std::forward<LastAccessedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the speaker.</p>
     */
    inline SpeakerStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SpeakerStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Speaker& WithStatus(SpeakerStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the speaker's last update.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Speaker& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_customerSpeakerId;
    bool m_customerSpeakerIdHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_generatedSpeakerId;
    bool m_generatedSpeakerIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastAccessedAt{};
    bool m_lastAccessedAtHasBeenSet = false;

    SpeakerStatus m_status{SpeakerStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
