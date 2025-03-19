/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ArtifactSourceType.h>
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
   * <p>A structure describing the source of an artifact.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ArtifactSource">AWS
   * API Reference</a></p>
   */
  class ArtifactSource
  {
  public:
    AWS_SAGEMAKER_API ArtifactSource() = default;
    AWS_SAGEMAKER_API ArtifactSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ArtifactSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URI of the source.</p>
     */
    inline const Aws::String& GetSourceUri() const { return m_sourceUri; }
    inline bool SourceUriHasBeenSet() const { return m_sourceUriHasBeenSet; }
    template<typename SourceUriT = Aws::String>
    void SetSourceUri(SourceUriT&& value) { m_sourceUriHasBeenSet = true; m_sourceUri = std::forward<SourceUriT>(value); }
    template<typename SourceUriT = Aws::String>
    ArtifactSource& WithSourceUri(SourceUriT&& value) { SetSourceUri(std::forward<SourceUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of source types.</p>
     */
    inline const Aws::Vector<ArtifactSourceType>& GetSourceTypes() const { return m_sourceTypes; }
    inline bool SourceTypesHasBeenSet() const { return m_sourceTypesHasBeenSet; }
    template<typename SourceTypesT = Aws::Vector<ArtifactSourceType>>
    void SetSourceTypes(SourceTypesT&& value) { m_sourceTypesHasBeenSet = true; m_sourceTypes = std::forward<SourceTypesT>(value); }
    template<typename SourceTypesT = Aws::Vector<ArtifactSourceType>>
    ArtifactSource& WithSourceTypes(SourceTypesT&& value) { SetSourceTypes(std::forward<SourceTypesT>(value)); return *this;}
    template<typename SourceTypesT = ArtifactSourceType>
    ArtifactSource& AddSourceTypes(SourceTypesT&& value) { m_sourceTypesHasBeenSet = true; m_sourceTypes.emplace_back(std::forward<SourceTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sourceUri;
    bool m_sourceUriHasBeenSet = false;

    Aws::Vector<ArtifactSourceType> m_sourceTypes;
    bool m_sourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
