/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
   * <p>Object containing information about the model versions of selected features
   * in a given job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/MediaAnalysisModelVersions">AWS
   * API Reference</a></p>
   */
  class MediaAnalysisModelVersions
  {
  public:
    AWS_REKOGNITION_API MediaAnalysisModelVersions();
    AWS_REKOGNITION_API MediaAnalysisModelVersions(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API MediaAnalysisModelVersions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Moderation base model version.</p>
     */
    inline const Aws::String& GetModeration() const{ return m_moderation; }

    /**
     * <p>The Moderation base model version.</p>
     */
    inline bool ModerationHasBeenSet() const { return m_moderationHasBeenSet; }

    /**
     * <p>The Moderation base model version.</p>
     */
    inline void SetModeration(const Aws::String& value) { m_moderationHasBeenSet = true; m_moderation = value; }

    /**
     * <p>The Moderation base model version.</p>
     */
    inline void SetModeration(Aws::String&& value) { m_moderationHasBeenSet = true; m_moderation = std::move(value); }

    /**
     * <p>The Moderation base model version.</p>
     */
    inline void SetModeration(const char* value) { m_moderationHasBeenSet = true; m_moderation.assign(value); }

    /**
     * <p>The Moderation base model version.</p>
     */
    inline MediaAnalysisModelVersions& WithModeration(const Aws::String& value) { SetModeration(value); return *this;}

    /**
     * <p>The Moderation base model version.</p>
     */
    inline MediaAnalysisModelVersions& WithModeration(Aws::String&& value) { SetModeration(std::move(value)); return *this;}

    /**
     * <p>The Moderation base model version.</p>
     */
    inline MediaAnalysisModelVersions& WithModeration(const char* value) { SetModeration(value); return *this;}

  private:

    Aws::String m_moderation;
    bool m_moderationHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
