/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/shield/model/ValidationExceptionReason.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/model/ValidationExceptionField.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>Exception that indicates that the parameters passed to the API are invalid.
   * If available, this exception includes details in additional properties.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/InvalidParameterException">AWS
   * API Reference</a></p>
   */
  class InvalidParameterException
  {
  public:
    AWS_SHIELD_API InvalidParameterException();
    AWS_SHIELD_API InvalidParameterException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API InvalidParameterException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline InvalidParameterException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline InvalidParameterException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline InvalidParameterException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Additional information about the exception.</p>
     */
    inline const ValidationExceptionReason& GetReason() const{ return m_reason; }

    /**
     * <p>Additional information about the exception.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Additional information about the exception.</p>
     */
    inline void SetReason(const ValidationExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Additional information about the exception.</p>
     */
    inline void SetReason(ValidationExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Additional information about the exception.</p>
     */
    inline InvalidParameterException& WithReason(const ValidationExceptionReason& value) { SetReason(value); return *this;}

    /**
     * <p>Additional information about the exception.</p>
     */
    inline InvalidParameterException& WithReason(ValidationExceptionReason&& value) { SetReason(std::move(value)); return *this;}


    /**
     * <p>Fields that caused the exception.</p>
     */
    inline const Aws::Vector<ValidationExceptionField>& GetFields() const{ return m_fields; }

    /**
     * <p>Fields that caused the exception.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>Fields that caused the exception.</p>
     */
    inline void SetFields(const Aws::Vector<ValidationExceptionField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>Fields that caused the exception.</p>
     */
    inline void SetFields(Aws::Vector<ValidationExceptionField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>Fields that caused the exception.</p>
     */
    inline InvalidParameterException& WithFields(const Aws::Vector<ValidationExceptionField>& value) { SetFields(value); return *this;}

    /**
     * <p>Fields that caused the exception.</p>
     */
    inline InvalidParameterException& WithFields(Aws::Vector<ValidationExceptionField>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>Fields that caused the exception.</p>
     */
    inline InvalidParameterException& AddFields(const ValidationExceptionField& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>Fields that caused the exception.</p>
     */
    inline InvalidParameterException& AddFields(ValidationExceptionField&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ValidationExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;

    Aws::Vector<ValidationExceptionField> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
