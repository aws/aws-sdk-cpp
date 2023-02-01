/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateProjectResult
  {
  public:
    AWS_SAGEMAKER_API CreateProjectResult();
    AWS_SAGEMAKER_API CreateProjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateProjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline void SetProjectArn(const Aws::String& value) { m_projectArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline void SetProjectArn(Aws::String&& value) { m_projectArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline void SetProjectArn(const char* value) { m_projectArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline CreateProjectResult& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline CreateProjectResult& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project.</p>
     */
    inline CreateProjectResult& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}


    /**
     * <p>The ID of the new project.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>The ID of the new project.</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectId = value; }

    /**
     * <p>The ID of the new project.</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectId = std::move(value); }

    /**
     * <p>The ID of the new project.</p>
     */
    inline void SetProjectId(const char* value) { m_projectId.assign(value); }

    /**
     * <p>The ID of the new project.</p>
     */
    inline CreateProjectResult& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>The ID of the new project.</p>
     */
    inline CreateProjectResult& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the new project.</p>
     */
    inline CreateProjectResult& WithProjectId(const char* value) { SetProjectId(value); return *this;}

  private:

    Aws::String m_projectArn;

    Aws::String m_projectId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
