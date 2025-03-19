/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/ValidationError.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for UnprocessableEntityException<p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UnprocessableEntityException">AWS
   * API Reference</a></p>
   */
  class UnprocessableEntityException
  {
  public:
    AWS_MEDIALIVE_API UnprocessableEntityException() = default;
    AWS_MEDIALIVE_API UnprocessableEntityException(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API UnprocessableEntityException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The error message.
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    UnprocessableEntityException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A collection of validation error responses.
     */
    inline const Aws::Vector<ValidationError>& GetValidationErrors() const { return m_validationErrors; }
    inline bool ValidationErrorsHasBeenSet() const { return m_validationErrorsHasBeenSet; }
    template<typename ValidationErrorsT = Aws::Vector<ValidationError>>
    void SetValidationErrors(ValidationErrorsT&& value) { m_validationErrorsHasBeenSet = true; m_validationErrors = std::forward<ValidationErrorsT>(value); }
    template<typename ValidationErrorsT = Aws::Vector<ValidationError>>
    UnprocessableEntityException& WithValidationErrors(ValidationErrorsT&& value) { SetValidationErrors(std::forward<ValidationErrorsT>(value)); return *this;}
    template<typename ValidationErrorsT = ValidationError>
    UnprocessableEntityException& AddValidationErrors(ValidationErrorsT&& value) { m_validationErrorsHasBeenSet = true; m_validationErrors.emplace_back(std::forward<ValidationErrorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<ValidationError> m_validationErrors;
    bool m_validationErrorsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
