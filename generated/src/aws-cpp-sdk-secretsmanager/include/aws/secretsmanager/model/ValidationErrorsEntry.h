/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
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
namespace SecretsManager
{
namespace Model
{

  /**
   * <p>Displays errors that occurred during validation of the resource
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ValidationErrorsEntry">AWS
   * API Reference</a></p>
   */
  class ValidationErrorsEntry
  {
  public:
    AWS_SECRETSMANAGER_API ValidationErrorsEntry() = default;
    AWS_SECRETSMANAGER_API ValidationErrorsEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API ValidationErrorsEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Checks the name of the policy.</p>
     */
    inline const Aws::String& GetCheckName() const { return m_checkName; }
    inline bool CheckNameHasBeenSet() const { return m_checkNameHasBeenSet; }
    template<typename CheckNameT = Aws::String>
    void SetCheckName(CheckNameT&& value) { m_checkNameHasBeenSet = true; m_checkName = std::forward<CheckNameT>(value); }
    template<typename CheckNameT = Aws::String>
    ValidationErrorsEntry& WithCheckName(CheckNameT&& value) { SetCheckName(std::forward<CheckNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays error messages if validation encounters problems during validation
     * of the resource policy.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    ValidationErrorsEntry& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_checkName;
    bool m_checkNameHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
