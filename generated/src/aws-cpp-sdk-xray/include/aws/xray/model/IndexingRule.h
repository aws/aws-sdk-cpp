/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/xray/model/IndexingRuleValue.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p> Rule used to determine the server-side sampling rate for spans ingested
   * through the CloudWatchLogs destination and indexed by X-Ray. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/IndexingRule">AWS
   * API Reference</a></p>
   */
  class IndexingRule
  {
  public:
    AWS_XRAY_API IndexingRule();
    AWS_XRAY_API IndexingRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API IndexingRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the indexing rule. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline IndexingRule& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline IndexingRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline IndexingRule& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Displays when the rule was last modified, in Unix time seconds. </p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }
    inline IndexingRule& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline IndexingRule& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The indexing rule. </p>
     */
    inline const IndexingRuleValue& GetRule() const{ return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    inline void SetRule(const IndexingRuleValue& value) { m_ruleHasBeenSet = true; m_rule = value; }
    inline void SetRule(IndexingRuleValue&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }
    inline IndexingRule& WithRule(const IndexingRuleValue& value) { SetRule(value); return *this;}
    inline IndexingRule& WithRule(IndexingRuleValue&& value) { SetRule(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;

    IndexingRuleValue m_rule;
    bool m_ruleHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
