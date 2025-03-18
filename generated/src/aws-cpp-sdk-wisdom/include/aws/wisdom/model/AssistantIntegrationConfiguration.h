/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>The configuration information for the Wisdom assistant
   * integration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/AssistantIntegrationConfiguration">AWS
   * API Reference</a></p>
   */
  class AssistantIntegrationConfiguration
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API AssistantIntegrationConfiguration() = default;
    AWS_CONNECTWISDOMSERVICE_API AssistantIntegrationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API AssistantIntegrationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the integrated Amazon SNS topic used for
     * streaming chat messages.</p>
     */
    inline const Aws::String& GetTopicIntegrationArn() const { return m_topicIntegrationArn; }
    inline bool TopicIntegrationArnHasBeenSet() const { return m_topicIntegrationArnHasBeenSet; }
    template<typename TopicIntegrationArnT = Aws::String>
    void SetTopicIntegrationArn(TopicIntegrationArnT&& value) { m_topicIntegrationArnHasBeenSet = true; m_topicIntegrationArn = std::forward<TopicIntegrationArnT>(value); }
    template<typename TopicIntegrationArnT = Aws::String>
    AssistantIntegrationConfiguration& WithTopicIntegrationArn(TopicIntegrationArnT&& value) { SetTopicIntegrationArn(std::forward<TopicIntegrationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_topicIntegrationArn;
    bool m_topicIntegrationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
