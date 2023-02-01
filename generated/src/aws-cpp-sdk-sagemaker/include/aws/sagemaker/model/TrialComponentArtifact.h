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
   * <p>Represents an input or output artifact of a trial component. You specify
   * <code>TrialComponentArtifact</code> as part of the <code>InputArtifacts</code>
   * and <code>OutputArtifacts</code> parameters in the <a>CreateTrialComponent</a>
   * request.</p> <p>Examples of input artifacts are datasets, algorithms,
   * hyperparameters, source code, and instance types. Examples of output artifacts
   * are metrics, snapshots, logs, and images.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrialComponentArtifact">AWS
   * API Reference</a></p>
   */
  class TrialComponentArtifact
  {
  public:
    AWS_SAGEMAKER_API TrialComponentArtifact();
    AWS_SAGEMAKER_API TrialComponentArtifact(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrialComponentArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The media type of the artifact, which indicates the type of data in the
     * artifact file. The media type consists of a <i>type</i> and a <i>subtype</i>
     * concatenated with a slash (/) character, for example, text/csv, image/jpeg, and
     * s3/uri. The type specifies the category of the media. The subtype specifies the
     * kind of data.</p>
     */
    inline const Aws::String& GetMediaType() const{ return m_mediaType; }

    /**
     * <p>The media type of the artifact, which indicates the type of data in the
     * artifact file. The media type consists of a <i>type</i> and a <i>subtype</i>
     * concatenated with a slash (/) character, for example, text/csv, image/jpeg, and
     * s3/uri. The type specifies the category of the media. The subtype specifies the
     * kind of data.</p>
     */
    inline bool MediaTypeHasBeenSet() const { return m_mediaTypeHasBeenSet; }

    /**
     * <p>The media type of the artifact, which indicates the type of data in the
     * artifact file. The media type consists of a <i>type</i> and a <i>subtype</i>
     * concatenated with a slash (/) character, for example, text/csv, image/jpeg, and
     * s3/uri. The type specifies the category of the media. The subtype specifies the
     * kind of data.</p>
     */
    inline void SetMediaType(const Aws::String& value) { m_mediaTypeHasBeenSet = true; m_mediaType = value; }

    /**
     * <p>The media type of the artifact, which indicates the type of data in the
     * artifact file. The media type consists of a <i>type</i> and a <i>subtype</i>
     * concatenated with a slash (/) character, for example, text/csv, image/jpeg, and
     * s3/uri. The type specifies the category of the media. The subtype specifies the
     * kind of data.</p>
     */
    inline void SetMediaType(Aws::String&& value) { m_mediaTypeHasBeenSet = true; m_mediaType = std::move(value); }

    /**
     * <p>The media type of the artifact, which indicates the type of data in the
     * artifact file. The media type consists of a <i>type</i> and a <i>subtype</i>
     * concatenated with a slash (/) character, for example, text/csv, image/jpeg, and
     * s3/uri. The type specifies the category of the media. The subtype specifies the
     * kind of data.</p>
     */
    inline void SetMediaType(const char* value) { m_mediaTypeHasBeenSet = true; m_mediaType.assign(value); }

    /**
     * <p>The media type of the artifact, which indicates the type of data in the
     * artifact file. The media type consists of a <i>type</i> and a <i>subtype</i>
     * concatenated with a slash (/) character, for example, text/csv, image/jpeg, and
     * s3/uri. The type specifies the category of the media. The subtype specifies the
     * kind of data.</p>
     */
    inline TrialComponentArtifact& WithMediaType(const Aws::String& value) { SetMediaType(value); return *this;}

    /**
     * <p>The media type of the artifact, which indicates the type of data in the
     * artifact file. The media type consists of a <i>type</i> and a <i>subtype</i>
     * concatenated with a slash (/) character, for example, text/csv, image/jpeg, and
     * s3/uri. The type specifies the category of the media. The subtype specifies the
     * kind of data.</p>
     */
    inline TrialComponentArtifact& WithMediaType(Aws::String&& value) { SetMediaType(std::move(value)); return *this;}

    /**
     * <p>The media type of the artifact, which indicates the type of data in the
     * artifact file. The media type consists of a <i>type</i> and a <i>subtype</i>
     * concatenated with a slash (/) character, for example, text/csv, image/jpeg, and
     * s3/uri. The type specifies the category of the media. The subtype specifies the
     * kind of data.</p>
     */
    inline TrialComponentArtifact& WithMediaType(const char* value) { SetMediaType(value); return *this;}


    /**
     * <p>The location of the artifact.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The location of the artifact.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The location of the artifact.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The location of the artifact.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The location of the artifact.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The location of the artifact.</p>
     */
    inline TrialComponentArtifact& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The location of the artifact.</p>
     */
    inline TrialComponentArtifact& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The location of the artifact.</p>
     */
    inline TrialComponentArtifact& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_mediaType;
    bool m_mediaTypeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
