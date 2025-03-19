/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/VoiceIDRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace VoiceID
{
namespace Model
{

  /**
   */
  class EvaluateSessionRequest : public VoiceIDRequest
  {
  public:
    AWS_VOICEID_API EvaluateSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EvaluateSession"; }

    AWS_VOICEID_API Aws::String SerializePayload() const override;

    AWS_VOICEID_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the domain where the session started.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    EvaluateSessionRequest& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session identifier, or name of the session, that you want to evaluate. In
     * Voice ID integration, this is the Contact-Id.</p>
     */
    inline const Aws::String& GetSessionNameOrId() const { return m_sessionNameOrId; }
    inline bool SessionNameOrIdHasBeenSet() const { return m_sessionNameOrIdHasBeenSet; }
    template<typename SessionNameOrIdT = Aws::String>
    void SetSessionNameOrId(SessionNameOrIdT&& value) { m_sessionNameOrIdHasBeenSet = true; m_sessionNameOrId = std::forward<SessionNameOrIdT>(value); }
    template<typename SessionNameOrIdT = Aws::String>
    EvaluateSessionRequest& WithSessionNameOrId(SessionNameOrIdT&& value) { SetSessionNameOrId(std::forward<SessionNameOrIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_sessionNameOrId;
    bool m_sessionNameOrIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
