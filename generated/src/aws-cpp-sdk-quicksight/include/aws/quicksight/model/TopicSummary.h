/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/TopicUserExperienceVersion.h>
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
    AWS_QUICKSIGHT_API TopicSummary() = default;
    AWS_QUICKSIGHT_API TopicSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    TopicSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the topic. This ID is unique per Amazon Web Services Region for
     * each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTopicId() const { return m_topicId; }
    inline bool TopicIdHasBeenSet() const { return m_topicIdHasBeenSet; }
    template<typename TopicIdT = Aws::String>
    void SetTopicId(TopicIdT&& value) { m_topicIdHasBeenSet = true; m_topicId = std::forward<TopicIdT>(value); }
    template<typename TopicIdT = Aws::String>
    TopicSummary& WithTopicId(TopicIdT&& value) { SetTopicId(std::forward<TopicIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the topic.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TopicSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user experience version of the topic.</p>
     */
    inline TopicUserExperienceVersion GetUserExperienceVersion() const { return m_userExperienceVersion; }
    inline bool UserExperienceVersionHasBeenSet() const { return m_userExperienceVersionHasBeenSet; }
    inline void SetUserExperienceVersion(TopicUserExperienceVersion value) { m_userExperienceVersionHasBeenSet = true; m_userExperienceVersion = value; }
    inline TopicSummary& WithUserExperienceVersion(TopicUserExperienceVersion value) { SetUserExperienceVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_topicId;
    bool m_topicIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TopicUserExperienceVersion m_userExperienceVersion{TopicUserExperienceVersion::NOT_SET};
    bool m_userExperienceVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
