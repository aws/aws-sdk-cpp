/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputLocation.h>
#include <aws/medialive/model/AvailBlankingState.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Avail Blanking<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AvailBlanking">AWS
   * API Reference</a></p>
   */
  class AvailBlanking
  {
  public:
    AWS_MEDIALIVE_API AvailBlanking();
    AWS_MEDIALIVE_API AvailBlanking(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AvailBlanking& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Blanking image to be used. Leave empty for solid black. Only bmp and png images
     * are supported.
     */
    inline const InputLocation& GetAvailBlankingImage() const{ return m_availBlankingImage; }

    /**
     * Blanking image to be used. Leave empty for solid black. Only bmp and png images
     * are supported.
     */
    inline bool AvailBlankingImageHasBeenSet() const { return m_availBlankingImageHasBeenSet; }

    /**
     * Blanking image to be used. Leave empty for solid black. Only bmp and png images
     * are supported.
     */
    inline void SetAvailBlankingImage(const InputLocation& value) { m_availBlankingImageHasBeenSet = true; m_availBlankingImage = value; }

    /**
     * Blanking image to be used. Leave empty for solid black. Only bmp and png images
     * are supported.
     */
    inline void SetAvailBlankingImage(InputLocation&& value) { m_availBlankingImageHasBeenSet = true; m_availBlankingImage = std::move(value); }

    /**
     * Blanking image to be used. Leave empty for solid black. Only bmp and png images
     * are supported.
     */
    inline AvailBlanking& WithAvailBlankingImage(const InputLocation& value) { SetAvailBlankingImage(value); return *this;}

    /**
     * Blanking image to be used. Leave empty for solid black. Only bmp and png images
     * are supported.
     */
    inline AvailBlanking& WithAvailBlankingImage(InputLocation&& value) { SetAvailBlankingImage(std::move(value)); return *this;}


    /**
     * When set to enabled, causes video, audio and captions to be blanked when
     * insertion metadata is added.
     */
    inline const AvailBlankingState& GetState() const{ return m_state; }

    /**
     * When set to enabled, causes video, audio and captions to be blanked when
     * insertion metadata is added.
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * When set to enabled, causes video, audio and captions to be blanked when
     * insertion metadata is added.
     */
    inline void SetState(const AvailBlankingState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * When set to enabled, causes video, audio and captions to be blanked when
     * insertion metadata is added.
     */
    inline void SetState(AvailBlankingState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * When set to enabled, causes video, audio and captions to be blanked when
     * insertion metadata is added.
     */
    inline AvailBlanking& WithState(const AvailBlankingState& value) { SetState(value); return *this;}

    /**
     * When set to enabled, causes video, audio and captions to be blanked when
     * insertion metadata is added.
     */
    inline AvailBlanking& WithState(AvailBlankingState&& value) { SetState(std::move(value)); return *this;}

  private:

    InputLocation m_availBlankingImage;
    bool m_availBlankingImageHasBeenSet = false;

    AvailBlankingState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
