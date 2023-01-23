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
    AWS_SECURITYHUB_API ImportFindingsError();
    AWS_SECURITYHUB_API ImportFindingsError(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ImportFindingsError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the finding that could not be updated.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the finding that could not be updated.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the finding that could not be updated.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the finding that could not be updated.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the finding that could not be updated.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the finding that could not be updated.</p>
     */
    inline ImportFindingsError& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the finding that could not be updated.</p>
     */
    inline ImportFindingsError& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the finding that could not be updated.</p>
     */
    inline ImportFindingsError& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The code of the error returned by the <code>BatchImportFindings</code>
     * operation.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The code of the error returned by the <code>BatchImportFindings</code>
     * operation.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The code of the error returned by the <code>BatchImportFindings</code>
     * operation.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The code of the error returned by the <code>BatchImportFindings</code>
     * operation.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The code of the error returned by the <code>BatchImportFindings</code>
     * operation.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The code of the error returned by the <code>BatchImportFindings</code>
     * operation.</p>
     */
    inline ImportFindingsError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The code of the error returned by the <code>BatchImportFindings</code>
     * operation.</p>
     */
    inline ImportFindingsError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The code of the error returned by the <code>BatchImportFindings</code>
     * operation.</p>
     */
    inline ImportFindingsError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The message of the error returned by the <code>BatchImportFindings</code>
     * operation.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The message of the error returned by the <code>BatchImportFindings</code>
     * operation.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The message of the error returned by the <code>BatchImportFindings</code>
     * operation.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The message of the error returned by the <code>BatchImportFindings</code>
     * operation.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The message of the error returned by the <code>BatchImportFindings</code>
     * operation.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The message of the error returned by the <code>BatchImportFindings</code>
     * operation.</p>
     */
    inline ImportFindingsError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The message of the error returned by the <code>BatchImportFindings</code>
     * operation.</p>
     */
    inline ImportFindingsError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The message of the error returned by the <code>BatchImportFindings</code>
     * operation.</p>
     */
    inline ImportFindingsError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

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
