/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/model/ServerSideEncryptionUpdateStatus.h>
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
namespace VoiceID
{
namespace Model
{

  /**
   * <p>Details about the most recent server-side encryption configuration update.
   * When the server-side encryption configuration is changed, dependency on the old
   * KMS key is removed through an asynchronous process. When this update is
   * complete, the domain’s data can only be accessed using the new KMS
   * key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/ServerSideEncryptionUpdateDetails">AWS
   * API Reference</a></p>
   */
  class ServerSideEncryptionUpdateDetails
  {
  public:
    AWS_VOICEID_API ServerSideEncryptionUpdateDetails();
    AWS_VOICEID_API ServerSideEncryptionUpdateDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API ServerSideEncryptionUpdateDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Message explaining the current UpdateStatus. When the UpdateStatus is FAILED,
     * this message explains the cause of the failure.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ServerSideEncryptionUpdateDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ServerSideEncryptionUpdateDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ServerSideEncryptionUpdateDetails& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous KMS key ID the domain was encrypted with, before
     * ServerSideEncryptionConfiguration was updated to a new KMS key ID.</p>
     */
    inline const Aws::String& GetOldKmsKeyId() const{ return m_oldKmsKeyId; }
    inline bool OldKmsKeyIdHasBeenSet() const { return m_oldKmsKeyIdHasBeenSet; }
    inline void SetOldKmsKeyId(const Aws::String& value) { m_oldKmsKeyIdHasBeenSet = true; m_oldKmsKeyId = value; }
    inline void SetOldKmsKeyId(Aws::String&& value) { m_oldKmsKeyIdHasBeenSet = true; m_oldKmsKeyId = std::move(value); }
    inline void SetOldKmsKeyId(const char* value) { m_oldKmsKeyIdHasBeenSet = true; m_oldKmsKeyId.assign(value); }
    inline ServerSideEncryptionUpdateDetails& WithOldKmsKeyId(const Aws::String& value) { SetOldKmsKeyId(value); return *this;}
    inline ServerSideEncryptionUpdateDetails& WithOldKmsKeyId(Aws::String&& value) { SetOldKmsKeyId(std::move(value)); return *this;}
    inline ServerSideEncryptionUpdateDetails& WithOldKmsKeyId(const char* value) { SetOldKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the server-side encryption update. During an update, if there is an
     * issue with the domain's current or old KMS key ID, such as an inaccessible or
     * disabled key, then the status is FAILED. In order to resolve this, the key needs
     * to be made accessible, and then an UpdateDomain call with the existing
     * server-side encryption configuration will re-attempt this update process.</p>
     */
    inline const ServerSideEncryptionUpdateStatus& GetUpdateStatus() const{ return m_updateStatus; }
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
    inline void SetUpdateStatus(const ServerSideEncryptionUpdateStatus& value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }
    inline void SetUpdateStatus(ServerSideEncryptionUpdateStatus&& value) { m_updateStatusHasBeenSet = true; m_updateStatus = std::move(value); }
    inline ServerSideEncryptionUpdateDetails& WithUpdateStatus(const ServerSideEncryptionUpdateStatus& value) { SetUpdateStatus(value); return *this;}
    inline ServerSideEncryptionUpdateDetails& WithUpdateStatus(ServerSideEncryptionUpdateStatus&& value) { SetUpdateStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_oldKmsKeyId;
    bool m_oldKmsKeyIdHasBeenSet = false;

    ServerSideEncryptionUpdateStatus m_updateStatus;
    bool m_updateStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
