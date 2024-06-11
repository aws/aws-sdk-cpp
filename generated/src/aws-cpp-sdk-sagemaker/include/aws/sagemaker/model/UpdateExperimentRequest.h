/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateExperimentRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateExperimentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateExperiment"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the experiment to update.</p>
     */
    inline const Aws::String& GetExperimentName() const{ return m_experimentName; }
    inline bool ExperimentNameHasBeenSet() const { return m_experimentNameHasBeenSet; }
    inline void SetExperimentName(const Aws::String& value) { m_experimentNameHasBeenSet = true; m_experimentName = value; }
    inline void SetExperimentName(Aws::String&& value) { m_experimentNameHasBeenSet = true; m_experimentName = std::move(value); }
    inline void SetExperimentName(const char* value) { m_experimentNameHasBeenSet = true; m_experimentName.assign(value); }
    inline UpdateExperimentRequest& WithExperimentName(const Aws::String& value) { SetExperimentName(value); return *this;}
    inline UpdateExperimentRequest& WithExperimentName(Aws::String&& value) { SetExperimentName(std::move(value)); return *this;}
    inline UpdateExperimentRequest& WithExperimentName(const char* value) { SetExperimentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the experiment as displayed. The name doesn't need to be unique.
     * If <code>DisplayName</code> isn't specified, <code>ExperimentName</code> is
     * displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline UpdateExperimentRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline UpdateExperimentRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline UpdateExperimentRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the experiment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateExperimentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateExperimentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateExperimentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_experimentName;
    bool m_experimentNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
