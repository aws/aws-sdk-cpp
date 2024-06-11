/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ArtifactSource.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Lists a summary of the properties of an artifact. An artifact represents a
   * URI addressable object or data. Some examples are a dataset and a
   * model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ArtifactSummary">AWS
   * API Reference</a></p>
   */
  class ArtifactSummary
  {
  public:
    AWS_SAGEMAKER_API ArtifactSummary();
    AWS_SAGEMAKER_API ArtifactSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ArtifactSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the artifact.</p>
     */
    inline const Aws::String& GetArtifactArn() const{ return m_artifactArn; }
    inline bool ArtifactArnHasBeenSet() const { return m_artifactArnHasBeenSet; }
    inline void SetArtifactArn(const Aws::String& value) { m_artifactArnHasBeenSet = true; m_artifactArn = value; }
    inline void SetArtifactArn(Aws::String&& value) { m_artifactArnHasBeenSet = true; m_artifactArn = std::move(value); }
    inline void SetArtifactArn(const char* value) { m_artifactArnHasBeenSet = true; m_artifactArn.assign(value); }
    inline ArtifactSummary& WithArtifactArn(const Aws::String& value) { SetArtifactArn(value); return *this;}
    inline ArtifactSummary& WithArtifactArn(Aws::String&& value) { SetArtifactArn(std::move(value)); return *this;}
    inline ArtifactSummary& WithArtifactArn(const char* value) { SetArtifactArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the artifact.</p>
     */
    inline const Aws::String& GetArtifactName() const{ return m_artifactName; }
    inline bool ArtifactNameHasBeenSet() const { return m_artifactNameHasBeenSet; }
    inline void SetArtifactName(const Aws::String& value) { m_artifactNameHasBeenSet = true; m_artifactName = value; }
    inline void SetArtifactName(Aws::String&& value) { m_artifactNameHasBeenSet = true; m_artifactName = std::move(value); }
    inline void SetArtifactName(const char* value) { m_artifactNameHasBeenSet = true; m_artifactName.assign(value); }
    inline ArtifactSummary& WithArtifactName(const Aws::String& value) { SetArtifactName(value); return *this;}
    inline ArtifactSummary& WithArtifactName(Aws::String&& value) { SetArtifactName(std::move(value)); return *this;}
    inline ArtifactSummary& WithArtifactName(const char* value) { SetArtifactName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the artifact.</p>
     */
    inline const ArtifactSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const ArtifactSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(ArtifactSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline ArtifactSummary& WithSource(const ArtifactSource& value) { SetSource(value); return *this;}
    inline ArtifactSummary& WithSource(ArtifactSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the artifact.</p>
     */
    inline const Aws::String& GetArtifactType() const{ return m_artifactType; }
    inline bool ArtifactTypeHasBeenSet() const { return m_artifactTypeHasBeenSet; }
    inline void SetArtifactType(const Aws::String& value) { m_artifactTypeHasBeenSet = true; m_artifactType = value; }
    inline void SetArtifactType(Aws::String&& value) { m_artifactTypeHasBeenSet = true; m_artifactType = std::move(value); }
    inline void SetArtifactType(const char* value) { m_artifactTypeHasBeenSet = true; m_artifactType.assign(value); }
    inline ArtifactSummary& WithArtifactType(const Aws::String& value) { SetArtifactType(value); return *this;}
    inline ArtifactSummary& WithArtifactType(Aws::String&& value) { SetArtifactType(std::move(value)); return *this;}
    inline ArtifactSummary& WithArtifactType(const char* value) { SetArtifactType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the artifact was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ArtifactSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ArtifactSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the artifact was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline ArtifactSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline ArtifactSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_artifactArn;
    bool m_artifactArnHasBeenSet = false;

    Aws::String m_artifactName;
    bool m_artifactNameHasBeenSet = false;

    ArtifactSource m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_artifactType;
    bool m_artifactTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
