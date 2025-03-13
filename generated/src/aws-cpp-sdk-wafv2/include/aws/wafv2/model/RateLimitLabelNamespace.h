/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Specifies a label namespace to use as an aggregate key for a rate-based rule.
   * Each distinct fully qualified label name that has the specified label namespace
   * contributes to the aggregation instance. If you use just one label namespace as
   * your custom key, then each label name fully defines an aggregation instance.
   * </p> <p>This uses only labels that have been added to the request by rules that
   * are evaluated before this rate-based rule in the web ACL. </p> <p>For
   * information about label namespaces and names, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-rule-label-requirements.html">Label
   * syntax and naming requirements</a> in the <i>WAF Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RateLimitLabelNamespace">AWS
   * API Reference</a></p>
   */
  class RateLimitLabelNamespace
  {
  public:
    AWS_WAFV2_API RateLimitLabelNamespace() = default;
    AWS_WAFV2_API RateLimitLabelNamespace(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RateLimitLabelNamespace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The namespace to use for aggregation. </p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    RateLimitLabelNamespace& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
