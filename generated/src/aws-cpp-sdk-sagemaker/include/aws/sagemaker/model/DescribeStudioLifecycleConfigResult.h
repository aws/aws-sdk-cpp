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
    AWS_SAGEMAKER_API DescribeStudioLifecycleConfigResult();
    AWS_SAGEMAKER_API DescribeStudioLifecycleConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeStudioLifecycleConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the Lifecycle Configuration to describe.</p>
     */
    inline const Aws::String& GetStudioLifecycleConfigArn() const{ return m_studioLifecycleConfigArn; }
    inline void SetStudioLifecycleConfigArn(const Aws::String& value) { m_studioLifecycleConfigArn = value; }
    inline void SetStudioLifecycleConfigArn(Aws::String&& value) { m_studioLifecycleConfigArn = std::move(value); }
    inline void SetStudioLifecycleConfigArn(const char* value) { m_studioLifecycleConfigArn.assign(value); }
    inline DescribeStudioLifecycleConfigResult& WithStudioLifecycleConfigArn(const Aws::String& value) { SetStudioLifecycleConfigArn(value); return *this;}
    inline DescribeStudioLifecycleConfigResult& WithStudioLifecycleConfigArn(Aws::String&& value) { SetStudioLifecycleConfigArn(std::move(value)); return *this;}
    inline DescribeStudioLifecycleConfigResult& WithStudioLifecycleConfigArn(const char* value) { SetStudioLifecycleConfigArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon SageMaker AI Studio Lifecycle Configuration that is
     * described.</p>
     */
    inline const Aws::String& GetStudioLifecycleConfigName() const{ return m_studioLifecycleConfigName; }
    inline void SetStudioLifecycleConfigName(const Aws::String& value) { m_studioLifecycleConfigName = value; }
    inline void SetStudioLifecycleConfigName(Aws::String&& value) { m_studioLifecycleConfigName = std::move(value); }
    inline void SetStudioLifecycleConfigName(const char* value) { m_studioLifecycleConfigName.assign(value); }
    inline DescribeStudioLifecycleConfigResult& WithStudioLifecycleConfigName(const Aws::String& value) { SetStudioLifecycleConfigName(value); return *this;}
    inline DescribeStudioLifecycleConfigResult& WithStudioLifecycleConfigName(Aws::String&& value) { SetStudioLifecycleConfigName(std::move(value)); return *this;}
    inline DescribeStudioLifecycleConfigResult& WithStudioLifecycleConfigName(const char* value) { SetStudioLifecycleConfigName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the Amazon SageMaker AI Studio Lifecycle
     * Configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeStudioLifecycleConfigResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeStudioLifecycleConfigResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This value is equivalent to CreationTime because Amazon SageMaker AI Studio
     * Lifecycle Configurations are immutable.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeStudioLifecycleConfigResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeStudioLifecycleConfigResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of your Amazon SageMaker AI Studio Lifecycle Configuration
     * script.</p>
     */
    inline const Aws::String& GetStudioLifecycleConfigContent() const{ return m_studioLifecycleConfigContent; }
    inline void SetStudioLifecycleConfigContent(const Aws::String& value) { m_studioLifecycleConfigContent = value; }
    inline void SetStudioLifecycleConfigContent(Aws::String&& value) { m_studioLifecycleConfigContent = std::move(value); }
    inline void SetStudioLifecycleConfigContent(const char* value) { m_studioLifecycleConfigContent.assign(value); }
    inline DescribeStudioLifecycleConfigResult& WithStudioLifecycleConfigContent(const Aws::String& value) { SetStudioLifecycleConfigContent(value); return *this;}
    inline DescribeStudioLifecycleConfigResult& WithStudioLifecycleConfigContent(Aws::String&& value) { SetStudioLifecycleConfigContent(std::move(value)); return *this;}
    inline DescribeStudioLifecycleConfigResult& WithStudioLifecycleConfigContent(const char* value) { SetStudioLifecycleConfigContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The App type that the Lifecycle Configuration is attached to.</p>
     */
    inline const StudioLifecycleConfigAppType& GetStudioLifecycleConfigAppType() const{ return m_studioLifecycleConfigAppType; }
    inline void SetStudioLifecycleConfigAppType(const StudioLifecycleConfigAppType& value) { m_studioLifecycleConfigAppType = value; }
    inline void SetStudioLifecycleConfigAppType(StudioLifecycleConfigAppType&& value) { m_studioLifecycleConfigAppType = std::move(value); }
    inline DescribeStudioLifecycleConfigResult& WithStudioLifecycleConfigAppType(const StudioLifecycleConfigAppType& value) { SetStudioLifecycleConfigAppType(value); return *this;}
    inline DescribeStudioLifecycleConfigResult& WithStudioLifecycleConfigAppType(StudioLifecycleConfigAppType&& value) { SetStudioLifecycleConfigAppType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeStudioLifecycleConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeStudioLifecycleConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeStudioLifecycleConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_studioLifecycleConfigArn;

    Aws::String m_studioLifecycleConfigName;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_studioLifecycleConfigContent;

    StudioLifecycleConfigAppType m_studioLifecycleConfigAppType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
