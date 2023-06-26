/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A topic summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicSummary">AWS
   * API Reference</a></p>
   */
  class TopicSummary
  {
  public:
    AWS_QUICKSIGHT_API TopicSummary();
    AWS_QUICKSIGHT_API TopicSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline TopicSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline TopicSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline TopicSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID for the topic. This ID is unique per Amazon Web Services Region for
     * each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTopicId() const{ return m_topicId; }

    /**
     * <p>The ID for the topic. This ID is unique per Amazon Web Services Region for
     * each Amazon Web Services account.</p>
     */
    inline bool TopicIdHasBeenSet() const { return m_topicIdHasBeenSet; }

    /**
     * <p>The ID for the topic. This ID is unique per Amazon Web Services Region for
     * each Amazon Web Services account.</p>
     */
    inline void SetTopicId(const Aws::String& value) { m_topicIdHasBeenSet = true; m_topicId = value; }

    /**
     * <p>The ID for the topic. This ID is unique per Amazon Web Services Region for
     * each Amazon Web Services account.</p>
     */
    inline void SetTopicId(Aws::String&& value) { m_topicIdHasBeenSet = true; m_topicId = std::move(value); }

    /**
     * <p>The ID for the topic. This ID is unique per Amazon Web Services Region for
     * each Amazon Web Services account.</p>
     */
    inline void SetTopicId(const char* value) { m_topicIdHasBeenSet = true; m_topicId.assign(value); }

    /**
     * <p>The ID for the topic. This ID is unique per Amazon Web Services Region for
     * each Amazon Web Services account.</p>
     */
    inline TopicSummary& WithTopicId(const Aws::String& value) { SetTopicId(value); return *this;}

    /**
     * <p>The ID for the topic. This ID is unique per Amazon Web Services Region for
     * each Amazon Web Services account.</p>
     */
    inline TopicSummary& WithTopicId(Aws::String&& value) { SetTopicId(std::move(value)); return *this;}

    /**
     * <p>The ID for the topic. This ID is unique per Amazon Web Services Region for
     * each Amazon Web Services account.</p>
     */
    inline TopicSummary& WithTopicId(const char* value) { SetTopicId(value); return *this;}


    /**
     * <p>The name of the topic.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the topic.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the topic.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the topic.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the topic.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the topic.</p>
     */
    inline TopicSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the topic.</p>
     */
    inline TopicSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the topic.</p>
     */
    inline TopicSummary& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_topicId;
    bool m_topicIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
