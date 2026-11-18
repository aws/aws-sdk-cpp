/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/AccountSharedPoolDeliveryMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SESV2 {
namespace Model {

/**
 * <p>The delivery attributes that apply to your Amazon SES account in the current
 * Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DeliveryAttributes">AWS
 * API Reference</a></p>
 */
class DeliveryAttributes {
 public:
  AWS_SESV2_API DeliveryAttributes() = default;
  AWS_SESV2_API DeliveryAttributes(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API DeliveryAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The shared pool delivery mode for your Amazon SES account in the current
   * Amazon Web Services Region. This mode applies to email that you send from shared
   * IP addresses. Can be one of the following:</p> <ul> <li> <p> <code>GLOBAL</code>
   * – Amazon SES delivers from your sending Region first and, when it improves your
   * deliverability, also uses Amazon SES shared IP addresses with established
   * sending history in other Amazon Web Services Regions within the same Amazon Web
   * Services partition.</p> </li> <li> <p> <code>REGIONAL</code> – Amazon SES
   * delivers your email only from shared IP addresses in your sending Region.</p>
   * </li> </ul> <p>Accounts that start sending in a Region on or after the launch of
   * Global Shared Delivery use <code>GLOBAL</code> in that Region.</p>
   */
  inline AccountSharedPoolDeliveryMode GetSharedPoolDeliveryMode() const { return m_sharedPoolDeliveryMode; }
  inline bool SharedPoolDeliveryModeHasBeenSet() const { return m_sharedPoolDeliveryModeHasBeenSet; }
  inline void SetSharedPoolDeliveryMode(AccountSharedPoolDeliveryMode value) {
    m_sharedPoolDeliveryModeHasBeenSet = true;
    m_sharedPoolDeliveryMode = value;
  }
  inline DeliveryAttributes& WithSharedPoolDeliveryMode(AccountSharedPoolDeliveryMode value) {
    SetSharedPoolDeliveryMode(value);
    return *this;
  }
  ///@}
 private:
  AccountSharedPoolDeliveryMode m_sharedPoolDeliveryMode{AccountSharedPoolDeliveryMode::NOT_SET};
  bool m_sharedPoolDeliveryModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
