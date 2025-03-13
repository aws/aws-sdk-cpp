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
  class DeleteStudioLifecycleConfigRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteStudioLifecycleConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteStudioLifecycleConfig"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Amazon SageMaker AI Studio Lifecycle Configuration to
     * delete.</p>
     */
    inline const Aws::String& GetStudioLifecycleConfigName() const { return m_studioLifecycleConfigName; }
    inline bool StudioLifecycleConfigNameHasBeenSet() const { return m_studioLifecycleConfigNameHasBeenSet; }
    template<typename StudioLifecycleConfigNameT = Aws::String>
    void SetStudioLifecycleConfigName(StudioLifecycleConfigNameT&& value) { m_studioLifecycleConfigNameHasBeenSet = true; m_studioLifecycleConfigName = std::forward<StudioLifecycleConfigNameT>(value); }
    template<typename StudioLifecycleConfigNameT = Aws::String>
    DeleteStudioLifecycleConfigRequest& WithStudioLifecycleConfigName(StudioLifecycleConfigNameT&& value) { SetStudioLifecycleConfigName(std::forward<StudioLifecycleConfigNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_studioLifecycleConfigName;
    bool m_studioLifecycleConfigNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
