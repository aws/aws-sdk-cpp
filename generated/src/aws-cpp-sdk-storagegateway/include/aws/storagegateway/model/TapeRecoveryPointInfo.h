/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Describes a recovery point.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/TapeRecoveryPointInfo">AWS
   * API Reference</a></p>
   */
  class TapeRecoveryPointInfo
  {
  public:
    AWS_STORAGEGATEWAY_API TapeRecoveryPointInfo() = default;
    AWS_STORAGEGATEWAY_API TapeRecoveryPointInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API TapeRecoveryPointInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline const Aws::String& GetTapeARN() const { return m_tapeARN; }
    inline bool TapeARNHasBeenSet() const { return m_tapeARNHasBeenSet; }
    template<typename TapeARNT = Aws::String>
    void SetTapeARN(TapeARNT&& value) { m_tapeARNHasBeenSet = true; m_tapeARN = std::forward<TapeARNT>(value); }
    template<typename TapeARNT = Aws::String>
    TapeRecoveryPointInfo& WithTapeARN(TapeARNT&& value) { SetTapeARN(std::forward<TapeARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the point-in-time view of the virtual tape was replicated for
     * later recovery.</p> <p>The default timestamp format of the tape recovery point
     * time is in the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline const Aws::Utils::DateTime& GetTapeRecoveryPointTime() const { return m_tapeRecoveryPointTime; }
    inline bool TapeRecoveryPointTimeHasBeenSet() const { return m_tapeRecoveryPointTimeHasBeenSet; }
    template<typename TapeRecoveryPointTimeT = Aws::Utils::DateTime>
    void SetTapeRecoveryPointTime(TapeRecoveryPointTimeT&& value) { m_tapeRecoveryPointTimeHasBeenSet = true; m_tapeRecoveryPointTime = std::forward<TapeRecoveryPointTimeT>(value); }
    template<typename TapeRecoveryPointTimeT = Aws::Utils::DateTime>
    TapeRecoveryPointInfo& WithTapeRecoveryPointTime(TapeRecoveryPointTimeT&& value) { SetTapeRecoveryPointTime(std::forward<TapeRecoveryPointTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of the virtual tapes to recover.</p>
     */
    inline long long GetTapeSizeInBytes() const { return m_tapeSizeInBytes; }
    inline bool TapeSizeInBytesHasBeenSet() const { return m_tapeSizeInBytesHasBeenSet; }
    inline void SetTapeSizeInBytes(long long value) { m_tapeSizeInBytesHasBeenSet = true; m_tapeSizeInBytes = value; }
    inline TapeRecoveryPointInfo& WithTapeSizeInBytes(long long value) { SetTapeSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the virtual tapes.</p>
     */
    inline const Aws::String& GetTapeStatus() const { return m_tapeStatus; }
    inline bool TapeStatusHasBeenSet() const { return m_tapeStatusHasBeenSet; }
    template<typename TapeStatusT = Aws::String>
    void SetTapeStatus(TapeStatusT&& value) { m_tapeStatusHasBeenSet = true; m_tapeStatus = std::forward<TapeStatusT>(value); }
    template<typename TapeStatusT = Aws::String>
    TapeRecoveryPointInfo& WithTapeStatus(TapeStatusT&& value) { SetTapeStatus(std::forward<TapeStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tapeARN;
    bool m_tapeARNHasBeenSet = false;

    Aws::Utils::DateTime m_tapeRecoveryPointTime{};
    bool m_tapeRecoveryPointTimeHasBeenSet = false;

    long long m_tapeSizeInBytes{0};
    bool m_tapeSizeInBytesHasBeenSet = false;

    Aws::String m_tapeStatus;
    bool m_tapeStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
