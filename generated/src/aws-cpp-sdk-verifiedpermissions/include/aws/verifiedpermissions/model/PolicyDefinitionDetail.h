﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/StaticPolicyDefinitionDetail.h>
#include <aws/verifiedpermissions/model/TemplateLinkedPolicyDefinitionDetail.h>
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
   * <p>A structure that describes a policy definition. It must always have either an
   * <code>static</code> or a <code>templateLinked</code> element.</p> <p>This data
   * type is used as a response parameter for the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_GetPolicy.html">GetPolicy</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/PolicyDefinitionDetail">AWS
   * API Reference</a></p>
   */
  class PolicyDefinitionDetail
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API PolicyDefinitionDetail() = default;
    AWS_VERIFIEDPERMISSIONS_API PolicyDefinitionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API PolicyDefinitionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VERIFIEDPERMISSIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about a static policy that wasn't created with a policy
     * template.</p>
     */
    inline const StaticPolicyDefinitionDetail& GetStatic() const { return m_static; }
    inline bool StaticHasBeenSet() const { return m_staticHasBeenSet; }
    template<typename StaticT = StaticPolicyDefinitionDetail>
    void SetStatic(StaticT&& value) { m_staticHasBeenSet = true; m_static = std::forward<StaticT>(value); }
    template<typename StaticT = StaticPolicyDefinitionDetail>
    PolicyDefinitionDetail& WithStatic(StaticT&& value) { SetStatic(std::forward<StaticT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a template-linked policy that was created by instantiating
     * a policy template.</p>
     */
    inline const TemplateLinkedPolicyDefinitionDetail& GetTemplateLinked() const { return m_templateLinked; }
    inline bool TemplateLinkedHasBeenSet() const { return m_templateLinkedHasBeenSet; }
    template<typename TemplateLinkedT = TemplateLinkedPolicyDefinitionDetail>
    void SetTemplateLinked(TemplateLinkedT&& value) { m_templateLinkedHasBeenSet = true; m_templateLinked = std::forward<TemplateLinkedT>(value); }
    template<typename TemplateLinkedT = TemplateLinkedPolicyDefinitionDetail>
    PolicyDefinitionDetail& WithTemplateLinked(TemplateLinkedT&& value) { SetTemplateLinked(std::forward<TemplateLinkedT>(value)); return *this;}
    ///@}
  private:

    StaticPolicyDefinitionDetail m_static;
    bool m_staticHasBeenSet = false;

    TemplateLinkedPolicyDefinitionDetail m_templateLinked;
    bool m_templateLinkedHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
