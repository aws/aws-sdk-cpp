/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ArtifactSourceIdType.h>
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
   * <p>The ID and ID type of an artifact source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ArtifactSourceType">AWS
   * API Reference</a></p>
   */
  class ArtifactSourceType
  {
  public:
    AWS_SAGEMAKER_API ArtifactSourceType() = default;
    AWS_SAGEMAKER_API ArtifactSourceType(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ArtifactSourceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of ID.</p>
     */
    inline ArtifactSourceIdType GetSourceIdType() const { return m_sourceIdType; }
    inline bool SourceIdTypeHasBeenSet() const { return m_sourceIdTypeHasBeenSet; }
    inline void SetSourceIdType(ArtifactSourceIdType value) { m_sourceIdTypeHasBeenSet = true; m_sourceIdType = value; }
    inline ArtifactSourceType& WithSourceIdType(ArtifactSourceIdType value) { SetSourceIdType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ArtifactSourceType& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    ArtifactSourceIdType m_sourceIdType{ArtifactSourceIdType::NOT_SET};
    bool m_sourceIdTypeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
