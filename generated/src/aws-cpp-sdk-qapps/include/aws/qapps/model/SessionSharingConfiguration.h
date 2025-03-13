/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>

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
   * <p>The sharing configuration of an Amazon Q App data collection
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/SessionSharingConfiguration">AWS
   * API Reference</a></p>
   */
  class SessionSharingConfiguration
  {
  public:
    AWS_QAPPS_API SessionSharingConfiguration() = default;
    AWS_QAPPS_API SessionSharingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API SessionSharingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether an Q App session is shareable with other users.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline SessionSharingConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether an Q App session can accept responses from users.</p>
     */
    inline bool GetAcceptResponses() const { return m_acceptResponses; }
    inline bool AcceptResponsesHasBeenSet() const { return m_acceptResponsesHasBeenSet; }
    inline void SetAcceptResponses(bool value) { m_acceptResponsesHasBeenSet = true; m_acceptResponses = value; }
    inline SessionSharingConfiguration& WithAcceptResponses(bool value) { SetAcceptResponses(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether collected responses for an Q App session are revealed for
     * all users.</p>
     */
    inline bool GetRevealCards() const { return m_revealCards; }
    inline bool RevealCardsHasBeenSet() const { return m_revealCardsHasBeenSet; }
    inline void SetRevealCards(bool value) { m_revealCardsHasBeenSet = true; m_revealCards = value; }
    inline SessionSharingConfiguration& WithRevealCards(bool value) { SetRevealCards(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    bool m_acceptResponses{false};
    bool m_acceptResponsesHasBeenSet = false;

    bool m_revealCards{false};
    bool m_revealCardsHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
