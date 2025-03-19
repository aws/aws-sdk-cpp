/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
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
namespace VerifiedPermissions
{
namespace Model
{

  /**
   * <p>Contains information about an update to a static policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/UpdateStaticPolicyDefinition">AWS
   * API Reference</a></p>
   */
  class UpdateStaticPolicyDefinition
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API UpdateStaticPolicyDefinition() = default;
    AWS_VERIFIEDPERMISSIONS_API UpdateStaticPolicyDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API UpdateStaticPolicyDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the description to be added to or replaced on the static
     * policy.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateStaticPolicyDefinition& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Cedar policy language text to be added to or replaced on the
     * static policy.</p>  <p>You can change only the following elements
     * from the original content:</p> <ul> <li> <p>The <code>action</code> referenced
     * by the policy.</p> </li> <li> <p>Any conditional clauses, such as
     * <code>when</code> or <code>unless</code> clauses.</p> </li> </ul> <p>You
     * <b>can't</b> change the following elements:</p> <ul> <li> <p>Changing from
     * <code>StaticPolicy</code> to <code>TemplateLinkedPolicy</code>.</p> </li> <li>
     * <p>The effect (<code>permit</code> or <code>forbid</code>) of the policy.</p>
     * </li> <li> <p>The <code>principal</code> referenced by the policy.</p> </li>
     * <li> <p>The <code>resource</code> referenced by the policy.</p> </li> </ul>
     * 
     */
    inline const Aws::String& GetStatement() const { return m_statement; }
    inline bool StatementHasBeenSet() const { return m_statementHasBeenSet; }
    template<typename StatementT = Aws::String>
    void SetStatement(StatementT&& value) { m_statementHasBeenSet = true; m_statement = std::forward<StatementT>(value); }
    template<typename StatementT = Aws::String>
    UpdateStaticPolicyDefinition& WithStatement(StatementT&& value) { SetStatement(std::forward<StatementT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_statement;
    bool m_statementHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
