/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that defines an Amazon SNS destination for email events. You can
   * use Amazon SNS to send notifications when certain email events
   * occur.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/SnsDestination">AWS
   * API Reference</a></p>
   */
  class SnsDestination
  {
  public:
    AWS_SESV2_API SnsDestination();
    AWS_SESV2_API SnsDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API SnsDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon SNS topic to publish email
     * events to. For more information about Amazon SNS topics, see the <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/CreateTopic.html">Amazon SNS
     * Developer Guide</a>.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }
    inline SnsDestination& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}
    inline SnsDestination& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}
    inline SnsDestination& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}
    ///@}
  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
