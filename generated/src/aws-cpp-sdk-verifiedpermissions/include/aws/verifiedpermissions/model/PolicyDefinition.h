/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/StaticPolicyDefinition.h>
#include <aws/verifiedpermissions/model/TemplateLinkedPolicyDefinition.h>
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
   * <p>A structure that contains the details for a Cedar policy definition. It
   * includes the policy type, a description, and a policy body. This is a top level
   * data type used to create a policy.</p> <p>This data type is used as a request
   * parameter for the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_CreatePolicy.html">CreatePolicy</a>
   * operation. This structure must always have either an <code>static</code> or a
   * <code>templateLinked</code> element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/PolicyDefinition">AWS
   * API Reference</a></p>
   */
  class PolicyDefinition
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API PolicyDefinition() = default;
    AWS_VERIFIEDPERMISSIONS_API PolicyDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API PolicyDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that describes a static policy. An static policy doesn't use a
     * template or allow placeholders for entities.</p>
     */
    inline const StaticPolicyDefinition& GetStatic() const { return m_static; }
    inline bool StaticHasBeenSet() const { return m_staticHasBeenSet; }
    template<typename StaticT = StaticPolicyDefinition>
    void SetStatic(StaticT&& value) { m_staticHasBeenSet = true; m_static = std::forward<StaticT>(value); }
    template<typename StaticT = StaticPolicyDefinition>
    PolicyDefinition& WithStatic(StaticT&& value) { SetStatic(std::forward<StaticT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes a policy that was instantiated from a template.
     * The template can specify placeholders for <code>principal</code> and
     * <code>resource</code>. When you use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_CreatePolicy.html">CreatePolicy</a>
     * to create a policy from a template, you specify the exact principal and resource
     * to use for the instantiated policy.</p>
     */
    inline const TemplateLinkedPolicyDefinition& GetTemplateLinked() const { return m_templateLinked; }
    inline bool TemplateLinkedHasBeenSet() const { return m_templateLinkedHasBeenSet; }
    template<typename TemplateLinkedT = TemplateLinkedPolicyDefinition>
    void SetTemplateLinked(TemplateLinkedT&& value) { m_templateLinkedHasBeenSet = true; m_templateLinked = std::forward<TemplateLinkedT>(value); }
    template<typename TemplateLinkedT = TemplateLinkedPolicyDefinition>
    PolicyDefinition& WithTemplateLinked(TemplateLinkedT&& value) { SetTemplateLinked(std::forward<TemplateLinkedT>(value)); return *this;}
    ///@}
  private:

    StaticPolicyDefinition m_static;
    bool m_staticHasBeenSet = false;

    TemplateLinkedPolicyDefinition m_templateLinked;
    bool m_templateLinkedHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
