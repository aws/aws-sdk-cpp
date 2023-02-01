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
   * <p>The action that WAF takes when a web request matches all conditions in the
   * rule, such as allow, block, or count the request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRegionalWebAclRulesListActionDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafRegionalWebAclRulesListActionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafRegionalWebAclRulesListActionDetails();
    AWS_SECURITYHUB_API AwsWafRegionalWebAclRulesListActionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafRegionalWebAclRulesListActionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>For actions that are associated with a rule, the action that WAF takes when a
     * web request matches all conditions in a rule. </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>For actions that are associated with a rule, the action that WAF takes when a
     * web request matches all conditions in a rule. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>For actions that are associated with a rule, the action that WAF takes when a
     * web request matches all conditions in a rule. </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>For actions that are associated with a rule, the action that WAF takes when a
     * web request matches all conditions in a rule. </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>For actions that are associated with a rule, the action that WAF takes when a
     * web request matches all conditions in a rule. </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>For actions that are associated with a rule, the action that WAF takes when a
     * web request matches all conditions in a rule. </p>
     */
    inline AwsWafRegionalWebAclRulesListActionDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>For actions that are associated with a rule, the action that WAF takes when a
     * web request matches all conditions in a rule. </p>
     */
    inline AwsWafRegionalWebAclRulesListActionDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>For actions that are associated with a rule, the action that WAF takes when a
     * web request matches all conditions in a rule. </p>
     */
    inline AwsWafRegionalWebAclRulesListActionDetails& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
