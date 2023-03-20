/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
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
namespace S3Outposts
{
namespace Model
{

  /**
   * <p>The failure reason, if any, for a create or delete endpoint
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3outposts-2017-07-25/FailedReason">AWS
   * API Reference</a></p>
   */
  class FailedReason
  {
  public:
    AWS_S3OUTPOSTS_API FailedReason();
    AWS_S3OUTPOSTS_API FailedReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3OUTPOSTS_API FailedReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The failure code, if any, for a create or delete endpoint operation.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The failure code, if any, for a create or delete endpoint operation.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The failure code, if any, for a create or delete endpoint operation.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The failure code, if any, for a create or delete endpoint operation.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The failure code, if any, for a create or delete endpoint operation.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The failure code, if any, for a create or delete endpoint operation.</p>
     */
    inline FailedReason& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The failure code, if any, for a create or delete endpoint operation.</p>
     */
    inline FailedReason& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The failure code, if any, for a create or delete endpoint operation.</p>
     */
    inline FailedReason& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>Additional error details describing the endpoint failure and recommended
     * action.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Additional error details describing the endpoint failure and recommended
     * action.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Additional error details describing the endpoint failure and recommended
     * action.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Additional error details describing the endpoint failure and recommended
     * action.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Additional error details describing the endpoint failure and recommended
     * action.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Additional error details describing the endpoint failure and recommended
     * action.</p>
     */
    inline FailedReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Additional error details describing the endpoint failure and recommended
     * action.</p>
     */
    inline FailedReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Additional error details describing the endpoint failure and recommended
     * action.</p>
     */
    inline FailedReason& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Outposts
} // namespace Aws
