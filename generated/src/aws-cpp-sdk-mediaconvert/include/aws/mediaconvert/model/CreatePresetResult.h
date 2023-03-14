/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Preset.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreatePresetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreatePresetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreatePresetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Preset m_preset;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
