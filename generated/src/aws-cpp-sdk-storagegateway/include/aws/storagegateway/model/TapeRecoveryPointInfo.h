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
    AWS_STORAGEGATEWAY_API TapeRecoveryPointInfo();
    AWS_STORAGEGATEWAY_API TapeRecoveryPointInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API TapeRecoveryPointInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline const Aws::String& GetTapeARN() const{ return m_tapeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline bool TapeARNHasBeenSet() const { return m_tapeARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline void SetTapeARN(const Aws::String& value) { m_tapeARNHasBeenSet = true; m_tapeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline void SetTapeARN(Aws::String&& value) { m_tapeARNHasBeenSet = true; m_tapeARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline void SetTapeARN(const char* value) { m_tapeARNHasBeenSet = true; m_tapeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline TapeRecoveryPointInfo& WithTapeARN(const Aws::String& value) { SetTapeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline TapeRecoveryPointInfo& WithTapeARN(Aws::String&& value) { SetTapeARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline TapeRecoveryPointInfo& WithTapeARN(const char* value) { SetTapeARN(value); return *this;}


    /**
     * <p>The time when the point-in-time view of the virtual tape was replicated for
     * later recovery.</p> <p>The default timestamp format of the tape recovery point
     * time is in the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline const Aws::Utils::DateTime& GetTapeRecoveryPointTime() const{ return m_tapeRecoveryPointTime; }

    /**
     * <p>The time when the point-in-time view of the virtual tape was replicated for
     * later recovery.</p> <p>The default timestamp format of the tape recovery point
     * time is in the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline bool TapeRecoveryPointTimeHasBeenSet() const { return m_tapeRecoveryPointTimeHasBeenSet; }

    /**
     * <p>The time when the point-in-time view of the virtual tape was replicated for
     * later recovery.</p> <p>The default timestamp format of the tape recovery point
     * time is in the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline void SetTapeRecoveryPointTime(const Aws::Utils::DateTime& value) { m_tapeRecoveryPointTimeHasBeenSet = true; m_tapeRecoveryPointTime = value; }

    /**
     * <p>The time when the point-in-time view of the virtual tape was replicated for
     * later recovery.</p> <p>The default timestamp format of the tape recovery point
     * time is in the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline void SetTapeRecoveryPointTime(Aws::Utils::DateTime&& value) { m_tapeRecoveryPointTimeHasBeenSet = true; m_tapeRecoveryPointTime = std::move(value); }

    /**
     * <p>The time when the point-in-time view of the virtual tape was replicated for
     * later recovery.</p> <p>The default timestamp format of the tape recovery point
     * time is in the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline TapeRecoveryPointInfo& WithTapeRecoveryPointTime(const Aws::Utils::DateTime& value) { SetTapeRecoveryPointTime(value); return *this;}

    /**
     * <p>The time when the point-in-time view of the virtual tape was replicated for
     * later recovery.</p> <p>The default timestamp format of the tape recovery point
     * time is in the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline TapeRecoveryPointInfo& WithTapeRecoveryPointTime(Aws::Utils::DateTime&& value) { SetTapeRecoveryPointTime(std::move(value)); return *this;}


    /**
     * <p>The size, in bytes, of the virtual tapes to recover.</p>
     */
    inline long long GetTapeSizeInBytes() const{ return m_tapeSizeInBytes; }

    /**
     * <p>The size, in bytes, of the virtual tapes to recover.</p>
     */
    inline bool TapeSizeInBytesHasBeenSet() const { return m_tapeSizeInBytesHasBeenSet; }

    /**
     * <p>The size, in bytes, of the virtual tapes to recover.</p>
     */
    inline void SetTapeSizeInBytes(long long value) { m_tapeSizeInBytesHasBeenSet = true; m_tapeSizeInBytes = value; }

    /**
     * <p>The size, in bytes, of the virtual tapes to recover.</p>
     */
    inline TapeRecoveryPointInfo& WithTapeSizeInBytes(long long value) { SetTapeSizeInBytes(value); return *this;}


    /**
     * <p>The status of the virtual tapes.</p>
     */
    inline const Aws::String& GetTapeStatus() const{ return m_tapeStatus; }

    /**
     * <p>The status of the virtual tapes.</p>
     */
    inline bool TapeStatusHasBeenSet() const { return m_tapeStatusHasBeenSet; }

    /**
     * <p>The status of the virtual tapes.</p>
     */
    inline void SetTapeStatus(const Aws::String& value) { m_tapeStatusHasBeenSet = true; m_tapeStatus = value; }

    /**
     * <p>The status of the virtual tapes.</p>
     */
    inline void SetTapeStatus(Aws::String&& value) { m_tapeStatusHasBeenSet = true; m_tapeStatus = std::move(value); }

    /**
     * <p>The status of the virtual tapes.</p>
     */
    inline void SetTapeStatus(const char* value) { m_tapeStatusHasBeenSet = true; m_tapeStatus.assign(value); }

    /**
     * <p>The status of the virtual tapes.</p>
     */
    inline TapeRecoveryPointInfo& WithTapeStatus(const Aws::String& value) { SetTapeStatus(value); return *this;}

    /**
     * <p>The status of the virtual tapes.</p>
     */
    inline TapeRecoveryPointInfo& WithTapeStatus(Aws::String&& value) { SetTapeStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the virtual tapes.</p>
     */
    inline TapeRecoveryPointInfo& WithTapeStatus(const char* value) { SetTapeStatus(value); return *this;}

  private:

    Aws::String m_tapeARN;
    bool m_tapeARNHasBeenSet = false;

    Aws::Utils::DateTime m_tapeRecoveryPointTime;
    bool m_tapeRecoveryPointTimeHasBeenSet = false;

    long long m_tapeSizeInBytes;
    bool m_tapeSizeInBytesHasBeenSet = false;

    Aws::String m_tapeStatus;
    bool m_tapeStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
