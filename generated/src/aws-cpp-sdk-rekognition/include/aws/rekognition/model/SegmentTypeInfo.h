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
    AWS_REKOGNITION_API SegmentTypeInfo();
    AWS_REKOGNITION_API SegmentTypeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API SegmentTypeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of a segment (technical cue or shot detection).</p>
     */
    inline const SegmentType& GetType() const{ return m_type; }

    /**
     * <p>The type of a segment (technical cue or shot detection).</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of a segment (technical cue or shot detection).</p>
     */
    inline void SetType(const SegmentType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of a segment (technical cue or shot detection).</p>
     */
    inline void SetType(SegmentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of a segment (technical cue or shot detection).</p>
     */
    inline SegmentTypeInfo& WithType(const SegmentType& value) { SetType(value); return *this;}

    /**
     * <p>The type of a segment (technical cue or shot detection).</p>
     */
    inline SegmentTypeInfo& WithType(SegmentType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The version of the model used to detect segments.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p>The version of the model used to detect segments.</p>
     */
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }

    /**
     * <p>The version of the model used to detect segments.</p>
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }

    /**
     * <p>The version of the model used to detect segments.</p>
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::move(value); }

    /**
     * <p>The version of the model used to detect segments.</p>
     */
    inline void SetModelVersion(const char* value) { m_modelVersionHasBeenSet = true; m_modelVersion.assign(value); }

    /**
     * <p>The version of the model used to detect segments.</p>
     */
    inline SegmentTypeInfo& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * <p>The version of the model used to detect segments.</p>
     */
    inline SegmentTypeInfo& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the model used to detect segments.</p>
     */
    inline SegmentTypeInfo& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}

  private:

    SegmentType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
