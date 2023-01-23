/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
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
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>A resource that failed to be added to or removed from a group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/FailedResource">AWS
   * API Reference</a></p>
   */
  class FailedResource
  {
  public:
    AWS_RESOURCEGROUPS_API FailedResource();
    AWS_RESOURCEGROUPS_API FailedResource(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API FailedResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the resource that failed to be added or removed.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the resource that failed to be added or removed.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN of the resource that failed to be added or removed.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the resource that failed to be added or removed.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the resource that failed to be added or removed.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the resource that failed to be added or removed.</p>
     */
    inline FailedResource& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the resource that failed to be added or removed.</p>
     */
    inline FailedResource& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource that failed to be added or removed.</p>
     */
    inline FailedResource& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The error message text associated with the failure.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message text associated with the failure.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message text associated with the failure.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message text associated with the failure.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message text associated with the failure.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message text associated with the failure.</p>
     */
    inline FailedResource& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message text associated with the failure.</p>
     */
    inline FailedResource& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message text associated with the failure.</p>
     */
    inline FailedResource& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>The error code associated with the failure.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code associated with the failure.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code associated with the failure.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code associated with the failure.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code associated with the failure.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code associated with the failure.</p>
     */
    inline FailedResource& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code associated with the failure.</p>
     */
    inline FailedResource& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code associated with the failure.</p>
     */
    inline FailedResource& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
