/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/SuppressionListReason.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sesv2/model/SuppressedDestinationAttributes.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains information about an email address that is on the
   * suppression list for your account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SuppressedDestination">AWS
   * API Reference</a></p>
   */
  class SuppressedDestination
  {
  public:
    AWS_SESV2_API SuppressedDestination() = default;
    AWS_SESV2_API SuppressedDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API SuppressedDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email address that is on the suppression list for your account.</p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    SuppressedDestination& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the address was added to the suppression list for your
     * account.</p>
     */
    inline SuppressionListReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(SuppressionListReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline SuppressedDestination& WithReason(SuppressionListReason value) { SetReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the suppressed destination was last updated, shown in
     * Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    SuppressedDestination& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional value that can contain additional information about the reasons
     * that the address was added to the suppression list for your account.</p>
     */
    inline const SuppressedDestinationAttributes& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = SuppressedDestinationAttributes>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = SuppressedDestinationAttributes>
    SuppressedDestination& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    SuppressionListReason m_reason{SuppressionListReason::NOT_SET};
    bool m_reasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    SuppressedDestinationAttributes m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
