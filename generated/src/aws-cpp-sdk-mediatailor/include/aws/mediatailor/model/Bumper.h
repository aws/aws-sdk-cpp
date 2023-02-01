/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The configuration for bumpers. Bumpers are short audio or video clips that
   * play at the start or before the end of an ad break. To learn more about bumpers,
   * see <a
   * href="https://docs.aws.amazon.com/mediatailor/latest/ug/bumpers.html">Bumpers</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/Bumper">AWS
   * API Reference</a></p>
   */
  class Bumper
  {
  public:
    AWS_MEDIATAILOR_API Bumper();
    AWS_MEDIATAILOR_API Bumper(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Bumper& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL for the end bumper asset.</p>
     */
    inline const Aws::String& GetEndUrl() const{ return m_endUrl; }

    /**
     * <p>The URL for the end bumper asset.</p>
     */
    inline bool EndUrlHasBeenSet() const { return m_endUrlHasBeenSet; }

    /**
     * <p>The URL for the end bumper asset.</p>
     */
    inline void SetEndUrl(const Aws::String& value) { m_endUrlHasBeenSet = true; m_endUrl = value; }

    /**
     * <p>The URL for the end bumper asset.</p>
     */
    inline void SetEndUrl(Aws::String&& value) { m_endUrlHasBeenSet = true; m_endUrl = std::move(value); }

    /**
     * <p>The URL for the end bumper asset.</p>
     */
    inline void SetEndUrl(const char* value) { m_endUrlHasBeenSet = true; m_endUrl.assign(value); }

    /**
     * <p>The URL for the end bumper asset.</p>
     */
    inline Bumper& WithEndUrl(const Aws::String& value) { SetEndUrl(value); return *this;}

    /**
     * <p>The URL for the end bumper asset.</p>
     */
    inline Bumper& WithEndUrl(Aws::String&& value) { SetEndUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the end bumper asset.</p>
     */
    inline Bumper& WithEndUrl(const char* value) { SetEndUrl(value); return *this;}


    /**
     * <p>The URL for the start bumper asset.</p>
     */
    inline const Aws::String& GetStartUrl() const{ return m_startUrl; }

    /**
     * <p>The URL for the start bumper asset.</p>
     */
    inline bool StartUrlHasBeenSet() const { return m_startUrlHasBeenSet; }

    /**
     * <p>The URL for the start bumper asset.</p>
     */
    inline void SetStartUrl(const Aws::String& value) { m_startUrlHasBeenSet = true; m_startUrl = value; }

    /**
     * <p>The URL for the start bumper asset.</p>
     */
    inline void SetStartUrl(Aws::String&& value) { m_startUrlHasBeenSet = true; m_startUrl = std::move(value); }

    /**
     * <p>The URL for the start bumper asset.</p>
     */
    inline void SetStartUrl(const char* value) { m_startUrlHasBeenSet = true; m_startUrl.assign(value); }

    /**
     * <p>The URL for the start bumper asset.</p>
     */
    inline Bumper& WithStartUrl(const Aws::String& value) { SetStartUrl(value); return *this;}

    /**
     * <p>The URL for the start bumper asset.</p>
     */
    inline Bumper& WithStartUrl(Aws::String&& value) { SetStartUrl(std::move(value)); return *this;}

    /**
     * <p>The URL for the start bumper asset.</p>
     */
    inline Bumper& WithStartUrl(const char* value) { SetStartUrl(value); return *this;}

  private:

    Aws::String m_endUrl;
    bool m_endUrlHasBeenSet = false;

    Aws::String m_startUrl;
    bool m_startUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
