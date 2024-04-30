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
   * <p>An object that provides information about the configuration of a Generative
   * Q&amp;A experience.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisteredUserGenerativeQnAEmbeddingConfiguration">AWS
   * API Reference</a></p>
   */
  class RegisteredUserGenerativeQnAEmbeddingConfiguration
  {
  public:
    AWS_QUICKSIGHT_API RegisteredUserGenerativeQnAEmbeddingConfiguration();
    AWS_QUICKSIGHT_API RegisteredUserGenerativeQnAEmbeddingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RegisteredUserGenerativeQnAEmbeddingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the new Q reader experience topic that you want to make the
     * starting topic in the Generative Q&amp;A experience. You can find a topic ID by
     * navigating to the Topics pane in the Amazon QuickSight application and opening a
     * topic. The ID is in the URL for the topic that you open.</p> <p>If you don't
     * specify an initial topic or you specify a legacy topic, a list of all shared new
     * reader experience topics is shown in the Generative Q&amp;A experience for your
     * readers. When you select an initial new reader experience topic, you can specify
     * whether or not readers are allowed to select other new reader experience topics
     * from the available ones in the list.</p>
     */
    inline const Aws::String& GetInitialTopicId() const{ return m_initialTopicId; }

    /**
     * <p>The ID of the new Q reader experience topic that you want to make the
     * starting topic in the Generative Q&amp;A experience. You can find a topic ID by
     * navigating to the Topics pane in the Amazon QuickSight application and opening a
     * topic. The ID is in the URL for the topic that you open.</p> <p>If you don't
     * specify an initial topic or you specify a legacy topic, a list of all shared new
     * reader experience topics is shown in the Generative Q&amp;A experience for your
     * readers. When you select an initial new reader experience topic, you can specify
     * whether or not readers are allowed to select other new reader experience topics
     * from the available ones in the list.</p>
     */
    inline bool InitialTopicIdHasBeenSet() const { return m_initialTopicIdHasBeenSet; }

    /**
     * <p>The ID of the new Q reader experience topic that you want to make the
     * starting topic in the Generative Q&amp;A experience. You can find a topic ID by
     * navigating to the Topics pane in the Amazon QuickSight application and opening a
     * topic. The ID is in the URL for the topic that you open.</p> <p>If you don't
     * specify an initial topic or you specify a legacy topic, a list of all shared new
     * reader experience topics is shown in the Generative Q&amp;A experience for your
     * readers. When you select an initial new reader experience topic, you can specify
     * whether or not readers are allowed to select other new reader experience topics
     * from the available ones in the list.</p>
     */
    inline void SetInitialTopicId(const Aws::String& value) { m_initialTopicIdHasBeenSet = true; m_initialTopicId = value; }

    /**
     * <p>The ID of the new Q reader experience topic that you want to make the
     * starting topic in the Generative Q&amp;A experience. You can find a topic ID by
     * navigating to the Topics pane in the Amazon QuickSight application and opening a
     * topic. The ID is in the URL for the topic that you open.</p> <p>If you don't
     * specify an initial topic or you specify a legacy topic, a list of all shared new
     * reader experience topics is shown in the Generative Q&amp;A experience for your
     * readers. When you select an initial new reader experience topic, you can specify
     * whether or not readers are allowed to select other new reader experience topics
     * from the available ones in the list.</p>
     */
    inline void SetInitialTopicId(Aws::String&& value) { m_initialTopicIdHasBeenSet = true; m_initialTopicId = std::move(value); }

    /**
     * <p>The ID of the new Q reader experience topic that you want to make the
     * starting topic in the Generative Q&amp;A experience. You can find a topic ID by
     * navigating to the Topics pane in the Amazon QuickSight application and opening a
     * topic. The ID is in the URL for the topic that you open.</p> <p>If you don't
     * specify an initial topic or you specify a legacy topic, a list of all shared new
     * reader experience topics is shown in the Generative Q&amp;A experience for your
     * readers. When you select an initial new reader experience topic, you can specify
     * whether or not readers are allowed to select other new reader experience topics
     * from the available ones in the list.</p>
     */
    inline void SetInitialTopicId(const char* value) { m_initialTopicIdHasBeenSet = true; m_initialTopicId.assign(value); }

    /**
     * <p>The ID of the new Q reader experience topic that you want to make the
     * starting topic in the Generative Q&amp;A experience. You can find a topic ID by
     * navigating to the Topics pane in the Amazon QuickSight application and opening a
     * topic. The ID is in the URL for the topic that you open.</p> <p>If you don't
     * specify an initial topic or you specify a legacy topic, a list of all shared new
     * reader experience topics is shown in the Generative Q&amp;A experience for your
     * readers. When you select an initial new reader experience topic, you can specify
     * whether or not readers are allowed to select other new reader experience topics
     * from the available ones in the list.</p>
     */
    inline RegisteredUserGenerativeQnAEmbeddingConfiguration& WithInitialTopicId(const Aws::String& value) { SetInitialTopicId(value); return *this;}

    /**
     * <p>The ID of the new Q reader experience topic that you want to make the
     * starting topic in the Generative Q&amp;A experience. You can find a topic ID by
     * navigating to the Topics pane in the Amazon QuickSight application and opening a
     * topic. The ID is in the URL for the topic that you open.</p> <p>If you don't
     * specify an initial topic or you specify a legacy topic, a list of all shared new
     * reader experience topics is shown in the Generative Q&amp;A experience for your
     * readers. When you select an initial new reader experience topic, you can specify
     * whether or not readers are allowed to select other new reader experience topics
     * from the available ones in the list.</p>
     */
    inline RegisteredUserGenerativeQnAEmbeddingConfiguration& WithInitialTopicId(Aws::String&& value) { SetInitialTopicId(std::move(value)); return *this;}

    /**
     * <p>The ID of the new Q reader experience topic that you want to make the
     * starting topic in the Generative Q&amp;A experience. You can find a topic ID by
     * navigating to the Topics pane in the Amazon QuickSight application and opening a
     * topic. The ID is in the URL for the topic that you open.</p> <p>If you don't
     * specify an initial topic or you specify a legacy topic, a list of all shared new
     * reader experience topics is shown in the Generative Q&amp;A experience for your
     * readers. When you select an initial new reader experience topic, you can specify
     * whether or not readers are allowed to select other new reader experience topics
     * from the available ones in the list.</p>
     */
    inline RegisteredUserGenerativeQnAEmbeddingConfiguration& WithInitialTopicId(const char* value) { SetInitialTopicId(value); return *this;}

  private:

    Aws::String m_initialTopicId;
    bool m_initialTopicIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
