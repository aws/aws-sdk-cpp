/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ArtifactSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class DescribeArtifactResult
  {
  public:
    AWS_SAGEMAKER_API DescribeArtifactResult();
    AWS_SAGEMAKER_API DescribeArtifactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeArtifactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the artifact.</p>
     */
    inline const Aws::String& GetArtifactName() const{ return m_artifactName; }
    inline void SetArtifactName(const Aws::String& value) { m_artifactName = value; }
    inline void SetArtifactName(Aws::String&& value) { m_artifactName = std::move(value); }
    inline void SetArtifactName(const char* value) { m_artifactName.assign(value); }
    inline DescribeArtifactResult& WithArtifactName(const Aws::String& value) { SetArtifactName(value); return *this;}
    inline DescribeArtifactResult& WithArtifactName(Aws::String&& value) { SetArtifactName(std::move(value)); return *this;}
    inline DescribeArtifactResult& WithArtifactName(const char* value) { SetArtifactName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the artifact.</p>
     */
    inline const Aws::String& GetArtifactArn() const{ return m_artifactArn; }
    inline void SetArtifactArn(const Aws::String& value) { m_artifactArn = value; }
    inline void SetArtifactArn(Aws::String&& value) { m_artifactArn = std::move(value); }
    inline void SetArtifactArn(const char* value) { m_artifactArn.assign(value); }
    inline DescribeArtifactResult& WithArtifactArn(const Aws::String& value) { SetArtifactArn(value); return *this;}
    inline DescribeArtifactResult& WithArtifactArn(Aws::String&& value) { SetArtifactArn(std::move(value)); return *this;}
    inline DescribeArtifactResult& WithArtifactArn(const char* value) { SetArtifactArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the artifact.</p>
     */
    inline const ArtifactSource& GetSource() const{ return m_source; }
    inline void SetSource(const ArtifactSource& value) { m_source = value; }
    inline void SetSource(ArtifactSource&& value) { m_source = std::move(value); }
    inline DescribeArtifactResult& WithSource(const ArtifactSource& value) { SetSource(value); return *this;}
    inline DescribeArtifactResult& WithSource(ArtifactSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the artifact.</p>
     */
    inline const Aws::String& GetArtifactType() const{ return m_artifactType; }
    inline void SetArtifactType(const Aws::String& value) { m_artifactType = value; }
    inline void SetArtifactType(Aws::String&& value) { m_artifactType = std::move(value); }
    inline void SetArtifactType(const char* value) { m_artifactType.assign(value); }
    inline DescribeArtifactResult& WithArtifactType(const Aws::String& value) { SetArtifactType(value); return *this;}
    inline DescribeArtifactResult& WithArtifactType(Aws::String&& value) { SetArtifactType(std::move(value)); return *this;}
    inline DescribeArtifactResult& WithArtifactType(const char* value) { SetArtifactType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the artifact's properties.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProperties() const{ return m_properties; }
    inline void SetProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_properties = value; }
    inline void SetProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_properties = std::move(value); }
    inline DescribeArtifactResult& WithProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetProperties(value); return *this;}
    inline DescribeArtifactResult& WithProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetProperties(std::move(value)); return *this;}
    inline DescribeArtifactResult& AddProperties(const Aws::String& key, const Aws::String& value) { m_properties.emplace(key, value); return *this; }
    inline DescribeArtifactResult& AddProperties(Aws::String&& key, const Aws::String& value) { m_properties.emplace(std::move(key), value); return *this; }
    inline DescribeArtifactResult& AddProperties(const Aws::String& key, Aws::String&& value) { m_properties.emplace(key, std::move(value)); return *this; }
    inline DescribeArtifactResult& AddProperties(Aws::String&& key, Aws::String&& value) { m_properties.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeArtifactResult& AddProperties(const char* key, Aws::String&& value) { m_properties.emplace(key, std::move(value)); return *this; }
    inline DescribeArtifactResult& AddProperties(Aws::String&& key, const char* value) { m_properties.emplace(std::move(key), value); return *this; }
    inline DescribeArtifactResult& AddProperties(const char* key, const char* value) { m_properties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the artifact was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeArtifactResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeArtifactResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const UserContext& value) { m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdBy = std::move(value); }
    inline DescribeArtifactResult& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline DescribeArtifactResult& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the artifact was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeArtifactResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeArtifactResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedBy = std::move(value); }
    inline DescribeArtifactResult& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}
    inline DescribeArtifactResult& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const MetadataProperties& GetMetadataProperties() const{ return m_metadataProperties; }
    inline void SetMetadataProperties(const MetadataProperties& value) { m_metadataProperties = value; }
    inline void SetMetadataProperties(MetadataProperties&& value) { m_metadataProperties = std::move(value); }
    inline DescribeArtifactResult& WithMetadataProperties(const MetadataProperties& value) { SetMetadataProperties(value); return *this;}
    inline DescribeArtifactResult& WithMetadataProperties(MetadataProperties&& value) { SetMetadataProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline const Aws::String& GetLineageGroupArn() const{ return m_lineageGroupArn; }
    inline void SetLineageGroupArn(const Aws::String& value) { m_lineageGroupArn = value; }
    inline void SetLineageGroupArn(Aws::String&& value) { m_lineageGroupArn = std::move(value); }
    inline void SetLineageGroupArn(const char* value) { m_lineageGroupArn.assign(value); }
    inline DescribeArtifactResult& WithLineageGroupArn(const Aws::String& value) { SetLineageGroupArn(value); return *this;}
    inline DescribeArtifactResult& WithLineageGroupArn(Aws::String&& value) { SetLineageGroupArn(std::move(value)); return *this;}
    inline DescribeArtifactResult& WithLineageGroupArn(const char* value) { SetLineageGroupArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeArtifactResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeArtifactResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeArtifactResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_artifactName;

    Aws::String m_artifactArn;

    ArtifactSource m_source;

    Aws::String m_artifactType;

    Aws::Map<Aws::String, Aws::String> m_properties;

    Aws::Utils::DateTime m_creationTime;

    UserContext m_createdBy;

    Aws::Utils::DateTime m_lastModifiedTime;

    UserContext m_lastModifiedBy;

    MetadataProperties m_metadataProperties;

    Aws::String m_lineageGroupArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
