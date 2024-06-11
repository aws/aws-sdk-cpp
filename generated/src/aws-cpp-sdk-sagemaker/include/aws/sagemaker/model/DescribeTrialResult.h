/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrialSource.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/sagemaker/model/MetadataProperties.h>
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
  class DescribeTrialResult
  {
  public:
    AWS_SAGEMAKER_API DescribeTrialResult();
    AWS_SAGEMAKER_API DescribeTrialResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeTrialResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the trial.</p>
     */
    inline const Aws::String& GetTrialName() const{ return m_trialName; }
    inline void SetTrialName(const Aws::String& value) { m_trialName = value; }
    inline void SetTrialName(Aws::String&& value) { m_trialName = std::move(value); }
    inline void SetTrialName(const char* value) { m_trialName.assign(value); }
    inline DescribeTrialResult& WithTrialName(const Aws::String& value) { SetTrialName(value); return *this;}
    inline DescribeTrialResult& WithTrialName(Aws::String&& value) { SetTrialName(std::move(value)); return *this;}
    inline DescribeTrialResult& WithTrialName(const char* value) { SetTrialName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trial.</p>
     */
    inline const Aws::String& GetTrialArn() const{ return m_trialArn; }
    inline void SetTrialArn(const Aws::String& value) { m_trialArn = value; }
    inline void SetTrialArn(Aws::String&& value) { m_trialArn = std::move(value); }
    inline void SetTrialArn(const char* value) { m_trialArn.assign(value); }
    inline DescribeTrialResult& WithTrialArn(const Aws::String& value) { SetTrialArn(value); return *this;}
    inline DescribeTrialResult& WithTrialArn(Aws::String&& value) { SetTrialArn(std::move(value)); return *this;}
    inline DescribeTrialResult& WithTrialArn(const char* value) { SetTrialArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the trial as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialName</code> is displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline DescribeTrialResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline DescribeTrialResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline DescribeTrialResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the experiment the trial is part of.</p>
     */
    inline const Aws::String& GetExperimentName() const{ return m_experimentName; }
    inline void SetExperimentName(const Aws::String& value) { m_experimentName = value; }
    inline void SetExperimentName(Aws::String&& value) { m_experimentName = std::move(value); }
    inline void SetExperimentName(const char* value) { m_experimentName.assign(value); }
    inline DescribeTrialResult& WithExperimentName(const Aws::String& value) { SetExperimentName(value); return *this;}
    inline DescribeTrialResult& WithExperimentName(Aws::String&& value) { SetExperimentName(std::move(value)); return *this;}
    inline DescribeTrialResult& WithExperimentName(const char* value) { SetExperimentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source and, optionally, the job
     * type.</p>
     */
    inline const TrialSource& GetSource() const{ return m_source; }
    inline void SetSource(const TrialSource& value) { m_source = value; }
    inline void SetSource(TrialSource&& value) { m_source = std::move(value); }
    inline DescribeTrialResult& WithSource(const TrialSource& value) { SetSource(value); return *this;}
    inline DescribeTrialResult& WithSource(TrialSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the trial was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeTrialResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeTrialResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who created the trial.</p>
     */
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const UserContext& value) { m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdBy = std::move(value); }
    inline DescribeTrialResult& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline DescribeTrialResult& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the trial was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeTrialResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeTrialResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who last modified the trial.</p>
     */
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedBy = std::move(value); }
    inline DescribeTrialResult& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}
    inline DescribeTrialResult& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const MetadataProperties& GetMetadataProperties() const{ return m_metadataProperties; }
    inline void SetMetadataProperties(const MetadataProperties& value) { m_metadataProperties = value; }
    inline void SetMetadataProperties(MetadataProperties&& value) { m_metadataProperties = std::move(value); }
    inline DescribeTrialResult& WithMetadataProperties(const MetadataProperties& value) { SetMetadataProperties(value); return *this;}
    inline DescribeTrialResult& WithMetadataProperties(MetadataProperties&& value) { SetMetadataProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTrialResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTrialResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTrialResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_trialName;

    Aws::String m_trialArn;

    Aws::String m_displayName;

    Aws::String m_experimentName;

    TrialSource m_source;

    Aws::Utils::DateTime m_creationTime;

    UserContext m_createdBy;

    Aws::Utils::DateTime m_lastModifiedTime;

    UserContext m_lastModifiedBy;

    MetadataProperties m_metadataProperties;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
