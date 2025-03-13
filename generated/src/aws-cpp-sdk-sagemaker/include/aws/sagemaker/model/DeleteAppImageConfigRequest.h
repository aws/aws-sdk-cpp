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
  class DeleteAppImageConfigRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteAppImageConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAppImageConfig"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the AppImageConfig to delete.</p>
     */
    inline const Aws::String& GetAppImageConfigName() const { return m_appImageConfigName; }
    inline bool AppImageConfigNameHasBeenSet() const { return m_appImageConfigNameHasBeenSet; }
    template<typename AppImageConfigNameT = Aws::String>
    void SetAppImageConfigName(AppImageConfigNameT&& value) { m_appImageConfigNameHasBeenSet = true; m_appImageConfigName = std::forward<AppImageConfigNameT>(value); }
    template<typename AppImageConfigNameT = Aws::String>
    DeleteAppImageConfigRequest& WithAppImageConfigName(AppImageConfigNameT&& value) { SetAppImageConfigName(std::forward<AppImageConfigNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appImageConfigName;
    bool m_appImageConfigNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
