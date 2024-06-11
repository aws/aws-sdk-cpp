/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Additional information if the package is in an error state. Null
   * otherwise.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ErrorDetails">AWS
   * API Reference</a></p>
   */
  class ErrorDetails
  {
  public:
    AWS_OPENSEARCHSERVICE_API ErrorDetails();
    AWS_OPENSEARCHSERVICE_API ErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API ErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of error that occurred.</p>
     */
    inline const Aws::String& GetErrorType() const{ return m_errorType; }
    inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }
    inline void SetErrorType(const Aws::String& value) { m_errorTypeHasBeenSet = true; m_errorType = value; }
    inline void SetErrorType(Aws::String&& value) { m_errorTypeHasBeenSet = true; m_errorType = std::move(value); }
    inline void SetErrorType(const char* value) { m_errorTypeHasBeenSet = true; m_errorType.assign(value); }
    inline ErrorDetails& WithErrorType(const Aws::String& value) { SetErrorType(value); return *this;}
    inline ErrorDetails& WithErrorType(Aws::String&& value) { SetErrorType(std::move(value)); return *this;}
    inline ErrorDetails& WithErrorType(const char* value) { SetErrorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message describing the error.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline ErrorDetails& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline ErrorDetails& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline ErrorDetails& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_errorType;
    bool m_errorTypeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
