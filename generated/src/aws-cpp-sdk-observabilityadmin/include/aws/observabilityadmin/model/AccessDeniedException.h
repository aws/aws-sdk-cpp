/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
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
namespace ObservabilityAdmin
{
namespace Model
{

  /**
   * <p> Indicates you don't have permissions to perform the requested operation. The
   * user or role that is making the request must have at least one IAM permissions
   * policy attached that grants the required permissions. For more information, see
   * <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access.html">Access
   * management for Amazon Web Services resources</a> in the IAM user guide.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AccessDeniedException">AWS
   * API Reference</a></p>
   */
  class AccessDeniedException
  {
  public:
    AWS_OBSERVABILITYADMIN_API AccessDeniedException() = default;
    AWS_OBSERVABILITYADMIN_API AccessDeniedException(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API AccessDeniedException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    AccessDeniedException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the exception. </p>
     */
    inline const Aws::String& GetAmznErrorType() const { return m_amznErrorType; }
    inline bool AmznErrorTypeHasBeenSet() const { return m_amznErrorTypeHasBeenSet; }
    template<typename AmznErrorTypeT = Aws::String>
    void SetAmznErrorType(AmznErrorTypeT&& value) { m_amznErrorTypeHasBeenSet = true; m_amznErrorType = std::forward<AmznErrorTypeT>(value); }
    template<typename AmznErrorTypeT = Aws::String>
    AccessDeniedException& WithAmznErrorType(AmznErrorTypeT&& value) { SetAmznErrorType(std::forward<AmznErrorTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_amznErrorType;
    bool m_amznErrorTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
