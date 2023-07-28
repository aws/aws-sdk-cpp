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
   * <p>The configuration information for the session integration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/SessionIntegrationConfiguration">AWS
   * API Reference</a></p>
   */
  class SessionIntegrationConfiguration
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API SessionIntegrationConfiguration();
    AWS_CONNECTWISDOMSERVICE_API SessionIntegrationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API SessionIntegrationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the integrated Amazon SNS topic used for
     * streaming chat messages.</p>
     */
    inline const Aws::String& GetTopicIntegrationArn() const{ return m_topicIntegrationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the integrated Amazon SNS topic used for
     * streaming chat messages.</p>
     */
    inline bool TopicIntegrationArnHasBeenSet() const { return m_topicIntegrationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the integrated Amazon SNS topic used for
     * streaming chat messages.</p>
     */
    inline void SetTopicIntegrationArn(const Aws::String& value) { m_topicIntegrationArnHasBeenSet = true; m_topicIntegrationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the integrated Amazon SNS topic used for
     * streaming chat messages.</p>
     */
    inline void SetTopicIntegrationArn(Aws::String&& value) { m_topicIntegrationArnHasBeenSet = true; m_topicIntegrationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the integrated Amazon SNS topic used for
     * streaming chat messages.</p>
     */
    inline void SetTopicIntegrationArn(const char* value) { m_topicIntegrationArnHasBeenSet = true; m_topicIntegrationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the integrated Amazon SNS topic used for
     * streaming chat messages.</p>
     */
    inline SessionIntegrationConfiguration& WithTopicIntegrationArn(const Aws::String& value) { SetTopicIntegrationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the integrated Amazon SNS topic used for
     * streaming chat messages.</p>
     */
    inline SessionIntegrationConfiguration& WithTopicIntegrationArn(Aws::String&& value) { SetTopicIntegrationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the integrated Amazon SNS topic used for
     * streaming chat messages.</p>
     */
    inline SessionIntegrationConfiguration& WithTopicIntegrationArn(const char* value) { SetTopicIntegrationArn(value); return *this;}

  private:

    Aws::String m_topicIntegrationArn;
    bool m_topicIntegrationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
