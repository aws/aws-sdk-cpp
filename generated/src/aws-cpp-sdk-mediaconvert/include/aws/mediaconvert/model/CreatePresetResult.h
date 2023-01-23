/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Preset.h>
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
namespace MediaConvert
{
namespace Model
{
  class CreatePresetResult
  {
  public:
    AWS_MEDIACONVERT_API CreatePresetResult();
    AWS_MEDIACONVERT_API CreatePresetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONVERT_API CreatePresetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A preset is a collection of preconfigured media conversion settings that you
     * want MediaConvert to apply to the output during the conversion process.
     */
    inline const Preset& GetPreset() const{ return m_preset; }

    /**
     * A preset is a collection of preconfigured media conversion settings that you
     * want MediaConvert to apply to the output during the conversion process.
     */
    inline void SetPreset(const Preset& value) { m_preset = value; }

    /**
     * A preset is a collection of preconfigured media conversion settings that you
     * want MediaConvert to apply to the output during the conversion process.
     */
    inline void SetPreset(Preset&& value) { m_preset = std::move(value); }

    /**
     * A preset is a collection of preconfigured media conversion settings that you
     * want MediaConvert to apply to the output during the conversion process.
     */
    inline CreatePresetResult& WithPreset(const Preset& value) { SetPreset(value); return *this;}

    /**
     * A preset is a collection of preconfigured media conversion settings that you
     * want MediaConvert to apply to the output during the conversion process.
     */
    inline CreatePresetResult& WithPreset(Preset&& value) { SetPreset(std::move(value)); return *this;}

  private:

    Preset m_preset;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
