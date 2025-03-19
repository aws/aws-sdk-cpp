/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about the action that CloudFront or WAF takes when a web request
   * matches the conditions in the rule. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/WafAction">AWS
   * API Reference</a></p>
   */
  class WafAction
  {
  public:
    AWS_SECURITYHUB_API WafAction() = default;
    AWS_SECURITYHUB_API WafAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API WafAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies how you want WAF to respond to requests that match the settings in
     * a rule.</p> <p>Valid settings include the following:</p> <ul> <li> <p>
     * <code>ALLOW</code> - WAF allows requests</p> </li> <li> <p> <code>BLOCK</code> -
     * WAF blocks requests</p> </li> <li> <p> <code>COUNT</code> - WAF increments a
     * counter of the requests that match all of the conditions in the rule. WAF then
     * continues to inspect the web request based on the remaining rules in the web
     * ACL. You can't specify <code>COUNT</code> for the default action for a web
     * ACL.</p> </li> </ul>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    WafAction& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
