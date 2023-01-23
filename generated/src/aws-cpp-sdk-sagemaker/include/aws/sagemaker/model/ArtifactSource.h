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
    AWS_SAGEMAKER_API ArtifactSource();
    AWS_SAGEMAKER_API ArtifactSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ArtifactSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URI of the source.</p>
     */
    inline const Aws::String& GetSourceUri() const{ return m_sourceUri; }

    /**
     * <p>The URI of the source.</p>
     */
    inline bool SourceUriHasBeenSet() const { return m_sourceUriHasBeenSet; }

    /**
     * <p>The URI of the source.</p>
     */
    inline void SetSourceUri(const Aws::String& value) { m_sourceUriHasBeenSet = true; m_sourceUri = value; }

    /**
     * <p>The URI of the source.</p>
     */
    inline void SetSourceUri(Aws::String&& value) { m_sourceUriHasBeenSet = true; m_sourceUri = std::move(value); }

    /**
     * <p>The URI of the source.</p>
     */
    inline void SetSourceUri(const char* value) { m_sourceUriHasBeenSet = true; m_sourceUri.assign(value); }

    /**
     * <p>The URI of the source.</p>
     */
    inline ArtifactSource& WithSourceUri(const Aws::String& value) { SetSourceUri(value); return *this;}

    /**
     * <p>The URI of the source.</p>
     */
    inline ArtifactSource& WithSourceUri(Aws::String&& value) { SetSourceUri(std::move(value)); return *this;}

    /**
     * <p>The URI of the source.</p>
     */
    inline ArtifactSource& WithSourceUri(const char* value) { SetSourceUri(value); return *this;}


    /**
     * <p>A list of source types.</p>
     */
    inline const Aws::Vector<ArtifactSourceType>& GetSourceTypes() const{ return m_sourceTypes; }

    /**
     * <p>A list of source types.</p>
     */
    inline bool SourceTypesHasBeenSet() const { return m_sourceTypesHasBeenSet; }

    /**
     * <p>A list of source types.</p>
     */
    inline void SetSourceTypes(const Aws::Vector<ArtifactSourceType>& value) { m_sourceTypesHasBeenSet = true; m_sourceTypes = value; }

    /**
     * <p>A list of source types.</p>
     */
    inline void SetSourceTypes(Aws::Vector<ArtifactSourceType>&& value) { m_sourceTypesHasBeenSet = true; m_sourceTypes = std::move(value); }

    /**
     * <p>A list of source types.</p>
     */
    inline ArtifactSource& WithSourceTypes(const Aws::Vector<ArtifactSourceType>& value) { SetSourceTypes(value); return *this;}

    /**
     * <p>A list of source types.</p>
     */
    inline ArtifactSource& WithSourceTypes(Aws::Vector<ArtifactSourceType>&& value) { SetSourceTypes(std::move(value)); return *this;}

    /**
     * <p>A list of source types.</p>
     */
    inline ArtifactSource& AddSourceTypes(const ArtifactSourceType& value) { m_sourceTypesHasBeenSet = true; m_sourceTypes.push_back(value); return *this; }

    /**
     * <p>A list of source types.</p>
     */
    inline ArtifactSource& AddSourceTypes(ArtifactSourceType&& value) { m_sourceTypesHasBeenSet = true; m_sourceTypes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sourceUri;
    bool m_sourceUriHasBeenSet = false;

    Aws::Vector<ArtifactSourceType> m_sourceTypes;
    bool m_sourceTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
