﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/FecOutputIncludeFec.h>
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
   * Fec Output Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FecOutputSettings">AWS
   * API Reference</a></p>
   */
  class FecOutputSettings
  {
  public:
    AWS_MEDIALIVE_API FecOutputSettings() = default;
    AWS_MEDIALIVE_API FecOutputSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API FecOutputSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Parameter D from SMPTE 2022-1. The height of the FEC protection matrix.  The
     * number of transport stream packets per column error correction packet. Must be
     * between 4 and 20, inclusive.
     */
    inline int GetColumnDepth() const { return m_columnDepth; }
    inline bool ColumnDepthHasBeenSet() const { return m_columnDepthHasBeenSet; }
    inline void SetColumnDepth(int value) { m_columnDepthHasBeenSet = true; m_columnDepth = value; }
    inline FecOutputSettings& WithColumnDepth(int value) { SetColumnDepth(value); return *this;}
    ///@}

    ///@{
    /**
     * Enables column only or column and row based FEC
     */
    inline FecOutputIncludeFec GetIncludeFec() const { return m_includeFec; }
    inline bool IncludeFecHasBeenSet() const { return m_includeFecHasBeenSet; }
    inline void SetIncludeFec(FecOutputIncludeFec value) { m_includeFecHasBeenSet = true; m_includeFec = value; }
    inline FecOutputSettings& WithIncludeFec(FecOutputIncludeFec value) { SetIncludeFec(value); return *this;}
    ///@}

    ///@{
    /**
     * Parameter L from SMPTE 2022-1. The width of the FEC protection matrix.  Must be
     * between 1 and 20, inclusive. If only Column FEC is used, then larger values
     * increase robustness.  If Row FEC is used, then this is the number of transport
     * stream packets per row error correction packet, and the value must be between 4
     * and 20, inclusive, if includeFec is columnAndRow. If includeFec is column, this
     * value must be 1 to 20, inclusive.
     */
    inline int GetRowLength() const { return m_rowLength; }
    inline bool RowLengthHasBeenSet() const { return m_rowLengthHasBeenSet; }
    inline void SetRowLength(int value) { m_rowLengthHasBeenSet = true; m_rowLength = value; }
    inline FecOutputSettings& WithRowLength(int value) { SetRowLength(value); return *this;}
    ///@}
  private:

    int m_columnDepth{0};
    bool m_columnDepthHasBeenSet = false;

    FecOutputIncludeFec m_includeFec{FecOutputIncludeFec::NOT_SET};
    bool m_includeFecHasBeenSet = false;

    int m_rowLength{0};
    bool m_rowLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
