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
    AWS_WAFV2_API WAFInvalidParameterException() = default;
    AWS_WAFV2_API WAFInvalidParameterException(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API WAFInvalidParameterException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    WAFInvalidParameterException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings where the invalid parameter was found. </p>
     */
    inline ParameterExceptionField GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    inline void SetField(ParameterExceptionField value) { m_fieldHasBeenSet = true; m_field = value; }
    inline WAFInvalidParameterException& WithField(ParameterExceptionField value) { SetField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The invalid parameter that resulted in the exception. </p>
     */
    inline const Aws::String& GetParameter() const { return m_parameter; }
    inline bool ParameterHasBeenSet() const { return m_parameterHasBeenSet; }
    template<typename ParameterT = Aws::String>
    void SetParameter(ParameterT&& value) { m_parameterHasBeenSet = true; m_parameter = std::forward<ParameterT>(value); }
    template<typename ParameterT = Aws::String>
    WAFInvalidParameterException& WithParameter(ParameterT&& value) { SetParameter(std::forward<ParameterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the exception.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    WAFInvalidParameterException& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ParameterExceptionField m_field{ParameterExceptionField::NOT_SET};
    bool m_fieldHasBeenSet = false;

    Aws::String m_parameter;
    bool m_parameterHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
