/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/AccessDeniedForDependencyExceptionReason.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>The operation that you attempted requires you to have the
   * <code>iam:CreateServiceLinkedRole</code> for
   * <code>organizations.amazonaws.com</code> permission so that Organizations can
   * create the required service-linked role. You don't have that
   * permission.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/AccessDeniedForDependencyException">AWS
   * API Reference</a></p>
   */
  class AccessDeniedForDependencyException
  {
  public:
    AWS_ORGANIZATIONS_API AccessDeniedForDependencyException() = default;
    AWS_ORGANIZATIONS_API AccessDeniedForDependencyException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API AccessDeniedForDependencyException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    AccessDeniedForDependencyException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline AccessDeniedForDependencyExceptionReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(AccessDeniedForDependencyExceptionReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline AccessDeniedForDependencyException& WithReason(AccessDeniedForDependencyExceptionReason value) { SetReason(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    AccessDeniedForDependencyExceptionReason m_reason{AccessDeniedForDependencyExceptionReason::NOT_SET};
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
