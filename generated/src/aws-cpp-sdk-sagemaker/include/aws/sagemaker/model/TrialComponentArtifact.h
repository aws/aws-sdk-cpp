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
   * and <code>OutputArtifacts</code> parameters in the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateTrialComponent.html">CreateTrialComponent</a>
   * request.</p> <p>Examples of input artifacts are datasets, algorithms,
   * hyperparameters, source code, and instance types. Examples of output artifacts
   * are metrics, snapshots, logs, and images.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrialComponentArtifact">AWS
   * API Reference</a></p>
   */
  class TrialComponentArtifact
  {
  public:
    AWS_SAGEMAKER_API TrialComponentArtifact() = default;
    AWS_SAGEMAKER_API TrialComponentArtifact(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TrialComponentArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The media type of the artifact, which indicates the type of data in the
     * artifact file. The media type consists of a <i>type</i> and a <i>subtype</i>
     * concatenated with a slash (/) character, for example, text/csv, image/jpeg, and
     * s3/uri. The type specifies the category of the media. The subtype specifies the
     * kind of data.</p>
     */
    inline const Aws::String& GetMediaType() const { return m_mediaType; }
    inline bool MediaTypeHasBeenSet() const { return m_mediaTypeHasBeenSet; }
    template<typename MediaTypeT = Aws::String>
    void SetMediaType(MediaTypeT&& value) { m_mediaTypeHasBeenSet = true; m_mediaType = std::forward<MediaTypeT>(value); }
    template<typename MediaTypeT = Aws::String>
    TrialComponentArtifact& WithMediaType(MediaTypeT&& value) { SetMediaType(std::forward<MediaTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the artifact.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    TrialComponentArtifact& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mediaType;
    bool m_mediaTypeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
