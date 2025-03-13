/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/model/StreamOrder.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * A StreamSelection configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/StreamSelection">AWS
   * API Reference</a></p>
   */
  class StreamSelection
  {
  public:
    AWS_MEDIAPACKAGE_API StreamSelection() = default;
    AWS_MEDIAPACKAGE_API StreamSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API StreamSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The maximum video bitrate (bps) to include in output.
     */
    inline int GetMaxVideoBitsPerSecond() const { return m_maxVideoBitsPerSecond; }
    inline bool MaxVideoBitsPerSecondHasBeenSet() const { return m_maxVideoBitsPerSecondHasBeenSet; }
    inline void SetMaxVideoBitsPerSecond(int value) { m_maxVideoBitsPerSecondHasBeenSet = true; m_maxVideoBitsPerSecond = value; }
    inline StreamSelection& WithMaxVideoBitsPerSecond(int value) { SetMaxVideoBitsPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * The minimum video bitrate (bps) to include in output.
     */
    inline int GetMinVideoBitsPerSecond() const { return m_minVideoBitsPerSecond; }
    inline bool MinVideoBitsPerSecondHasBeenSet() const { return m_minVideoBitsPerSecondHasBeenSet; }
    inline void SetMinVideoBitsPerSecond(int value) { m_minVideoBitsPerSecondHasBeenSet = true; m_minVideoBitsPerSecond = value; }
    inline StreamSelection& WithMinVideoBitsPerSecond(int value) { SetMinVideoBitsPerSecond(value); return *this;}
    ///@}

    ///@{
    /**
     * A directive that determines the order of streams in the output.
     */
    inline StreamOrder GetStreamOrder() const { return m_streamOrder; }
    inline bool StreamOrderHasBeenSet() const { return m_streamOrderHasBeenSet; }
    inline void SetStreamOrder(StreamOrder value) { m_streamOrderHasBeenSet = true; m_streamOrder = value; }
    inline StreamSelection& WithStreamOrder(StreamOrder value) { SetStreamOrder(value); return *this;}
    ///@}
  private:

    int m_maxVideoBitsPerSecond{0};
    bool m_maxVideoBitsPerSecondHasBeenSet = false;

    int m_minVideoBitsPerSecond{0};
    bool m_minVideoBitsPerSecondHasBeenSet = false;

    StreamOrder m_streamOrder{StreamOrder::NOT_SET};
    bool m_streamOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
