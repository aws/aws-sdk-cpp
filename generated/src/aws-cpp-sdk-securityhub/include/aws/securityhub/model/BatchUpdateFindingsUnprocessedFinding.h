/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsSecurityFindingIdentifier.h>
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
   * <p>A finding from a <code>BatchUpdateFindings</code> request that Security Hub
   * was unable to update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/BatchUpdateFindingsUnprocessedFinding">AWS
   * API Reference</a></p>
   */
  class BatchUpdateFindingsUnprocessedFinding
  {
  public:
    AWS_SECURITYHUB_API BatchUpdateFindingsUnprocessedFinding();
    AWS_SECURITYHUB_API BatchUpdateFindingsUnprocessedFinding(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API BatchUpdateFindingsUnprocessedFinding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the finding that was not updated.</p>
     */
    inline const AwsSecurityFindingIdentifier& GetFindingIdentifier() const{ return m_findingIdentifier; }

    /**
     * <p>The identifier of the finding that was not updated.</p>
     */
    inline bool FindingIdentifierHasBeenSet() const { return m_findingIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the finding that was not updated.</p>
     */
    inline void SetFindingIdentifier(const AwsSecurityFindingIdentifier& value) { m_findingIdentifierHasBeenSet = true; m_findingIdentifier = value; }

    /**
     * <p>The identifier of the finding that was not updated.</p>
     */
    inline void SetFindingIdentifier(AwsSecurityFindingIdentifier&& value) { m_findingIdentifierHasBeenSet = true; m_findingIdentifier = std::move(value); }

    /**
     * <p>The identifier of the finding that was not updated.</p>
     */
    inline BatchUpdateFindingsUnprocessedFinding& WithFindingIdentifier(const AwsSecurityFindingIdentifier& value) { SetFindingIdentifier(value); return *this;}

    /**
     * <p>The identifier of the finding that was not updated.</p>
     */
    inline BatchUpdateFindingsUnprocessedFinding& WithFindingIdentifier(AwsSecurityFindingIdentifier&& value) { SetFindingIdentifier(std::move(value)); return *this;}


    /**
     * <p>The code associated with the error. Possible values are:</p> <ul> <li> <p>
     * <code>ConcurrentUpdateError</code> - Another request attempted to update the
     * finding while this request was being processed. This error may also occur if you
     * call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a> and <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a> at the same time.</p> </li> <li> <p>
     * <code>DuplicatedFindingIdentifier</code> - The request included two or more
     * findings with the same <code>FindingIdentifier</code>.</p> </li> <li> <p>
     * <code>FindingNotFound</code> - The <code>FindingIdentifier</code> included in
     * the request did not match an existing finding.</p> </li> <li> <p>
     * <code>FindingSizeExceeded</code> - The finding size was greater than the
     * permissible value of 240 KB.</p> </li> <li> <p> <code>InternalFailure</code> -
     * An internal service failure occurred when updating the finding.</p> </li> <li>
     * <p> <code>InvalidInput</code> - The finding update contained an invalid value
     * that did not satisfy the <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format.html">Amazon
     * Web Services Security Finding Format</a> syntax.</p> </li> </ul>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The code associated with the error. Possible values are:</p> <ul> <li> <p>
     * <code>ConcurrentUpdateError</code> - Another request attempted to update the
     * finding while this request was being processed. This error may also occur if you
     * call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a> and <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a> at the same time.</p> </li> <li> <p>
     * <code>DuplicatedFindingIdentifier</code> - The request included two or more
     * findings with the same <code>FindingIdentifier</code>.</p> </li> <li> <p>
     * <code>FindingNotFound</code> - The <code>FindingIdentifier</code> included in
     * the request did not match an existing finding.</p> </li> <li> <p>
     * <code>FindingSizeExceeded</code> - The finding size was greater than the
     * permissible value of 240 KB.</p> </li> <li> <p> <code>InternalFailure</code> -
     * An internal service failure occurred when updating the finding.</p> </li> <li>
     * <p> <code>InvalidInput</code> - The finding update contained an invalid value
     * that did not satisfy the <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format.html">Amazon
     * Web Services Security Finding Format</a> syntax.</p> </li> </ul>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The code associated with the error. Possible values are:</p> <ul> <li> <p>
     * <code>ConcurrentUpdateError</code> - Another request attempted to update the
     * finding while this request was being processed. This error may also occur if you
     * call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a> and <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a> at the same time.</p> </li> <li> <p>
     * <code>DuplicatedFindingIdentifier</code> - The request included two or more
     * findings with the same <code>FindingIdentifier</code>.</p> </li> <li> <p>
     * <code>FindingNotFound</code> - The <code>FindingIdentifier</code> included in
     * the request did not match an existing finding.</p> </li> <li> <p>
     * <code>FindingSizeExceeded</code> - The finding size was greater than the
     * permissible value of 240 KB.</p> </li> <li> <p> <code>InternalFailure</code> -
     * An internal service failure occurred when updating the finding.</p> </li> <li>
     * <p> <code>InvalidInput</code> - The finding update contained an invalid value
     * that did not satisfy the <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format.html">Amazon
     * Web Services Security Finding Format</a> syntax.</p> </li> </ul>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The code associated with the error. Possible values are:</p> <ul> <li> <p>
     * <code>ConcurrentUpdateError</code> - Another request attempted to update the
     * finding while this request was being processed. This error may also occur if you
     * call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a> and <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a> at the same time.</p> </li> <li> <p>
     * <code>DuplicatedFindingIdentifier</code> - The request included two or more
     * findings with the same <code>FindingIdentifier</code>.</p> </li> <li> <p>
     * <code>FindingNotFound</code> - The <code>FindingIdentifier</code> included in
     * the request did not match an existing finding.</p> </li> <li> <p>
     * <code>FindingSizeExceeded</code> - The finding size was greater than the
     * permissible value of 240 KB.</p> </li> <li> <p> <code>InternalFailure</code> -
     * An internal service failure occurred when updating the finding.</p> </li> <li>
     * <p> <code>InvalidInput</code> - The finding update contained an invalid value
     * that did not satisfy the <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format.html">Amazon
     * Web Services Security Finding Format</a> syntax.</p> </li> </ul>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The code associated with the error. Possible values are:</p> <ul> <li> <p>
     * <code>ConcurrentUpdateError</code> - Another request attempted to update the
     * finding while this request was being processed. This error may also occur if you
     * call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a> and <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a> at the same time.</p> </li> <li> <p>
     * <code>DuplicatedFindingIdentifier</code> - The request included two or more
     * findings with the same <code>FindingIdentifier</code>.</p> </li> <li> <p>
     * <code>FindingNotFound</code> - The <code>FindingIdentifier</code> included in
     * the request did not match an existing finding.</p> </li> <li> <p>
     * <code>FindingSizeExceeded</code> - The finding size was greater than the
     * permissible value of 240 KB.</p> </li> <li> <p> <code>InternalFailure</code> -
     * An internal service failure occurred when updating the finding.</p> </li> <li>
     * <p> <code>InvalidInput</code> - The finding update contained an invalid value
     * that did not satisfy the <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format.html">Amazon
     * Web Services Security Finding Format</a> syntax.</p> </li> </ul>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The code associated with the error. Possible values are:</p> <ul> <li> <p>
     * <code>ConcurrentUpdateError</code> - Another request attempted to update the
     * finding while this request was being processed. This error may also occur if you
     * call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a> and <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a> at the same time.</p> </li> <li> <p>
     * <code>DuplicatedFindingIdentifier</code> - The request included two or more
     * findings with the same <code>FindingIdentifier</code>.</p> </li> <li> <p>
     * <code>FindingNotFound</code> - The <code>FindingIdentifier</code> included in
     * the request did not match an existing finding.</p> </li> <li> <p>
     * <code>FindingSizeExceeded</code> - The finding size was greater than the
     * permissible value of 240 KB.</p> </li> <li> <p> <code>InternalFailure</code> -
     * An internal service failure occurred when updating the finding.</p> </li> <li>
     * <p> <code>InvalidInput</code> - The finding update contained an invalid value
     * that did not satisfy the <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format.html">Amazon
     * Web Services Security Finding Format</a> syntax.</p> </li> </ul>
     */
    inline BatchUpdateFindingsUnprocessedFinding& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The code associated with the error. Possible values are:</p> <ul> <li> <p>
     * <code>ConcurrentUpdateError</code> - Another request attempted to update the
     * finding while this request was being processed. This error may also occur if you
     * call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a> and <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a> at the same time.</p> </li> <li> <p>
     * <code>DuplicatedFindingIdentifier</code> - The request included two or more
     * findings with the same <code>FindingIdentifier</code>.</p> </li> <li> <p>
     * <code>FindingNotFound</code> - The <code>FindingIdentifier</code> included in
     * the request did not match an existing finding.</p> </li> <li> <p>
     * <code>FindingSizeExceeded</code> - The finding size was greater than the
     * permissible value of 240 KB.</p> </li> <li> <p> <code>InternalFailure</code> -
     * An internal service failure occurred when updating the finding.</p> </li> <li>
     * <p> <code>InvalidInput</code> - The finding update contained an invalid value
     * that did not satisfy the <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format.html">Amazon
     * Web Services Security Finding Format</a> syntax.</p> </li> </ul>
     */
    inline BatchUpdateFindingsUnprocessedFinding& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The code associated with the error. Possible values are:</p> <ul> <li> <p>
     * <code>ConcurrentUpdateError</code> - Another request attempted to update the
     * finding while this request was being processed. This error may also occur if you
     * call <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateFindings.html">
     * <code>BatchUpdateFindings</code> </a> and <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchImportFindings.html">
     * <code>BatchImportFindings</code> </a> at the same time.</p> </li> <li> <p>
     * <code>DuplicatedFindingIdentifier</code> - The request included two or more
     * findings with the same <code>FindingIdentifier</code>.</p> </li> <li> <p>
     * <code>FindingNotFound</code> - The <code>FindingIdentifier</code> included in
     * the request did not match an existing finding.</p> </li> <li> <p>
     * <code>FindingSizeExceeded</code> - The finding size was greater than the
     * permissible value of 240 KB.</p> </li> <li> <p> <code>InternalFailure</code> -
     * An internal service failure occurred when updating the finding.</p> </li> <li>
     * <p> <code>InvalidInput</code> - The finding update contained an invalid value
     * that did not satisfy the <a
     * href="https://docs.aws.amazon.com/securityhub/latest/userguide/securityhub-findings-format.html">Amazon
     * Web Services Security Finding Format</a> syntax.</p> </li> </ul>
     */
    inline BatchUpdateFindingsUnprocessedFinding& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The message associated with the error. Possible values are:</p> <ul> <li> <p>
     * <code>Concurrent finding updates detected</code> </p> </li> <li> <p>
     * <code>Finding Identifier is duplicated</code> </p> </li> <li> <p> <code>Finding
     * Not Found</code> </p> </li> <li> <p> <code>Finding size exceeded 240 KB</code>
     * </p> </li> <li> <p> <code>Internal service failure</code> </p> </li> <li> <p>
     * <code>Invalid Input</code> </p> </li> </ul>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The message associated with the error. Possible values are:</p> <ul> <li> <p>
     * <code>Concurrent finding updates detected</code> </p> </li> <li> <p>
     * <code>Finding Identifier is duplicated</code> </p> </li> <li> <p> <code>Finding
     * Not Found</code> </p> </li> <li> <p> <code>Finding size exceeded 240 KB</code>
     * </p> </li> <li> <p> <code>Internal service failure</code> </p> </li> <li> <p>
     * <code>Invalid Input</code> </p> </li> </ul>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The message associated with the error. Possible values are:</p> <ul> <li> <p>
     * <code>Concurrent finding updates detected</code> </p> </li> <li> <p>
     * <code>Finding Identifier is duplicated</code> </p> </li> <li> <p> <code>Finding
     * Not Found</code> </p> </li> <li> <p> <code>Finding size exceeded 240 KB</code>
     * </p> </li> <li> <p> <code>Internal service failure</code> </p> </li> <li> <p>
     * <code>Invalid Input</code> </p> </li> </ul>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The message associated with the error. Possible values are:</p> <ul> <li> <p>
     * <code>Concurrent finding updates detected</code> </p> </li> <li> <p>
     * <code>Finding Identifier is duplicated</code> </p> </li> <li> <p> <code>Finding
     * Not Found</code> </p> </li> <li> <p> <code>Finding size exceeded 240 KB</code>
     * </p> </li> <li> <p> <code>Internal service failure</code> </p> </li> <li> <p>
     * <code>Invalid Input</code> </p> </li> </ul>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The message associated with the error. Possible values are:</p> <ul> <li> <p>
     * <code>Concurrent finding updates detected</code> </p> </li> <li> <p>
     * <code>Finding Identifier is duplicated</code> </p> </li> <li> <p> <code>Finding
     * Not Found</code> </p> </li> <li> <p> <code>Finding size exceeded 240 KB</code>
     * </p> </li> <li> <p> <code>Internal service failure</code> </p> </li> <li> <p>
     * <code>Invalid Input</code> </p> </li> </ul>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The message associated with the error. Possible values are:</p> <ul> <li> <p>
     * <code>Concurrent finding updates detected</code> </p> </li> <li> <p>
     * <code>Finding Identifier is duplicated</code> </p> </li> <li> <p> <code>Finding
     * Not Found</code> </p> </li> <li> <p> <code>Finding size exceeded 240 KB</code>
     * </p> </li> <li> <p> <code>Internal service failure</code> </p> </li> <li> <p>
     * <code>Invalid Input</code> </p> </li> </ul>
     */
    inline BatchUpdateFindingsUnprocessedFinding& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The message associated with the error. Possible values are:</p> <ul> <li> <p>
     * <code>Concurrent finding updates detected</code> </p> </li> <li> <p>
     * <code>Finding Identifier is duplicated</code> </p> </li> <li> <p> <code>Finding
     * Not Found</code> </p> </li> <li> <p> <code>Finding size exceeded 240 KB</code>
     * </p> </li> <li> <p> <code>Internal service failure</code> </p> </li> <li> <p>
     * <code>Invalid Input</code> </p> </li> </ul>
     */
    inline BatchUpdateFindingsUnprocessedFinding& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The message associated with the error. Possible values are:</p> <ul> <li> <p>
     * <code>Concurrent finding updates detected</code> </p> </li> <li> <p>
     * <code>Finding Identifier is duplicated</code> </p> </li> <li> <p> <code>Finding
     * Not Found</code> </p> </li> <li> <p> <code>Finding size exceeded 240 KB</code>
     * </p> </li> <li> <p> <code>Internal service failure</code> </p> </li> <li> <p>
     * <code>Invalid Input</code> </p> </li> </ul>
     */
    inline BatchUpdateFindingsUnprocessedFinding& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    AwsSecurityFindingIdentifier m_findingIdentifier;
    bool m_findingIdentifierHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
