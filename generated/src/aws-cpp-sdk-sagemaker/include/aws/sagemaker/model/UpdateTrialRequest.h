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
  class UpdateTrialRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateTrialRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTrial"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the trial to update.</p>
     */
    inline const Aws::String& GetTrialName() const{ return m_trialName; }

    /**
     * <p>The name of the trial to update.</p>
     */
    inline bool TrialNameHasBeenSet() const { return m_trialNameHasBeenSet; }

    /**
     * <p>The name of the trial to update.</p>
     */
    inline void SetTrialName(const Aws::String& value) { m_trialNameHasBeenSet = true; m_trialName = value; }

    /**
     * <p>The name of the trial to update.</p>
     */
    inline void SetTrialName(Aws::String&& value) { m_trialNameHasBeenSet = true; m_trialName = std::move(value); }

    /**
     * <p>The name of the trial to update.</p>
     */
    inline void SetTrialName(const char* value) { m_trialNameHasBeenSet = true; m_trialName.assign(value); }

    /**
     * <p>The name of the trial to update.</p>
     */
    inline UpdateTrialRequest& WithTrialName(const Aws::String& value) { SetTrialName(value); return *this;}

    /**
     * <p>The name of the trial to update.</p>
     */
    inline UpdateTrialRequest& WithTrialName(Aws::String&& value) { SetTrialName(std::move(value)); return *this;}

    /**
     * <p>The name of the trial to update.</p>
     */
    inline UpdateTrialRequest& WithTrialName(const char* value) { SetTrialName(value); return *this;}


    /**
     * <p>The name of the trial as displayed. The name doesn't need to be unique. If
     * <code>DisplayName</code> isn't specified, <code>TrialName</code> is
     * displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the trial as displayed. The name doesn't need to be unique. If
     * <code>DisplayName</code> isn't specified, <code>TrialName</code> is
     * displayed.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The name of the trial as displayed. The name doesn't need to be unique. If
     * <code>DisplayName</code> isn't specified, <code>TrialName</code> is
     * displayed.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The name of the trial as displayed. The name doesn't need to be unique. If
     * <code>DisplayName</code> isn't specified, <code>TrialName</code> is
     * displayed.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The name of the trial as displayed. The name doesn't need to be unique. If
     * <code>DisplayName</code> isn't specified, <code>TrialName</code> is
     * displayed.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The name of the trial as displayed. The name doesn't need to be unique. If
     * <code>DisplayName</code> isn't specified, <code>TrialName</code> is
     * displayed.</p>
     */
    inline UpdateTrialRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the trial as displayed. The name doesn't need to be unique. If
     * <code>DisplayName</code> isn't specified, <code>TrialName</code> is
     * displayed.</p>
     */
    inline UpdateTrialRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the trial as displayed. The name doesn't need to be unique. If
     * <code>DisplayName</code> isn't specified, <code>TrialName</code> is
     * displayed.</p>
     */
    inline UpdateTrialRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}

  private:

    Aws::String m_trialName;
    bool m_trialNameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
