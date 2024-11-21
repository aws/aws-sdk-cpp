/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/IndexingRuleValueUpdate.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class UpdateIndexingRuleRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API UpdateIndexingRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIndexingRule"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> Name of the indexing rule to be updated. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateIndexingRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateIndexingRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateIndexingRuleRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Rule configuration to be updated. </p>
     */
    inline const IndexingRuleValueUpdate& GetRule() const{ return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    inline void SetRule(const IndexingRuleValueUpdate& value) { m_ruleHasBeenSet = true; m_rule = value; }
    inline void SetRule(IndexingRuleValueUpdate&& value) { m_ruleHasBeenSet = true; m_rule = std::move(value); }
    inline UpdateIndexingRuleRequest& WithRule(const IndexingRuleValueUpdate& value) { SetRule(value); return *this;}
    inline UpdateIndexingRuleRequest& WithRule(IndexingRuleValueUpdate&& value) { SetRule(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    IndexingRuleValueUpdate m_rule;
    bool m_ruleHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
