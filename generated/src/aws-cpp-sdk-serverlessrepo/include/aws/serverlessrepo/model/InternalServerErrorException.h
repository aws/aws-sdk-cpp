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
   * <p>The AWS Serverless Application Repository service encountered an internal
   * error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/InternalServerErrorException">AWS
   * API Reference</a></p>
   */
  class InternalServerErrorException
  {
  public:
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API InternalServerErrorException();
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API InternalServerErrorException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API InternalServerErrorException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVERLESSAPPLICATIONREPOSITORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>500</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>500</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>500</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>500</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>500</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>500</p>
     */
    inline InternalServerErrorException& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>500</p>
     */
    inline InternalServerErrorException& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>500</p>
     */
    inline InternalServerErrorException& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The AWS Serverless Application Repository service encountered an internal
     * error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The AWS Serverless Application Repository service encountered an internal
     * error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The AWS Serverless Application Repository service encountered an internal
     * error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The AWS Serverless Application Repository service encountered an internal
     * error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The AWS Serverless Application Repository service encountered an internal
     * error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The AWS Serverless Application Repository service encountered an internal
     * error.</p>
     */
    inline InternalServerErrorException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The AWS Serverless Application Repository service encountered an internal
     * error.</p>
     */
    inline InternalServerErrorException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The AWS Serverless Application Repository service encountered an internal
     * error.</p>
     */
    inline InternalServerErrorException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
