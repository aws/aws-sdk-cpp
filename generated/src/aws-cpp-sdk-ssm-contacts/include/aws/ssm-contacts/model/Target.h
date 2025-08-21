/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/model/ChannelTargetInfo.h>
#include <aws/ssm-contacts/model/ContactTargetInfo.h>
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
namespace SSMContacts
{
namespace Model
{

  /**
   * <p>The contact or contact channel that's being engaged.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/Target">AWS
   * API Reference</a></p>
   */
  class Target
  {
  public:
    AWS_SSMCONTACTS_API Target() = default;
    AWS_SSMCONTACTS_API Target(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the contact channel that Incident Manager engages.</p>
     */
    inline const ChannelTargetInfo& GetChannelTargetInfo() const { return m_channelTargetInfo; }
    inline bool ChannelTargetInfoHasBeenSet() const { return m_channelTargetInfoHasBeenSet; }
    template<typename ChannelTargetInfoT = ChannelTargetInfo>
    void SetChannelTargetInfo(ChannelTargetInfoT&& value) { m_channelTargetInfoHasBeenSet = true; m_channelTargetInfo = std::forward<ChannelTargetInfoT>(value); }
    template<typename ChannelTargetInfoT = ChannelTargetInfo>
    Target& WithChannelTargetInfo(ChannelTargetInfoT&& value) { SetChannelTargetInfo(std::forward<ChannelTargetInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the contact that Incident Manager engages.</p>
     */
    inline const ContactTargetInfo& GetContactTargetInfo() const { return m_contactTargetInfo; }
    inline bool ContactTargetInfoHasBeenSet() const { return m_contactTargetInfoHasBeenSet; }
    template<typename ContactTargetInfoT = ContactTargetInfo>
    void SetContactTargetInfo(ContactTargetInfoT&& value) { m_contactTargetInfoHasBeenSet = true; m_contactTargetInfo = std::forward<ContactTargetInfoT>(value); }
    template<typename ContactTargetInfoT = ContactTargetInfo>
    Target& WithContactTargetInfo(ContactTargetInfoT&& value) { SetContactTargetInfo(std::forward<ContactTargetInfoT>(value)); return *this;}
    ///@}
  private:

    ChannelTargetInfo m_channelTargetInfo;
    bool m_channelTargetInfoHasBeenSet = false;

    ContactTargetInfo m_contactTargetInfo;
    bool m_contactTargetInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
