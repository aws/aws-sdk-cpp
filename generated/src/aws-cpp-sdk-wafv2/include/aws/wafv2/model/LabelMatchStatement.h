/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/LabelMatchScope.h>
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
   * <p>A rule statement to match against labels that have been added to the web
   * request by rules that have already run in the web ACL. </p> <p>The label match
   * statement provides the label or namespace string to search for. The label string
   * can represent a part or all of the fully qualified label name that had been
   * added to the web request. Fully qualified labels have a prefix, optional
   * namespaces, and label name. The prefix identifies the rule group or web ACL
   * context of the rule that added the label. If you do not provide the fully
   * qualified name in your label match string, WAF performs the search for labels
   * that were added in the same context as the label match statement. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/LabelMatchStatement">AWS
   * API Reference</a></p>
   */
  class LabelMatchStatement
  {
  public:
    AWS_WAFV2_API LabelMatchStatement() = default;
    AWS_WAFV2_API LabelMatchStatement(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API LabelMatchStatement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify whether you want to match using the label name or just the namespace.
     * </p>
     */
    inline LabelMatchScope GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(LabelMatchScope value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline LabelMatchStatement& WithScope(LabelMatchScope value) { SetScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string to match against. The setting you provide for this depends on the
     * match statement's <code>Scope</code> setting: </p> <ul> <li> <p>If the
     * <code>Scope</code> indicates <code>LABEL</code>, then this specification must
     * include the name and can include any number of preceding namespace
     * specifications and prefix up to providing the fully qualified label name. </p>
     * </li> <li> <p>If the <code>Scope</code> indicates <code>NAMESPACE</code>, then
     * this specification can include any number of contiguous namespace strings, and
     * can include the entire label namespace prefix from the rule group or web ACL
     * where the label originates.</p> </li> </ul> <p>Labels are case sensitive and
     * components of a label must be separated by colon, for example
     * <code>NS1:NS2:name</code>.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    LabelMatchStatement& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}
  private:

    LabelMatchScope m_scope{LabelMatchScope::NOT_SET};
    bool m_scopeHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
