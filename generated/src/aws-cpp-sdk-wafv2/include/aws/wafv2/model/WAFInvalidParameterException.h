/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/ParameterExceptionField.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>The operation failed because WAF didn't recognize a parameter in the request.
   * For example: </p> <ul> <li> <p>You specified a parameter name or value that
   * isn't valid.</p> </li> <li> <p>Your nested statement isn't valid. You might have
   * tried to nest a statement that can’t be nested. </p> </li> <li> <p>You tried to
   * update a <code>WebACL</code> with a <code>DefaultAction</code> that isn't among
   * the types available at <a>DefaultAction</a>.</p> </li> <li> <p>Your request
   * references an ARN that is malformed, or corresponds to a resource with which a
   * web ACL can't be associated.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/WAFInvalidParameterException">AWS
   * API Reference</a></p>
   */
  class WAFInvalidParameterException
  {
  public:
    AWS_WAFV2_API WAFInvalidParameterException();
    AWS_WAFV2_API WAFInvalidParameterException(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API WAFInvalidParameterException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline WAFInvalidParameterException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline WAFInvalidParameterException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline WAFInvalidParameterException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The settings where the invalid parameter was found. </p>
     */
    inline const ParameterExceptionField& GetField() const{ return m_field; }

    /**
     * <p>The settings where the invalid parameter was found. </p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>The settings where the invalid parameter was found. </p>
     */
    inline void SetField(const ParameterExceptionField& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The settings where the invalid parameter was found. </p>
     */
    inline void SetField(ParameterExceptionField&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>The settings where the invalid parameter was found. </p>
     */
    inline WAFInvalidParameterException& WithField(const ParameterExceptionField& value) { SetField(value); return *this;}

    /**
     * <p>The settings where the invalid parameter was found. </p>
     */
    inline WAFInvalidParameterException& WithField(ParameterExceptionField&& value) { SetField(std::move(value)); return *this;}


    /**
     * <p>The invalid parameter that resulted in the exception. </p>
     */
    inline const Aws::String& GetParameter() const{ return m_parameter; }

    /**
     * <p>The invalid parameter that resulted in the exception. </p>
     */
    inline bool ParameterHasBeenSet() const { return m_parameterHasBeenSet; }

    /**
     * <p>The invalid parameter that resulted in the exception. </p>
     */
    inline void SetParameter(const Aws::String& value) { m_parameterHasBeenSet = true; m_parameter = value; }

    /**
     * <p>The invalid parameter that resulted in the exception. </p>
     */
    inline void SetParameter(Aws::String&& value) { m_parameterHasBeenSet = true; m_parameter = std::move(value); }

    /**
     * <p>The invalid parameter that resulted in the exception. </p>
     */
    inline void SetParameter(const char* value) { m_parameterHasBeenSet = true; m_parameter.assign(value); }

    /**
     * <p>The invalid parameter that resulted in the exception. </p>
     */
    inline WAFInvalidParameterException& WithParameter(const Aws::String& value) { SetParameter(value); return *this;}

    /**
     * <p>The invalid parameter that resulted in the exception. </p>
     */
    inline WAFInvalidParameterException& WithParameter(Aws::String&& value) { SetParameter(std::move(value)); return *this;}

    /**
     * <p>The invalid parameter that resulted in the exception. </p>
     */
    inline WAFInvalidParameterException& WithParameter(const char* value) { SetParameter(value); return *this;}


    /**
     * <p>Additional information about the exception.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>Additional information about the exception.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>Additional information about the exception.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>Additional information about the exception.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>Additional information about the exception.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>Additional information about the exception.</p>
     */
    inline WAFInvalidParameterException& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>Additional information about the exception.</p>
     */
    inline WAFInvalidParameterException& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>Additional information about the exception.</p>
     */
    inline WAFInvalidParameterException& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ParameterExceptionField m_field;
    bool m_fieldHasBeenSet = false;

    Aws::String m_parameter;
    bool m_parameterHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
