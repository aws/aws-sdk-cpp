/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/SegmentType.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Information about the type of a segment requested in a call to
   * <a>StartSegmentDetection</a>. An array of <code>SegmentTypeInfo</code> objects
   * is returned by the response from <a>GetSegmentDetection</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/SegmentTypeInfo">AWS
   * API Reference</a></p>
   */
  class SegmentTypeInfo
  {
  public:
    AWS_REKOGNITION_API SegmentTypeInfo() = default;
    AWS_REKOGNITION_API SegmentTypeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API SegmentTypeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of a segment (technical cue or shot detection).</p>
     */
    inline SegmentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SegmentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SegmentTypeInfo& WithType(SegmentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model used to detect segments.</p>
     */
    inline const Aws::String& GetModelVersion() const { return m_modelVersion; }
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }
    template<typename ModelVersionT = Aws::String>
    void SetModelVersion(ModelVersionT&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::forward<ModelVersionT>(value); }
    template<typename ModelVersionT = Aws::String>
    SegmentTypeInfo& WithModelVersion(ModelVersionT&& value) { SetModelVersion(std::forward<ModelVersionT>(value)); return *this;}
    ///@}
  private:

    SegmentType m_type{SegmentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
