/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>An automatic tape creation policy consists of automatic tape creation rules
   * where each rule defines when and how to create new tapes. For more information
   * about automatic tape creation, see <a
   * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/GettingStartedCreateTapes.html#CreateTapesAutomatically">Creating
   * Tapes Automatically</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/AutomaticTapeCreationRule">AWS
   * API Reference</a></p>
   */
  class AutomaticTapeCreationRule
  {
  public:
    AWS_STORAGEGATEWAY_API AutomaticTapeCreationRule();
    AWS_STORAGEGATEWAY_API AutomaticTapeCreationRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API AutomaticTapeCreationRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A prefix that you append to the barcode of the virtual tape that you are
     * creating. This prefix makes the barcode unique.</p>  <p>The prefix must be
     * 1-4 characters in length and must be one of the uppercase letters from A to
     * Z.</p> 
     */
    inline const Aws::String& GetTapeBarcodePrefix() const{ return m_tapeBarcodePrefix; }

    /**
     * <p>A prefix that you append to the barcode of the virtual tape that you are
     * creating. This prefix makes the barcode unique.</p>  <p>The prefix must be
     * 1-4 characters in length and must be one of the uppercase letters from A to
     * Z.</p> 
     */
    inline bool TapeBarcodePrefixHasBeenSet() const { return m_tapeBarcodePrefixHasBeenSet; }

    /**
     * <p>A prefix that you append to the barcode of the virtual tape that you are
     * creating. This prefix makes the barcode unique.</p>  <p>The prefix must be
     * 1-4 characters in length and must be one of the uppercase letters from A to
     * Z.</p> 
     */
    inline void SetTapeBarcodePrefix(const Aws::String& value) { m_tapeBarcodePrefixHasBeenSet = true; m_tapeBarcodePrefix = value; }

    /**
     * <p>A prefix that you append to the barcode of the virtual tape that you are
     * creating. This prefix makes the barcode unique.</p>  <p>The prefix must be
     * 1-4 characters in length and must be one of the uppercase letters from A to
     * Z.</p> 
     */
    inline void SetTapeBarcodePrefix(Aws::String&& value) { m_tapeBarcodePrefixHasBeenSet = true; m_tapeBarcodePrefix = std::move(value); }

    /**
     * <p>A prefix that you append to the barcode of the virtual tape that you are
     * creating. This prefix makes the barcode unique.</p>  <p>The prefix must be
     * 1-4 characters in length and must be one of the uppercase letters from A to
     * Z.</p> 
     */
    inline void SetTapeBarcodePrefix(const char* value) { m_tapeBarcodePrefixHasBeenSet = true; m_tapeBarcodePrefix.assign(value); }

    /**
     * <p>A prefix that you append to the barcode of the virtual tape that you are
     * creating. This prefix makes the barcode unique.</p>  <p>The prefix must be
     * 1-4 characters in length and must be one of the uppercase letters from A to
     * Z.</p> 
     */
    inline AutomaticTapeCreationRule& WithTapeBarcodePrefix(const Aws::String& value) { SetTapeBarcodePrefix(value); return *this;}

    /**
     * <p>A prefix that you append to the barcode of the virtual tape that you are
     * creating. This prefix makes the barcode unique.</p>  <p>The prefix must be
     * 1-4 characters in length and must be one of the uppercase letters from A to
     * Z.</p> 
     */
    inline AutomaticTapeCreationRule& WithTapeBarcodePrefix(Aws::String&& value) { SetTapeBarcodePrefix(std::move(value)); return *this;}

    /**
     * <p>A prefix that you append to the barcode of the virtual tape that you are
     * creating. This prefix makes the barcode unique.</p>  <p>The prefix must be
     * 1-4 characters in length and must be one of the uppercase letters from A to
     * Z.</p> 
     */
    inline AutomaticTapeCreationRule& WithTapeBarcodePrefix(const char* value) { SetTapeBarcodePrefix(value); return *this;}


    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the Amazon S3 storage class that is associated with
     * the pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }

    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the Amazon S3 storage class that is associated with
     * the pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p>
     */
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }

    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the Amazon S3 storage class that is associated with
     * the pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p>
     */
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }

    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the Amazon S3 storage class that is associated with
     * the pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p>
     */
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }

    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the Amazon S3 storage class that is associated with
     * the pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p>
     */
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }

    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the Amazon S3 storage class that is associated with
     * the pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p>
     */
    inline AutomaticTapeCreationRule& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}

    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the Amazon S3 storage class that is associated with
     * the pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p>
     */
    inline AutomaticTapeCreationRule& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the Amazon S3 storage class that is associated with
     * the pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p>
     */
    inline AutomaticTapeCreationRule& WithPoolId(const char* value) { SetPoolId(value); return *this;}


    /**
     * <p>The size, in bytes, of the virtual tape capacity.</p>
     */
    inline long long GetTapeSizeInBytes() const{ return m_tapeSizeInBytes; }

    /**
     * <p>The size, in bytes, of the virtual tape capacity.</p>
     */
    inline bool TapeSizeInBytesHasBeenSet() const { return m_tapeSizeInBytesHasBeenSet; }

    /**
     * <p>The size, in bytes, of the virtual tape capacity.</p>
     */
    inline void SetTapeSizeInBytes(long long value) { m_tapeSizeInBytesHasBeenSet = true; m_tapeSizeInBytes = value; }

    /**
     * <p>The size, in bytes, of the virtual tape capacity.</p>
     */
    inline AutomaticTapeCreationRule& WithTapeSizeInBytes(long long value) { SetTapeSizeInBytes(value); return *this;}


    /**
     * <p>The minimum number of available virtual tapes that the gateway maintains at
     * all times. If the number of tapes on the gateway goes below this value, the
     * gateway creates as many new tapes as are needed to have
     * <code>MinimumNumTapes</code> on the gateway. For more information about
     * automatic tape creation, see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/GettingStartedCreateTapes.html#CreateTapesAutomatically">Creating
     * Tapes Automatically</a>.</p>
     */
    inline int GetMinimumNumTapes() const{ return m_minimumNumTapes; }

    /**
     * <p>The minimum number of available virtual tapes that the gateway maintains at
     * all times. If the number of tapes on the gateway goes below this value, the
     * gateway creates as many new tapes as are needed to have
     * <code>MinimumNumTapes</code> on the gateway. For more information about
     * automatic tape creation, see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/GettingStartedCreateTapes.html#CreateTapesAutomatically">Creating
     * Tapes Automatically</a>.</p>
     */
    inline bool MinimumNumTapesHasBeenSet() const { return m_minimumNumTapesHasBeenSet; }

    /**
     * <p>The minimum number of available virtual tapes that the gateway maintains at
     * all times. If the number of tapes on the gateway goes below this value, the
     * gateway creates as many new tapes as are needed to have
     * <code>MinimumNumTapes</code> on the gateway. For more information about
     * automatic tape creation, see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/GettingStartedCreateTapes.html#CreateTapesAutomatically">Creating
     * Tapes Automatically</a>.</p>
     */
    inline void SetMinimumNumTapes(int value) { m_minimumNumTapesHasBeenSet = true; m_minimumNumTapes = value; }

    /**
     * <p>The minimum number of available virtual tapes that the gateway maintains at
     * all times. If the number of tapes on the gateway goes below this value, the
     * gateway creates as many new tapes as are needed to have
     * <code>MinimumNumTapes</code> on the gateway. For more information about
     * automatic tape creation, see <a
     * href="https://docs.aws.amazon.com/storagegateway/latest/userguide/GettingStartedCreateTapes.html#CreateTapesAutomatically">Creating
     * Tapes Automatically</a>.</p>
     */
    inline AutomaticTapeCreationRule& WithMinimumNumTapes(int value) { SetMinimumNumTapes(value); return *this;}


    /**
     * <p>Set to <code>true</code> to indicate that tapes are to be archived as
     * write-once-read-many (WORM). Set to <code>false</code> when WORM is not enabled
     * for tapes.</p>
     */
    inline bool GetWorm() const{ return m_worm; }

    /**
     * <p>Set to <code>true</code> to indicate that tapes are to be archived as
     * write-once-read-many (WORM). Set to <code>false</code> when WORM is not enabled
     * for tapes.</p>
     */
    inline bool WormHasBeenSet() const { return m_wormHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to indicate that tapes are to be archived as
     * write-once-read-many (WORM). Set to <code>false</code> when WORM is not enabled
     * for tapes.</p>
     */
    inline void SetWorm(bool value) { m_wormHasBeenSet = true; m_worm = value; }

    /**
     * <p>Set to <code>true</code> to indicate that tapes are to be archived as
     * write-once-read-many (WORM). Set to <code>false</code> when WORM is not enabled
     * for tapes.</p>
     */
    inline AutomaticTapeCreationRule& WithWorm(bool value) { SetWorm(value); return *this;}

  private:

    Aws::String m_tapeBarcodePrefix;
    bool m_tapeBarcodePrefixHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    long long m_tapeSizeInBytes;
    bool m_tapeSizeInBytesHasBeenSet = false;

    int m_minimumNumTapes;
    bool m_minimumNumTapesHasBeenSet = false;

    bool m_worm;
    bool m_wormHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
