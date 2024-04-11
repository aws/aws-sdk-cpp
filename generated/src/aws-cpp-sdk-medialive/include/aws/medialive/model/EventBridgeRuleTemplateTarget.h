/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * The target to which to send matching events.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/EventBridgeRuleTemplateTarget">AWS
   * API Reference</a></p>
   */
  class EventBridgeRuleTemplateTarget
  {
  public:
    AWS_MEDIALIVE_API EventBridgeRuleTemplateTarget();
    AWS_MEDIALIVE_API EventBridgeRuleTemplateTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API EventBridgeRuleTemplateTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Target ARNs must be either an SNS topic or CloudWatch log group.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * Target ARNs must be either an SNS topic or CloudWatch log group.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * Target ARNs must be either an SNS topic or CloudWatch log group.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * Target ARNs must be either an SNS topic or CloudWatch log group.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * Target ARNs must be either an SNS topic or CloudWatch log group.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * Target ARNs must be either an SNS topic or CloudWatch log group.
     */
    inline EventBridgeRuleTemplateTarget& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * Target ARNs must be either an SNS topic or CloudWatch log group.
     */
    inline EventBridgeRuleTemplateTarget& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * Target ARNs must be either an SNS topic or CloudWatch log group.
     */
    inline EventBridgeRuleTemplateTarget& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
