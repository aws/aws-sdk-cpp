/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Scte35SpliceInsertNoRegionalBlackoutBehavior.h>
#include <aws/medialive/model/Scte35SpliceInsertWebDeliveryAllowedBehavior.h>
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
   * Typical configuration that applies breaks on splice inserts in addition to time
   * signal placement opportunities, breaks, and advertisements.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Scte35SpliceInsert">AWS
   * API Reference</a></p>
   */
  class Scte35SpliceInsert
  {
  public:
    AWS_MEDIALIVE_API Scte35SpliceInsert() = default;
    AWS_MEDIALIVE_API Scte35SpliceInsert(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Scte35SpliceInsert& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * When specified, this offset (in milliseconds) is added to the input Ad Avail PTS
     * time. This only applies to embedded SCTE 104/35 messages and does not apply to
     * OOB messages.
     */
    inline int GetAdAvailOffset() const { return m_adAvailOffset; }
    inline bool AdAvailOffsetHasBeenSet() const { return m_adAvailOffsetHasBeenSet; }
    inline void SetAdAvailOffset(int value) { m_adAvailOffsetHasBeenSet = true; m_adAvailOffset = value; }
    inline Scte35SpliceInsert& WithAdAvailOffset(int value) { SetAdAvailOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to ignore, Segment Descriptors with noRegionalBlackoutFlag set to 0
     * will no longer trigger blackouts or Ad Avail slates
     */
    inline Scte35SpliceInsertNoRegionalBlackoutBehavior GetNoRegionalBlackoutFlag() const { return m_noRegionalBlackoutFlag; }
    inline bool NoRegionalBlackoutFlagHasBeenSet() const { return m_noRegionalBlackoutFlagHasBeenSet; }
    inline void SetNoRegionalBlackoutFlag(Scte35SpliceInsertNoRegionalBlackoutBehavior value) { m_noRegionalBlackoutFlagHasBeenSet = true; m_noRegionalBlackoutFlag = value; }
    inline Scte35SpliceInsert& WithNoRegionalBlackoutFlag(Scte35SpliceInsertNoRegionalBlackoutBehavior value) { SetNoRegionalBlackoutFlag(value); return *this;}
    ///@}

    ///@{
    /**
     * When set to ignore, Segment Descriptors with webDeliveryAllowedFlag set to 0
     * will no longer trigger blackouts or Ad Avail slates
     */
    inline Scte35SpliceInsertWebDeliveryAllowedBehavior GetWebDeliveryAllowedFlag() const { return m_webDeliveryAllowedFlag; }
    inline bool WebDeliveryAllowedFlagHasBeenSet() const { return m_webDeliveryAllowedFlagHasBeenSet; }
    inline void SetWebDeliveryAllowedFlag(Scte35SpliceInsertWebDeliveryAllowedBehavior value) { m_webDeliveryAllowedFlagHasBeenSet = true; m_webDeliveryAllowedFlag = value; }
    inline Scte35SpliceInsert& WithWebDeliveryAllowedFlag(Scte35SpliceInsertWebDeliveryAllowedBehavior value) { SetWebDeliveryAllowedFlag(value); return *this;}
    ///@}
  private:

    int m_adAvailOffset{0};
    bool m_adAvailOffsetHasBeenSet = false;

    Scte35SpliceInsertNoRegionalBlackoutBehavior m_noRegionalBlackoutFlag{Scte35SpliceInsertNoRegionalBlackoutBehavior::NOT_SET};
    bool m_noRegionalBlackoutFlagHasBeenSet = false;

    Scte35SpliceInsertWebDeliveryAllowedBehavior m_webDeliveryAllowedFlag{Scte35SpliceInsertWebDeliveryAllowedBehavior::NOT_SET};
    bool m_webDeliveryAllowedFlagHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
