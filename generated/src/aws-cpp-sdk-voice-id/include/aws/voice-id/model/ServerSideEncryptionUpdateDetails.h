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
    AWS_VOICEID_API ServerSideEncryptionUpdateDetails() = default;
    AWS_VOICEID_API ServerSideEncryptionUpdateDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API ServerSideEncryptionUpdateDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Message explaining the current UpdateStatus. When the UpdateStatus is FAILED,
     * this message explains the cause of the failure.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ServerSideEncryptionUpdateDetails& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous KMS key ID the domain was encrypted with, before
     * ServerSideEncryptionConfiguration was updated to a new KMS key ID.</p>
     */
    inline const Aws::String& GetOldKmsKeyId() const { return m_oldKmsKeyId; }
    inline bool OldKmsKeyIdHasBeenSet() const { return m_oldKmsKeyIdHasBeenSet; }
    template<typename OldKmsKeyIdT = Aws::String>
    void SetOldKmsKeyId(OldKmsKeyIdT&& value) { m_oldKmsKeyIdHasBeenSet = true; m_oldKmsKeyId = std::forward<OldKmsKeyIdT>(value); }
    template<typename OldKmsKeyIdT = Aws::String>
    ServerSideEncryptionUpdateDetails& WithOldKmsKeyId(OldKmsKeyIdT&& value) { SetOldKmsKeyId(std::forward<OldKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the server-side encryption update. During an update, if there is an
     * issue with the domain's current or old KMS key ID, such as an inaccessible or
     * disabled key, then the status is FAILED. In order to resolve this, the key needs
     * to be made accessible, and then an UpdateDomain call with the existing
     * server-side encryption configuration will re-attempt this update process.</p>
     */
    inline ServerSideEncryptionUpdateStatus GetUpdateStatus() const { return m_updateStatus; }
    inline bool UpdateStatusHasBeenSet() const { return m_updateStatusHasBeenSet; }
    inline void SetUpdateStatus(ServerSideEncryptionUpdateStatus value) { m_updateStatusHasBeenSet = true; m_updateStatus = value; }
    inline ServerSideEncryptionUpdateDetails& WithUpdateStatus(ServerSideEncryptionUpdateStatus value) { SetUpdateStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_oldKmsKeyId;
    bool m_oldKmsKeyIdHasBeenSet = false;

    ServerSideEncryptionUpdateStatus m_updateStatus{ServerSideEncryptionUpdateStatus::NOT_SET};
    bool m_updateStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
