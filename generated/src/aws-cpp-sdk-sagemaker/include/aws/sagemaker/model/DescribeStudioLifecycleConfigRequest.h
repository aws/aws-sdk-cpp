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
  class DescribeStudioLifecycleConfigRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeStudioLifecycleConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStudioLifecycleConfig"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Studio Lifecycle Configuration to describe.</p>
     */
    inline const Aws::String& GetStudioLifecycleConfigName() const{ return m_studioLifecycleConfigName; }

    /**
     * <p>The name of the Studio Lifecycle Configuration to describe.</p>
     */
    inline bool StudioLifecycleConfigNameHasBeenSet() const { return m_studioLifecycleConfigNameHasBeenSet; }

    /**
     * <p>The name of the Studio Lifecycle Configuration to describe.</p>
     */
    inline void SetStudioLifecycleConfigName(const Aws::String& value) { m_studioLifecycleConfigNameHasBeenSet = true; m_studioLifecycleConfigName = value; }

    /**
     * <p>The name of the Studio Lifecycle Configuration to describe.</p>
     */
    inline void SetStudioLifecycleConfigName(Aws::String&& value) { m_studioLifecycleConfigNameHasBeenSet = true; m_studioLifecycleConfigName = std::move(value); }

    /**
     * <p>The name of the Studio Lifecycle Configuration to describe.</p>
     */
    inline void SetStudioLifecycleConfigName(const char* value) { m_studioLifecycleConfigNameHasBeenSet = true; m_studioLifecycleConfigName.assign(value); }

    /**
     * <p>The name of the Studio Lifecycle Configuration to describe.</p>
     */
    inline DescribeStudioLifecycleConfigRequest& WithStudioLifecycleConfigName(const Aws::String& value) { SetStudioLifecycleConfigName(value); return *this;}

    /**
     * <p>The name of the Studio Lifecycle Configuration to describe.</p>
     */
    inline DescribeStudioLifecycleConfigRequest& WithStudioLifecycleConfigName(Aws::String&& value) { SetStudioLifecycleConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the Studio Lifecycle Configuration to describe.</p>
     */
    inline DescribeStudioLifecycleConfigRequest& WithStudioLifecycleConfigName(const char* value) { SetStudioLifecycleConfigName(value); return *this;}

  private:

    Aws::String m_studioLifecycleConfigName;
    bool m_studioLifecycleConfigNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
