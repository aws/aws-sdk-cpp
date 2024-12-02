/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/security-ir/SecurityIR_EXPORTS.h>
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
namespace SecurityIR
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/GetMembershipAccountDetailError">AWS
   * API Reference</a></p>
   */
  class GetMembershipAccountDetailError
  {
  public:
    AWS_SECURITYIR_API GetMembershipAccountDetailError();
    AWS_SECURITYIR_API GetMembershipAccountDetailError(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API GetMembershipAccountDetailError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYIR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline GetMembershipAccountDetailError& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline GetMembershipAccountDetailError& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline GetMembershipAccountDetailError& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }
    inline GetMembershipAccountDetailError& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline GetMembershipAccountDetailError& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline GetMembershipAccountDetailError& WithError(const char* value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline GetMembershipAccountDetailError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline GetMembershipAccountDetailError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline GetMembershipAccountDetailError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityIR
} // namespace Aws
