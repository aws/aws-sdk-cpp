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
   * <p>Provides information about what action WAF should take on a web request when
   * it matches the criteria defined in the rule. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRuleGroupRulesActionDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafRuleGroupRulesActionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafRuleGroupRulesActionDetails();
    AWS_SECURITYHUB_API AwsWafRuleGroupRulesActionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafRuleGroupRulesActionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action that WAF should take on a web request when it matches the rule's
     * statement.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline AwsWafRuleGroupRulesActionDetails& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline AwsWafRuleGroupRulesActionDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline AwsWafRuleGroupRulesActionDetails& WithType(const char* value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
