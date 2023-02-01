/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/StudioLifecycleConfigAppType.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Details of the Studio Lifecycle Configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StudioLifecycleConfigDetails">AWS
   * API Reference</a></p>
   */
  class StudioLifecycleConfigDetails
  {
  public:
    AWS_SAGEMAKER_API StudioLifecycleConfigDetails();
    AWS_SAGEMAKER_API StudioLifecycleConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API StudioLifecycleConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configuration.</p>
     */
    inline const Aws::String& GetStudioLifecycleConfigArn() const{ return m_studioLifecycleConfigArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configuration.</p>
     */
    inline bool StudioLifecycleConfigArnHasBeenSet() const { return m_studioLifecycleConfigArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configuration.</p>
     */
    inline void SetStudioLifecycleConfigArn(const Aws::String& value) { m_studioLifecycleConfigArnHasBeenSet = true; m_studioLifecycleConfigArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configuration.</p>
     */
    inline void SetStudioLifecycleConfigArn(Aws::String&& value) { m_studioLifecycleConfigArnHasBeenSet = true; m_studioLifecycleConfigArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configuration.</p>
     */
    inline void SetStudioLifecycleConfigArn(const char* value) { m_studioLifecycleConfigArnHasBeenSet = true; m_studioLifecycleConfigArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configuration.</p>
     */
    inline StudioLifecycleConfigDetails& WithStudioLifecycleConfigArn(const Aws::String& value) { SetStudioLifecycleConfigArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configuration.</p>
     */
    inline StudioLifecycleConfigDetails& WithStudioLifecycleConfigArn(Aws::String&& value) { SetStudioLifecycleConfigArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configuration.</p>
     */
    inline StudioLifecycleConfigDetails& WithStudioLifecycleConfigArn(const char* value) { SetStudioLifecycleConfigArn(value); return *this;}


    /**
     * <p>The name of the Studio Lifecycle Configuration.</p>
     */
    inline const Aws::String& GetStudioLifecycleConfigName() const{ return m_studioLifecycleConfigName; }

    /**
     * <p>The name of the Studio Lifecycle Configuration.</p>
     */
    inline bool StudioLifecycleConfigNameHasBeenSet() const { return m_studioLifecycleConfigNameHasBeenSet; }

    /**
     * <p>The name of the Studio Lifecycle Configuration.</p>
     */
    inline void SetStudioLifecycleConfigName(const Aws::String& value) { m_studioLifecycleConfigNameHasBeenSet = true; m_studioLifecycleConfigName = value; }

    /**
     * <p>The name of the Studio Lifecycle Configuration.</p>
     */
    inline void SetStudioLifecycleConfigName(Aws::String&& value) { m_studioLifecycleConfigNameHasBeenSet = true; m_studioLifecycleConfigName = std::move(value); }

    /**
     * <p>The name of the Studio Lifecycle Configuration.</p>
     */
    inline void SetStudioLifecycleConfigName(const char* value) { m_studioLifecycleConfigNameHasBeenSet = true; m_studioLifecycleConfigName.assign(value); }

    /**
     * <p>The name of the Studio Lifecycle Configuration.</p>
     */
    inline StudioLifecycleConfigDetails& WithStudioLifecycleConfigName(const Aws::String& value) { SetStudioLifecycleConfigName(value); return *this;}

    /**
     * <p>The name of the Studio Lifecycle Configuration.</p>
     */
    inline StudioLifecycleConfigDetails& WithStudioLifecycleConfigName(Aws::String&& value) { SetStudioLifecycleConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the Studio Lifecycle Configuration.</p>
     */
    inline StudioLifecycleConfigDetails& WithStudioLifecycleConfigName(const char* value) { SetStudioLifecycleConfigName(value); return *this;}


    /**
     * <p>The creation time of the Studio Lifecycle Configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time of the Studio Lifecycle Configuration.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time of the Studio Lifecycle Configuration.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time of the Studio Lifecycle Configuration.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation time of the Studio Lifecycle Configuration.</p>
     */
    inline StudioLifecycleConfigDetails& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time of the Studio Lifecycle Configuration.</p>
     */
    inline StudioLifecycleConfigDetails& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>This value is equivalent to CreationTime because Studio Lifecycle
     * Configurations are immutable.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>This value is equivalent to CreationTime because Studio Lifecycle
     * Configurations are immutable.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>This value is equivalent to CreationTime because Studio Lifecycle
     * Configurations are immutable.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>This value is equivalent to CreationTime because Studio Lifecycle
     * Configurations are immutable.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>This value is equivalent to CreationTime because Studio Lifecycle
     * Configurations are immutable.</p>
     */
    inline StudioLifecycleConfigDetails& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>This value is equivalent to CreationTime because Studio Lifecycle
     * Configurations are immutable.</p>
     */
    inline StudioLifecycleConfigDetails& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The App type to which the Lifecycle Configuration is attached.</p>
     */
    inline const StudioLifecycleConfigAppType& GetStudioLifecycleConfigAppType() const{ return m_studioLifecycleConfigAppType; }

    /**
     * <p>The App type to which the Lifecycle Configuration is attached.</p>
     */
    inline bool StudioLifecycleConfigAppTypeHasBeenSet() const { return m_studioLifecycleConfigAppTypeHasBeenSet; }

    /**
     * <p>The App type to which the Lifecycle Configuration is attached.</p>
     */
    inline void SetStudioLifecycleConfigAppType(const StudioLifecycleConfigAppType& value) { m_studioLifecycleConfigAppTypeHasBeenSet = true; m_studioLifecycleConfigAppType = value; }

    /**
     * <p>The App type to which the Lifecycle Configuration is attached.</p>
     */
    inline void SetStudioLifecycleConfigAppType(StudioLifecycleConfigAppType&& value) { m_studioLifecycleConfigAppTypeHasBeenSet = true; m_studioLifecycleConfigAppType = std::move(value); }

    /**
     * <p>The App type to which the Lifecycle Configuration is attached.</p>
     */
    inline StudioLifecycleConfigDetails& WithStudioLifecycleConfigAppType(const StudioLifecycleConfigAppType& value) { SetStudioLifecycleConfigAppType(value); return *this;}

    /**
     * <p>The App type to which the Lifecycle Configuration is attached.</p>
     */
    inline StudioLifecycleConfigDetails& WithStudioLifecycleConfigAppType(StudioLifecycleConfigAppType&& value) { SetStudioLifecycleConfigAppType(std::move(value)); return *this;}

  private:

    Aws::String m_studioLifecycleConfigArn;
    bool m_studioLifecycleConfigArnHasBeenSet = false;

    Aws::String m_studioLifecycleConfigName;
    bool m_studioLifecycleConfigNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    StudioLifecycleConfigAppType m_studioLifecycleConfigAppType;
    bool m_studioLifecycleConfigAppTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
