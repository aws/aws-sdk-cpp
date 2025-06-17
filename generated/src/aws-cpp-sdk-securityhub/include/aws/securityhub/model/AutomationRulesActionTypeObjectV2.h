/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AutomationRulesActionTypeV2.h>
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
   * <p>Allows you to customize security response workflows.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AutomationRulesActionTypeObjectV2">AWS
   * API Reference</a></p>
   */
  class AutomationRulesActionTypeObjectV2
  {
  public:
    AWS_SECURITYHUB_API AutomationRulesActionTypeObjectV2() = default;
    AWS_SECURITYHUB_API AutomationRulesActionTypeObjectV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AutomationRulesActionTypeObjectV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category of action to be executed by the automation rule.</p>
     */
    inline AutomationRulesActionTypeV2 GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AutomationRulesActionTypeV2 value) { m_typeHasBeenSet = true; m_type = value; }
    inline AutomationRulesActionTypeObjectV2& WithType(AutomationRulesActionTypeV2 value) { SetType(value); return *this;}
    ///@}
  private:

    AutomationRulesActionTypeV2 m_type{AutomationRulesActionTypeV2::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
