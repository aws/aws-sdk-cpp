/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-contacts/model/ReceiptType.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Records events during an engagement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/Receipt">AWS
   * API Reference</a></p>
   */
  class Receipt
  {
  public:
    AWS_SSMCONTACTS_API Receipt() = default;
    AWS_SSMCONTACTS_API Receipt(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Receipt& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the contact channel Incident Manager
     * engaged.</p>
     */
    inline const Aws::String& GetContactChannelArn() const { return m_contactChannelArn; }
    inline bool ContactChannelArnHasBeenSet() const { return m_contactChannelArnHasBeenSet; }
    template<typename ContactChannelArnT = Aws::String>
    void SetContactChannelArn(ContactChannelArnT&& value) { m_contactChannelArnHasBeenSet = true; m_contactChannelArn = std::forward<ContactChannelArnT>(value); }
    template<typename ContactChannelArnT = Aws::String>
    Receipt& WithContactChannelArn(ContactChannelArnT&& value) { SetContactChannelArn(std::forward<ContactChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type follows the engagement cycle, <code>SENT</code>,
     * <code>DELIVERED</code>, and <code>READ</code>.</p>
     */
    inline ReceiptType GetReceiptType() const { return m_receiptType; }
    inline bool ReceiptTypeHasBeenSet() const { return m_receiptTypeHasBeenSet; }
    inline void SetReceiptType(ReceiptType value) { m_receiptTypeHasBeenSet = true; m_receiptType = value; }
    inline Receipt& WithReceiptType(ReceiptType value) { SetReceiptType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information provided during the page acknowledgement.</p>
     */
    inline const Aws::String& GetReceiptInfo() const { return m_receiptInfo; }
    inline bool ReceiptInfoHasBeenSet() const { return m_receiptInfoHasBeenSet; }
    template<typename ReceiptInfoT = Aws::String>
    void SetReceiptInfo(ReceiptInfoT&& value) { m_receiptInfoHasBeenSet = true; m_receiptInfo = std::forward<ReceiptInfoT>(value); }
    template<typename ReceiptInfoT = Aws::String>
    Receipt& WithReceiptInfo(ReceiptInfoT&& value) { SetReceiptInfo(std::forward<ReceiptInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time receipt was <code>SENT</code>, <code>DELIVERED</code>, or
     * <code>READ</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetReceiptTime() const { return m_receiptTime; }
    inline bool ReceiptTimeHasBeenSet() const { return m_receiptTimeHasBeenSet; }
    template<typename ReceiptTimeT = Aws::Utils::DateTime>
    void SetReceiptTime(ReceiptTimeT&& value) { m_receiptTimeHasBeenSet = true; m_receiptTime = std::forward<ReceiptTimeT>(value); }
    template<typename ReceiptTimeT = Aws::Utils::DateTime>
    Receipt& WithReceiptTime(ReceiptTimeT&& value) { SetReceiptTime(std::forward<ReceiptTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_contactChannelArn;
    bool m_contactChannelArnHasBeenSet = false;

    ReceiptType m_receiptType{ReceiptType::NOT_SET};
    bool m_receiptTypeHasBeenSet = false;

    Aws::String m_receiptInfo;
    bool m_receiptInfoHasBeenSet = false;

    Aws::Utils::DateTime m_receiptTime{};
    bool m_receiptTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
