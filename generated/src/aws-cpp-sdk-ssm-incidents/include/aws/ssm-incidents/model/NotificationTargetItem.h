/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>The SNS targets that are notified when updates are made to an
   * incident.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/NotificationTargetItem">AWS
   * API Reference</a></p>
   */
  class NotificationTargetItem
  {
  public:
    AWS_SSMINCIDENTS_API NotificationTargetItem();
    AWS_SSMINCIDENTS_API NotificationTargetItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API NotificationTargetItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic.</p>
     */
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic.</p>
     */
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic.</p>
     */
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic.</p>
     */
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic.</p>
     */
    inline NotificationTargetItem& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic.</p>
     */
    inline NotificationTargetItem& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SNS topic.</p>
     */
    inline NotificationTargetItem& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}

  private:

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
