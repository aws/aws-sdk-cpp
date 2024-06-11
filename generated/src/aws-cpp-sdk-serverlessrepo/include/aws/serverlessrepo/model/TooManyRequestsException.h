/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
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
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   * <p>The client is sending more than the allowed number of requests per unit of
   * time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/TooManyRequestsException">AWS
   * API Reference</a></p>
   */
  class TooManyRequestsException
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API TooManyRequestsException();
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API TooManyRequestsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API TooManyRequestsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>429</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }
    inline TooManyRequestsException& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}
    inline TooManyRequestsException& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}
    inline TooManyRequestsException& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client is sending more than the allowed number of requests per unit of
     * time.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline TooManyRequestsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline TooManyRequestsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline TooManyRequestsException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
