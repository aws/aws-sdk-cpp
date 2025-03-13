/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
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
namespace SSMContacts
{
namespace Model
{

  /**
   * <p>The details that Incident Manager uses when trying to engage the contact
   * channel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/ContactChannelAddress">AWS
   * API Reference</a></p>
   */
  class ContactChannelAddress
  {
  public:
    AWS_SSMCONTACTS_API ContactChannelAddress() = default;
    AWS_SSMCONTACTS_API ContactChannelAddress(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API ContactChannelAddress& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format is dependent on the type of the contact channel. The following are
     * the expected formats:</p> <ul> <li> <p>SMS - '+' followed by the country code
     * and phone number</p> </li> <li> <p>VOICE - '+' followed by the country code and
     * phone number</p> </li> <li> <p>EMAIL - any standard email format</p> </li> </ul>
     */
    inline const Aws::String& GetSimpleAddress() const { return m_simpleAddress; }
    inline bool SimpleAddressHasBeenSet() const { return m_simpleAddressHasBeenSet; }
    template<typename SimpleAddressT = Aws::String>
    void SetSimpleAddress(SimpleAddressT&& value) { m_simpleAddressHasBeenSet = true; m_simpleAddress = std::forward<SimpleAddressT>(value); }
    template<typename SimpleAddressT = Aws::String>
    ContactChannelAddress& WithSimpleAddress(SimpleAddressT&& value) { SetSimpleAddress(std::forward<SimpleAddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_simpleAddress;
    bool m_simpleAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
