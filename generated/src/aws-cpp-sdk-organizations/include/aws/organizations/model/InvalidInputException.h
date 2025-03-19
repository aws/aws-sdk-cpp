/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/InvalidInputExceptionReason.h>
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
   * <p>The requested operation failed because you provided invalid values for one or
   * more of the request parameters. This exception includes a reason that contains
   * additional information about the violated limit:</p>  <p>Some of the
   * reasons in the following list might not be applicable to this specific API or
   * operation.</p>  <ul> <li> <p>DUPLICATE_TAG_KEY: Tag keys must be unique
   * among the tags attached to the same entity.</p> </li> <li> <p>IMMUTABLE_POLICY:
   * You specified a policy that is managed by Amazon Web Services and can't be
   * modified.</p> </li> <li> <p>INPUT_REQUIRED: You must include a value for all
   * required parameters.</p> </li> <li> <p>INVALID_EMAIL_ADDRESS_TARGET: You
   * specified an invalid email address for the invited account owner.</p> </li> <li>
   * <p>INVALID_ENUM: You specified an invalid value.</p> </li> <li>
   * <p>INVALID_ENUM_POLICY_TYPE: You specified an invalid policy type string.</p>
   * </li> <li> <p>INVALID_FULL_NAME_TARGET: You specified a full name that contains
   * invalid characters.</p> </li> <li> <p>INVALID_LIST_MEMBER: You provided a list
   * to a parameter that contains at least one invalid value.</p> </li> <li>
   * <p>INVALID_PAGINATION_TOKEN: Get the value for the <code>NextToken</code>
   * parameter from the response to a previous call of the operation.</p> </li> <li>
   * <p>INVALID_PARTY_TYPE_TARGET: You specified the wrong type of entity (account,
   * organization, or email) as a party.</p> </li> <li> <p>INVALID_PATTERN: You
   * provided a value that doesn't match the required pattern.</p> </li> <li>
   * <p>INVALID_PATTERN_TARGET_ID: You specified a policy target ID that doesn't
   * match the required pattern.</p> </li> <li> <p>INVALID_PRINCIPAL: You specified
   * an invalid principal element in the policy.</p> </li> <li> <p>INVALID_ROLE_NAME:
   * You provided a role name that isn't valid. A role name can't begin with the
   * reserved prefix <code>AWSServiceRoleFor</code>.</p> </li> <li>
   * <p>INVALID_SYNTAX_ORGANIZATION_ARN: You specified an invalid Amazon Resource
   * Name (ARN) for the organization.</p> </li> <li> <p>INVALID_SYNTAX_POLICY_ID: You
   * specified an invalid policy ID. </p> </li> <li>
   * <p>INVALID_SYSTEM_TAGS_PARAMETER: You specified a tag key that is a system tag.
   * You can’t add, edit, or delete system tag keys because they're reserved for
   * Amazon Web Services use. System tags don’t count against your tags per resource
   * limit.</p> </li> <li> <p>MAX_FILTER_LIMIT_EXCEEDED: You can specify only one
   * filter parameter for the operation.</p> </li> <li> <p>MAX_LENGTH_EXCEEDED: You
   * provided a string parameter that is longer than allowed.</p> </li> <li>
   * <p>MAX_VALUE_EXCEEDED: You provided a numeric parameter that has a larger value
   * than allowed.</p> </li> <li> <p>MIN_LENGTH_EXCEEDED: You provided a string
   * parameter that is shorter than allowed.</p> </li> <li> <p>MIN_VALUE_EXCEEDED:
   * You provided a numeric parameter that has a smaller value than allowed.</p>
   * </li> <li> <p>MOVING_ACCOUNT_BETWEEN_DIFFERENT_ROOTS: You can move an account
   * only between entities in the same root.</p> </li> <li> <p>NON_DETACHABLE_POLICY:
   * You can't detach this Amazon Web Services Managed Policy.</p> </li> <li>
   * <p>TARGET_NOT_SUPPORTED: You can't perform the specified operation on that
   * target entity.</p> </li> <li> <p>UNRECOGNIZED_SERVICE_PRINCIPAL: You specified a
   * service principal that isn't recognized.</p> </li> </ul><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/InvalidInputException">AWS
   * API Reference</a></p>
   */
  class InvalidInputException
  {
  public:
    AWS_ORGANIZATIONS_API InvalidInputException() = default;
    AWS_ORGANIZATIONS_API InvalidInputException(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API InvalidInputException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    InvalidInputException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline InvalidInputExceptionReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(InvalidInputExceptionReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline InvalidInputException& WithReason(InvalidInputExceptionReason value) { SetReason(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    InvalidInputExceptionReason m_reason{InvalidInputExceptionReason::NOT_SET};
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
