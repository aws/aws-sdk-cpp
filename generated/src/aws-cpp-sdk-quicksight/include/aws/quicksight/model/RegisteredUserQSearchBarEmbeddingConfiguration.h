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
   * <p>Information about the Q search bar embedding experience.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisteredUserQSearchBarEmbeddingConfiguration">AWS
   * API Reference</a></p>
   */
  class RegisteredUserQSearchBarEmbeddingConfiguration
  {
  public:
    AWS_QUICKSIGHT_API RegisteredUserQSearchBarEmbeddingConfiguration();
    AWS_QUICKSIGHT_API RegisteredUserQSearchBarEmbeddingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RegisteredUserQSearchBarEmbeddingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the legacy Q topic that you want to use as the starting topic in
     * the Q search bar. To locate the topic ID of the topic that you want to use, open
     * the <a href="https://quicksight.aws.amazon.com/">Amazon QuickSight console</a>,
     * navigate to the <b>Topics</b> pane, and choose thre topic that you want to use.
     * The <code>TopicID</code> is located in the URL of the topic that opens. When you
     * select an initial topic, you can specify whether or not readers are allowed to
     * select other topics from the list of available topics.</p> <p>If you don't
     * specify an initial topic or if you specify a new reader experience topic, a list
     * of all shared legacy topics is shown in the Q bar. </p>
     */
    inline const Aws::String& GetInitialTopicId() const{ return m_initialTopicId; }

    /**
     * <p>The ID of the legacy Q topic that you want to use as the starting topic in
     * the Q search bar. To locate the topic ID of the topic that you want to use, open
     * the <a href="https://quicksight.aws.amazon.com/">Amazon QuickSight console</a>,
     * navigate to the <b>Topics</b> pane, and choose thre topic that you want to use.
     * The <code>TopicID</code> is located in the URL of the topic that opens. When you
     * select an initial topic, you can specify whether or not readers are allowed to
     * select other topics from the list of available topics.</p> <p>If you don't
     * specify an initial topic or if you specify a new reader experience topic, a list
     * of all shared legacy topics is shown in the Q bar. </p>
     */
    inline bool InitialTopicIdHasBeenSet() const { return m_initialTopicIdHasBeenSet; }

    /**
     * <p>The ID of the legacy Q topic that you want to use as the starting topic in
     * the Q search bar. To locate the topic ID of the topic that you want to use, open
     * the <a href="https://quicksight.aws.amazon.com/">Amazon QuickSight console</a>,
     * navigate to the <b>Topics</b> pane, and choose thre topic that you want to use.
     * The <code>TopicID</code> is located in the URL of the topic that opens. When you
     * select an initial topic, you can specify whether or not readers are allowed to
     * select other topics from the list of available topics.</p> <p>If you don't
     * specify an initial topic or if you specify a new reader experience topic, a list
     * of all shared legacy topics is shown in the Q bar. </p>
     */
    inline void SetInitialTopicId(const Aws::String& value) { m_initialTopicIdHasBeenSet = true; m_initialTopicId = value; }

    /**
     * <p>The ID of the legacy Q topic that you want to use as the starting topic in
     * the Q search bar. To locate the topic ID of the topic that you want to use, open
     * the <a href="https://quicksight.aws.amazon.com/">Amazon QuickSight console</a>,
     * navigate to the <b>Topics</b> pane, and choose thre topic that you want to use.
     * The <code>TopicID</code> is located in the URL of the topic that opens. When you
     * select an initial topic, you can specify whether or not readers are allowed to
     * select other topics from the list of available topics.</p> <p>If you don't
     * specify an initial topic or if you specify a new reader experience topic, a list
     * of all shared legacy topics is shown in the Q bar. </p>
     */
    inline void SetInitialTopicId(Aws::String&& value) { m_initialTopicIdHasBeenSet = true; m_initialTopicId = std::move(value); }

    /**
     * <p>The ID of the legacy Q topic that you want to use as the starting topic in
     * the Q search bar. To locate the topic ID of the topic that you want to use, open
     * the <a href="https://quicksight.aws.amazon.com/">Amazon QuickSight console</a>,
     * navigate to the <b>Topics</b> pane, and choose thre topic that you want to use.
     * The <code>TopicID</code> is located in the URL of the topic that opens. When you
     * select an initial topic, you can specify whether or not readers are allowed to
     * select other topics from the list of available topics.</p> <p>If you don't
     * specify an initial topic or if you specify a new reader experience topic, a list
     * of all shared legacy topics is shown in the Q bar. </p>
     */
    inline void SetInitialTopicId(const char* value) { m_initialTopicIdHasBeenSet = true; m_initialTopicId.assign(value); }

    /**
     * <p>The ID of the legacy Q topic that you want to use as the starting topic in
     * the Q search bar. To locate the topic ID of the topic that you want to use, open
     * the <a href="https://quicksight.aws.amazon.com/">Amazon QuickSight console</a>,
     * navigate to the <b>Topics</b> pane, and choose thre topic that you want to use.
     * The <code>TopicID</code> is located in the URL of the topic that opens. When you
     * select an initial topic, you can specify whether or not readers are allowed to
     * select other topics from the list of available topics.</p> <p>If you don't
     * specify an initial topic or if you specify a new reader experience topic, a list
     * of all shared legacy topics is shown in the Q bar. </p>
     */
    inline RegisteredUserQSearchBarEmbeddingConfiguration& WithInitialTopicId(const Aws::String& value) { SetInitialTopicId(value); return *this;}

    /**
     * <p>The ID of the legacy Q topic that you want to use as the starting topic in
     * the Q search bar. To locate the topic ID of the topic that you want to use, open
     * the <a href="https://quicksight.aws.amazon.com/">Amazon QuickSight console</a>,
     * navigate to the <b>Topics</b> pane, and choose thre topic that you want to use.
     * The <code>TopicID</code> is located in the URL of the topic that opens. When you
     * select an initial topic, you can specify whether or not readers are allowed to
     * select other topics from the list of available topics.</p> <p>If you don't
     * specify an initial topic or if you specify a new reader experience topic, a list
     * of all shared legacy topics is shown in the Q bar. </p>
     */
    inline RegisteredUserQSearchBarEmbeddingConfiguration& WithInitialTopicId(Aws::String&& value) { SetInitialTopicId(std::move(value)); return *this;}

    /**
     * <p>The ID of the legacy Q topic that you want to use as the starting topic in
     * the Q search bar. To locate the topic ID of the topic that you want to use, open
     * the <a href="https://quicksight.aws.amazon.com/">Amazon QuickSight console</a>,
     * navigate to the <b>Topics</b> pane, and choose thre topic that you want to use.
     * The <code>TopicID</code> is located in the URL of the topic that opens. When you
     * select an initial topic, you can specify whether or not readers are allowed to
     * select other topics from the list of available topics.</p> <p>If you don't
     * specify an initial topic or if you specify a new reader experience topic, a list
     * of all shared legacy topics is shown in the Q bar. </p>
     */
    inline RegisteredUserQSearchBarEmbeddingConfiguration& WithInitialTopicId(const char* value) { SetInitialTopicId(value); return *this;}

  private:

    Aws::String m_initialTopicId;
    bool m_initialTopicIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
