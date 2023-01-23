/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The impersonation rule that matched the input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ImpersonationMatchedRule">AWS
   * API Reference</a></p>
   */
  class ImpersonationMatchedRule
  {
  public:
    AWS_WORKMAIL_API ImpersonationMatchedRule();
    AWS_WORKMAIL_API ImpersonationMatchedRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API ImpersonationMatchedRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the rule that matched the input</p>
     */
    inline const Aws::String& GetImpersonationRuleId() const{ return m_impersonationRuleId; }

    /**
     * <p>The ID of the rule that matched the input</p>
     */
    inline bool ImpersonationRuleIdHasBeenSet() const { return m_impersonationRuleIdHasBeenSet; }

    /**
     * <p>The ID of the rule that matched the input</p>
     */
    inline void SetImpersonationRuleId(const Aws::String& value) { m_impersonationRuleIdHasBeenSet = true; m_impersonationRuleId = value; }

    /**
     * <p>The ID of the rule that matched the input</p>
     */
    inline void SetImpersonationRuleId(Aws::String&& value) { m_impersonationRuleIdHasBeenSet = true; m_impersonationRuleId = std::move(value); }

    /**
     * <p>The ID of the rule that matched the input</p>
     */
    inline void SetImpersonationRuleId(const char* value) { m_impersonationRuleIdHasBeenSet = true; m_impersonationRuleId.assign(value); }

    /**
     * <p>The ID of the rule that matched the input</p>
     */
    inline ImpersonationMatchedRule& WithImpersonationRuleId(const Aws::String& value) { SetImpersonationRuleId(value); return *this;}

    /**
     * <p>The ID of the rule that matched the input</p>
     */
    inline ImpersonationMatchedRule& WithImpersonationRuleId(Aws::String&& value) { SetImpersonationRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the rule that matched the input</p>
     */
    inline ImpersonationMatchedRule& WithImpersonationRuleId(const char* value) { SetImpersonationRuleId(value); return *this;}


    /**
     * <p>The name of the rule that matched the input.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule that matched the input.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rule that matched the input.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rule that matched the input.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rule that matched the input.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rule that matched the input.</p>
     */
    inline ImpersonationMatchedRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule that matched the input.</p>
     */
    inline ImpersonationMatchedRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule that matched the input.</p>
     */
    inline ImpersonationMatchedRule& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_impersonationRuleId;
    bool m_impersonationRuleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
