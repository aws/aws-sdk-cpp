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
    AWS_VERIFIEDPERMISSIONS_API PolicyDefinition();
    AWS_VERIFIEDPERMISSIONS_API PolicyDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API PolicyDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure that describes a static policy. An static policy doesn't use a
     * template or allow placeholders for entities.</p>
     */
    inline const StaticPolicyDefinition& GetStatic() const{ return m_static; }

    /**
     * <p>A structure that describes a static policy. An static policy doesn't use a
     * template or allow placeholders for entities.</p>
     */
    inline bool StaticHasBeenSet() const { return m_staticHasBeenSet; }

    /**
     * <p>A structure that describes a static policy. An static policy doesn't use a
     * template or allow placeholders for entities.</p>
     */
    inline void SetStatic(const StaticPolicyDefinition& value) { m_staticHasBeenSet = true; m_static = value; }

    /**
     * <p>A structure that describes a static policy. An static policy doesn't use a
     * template or allow placeholders for entities.</p>
     */
    inline void SetStatic(StaticPolicyDefinition&& value) { m_staticHasBeenSet = true; m_static = std::move(value); }

    /**
     * <p>A structure that describes a static policy. An static policy doesn't use a
     * template or allow placeholders for entities.</p>
     */
    inline PolicyDefinition& WithStatic(const StaticPolicyDefinition& value) { SetStatic(value); return *this;}

    /**
     * <p>A structure that describes a static policy. An static policy doesn't use a
     * template or allow placeholders for entities.</p>
     */
    inline PolicyDefinition& WithStatic(StaticPolicyDefinition&& value) { SetStatic(std::move(value)); return *this;}


    /**
     * <p>A structure that describes a policy that was instantiated from a template.
     * The template can specify placeholders for <code>principal</code> and
     * <code>resource</code>. When you use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_CreatePolicy.html">CreatePolicy</a>
     * to create a policy from a template, you specify the exact principal and resource
     * to use for the instantiated policy.</p>
     */
    inline const TemplateLinkedPolicyDefinition& GetTemplateLinked() const{ return m_templateLinked; }

    /**
     * <p>A structure that describes a policy that was instantiated from a template.
     * The template can specify placeholders for <code>principal</code> and
     * <code>resource</code>. When you use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_CreatePolicy.html">CreatePolicy</a>
     * to create a policy from a template, you specify the exact principal and resource
     * to use for the instantiated policy.</p>
     */
    inline bool TemplateLinkedHasBeenSet() const { return m_templateLinkedHasBeenSet; }

    /**
     * <p>A structure that describes a policy that was instantiated from a template.
     * The template can specify placeholders for <code>principal</code> and
     * <code>resource</code>. When you use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_CreatePolicy.html">CreatePolicy</a>
     * to create a policy from a template, you specify the exact principal and resource
     * to use for the instantiated policy.</p>
     */
    inline void SetTemplateLinked(const TemplateLinkedPolicyDefinition& value) { m_templateLinkedHasBeenSet = true; m_templateLinked = value; }

    /**
     * <p>A structure that describes a policy that was instantiated from a template.
     * The template can specify placeholders for <code>principal</code> and
     * <code>resource</code>. When you use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_CreatePolicy.html">CreatePolicy</a>
     * to create a policy from a template, you specify the exact principal and resource
     * to use for the instantiated policy.</p>
     */
    inline void SetTemplateLinked(TemplateLinkedPolicyDefinition&& value) { m_templateLinkedHasBeenSet = true; m_templateLinked = std::move(value); }

    /**
     * <p>A structure that describes a policy that was instantiated from a template.
     * The template can specify placeholders for <code>principal</code> and
     * <code>resource</code>. When you use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_CreatePolicy.html">CreatePolicy</a>
     * to create a policy from a template, you specify the exact principal and resource
     * to use for the instantiated policy.</p>
     */
    inline PolicyDefinition& WithTemplateLinked(const TemplateLinkedPolicyDefinition& value) { SetTemplateLinked(value); return *this;}

    /**
     * <p>A structure that describes a policy that was instantiated from a template.
     * The template can specify placeholders for <code>principal</code> and
     * <code>resource</code>. When you use <a
     * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_CreatePolicy.html">CreatePolicy</a>
     * to create a policy from a template, you specify the exact principal and resource
     * to use for the instantiated policy.</p>
     */
    inline PolicyDefinition& WithTemplateLinked(TemplateLinkedPolicyDefinition&& value) { SetTemplateLinked(std::move(value)); return *this;}

  private:

    StaticPolicyDefinition m_static;
    bool m_staticHasBeenSet = false;

    TemplateLinkedPolicyDefinition m_templateLinked;
    bool m_templateLinkedHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
