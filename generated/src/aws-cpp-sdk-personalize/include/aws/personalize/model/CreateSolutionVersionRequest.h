/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/TrainingMode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class CreateSolutionVersionRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API CreateSolutionVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSolutionVersion"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the solution version.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateSolutionVersionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateSolutionVersionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateSolutionVersionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the solution containing the training
     * configuration information.</p>
     */
    inline const Aws::String& GetSolutionArn() const{ return m_solutionArn; }
    inline bool SolutionArnHasBeenSet() const { return m_solutionArnHasBeenSet; }
    inline void SetSolutionArn(const Aws::String& value) { m_solutionArnHasBeenSet = true; m_solutionArn = value; }
    inline void SetSolutionArn(Aws::String&& value) { m_solutionArnHasBeenSet = true; m_solutionArn = std::move(value); }
    inline void SetSolutionArn(const char* value) { m_solutionArnHasBeenSet = true; m_solutionArn.assign(value); }
    inline CreateSolutionVersionRequest& WithSolutionArn(const Aws::String& value) { SetSolutionArn(value); return *this;}
    inline CreateSolutionVersionRequest& WithSolutionArn(Aws::String&& value) { SetSolutionArn(std::move(value)); return *this;}
    inline CreateSolutionVersionRequest& WithSolutionArn(const char* value) { SetSolutionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope of training to be performed when creating the solution version. The
     * default is <code>FULL</code>. This creates a completely new model based on the
     * entirety of the training data from the datasets in your dataset group. </p>
     * <p>If you use <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>,
     * you can specify a training mode of <code>UPDATE</code>. This updates the model
     * to consider new items for recommendations. It is not a full retraining. You
     * should still complete a full retraining weekly. If you specify
     * <code>UPDATE</code>, Amazon Personalize will stop automatic updates for the
     * solution version. To resume updates, create a new solution with training mode
     * set to <code>FULL</code> and deploy it in a campaign. For more information about
     * automatic updates, see <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/use-case-recipe-features.html#maintaining-with-automatic-updates">Automatic
     * updates</a>. </p> <p>The <code>UPDATE</code> option can only be used when you
     * already have an active solution version created from the input solution using
     * the <code>FULL</code> option and the input solution was trained with the <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-new-item-USER_PERSONALIZATION.html">User-Personalization</a>
     * recipe or the legacy <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/native-recipe-hrnn-coldstart.html">HRNN-Coldstart</a>
     * recipe.</p>
     */
    inline const TrainingMode& GetTrainingMode() const{ return m_trainingMode; }
    inline bool TrainingModeHasBeenSet() const { return m_trainingModeHasBeenSet; }
    inline void SetTrainingMode(const TrainingMode& value) { m_trainingModeHasBeenSet = true; m_trainingMode = value; }
    inline void SetTrainingMode(TrainingMode&& value) { m_trainingModeHasBeenSet = true; m_trainingMode = std::move(value); }
    inline CreateSolutionVersionRequest& WithTrainingMode(const TrainingMode& value) { SetTrainingMode(value); return *this;}
    inline CreateSolutionVersionRequest& WithTrainingMode(TrainingMode&& value) { SetTrainingMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dg/tagging-resources.html">tags</a>
     * to apply to the solution version.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateSolutionVersionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateSolutionVersionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSolutionVersionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateSolutionVersionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_solutionArn;
    bool m_solutionArnHasBeenSet = false;

    TrainingMode m_trainingMode;
    bool m_trainingModeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
