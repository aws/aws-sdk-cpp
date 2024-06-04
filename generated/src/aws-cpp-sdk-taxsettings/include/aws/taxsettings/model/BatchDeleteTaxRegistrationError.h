/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
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
namespace TaxSettings
{
namespace Model
{

  /**
   * <p> The error object for representing failures in the
   * <code>BatchDeleteTaxRegistration</code> operation. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/taxsettings-2018-05-10/BatchDeleteTaxRegistrationError">AWS
   * API Reference</a></p>
   */
  class BatchDeleteTaxRegistrationError
  {
  public:
    AWS_TAXSETTINGS_API BatchDeleteTaxRegistrationError();
    AWS_TAXSETTINGS_API BatchDeleteTaxRegistrationError(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API BatchDeleteTaxRegistrationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TAXSETTINGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique account identifier for the account whose tax registration
     * couldn't be deleted during the <code>BatchDeleteTaxRegistration</code>
     * operation. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p> The unique account identifier for the account whose tax registration
     * couldn't be deleted during the <code>BatchDeleteTaxRegistration</code>
     * operation. </p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p> The unique account identifier for the account whose tax registration
     * couldn't be deleted during the <code>BatchDeleteTaxRegistration</code>
     * operation. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p> The unique account identifier for the account whose tax registration
     * couldn't be deleted during the <code>BatchDeleteTaxRegistration</code>
     * operation. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p> The unique account identifier for the account whose tax registration
     * couldn't be deleted during the <code>BatchDeleteTaxRegistration</code>
     * operation. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p> The unique account identifier for the account whose tax registration
     * couldn't be deleted during the <code>BatchDeleteTaxRegistration</code>
     * operation. </p>
     */
    inline BatchDeleteTaxRegistrationError& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p> The unique account identifier for the account whose tax registration
     * couldn't be deleted during the <code>BatchDeleteTaxRegistration</code>
     * operation. </p>
     */
    inline BatchDeleteTaxRegistrationError& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p> The unique account identifier for the account whose tax registration
     * couldn't be deleted during the <code>BatchDeleteTaxRegistration</code>
     * operation. </p>
     */
    inline BatchDeleteTaxRegistrationError& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p> The error code for an individual failure in BatchDeleteTaxRegistration
     * operation. </p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p> The error code for an individual failure in BatchDeleteTaxRegistration
     * operation. </p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p> The error code for an individual failure in BatchDeleteTaxRegistration
     * operation. </p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p> The error code for an individual failure in BatchDeleteTaxRegistration
     * operation. </p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p> The error code for an individual failure in BatchDeleteTaxRegistration
     * operation. </p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p> The error code for an individual failure in BatchDeleteTaxRegistration
     * operation. </p>
     */
    inline BatchDeleteTaxRegistrationError& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p> The error code for an individual failure in BatchDeleteTaxRegistration
     * operation. </p>
     */
    inline BatchDeleteTaxRegistrationError& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p> The error code for an individual failure in BatchDeleteTaxRegistration
     * operation. </p>
     */
    inline BatchDeleteTaxRegistrationError& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p> The error message for an individual failure in the
     * <code>BatchDeleteTaxRegistration</code> operation. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p> The error message for an individual failure in the
     * <code>BatchDeleteTaxRegistration</code> operation. </p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p> The error message for an individual failure in the
     * <code>BatchDeleteTaxRegistration</code> operation. </p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p> The error message for an individual failure in the
     * <code>BatchDeleteTaxRegistration</code> operation. </p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p> The error message for an individual failure in the
     * <code>BatchDeleteTaxRegistration</code> operation. </p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p> The error message for an individual failure in the
     * <code>BatchDeleteTaxRegistration</code> operation. </p>
     */
    inline BatchDeleteTaxRegistrationError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p> The error message for an individual failure in the
     * <code>BatchDeleteTaxRegistration</code> operation. </p>
     */
    inline BatchDeleteTaxRegistrationError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p> The error message for an individual failure in the
     * <code>BatchDeleteTaxRegistration</code> operation. </p>
     */
    inline BatchDeleteTaxRegistrationError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace TaxSettings
} // namespace Aws
