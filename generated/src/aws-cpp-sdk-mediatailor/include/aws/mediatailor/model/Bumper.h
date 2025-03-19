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
    AWS_MEDIATAILOR_API Bumper() = default;
    AWS_MEDIATAILOR_API Bumper(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Bumper& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL for the end bumper asset.</p>
     */
    inline const Aws::String& GetEndUrl() const { return m_endUrl; }
    inline bool EndUrlHasBeenSet() const { return m_endUrlHasBeenSet; }
    template<typename EndUrlT = Aws::String>
    void SetEndUrl(EndUrlT&& value) { m_endUrlHasBeenSet = true; m_endUrl = std::forward<EndUrlT>(value); }
    template<typename EndUrlT = Aws::String>
    Bumper& WithEndUrl(EndUrlT&& value) { SetEndUrl(std::forward<EndUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL for the start bumper asset.</p>
     */
    inline const Aws::String& GetStartUrl() const { return m_startUrl; }
    inline bool StartUrlHasBeenSet() const { return m_startUrlHasBeenSet; }
    template<typename StartUrlT = Aws::String>
    void SetStartUrl(StartUrlT&& value) { m_startUrlHasBeenSet = true; m_startUrl = std::forward<StartUrlT>(value); }
    template<typename StartUrlT = Aws::String>
    Bumper& WithStartUrl(StartUrlT&& value) { SetStartUrl(std::forward<StartUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endUrl;
    bool m_endUrlHasBeenSet = false;

    Aws::String m_startUrl;
    bool m_startUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
