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
    AWS_SAGEMAKER_API ArtifactSummary() = default;
    AWS_SAGEMAKER_API ArtifactSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ArtifactSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the artifact.</p>
     */
    inline const Aws::String& GetArtifactArn() const { return m_artifactArn; }
    inline bool ArtifactArnHasBeenSet() const { return m_artifactArnHasBeenSet; }
    template<typename ArtifactArnT = Aws::String>
    void SetArtifactArn(ArtifactArnT&& value) { m_artifactArnHasBeenSet = true; m_artifactArn = std::forward<ArtifactArnT>(value); }
    template<typename ArtifactArnT = Aws::String>
    ArtifactSummary& WithArtifactArn(ArtifactArnT&& value) { SetArtifactArn(std::forward<ArtifactArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the artifact.</p>
     */
    inline const Aws::String& GetArtifactName() const { return m_artifactName; }
    inline bool ArtifactNameHasBeenSet() const { return m_artifactNameHasBeenSet; }
    template<typename ArtifactNameT = Aws::String>
    void SetArtifactName(ArtifactNameT&& value) { m_artifactNameHasBeenSet = true; m_artifactName = std::forward<ArtifactNameT>(value); }
    template<typename ArtifactNameT = Aws::String>
    ArtifactSummary& WithArtifactName(ArtifactNameT&& value) { SetArtifactName(std::forward<ArtifactNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the artifact.</p>
     */
    inline const ArtifactSource& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = ArtifactSource>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = ArtifactSource>
    ArtifactSummary& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the artifact.</p>
     */
    inline const Aws::String& GetArtifactType() const { return m_artifactType; }
    inline bool ArtifactTypeHasBeenSet() const { return m_artifactTypeHasBeenSet; }
    template<typename ArtifactTypeT = Aws::String>
    void SetArtifactType(ArtifactTypeT&& value) { m_artifactTypeHasBeenSet = true; m_artifactType = std::forward<ArtifactTypeT>(value); }
    template<typename ArtifactTypeT = Aws::String>
    ArtifactSummary& WithArtifactType(ArtifactTypeT&& value) { SetArtifactType(std::forward<ArtifactTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the artifact was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ArtifactSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the artifact was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    ArtifactSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
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

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
