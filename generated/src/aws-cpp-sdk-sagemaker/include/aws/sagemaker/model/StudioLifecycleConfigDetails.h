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
   * <p>Details of the Amazon SageMaker AI Studio Lifecycle
   * Configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/StudioLifecycleConfigDetails">AWS
   * API Reference</a></p>
   */
  class StudioLifecycleConfigDetails
  {
  public:
    AWS_SAGEMAKER_API StudioLifecycleConfigDetails() = default;
    AWS_SAGEMAKER_API StudioLifecycleConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API StudioLifecycleConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the Lifecycle Configuration.</p>
     */
    inline const Aws::String& GetStudioLifecycleConfigArn() const { return m_studioLifecycleConfigArn; }
    inline bool StudioLifecycleConfigArnHasBeenSet() const { return m_studioLifecycleConfigArnHasBeenSet; }
    template<typename StudioLifecycleConfigArnT = Aws::String>
    void SetStudioLifecycleConfigArn(StudioLifecycleConfigArnT&& value) { m_studioLifecycleConfigArnHasBeenSet = true; m_studioLifecycleConfigArn = std::forward<StudioLifecycleConfigArnT>(value); }
    template<typename StudioLifecycleConfigArnT = Aws::String>
    StudioLifecycleConfigDetails& WithStudioLifecycleConfigArn(StudioLifecycleConfigArnT&& value) { SetStudioLifecycleConfigArn(std::forward<StudioLifecycleConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon SageMaker AI Studio Lifecycle Configuration.</p>
     */
    inline const Aws::String& GetStudioLifecycleConfigName() const { return m_studioLifecycleConfigName; }
    inline bool StudioLifecycleConfigNameHasBeenSet() const { return m_studioLifecycleConfigNameHasBeenSet; }
    template<typename StudioLifecycleConfigNameT = Aws::String>
    void SetStudioLifecycleConfigName(StudioLifecycleConfigNameT&& value) { m_studioLifecycleConfigNameHasBeenSet = true; m_studioLifecycleConfigName = std::forward<StudioLifecycleConfigNameT>(value); }
    template<typename StudioLifecycleConfigNameT = Aws::String>
    StudioLifecycleConfigDetails& WithStudioLifecycleConfigName(StudioLifecycleConfigNameT&& value) { SetStudioLifecycleConfigName(std::forward<StudioLifecycleConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the Amazon SageMaker AI Studio Lifecycle
     * Configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    StudioLifecycleConfigDetails& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is equivalent to CreationTime because Amazon SageMaker AI Studio
     * Lifecycle Configurations are immutable.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    StudioLifecycleConfigDetails& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The App type to which the Lifecycle Configuration is attached.</p>
     */
    inline StudioLifecycleConfigAppType GetStudioLifecycleConfigAppType() const { return m_studioLifecycleConfigAppType; }
    inline bool StudioLifecycleConfigAppTypeHasBeenSet() const { return m_studioLifecycleConfigAppTypeHasBeenSet; }
    inline void SetStudioLifecycleConfigAppType(StudioLifecycleConfigAppType value) { m_studioLifecycleConfigAppTypeHasBeenSet = true; m_studioLifecycleConfigAppType = value; }
    inline StudioLifecycleConfigDetails& WithStudioLifecycleConfigAppType(StudioLifecycleConfigAppType value) { SetStudioLifecycleConfigAppType(value); return *this;}
    ///@}
  private:

    Aws::String m_studioLifecycleConfigArn;
    bool m_studioLifecycleConfigArnHasBeenSet = false;

    Aws::String m_studioLifecycleConfigName;
    bool m_studioLifecycleConfigNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    StudioLifecycleConfigAppType m_studioLifecycleConfigAppType{StudioLifecycleConfigAppType::NOT_SET};
    bool m_studioLifecycleConfigAppTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
