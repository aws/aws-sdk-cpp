/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>The Amazon Simple Notification Service (Amazon SNS) topic to which Amazon
   * Textract publishes the completion status of an asynchronous document operation.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/NotificationChannel">AWS
   * API Reference</a></p>
   */
  class NotificationChannel
  {
  public:
    AWS_TEXTRACT_API NotificationChannel() = default;
    AWS_TEXTRACT_API NotificationChannel(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API NotificationChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon SNS topic that Amazon Textract posts the completion status to.</p>
     */
    inline const Aws::String& GetSNSTopicArn() const { return m_sNSTopicArn; }
    inline bool SNSTopicArnHasBeenSet() const { return m_sNSTopicArnHasBeenSet; }
    template<typename SNSTopicArnT = Aws::String>
    void SetSNSTopicArn(SNSTopicArnT&& value) { m_sNSTopicArnHasBeenSet = true; m_sNSTopicArn = std::forward<SNSTopicArnT>(value); }
    template<typename SNSTopicArnT = Aws::String>
    NotificationChannel& WithSNSTopicArn(SNSTopicArnT&& value) { SetSNSTopicArn(std::forward<SNSTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that gives Amazon Textract
     * publishing permissions to the Amazon SNS topic. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    NotificationChannel& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sNSTopicArn;
    bool m_sNSTopicArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
