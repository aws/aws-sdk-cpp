/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Errors that occurred during the portfolio share operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ShareError">AWS
   * API Reference</a></p>
   */
  class ShareError
  {
  public:
    AWS_SERVICECATALOG_API ShareError();
    AWS_SERVICECATALOG_API ShareError(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ShareError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of accounts impacted by the error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const{ return m_accounts; }
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
    inline void SetAccounts(const Aws::Vector<Aws::String>& value) { m_accountsHasBeenSet = true; m_accounts = value; }
    inline void SetAccounts(Aws::Vector<Aws::String>&& value) { m_accountsHasBeenSet = true; m_accounts = std::move(value); }
    inline ShareError& WithAccounts(const Aws::Vector<Aws::String>& value) { SetAccounts(value); return *this;}
    inline ShareError& WithAccounts(Aws::Vector<Aws::String>&& value) { SetAccounts(std::move(value)); return *this;}
    inline ShareError& AddAccounts(const Aws::String& value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }
    inline ShareError& AddAccounts(Aws::String&& value) { m_accountsHasBeenSet = true; m_accounts.push_back(std::move(value)); return *this; }
    inline ShareError& AddAccounts(const char* value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ShareError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ShareError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ShareError& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error type that happened when processing the operation.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const Aws::String& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(Aws::String&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline void SetError(const char* value) { m_errorHasBeenSet = true; m_error.assign(value); }
    inline ShareError& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline ShareError& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline ShareError& WithError(const char* value) { SetError(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accounts;
    bool m_accountsHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
