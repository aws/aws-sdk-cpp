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
    AWS_SSMCONTACTS_API Target();
    AWS_SSMCONTACTS_API Target(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the contact channel Incident Manager is engaging.</p>
     */
    inline const ChannelTargetInfo& GetChannelTargetInfo() const{ return m_channelTargetInfo; }

    /**
     * <p>Information about the contact channel Incident Manager is engaging.</p>
     */
    inline bool ChannelTargetInfoHasBeenSet() const { return m_channelTargetInfoHasBeenSet; }

    /**
     * <p>Information about the contact channel Incident Manager is engaging.</p>
     */
    inline void SetChannelTargetInfo(const ChannelTargetInfo& value) { m_channelTargetInfoHasBeenSet = true; m_channelTargetInfo = value; }

    /**
     * <p>Information about the contact channel Incident Manager is engaging.</p>
     */
    inline void SetChannelTargetInfo(ChannelTargetInfo&& value) { m_channelTargetInfoHasBeenSet = true; m_channelTargetInfo = std::move(value); }

    /**
     * <p>Information about the contact channel Incident Manager is engaging.</p>
     */
    inline Target& WithChannelTargetInfo(const ChannelTargetInfo& value) { SetChannelTargetInfo(value); return *this;}

    /**
     * <p>Information about the contact channel Incident Manager is engaging.</p>
     */
    inline Target& WithChannelTargetInfo(ChannelTargetInfo&& value) { SetChannelTargetInfo(std::move(value)); return *this;}


    /**
     * <p>Information about the contact that Incident Manager is engaging.</p>
     */
    inline const ContactTargetInfo& GetContactTargetInfo() const{ return m_contactTargetInfo; }

    /**
     * <p>Information about the contact that Incident Manager is engaging.</p>
     */
    inline bool ContactTargetInfoHasBeenSet() const { return m_contactTargetInfoHasBeenSet; }

    /**
     * <p>Information about the contact that Incident Manager is engaging.</p>
     */
    inline void SetContactTargetInfo(const ContactTargetInfo& value) { m_contactTargetInfoHasBeenSet = true; m_contactTargetInfo = value; }

    /**
     * <p>Information about the contact that Incident Manager is engaging.</p>
     */
    inline void SetContactTargetInfo(ContactTargetInfo&& value) { m_contactTargetInfoHasBeenSet = true; m_contactTargetInfo = std::move(value); }

    /**
     * <p>Information about the contact that Incident Manager is engaging.</p>
     */
    inline Target& WithContactTargetInfo(const ContactTargetInfo& value) { SetContactTargetInfo(value); return *this;}

    /**
     * <p>Information about the contact that Incident Manager is engaging.</p>
     */
    inline Target& WithContactTargetInfo(ContactTargetInfo&& value) { SetContactTargetInfo(std::move(value)); return *this;}

  private:

    ChannelTargetInfo m_channelTargetInfo;
    bool m_channelTargetInfoHasBeenSet = false;

    ContactTargetInfo m_contactTargetInfo;
    bool m_contactTargetInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
