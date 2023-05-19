/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/ValidationExceptionType.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The input failed to meet the constraints specified by the AWS
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_MEDIAPACKAGEV2_API ValidationException();
    AWS_MEDIAPACKAGEV2_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The type of ValidationException.</p>
     */
    inline const ValidationExceptionType& GetValidationExceptionType() const{ return m_validationExceptionType; }

    /**
     * <p>The type of ValidationException.</p>
     */
    inline bool ValidationExceptionTypeHasBeenSet() const { return m_validationExceptionTypeHasBeenSet; }

    /**
     * <p>The type of ValidationException.</p>
     */
    inline void SetValidationExceptionType(const ValidationExceptionType& value) { m_validationExceptionTypeHasBeenSet = true; m_validationExceptionType = value; }

    /**
     * <p>The type of ValidationException.</p>
     */
    inline void SetValidationExceptionType(ValidationExceptionType&& value) { m_validationExceptionTypeHasBeenSet = true; m_validationExceptionType = std::move(value); }

    /**
     * <p>The type of ValidationException.</p>
     */
    inline ValidationException& WithValidationExceptionType(const ValidationExceptionType& value) { SetValidationExceptionType(value); return *this;}

    /**
     * <p>The type of ValidationException.</p>
     */
    inline ValidationException& WithValidationExceptionType(ValidationExceptionType&& value) { SetValidationExceptionType(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ValidationExceptionType m_validationExceptionType;
    bool m_validationExceptionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
