/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListPresetsResult
  {
  public:
    AWS_MEDIACONVERT_API ListPresetsResult();
    AWS_MEDIACONVERT_API ListPresetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONVERT_API ListPresetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Use this string to request the next batch of presets.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * Use this string to request the next batch of presets.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * Use this string to request the next batch of presets.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * Use this string to request the next batch of presets.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * Use this string to request the next batch of presets.
     */
    inline ListPresetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * Use this string to request the next batch of presets.
     */
    inline ListPresetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * Use this string to request the next batch of presets.
     */
    inline ListPresetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * List of presets
     */
    inline const Aws::Vector<Preset>& GetPresets() const{ return m_presets; }

    /**
     * List of presets
     */
    inline void SetPresets(const Aws::Vector<Preset>& value) { m_presets = value; }

    /**
     * List of presets
     */
    inline void SetPresets(Aws::Vector<Preset>&& value) { m_presets = std::move(value); }

    /**
     * List of presets
     */
    inline ListPresetsResult& WithPresets(const Aws::Vector<Preset>& value) { SetPresets(value); return *this;}

    /**
     * List of presets
     */
    inline ListPresetsResult& WithPresets(Aws::Vector<Preset>&& value) { SetPresets(std::move(value)); return *this;}

    /**
     * List of presets
     */
    inline ListPresetsResult& AddPresets(const Preset& value) { m_presets.push_back(value); return *this; }

    /**
     * List of presets
     */
    inline ListPresetsResult& AddPresets(Preset&& value) { m_presets.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Preset> m_presets;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
