/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/verifiedpermissions/model/ValidationExceptionField.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>The request failed because one or more input parameters don't satisfy their
   * constraint requirements. The output is provided as a list of fields and a reason
   * for each field that isn't valid.</p> <p>The possible reasons include the
   * following:</p> <ul> <li> <p> <b>UnrecognizedEntityType</b> </p> <p>The policy
   * includes an entity type that isn't found in the schema.</p> </li> <li> <p>
   * <b>UnrecognizedActionId</b> </p> <p>The policy includes an action id that isn't
   * found in the schema.</p> </li> <li> <p> <b>InvalidActionApplication</b> </p>
   * <p>The policy includes an action that, according to the schema, doesn't support
   * the specified principal and resource.</p> </li> <li> <p> <b>UnexpectedType</b>
   * </p> <p>The policy included an operand that isn't a valid type for the specified
   * operation.</p> </li> <li> <p> <b>IncompatibleTypes</b> </p> <p>The types of
   * elements included in a <code>set</code>, or the types of expressions used in an
   * <code>if...then...else</code> clause aren't compatible in this context.</p>
   * </li> <li> <p> <b>MissingAttribute</b> </p> <p>The policy attempts to access a
   * record or entity attribute that isn't specified in the schema. Test for the
   * existence of the attribute first before attempting to access its value. For more
   * information, see the <a
   * href="https://docs.cedarpolicy.com/policies/syntax-operators.html#has-presence-of-attribute-test">has
   * (presence of attribute test) operator</a> in the <i>Cedar Policy Language
   * Guide</i>.</p> </li> <li> <p> <b>UnsafeOptionalAttributeAccess</b> </p> <p>The
   * policy attempts to access a record or entity attribute that is optional and
   * isn't guaranteed to be present. Test for the existence of the attribute first
   * before attempting to access its value. For more information, see the <a
   * href="https://docs.cedarpolicy.com/policies/syntax-operators.html#has-presence-of-attribute-test">has
   * (presence of attribute test) operator</a> in the <i>Cedar Policy Language
   * Guide</i>.</p> </li> <li> <p> <b>ImpossiblePolicy</b> </p> <p>Cedar has
   * determined that a policy condition always evaluates to false. If the policy is
   * always false, it can never apply to any query, and so it can never affect an
   * authorization decision.</p> </li> <li> <p> <b>WrongNumberArguments</b> </p>
   * <p>The policy references an extension type with the wrong number of
   * arguments.</p> </li> <li> <p> <b>FunctionArgumentValidationError</b> </p>
   * <p>Cedar couldn't parse the argument passed to an extension type. For example, a
   * string that is to be parsed as an IPv4 address can contain only digits and the
   * period character.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API ValidationException() = default;
    AWS_VERIFIEDPERMISSIONS_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ValidationException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of fields that aren't valid.</p>
     */
    inline const Aws::Vector<ValidationExceptionField>& GetFieldList() const { return m_fieldList; }
    inline bool FieldListHasBeenSet() const { return m_fieldListHasBeenSet; }
    template<typename FieldListT = Aws::Vector<ValidationExceptionField>>
    void SetFieldList(FieldListT&& value) { m_fieldListHasBeenSet = true; m_fieldList = std::forward<FieldListT>(value); }
    template<typename FieldListT = Aws::Vector<ValidationExceptionField>>
    ValidationException& WithFieldList(FieldListT&& value) { SetFieldList(std::forward<FieldListT>(value)); return *this;}
    template<typename FieldListT = ValidationExceptionField>
    ValidationException& AddFieldList(FieldListT&& value) { m_fieldListHasBeenSet = true; m_fieldList.emplace_back(std::forward<FieldListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Vector<ValidationExceptionField> m_fieldList;
    bool m_fieldListHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
