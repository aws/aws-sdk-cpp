/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for the OptInPhoneNumber action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/OptInPhoneNumberInput">AWS
   * API Reference</a></p>
   */
  class OptInPhoneNumberRequest : public SNSRequest
  {
  public:
    AWS_SNS_API OptInPhoneNumberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "OptInPhoneNumber"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The phone number to opt in. Use E.164 format.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number to opt in. Use E.164 format.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The phone number to opt in. Use E.164 format.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number to opt in. Use E.164 format.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number to opt in. Use E.164 format.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number to opt in. Use E.164 format.</p>
     */
    inline OptInPhoneNumberRequest& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number to opt in. Use E.164 format.</p>
     */
    inline OptInPhoneNumberRequest& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number to opt in. Use E.164 format.</p>
     */
    inline OptInPhoneNumberRequest& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}

  private:

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
