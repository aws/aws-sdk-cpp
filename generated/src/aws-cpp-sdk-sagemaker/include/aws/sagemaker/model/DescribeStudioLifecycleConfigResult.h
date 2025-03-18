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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeStudioLifecycleConfigResult
  {
  public:
    AWS_SAGEMAKER_API DescribeStudioLifecycleConfigResult() = default;
    AWS_SAGEMAKER_API DescribeStudioLifecycleConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeStudioLifecycleConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the Lifecycle Configuration to describe.</p>
     */
    inline const Aws::String& GetStudioLifecycleConfigArn() const { return m_studioLifecycleConfigArn; }
    template<typename StudioLifecycleConfigArnT = Aws::String>
    void SetStudioLifecycleConfigArn(StudioLifecycleConfigArnT&& value) { m_studioLifecycleConfigArnHasBeenSet = true; m_studioLifecycleConfigArn = std::forward<StudioLifecycleConfigArnT>(value); }
    template<typename StudioLifecycleConfigArnT = Aws::String>
    DescribeStudioLifecycleConfigResult& WithStudioLifecycleConfigArn(StudioLifecycleConfigArnT&& value) { SetStudioLifecycleConfigArn(std::forward<StudioLifecycleConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon SageMaker AI Studio Lifecycle Configuration that is
     * described.</p>
     */
    inline const Aws::String& GetStudioLifecycleConfigName() const { return m_studioLifecycleConfigName; }
    template<typename StudioLifecycleConfigNameT = Aws::String>
    void SetStudioLifecycleConfigName(StudioLifecycleConfigNameT&& value) { m_studioLifecycleConfigNameHasBeenSet = true; m_studioLifecycleConfigName = std::forward<StudioLifecycleConfigNameT>(value); }
    template<typename StudioLifecycleConfigNameT = Aws::String>
    DescribeStudioLifecycleConfigResult& WithStudioLifecycleConfigName(StudioLifecycleConfigNameT&& value) { SetStudioLifecycleConfigName(std::forward<StudioLifecycleConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the Amazon SageMaker AI Studio Lifecycle
     * Configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeStudioLifecycleConfigResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is equivalent to CreationTime because Amazon SageMaker AI Studio
     * Lifecycle Configurations are immutable.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeStudioLifecycleConfigResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of your Amazon SageMaker AI Studio Lifecycle Configuration
     * script.</p>
     */
    inline const Aws::String& GetStudioLifecycleConfigContent() const { return m_studioLifecycleConfigContent; }
    template<typename StudioLifecycleConfigContentT = Aws::String>
    void SetStudioLifecycleConfigContent(StudioLifecycleConfigContentT&& value) { m_studioLifecycleConfigContentHasBeenSet = true; m_studioLifecycleConfigContent = std::forward<StudioLifecycleConfigContentT>(value); }
    template<typename StudioLifecycleConfigContentT = Aws::String>
    DescribeStudioLifecycleConfigResult& WithStudioLifecycleConfigContent(StudioLifecycleConfigContentT&& value) { SetStudioLifecycleConfigContent(std::forward<StudioLifecycleConfigContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The App type that the Lifecycle Configuration is attached to.</p>
     */
    inline StudioLifecycleConfigAppType GetStudioLifecycleConfigAppType() const { return m_studioLifecycleConfigAppType; }
    inline void SetStudioLifecycleConfigAppType(StudioLifecycleConfigAppType value) { m_studioLifecycleConfigAppTypeHasBeenSet = true; m_studioLifecycleConfigAppType = value; }
    inline DescribeStudioLifecycleConfigResult& WithStudioLifecycleConfigAppType(StudioLifecycleConfigAppType value) { SetStudioLifecycleConfigAppType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeStudioLifecycleConfigResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_studioLifecycleConfigContent;
    bool m_studioLifecycleConfigContentHasBeenSet = false;

    StudioLifecycleConfigAppType m_studioLifecycleConfigAppType{StudioLifecycleConfigAppType::NOT_SET};
    bool m_studioLifecycleConfigAppTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
