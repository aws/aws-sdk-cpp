/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>An object that describes the recipients for an email.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/Destination">AWS
   * API Reference</a></p>
   */
  class Destination
  {
  public:
    AWS_PINPOINTEMAIL_API Destination() = default;
    AWS_PINPOINTEMAIL_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array that contains the email addresses of the "To" recipients for the
     * email.</p>
     */
    inline const Aws::Vector<Aws::String>& GetToAddresses() const { return m_toAddresses; }
    inline bool ToAddressesHasBeenSet() const { return m_toAddressesHasBeenSet; }
    template<typename ToAddressesT = Aws::Vector<Aws::String>>
    void SetToAddresses(ToAddressesT&& value) { m_toAddressesHasBeenSet = true; m_toAddresses = std::forward<ToAddressesT>(value); }
    template<typename ToAddressesT = Aws::Vector<Aws::String>>
    Destination& WithToAddresses(ToAddressesT&& value) { SetToAddresses(std::forward<ToAddressesT>(value)); return *this;}
    template<typename ToAddressesT = Aws::String>
    Destination& AddToAddresses(ToAddressesT&& value) { m_toAddressesHasBeenSet = true; m_toAddresses.emplace_back(std::forward<ToAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array that contains the email addresses of the "CC" (carbon copy)
     * recipients for the email.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCcAddresses() const { return m_ccAddresses; }
    inline bool CcAddressesHasBeenSet() const { return m_ccAddressesHasBeenSet; }
    template<typename CcAddressesT = Aws::Vector<Aws::String>>
    void SetCcAddresses(CcAddressesT&& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses = std::forward<CcAddressesT>(value); }
    template<typename CcAddressesT = Aws::Vector<Aws::String>>
    Destination& WithCcAddresses(CcAddressesT&& value) { SetCcAddresses(std::forward<CcAddressesT>(value)); return *this;}
    template<typename CcAddressesT = Aws::String>
    Destination& AddCcAddresses(CcAddressesT&& value) { m_ccAddressesHasBeenSet = true; m_ccAddresses.emplace_back(std::forward<CcAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array that contains the email addresses of the "BCC" (blind carbon copy)
     * recipients for the email.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBccAddresses() const { return m_bccAddresses; }
    inline bool BccAddressesHasBeenSet() const { return m_bccAddressesHasBeenSet; }
    template<typename BccAddressesT = Aws::Vector<Aws::String>>
    void SetBccAddresses(BccAddressesT&& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses = std::forward<BccAddressesT>(value); }
    template<typename BccAddressesT = Aws::Vector<Aws::String>>
    Destination& WithBccAddresses(BccAddressesT&& value) { SetBccAddresses(std::forward<BccAddressesT>(value)); return *this;}
    template<typename BccAddressesT = Aws::String>
    Destination& AddBccAddresses(BccAddressesT&& value) { m_bccAddressesHasBeenSet = true; m_bccAddresses.emplace_back(std::forward<BccAddressesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_toAddresses;
    bool m_toAddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_ccAddresses;
    bool m_ccAddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_bccAddresses;
    bool m_bccAddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
