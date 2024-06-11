/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes a single version of a managed rule group. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ManagedRuleGroupVersion">AWS
   * API Reference</a></p>
   */
  class ManagedRuleGroupVersion
  {
  public:
    AWS_WAFV2_API ManagedRuleGroupVersion();
    AWS_WAFV2_API ManagedRuleGroupVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ManagedRuleGroupVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version name. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ManagedRuleGroupVersion& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ManagedRuleGroupVersion& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ManagedRuleGroupVersion& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the managed rule group owner updated the rule group
     * version information. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTimestamp() const{ return m_lastUpdateTimestamp; }
    inline bool LastUpdateTimestampHasBeenSet() const { return m_lastUpdateTimestampHasBeenSet; }
    inline void SetLastUpdateTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = value; }
    inline void SetLastUpdateTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdateTimestampHasBeenSet = true; m_lastUpdateTimestamp = std::move(value); }
    inline ManagedRuleGroupVersion& WithLastUpdateTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdateTimestamp(value); return *this;}
    inline ManagedRuleGroupVersion& WithLastUpdateTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdateTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTimestamp;
    bool m_lastUpdateTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
