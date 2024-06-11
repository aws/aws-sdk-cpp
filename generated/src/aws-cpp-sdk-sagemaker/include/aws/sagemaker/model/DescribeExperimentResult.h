/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ExperimentSource.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
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
  class DescribeExperimentResult
  {
  public:
    AWS_SAGEMAKER_API DescribeExperimentResult();
    AWS_SAGEMAKER_API DescribeExperimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeExperimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the experiment.</p>
     */
    inline const Aws::String& GetExperimentName() const{ return m_experimentName; }
    inline void SetExperimentName(const Aws::String& value) { m_experimentName = value; }
    inline void SetExperimentName(Aws::String&& value) { m_experimentName = std::move(value); }
    inline void SetExperimentName(const char* value) { m_experimentName.assign(value); }
    inline DescribeExperimentResult& WithExperimentName(const Aws::String& value) { SetExperimentName(value); return *this;}
    inline DescribeExperimentResult& WithExperimentName(Aws::String&& value) { SetExperimentName(std::move(value)); return *this;}
    inline DescribeExperimentResult& WithExperimentName(const char* value) { SetExperimentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the experiment.</p>
     */
    inline const Aws::String& GetExperimentArn() const{ return m_experimentArn; }
    inline void SetExperimentArn(const Aws::String& value) { m_experimentArn = value; }
    inline void SetExperimentArn(Aws::String&& value) { m_experimentArn = std::move(value); }
    inline void SetExperimentArn(const char* value) { m_experimentArn.assign(value); }
    inline DescribeExperimentResult& WithExperimentArn(const Aws::String& value) { SetExperimentArn(value); return *this;}
    inline DescribeExperimentResult& WithExperimentArn(Aws::String&& value) { SetExperimentArn(std::move(value)); return *this;}
    inline DescribeExperimentResult& WithExperimentArn(const char* value) { SetExperimentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the experiment as displayed. If <code>DisplayName</code> isn't
     * specified, <code>ExperimentName</code> is displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline DescribeExperimentResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline DescribeExperimentResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline DescribeExperimentResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source and, optionally, the type.</p>
     */
    inline const ExperimentSource& GetSource() const{ return m_source; }
    inline void SetSource(const ExperimentSource& value) { m_source = value; }
    inline void SetSource(ExperimentSource&& value) { m_source = std::move(value); }
    inline DescribeExperimentResult& WithSource(const ExperimentSource& value) { SetSource(value); return *this;}
    inline DescribeExperimentResult& WithSource(ExperimentSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the experiment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeExperimentResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeExperimentResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeExperimentResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the experiment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeExperimentResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeExperimentResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who created the experiment.</p>
     */
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const UserContext& value) { m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdBy = std::move(value); }
    inline DescribeExperimentResult& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline DescribeExperimentResult& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the experiment was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeExperimentResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeExperimentResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who last modified the experiment.</p>
     */
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedBy = std::move(value); }
    inline DescribeExperimentResult& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}
    inline DescribeExperimentResult& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeExperimentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeExperimentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeExperimentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_experimentName;

    Aws::String m_experimentArn;

    Aws::String m_displayName;

    ExperimentSource m_source;

    Aws::String m_description;

    Aws::Utils::DateTime m_creationTime;

    UserContext m_createdBy;

    Aws::Utils::DateTime m_lastModifiedTime;

    UserContext m_lastModifiedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
