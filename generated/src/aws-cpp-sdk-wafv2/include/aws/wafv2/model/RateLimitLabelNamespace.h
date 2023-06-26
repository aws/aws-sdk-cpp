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
    AWS_WAFV2_API RateLimitLabelNamespace();
    AWS_WAFV2_API RateLimitLabelNamespace(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RateLimitLabelNamespace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The namespace to use for aggregation. </p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace to use for aggregation. </p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace to use for aggregation. </p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace to use for aggregation. </p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace to use for aggregation. </p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace to use for aggregation. </p>
     */
    inline RateLimitLabelNamespace& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace to use for aggregation. </p>
     */
    inline RateLimitLabelNamespace& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace to use for aggregation. </p>
     */
    inline RateLimitLabelNamespace& WithNamespace(const char* value) { SetNamespace(value); return *this;}

  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
