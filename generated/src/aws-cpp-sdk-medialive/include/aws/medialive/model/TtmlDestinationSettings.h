/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/TtmlDestinationStyleControl.h>
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
   * Ttml Destination Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TtmlDestinationSettings">AWS
   * API Reference</a></p>
   */
  class TtmlDestinationSettings
  {
  public:
    AWS_MEDIALIVE_API TtmlDestinationSettings() = default;
    AWS_MEDIALIVE_API TtmlDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API TtmlDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * This field is not currently supported and will not affect the output styling.
     * Leave the default value.
     */
    inline TtmlDestinationStyleControl GetStyleControl() const { return m_styleControl; }
    inline bool StyleControlHasBeenSet() const { return m_styleControlHasBeenSet; }
    inline void SetStyleControl(TtmlDestinationStyleControl value) { m_styleControlHasBeenSet = true; m_styleControl = value; }
    inline TtmlDestinationSettings& WithStyleControl(TtmlDestinationStyleControl value) { SetStyleControl(value); return *this;}
    ///@}
  private:

    TtmlDestinationStyleControl m_styleControl{TtmlDestinationStyleControl::NOT_SET};
    bool m_styleControlHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
