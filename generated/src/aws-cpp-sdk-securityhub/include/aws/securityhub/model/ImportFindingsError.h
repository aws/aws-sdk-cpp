/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The list of the findings that cannot be imported. For each finding, the list
   * provides the error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ImportFindingsError">AWS
   * API Reference</a></p>
   */
  class ImportFindingsError
  {
  public:
    AWS_SECURITYHUB_API ImportFindingsError() = default;
    AWS_SECURITYHUB_API ImportFindingsError(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ImportFindingsError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the finding that could not be updated.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ImportFindingsError& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code of the error returned by the <code>BatchImportFindings</code>
     * operation.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    ImportFindingsError& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message of the error returned by the <code>BatchImportFindings</code>
     * operation.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    ImportFindingsError& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
