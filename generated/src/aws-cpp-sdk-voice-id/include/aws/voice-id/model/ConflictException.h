/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/ConflictType.h>
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
namespace VoiceID
{
namespace Model
{

  /**
   * <p>The request failed due to a conflict. Check the <code>ConflictType</code> and
   * error message for more details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/ConflictException">AWS
   * API Reference</a></p>
   */
  class ConflictException
  {
  public:
    AWS_VOICEID_API ConflictException();
    AWS_VOICEID_API ConflictException(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of conflict which caused a ConflictException. Possible types and the
     * corresponding error messages are as follows:</p> <ul> <li> <p>
     * <code>DOMAIN_NOT_ACTIVE</code>: The domain is not active.</p> </li> <li> <p>
     * <code>CANNOT_CHANGE_SPEAKER_AFTER_ENROLLMENT</code>: You cannot change the
     * speaker ID after an enrollment has been requested.</p> </li> <li> <p>
     * <code>ENROLLMENT_ALREADY_EXISTS</code>: There is already an enrollment for this
     * session.</p> </li> <li> <p> <code>SPEAKER_NOT_SET</code>: You must set the
     * speaker ID before requesting an enrollment.</p> </li> <li> <p>
     * <code>SPEAKER_OPTED_OUT</code>: You cannot request an enrollment for an opted
     * out speaker.</p> </li> <li> <p> <code>CONCURRENT_CHANGES</code>: The request
     * could not be processed as the resource was modified by another request during
     * execution.</p> </li> </ul>
     */
    inline const ConflictType& GetConflictType() const{ return m_conflictType; }

    /**
     * <p>The type of conflict which caused a ConflictException. Possible types and the
     * corresponding error messages are as follows:</p> <ul> <li> <p>
     * <code>DOMAIN_NOT_ACTIVE</code>: The domain is not active.</p> </li> <li> <p>
     * <code>CANNOT_CHANGE_SPEAKER_AFTER_ENROLLMENT</code>: You cannot change the
     * speaker ID after an enrollment has been requested.</p> </li> <li> <p>
     * <code>ENROLLMENT_ALREADY_EXISTS</code>: There is already an enrollment for this
     * session.</p> </li> <li> <p> <code>SPEAKER_NOT_SET</code>: You must set the
     * speaker ID before requesting an enrollment.</p> </li> <li> <p>
     * <code>SPEAKER_OPTED_OUT</code>: You cannot request an enrollment for an opted
     * out speaker.</p> </li> <li> <p> <code>CONCURRENT_CHANGES</code>: The request
     * could not be processed as the resource was modified by another request during
     * execution.</p> </li> </ul>
     */
    inline bool ConflictTypeHasBeenSet() const { return m_conflictTypeHasBeenSet; }

    /**
     * <p>The type of conflict which caused a ConflictException. Possible types and the
     * corresponding error messages are as follows:</p> <ul> <li> <p>
     * <code>DOMAIN_NOT_ACTIVE</code>: The domain is not active.</p> </li> <li> <p>
     * <code>CANNOT_CHANGE_SPEAKER_AFTER_ENROLLMENT</code>: You cannot change the
     * speaker ID after an enrollment has been requested.</p> </li> <li> <p>
     * <code>ENROLLMENT_ALREADY_EXISTS</code>: There is already an enrollment for this
     * session.</p> </li> <li> <p> <code>SPEAKER_NOT_SET</code>: You must set the
     * speaker ID before requesting an enrollment.</p> </li> <li> <p>
     * <code>SPEAKER_OPTED_OUT</code>: You cannot request an enrollment for an opted
     * out speaker.</p> </li> <li> <p> <code>CONCURRENT_CHANGES</code>: The request
     * could not be processed as the resource was modified by another request during
     * execution.</p> </li> </ul>
     */
    inline void SetConflictType(const ConflictType& value) { m_conflictTypeHasBeenSet = true; m_conflictType = value; }

    /**
     * <p>The type of conflict which caused a ConflictException. Possible types and the
     * corresponding error messages are as follows:</p> <ul> <li> <p>
     * <code>DOMAIN_NOT_ACTIVE</code>: The domain is not active.</p> </li> <li> <p>
     * <code>CANNOT_CHANGE_SPEAKER_AFTER_ENROLLMENT</code>: You cannot change the
     * speaker ID after an enrollment has been requested.</p> </li> <li> <p>
     * <code>ENROLLMENT_ALREADY_EXISTS</code>: There is already an enrollment for this
     * session.</p> </li> <li> <p> <code>SPEAKER_NOT_SET</code>: You must set the
     * speaker ID before requesting an enrollment.</p> </li> <li> <p>
     * <code>SPEAKER_OPTED_OUT</code>: You cannot request an enrollment for an opted
     * out speaker.</p> </li> <li> <p> <code>CONCURRENT_CHANGES</code>: The request
     * could not be processed as the resource was modified by another request during
     * execution.</p> </li> </ul>
     */
    inline void SetConflictType(ConflictType&& value) { m_conflictTypeHasBeenSet = true; m_conflictType = std::move(value); }

    /**
     * <p>The type of conflict which caused a ConflictException. Possible types and the
     * corresponding error messages are as follows:</p> <ul> <li> <p>
     * <code>DOMAIN_NOT_ACTIVE</code>: The domain is not active.</p> </li> <li> <p>
     * <code>CANNOT_CHANGE_SPEAKER_AFTER_ENROLLMENT</code>: You cannot change the
     * speaker ID after an enrollment has been requested.</p> </li> <li> <p>
     * <code>ENROLLMENT_ALREADY_EXISTS</code>: There is already an enrollment for this
     * session.</p> </li> <li> <p> <code>SPEAKER_NOT_SET</code>: You must set the
     * speaker ID before requesting an enrollment.</p> </li> <li> <p>
     * <code>SPEAKER_OPTED_OUT</code>: You cannot request an enrollment for an opted
     * out speaker.</p> </li> <li> <p> <code>CONCURRENT_CHANGES</code>: The request
     * could not be processed as the resource was modified by another request during
     * execution.</p> </li> </ul>
     */
    inline ConflictException& WithConflictType(const ConflictType& value) { SetConflictType(value); return *this;}

    /**
     * <p>The type of conflict which caused a ConflictException. Possible types and the
     * corresponding error messages are as follows:</p> <ul> <li> <p>
     * <code>DOMAIN_NOT_ACTIVE</code>: The domain is not active.</p> </li> <li> <p>
     * <code>CANNOT_CHANGE_SPEAKER_AFTER_ENROLLMENT</code>: You cannot change the
     * speaker ID after an enrollment has been requested.</p> </li> <li> <p>
     * <code>ENROLLMENT_ALREADY_EXISTS</code>: There is already an enrollment for this
     * session.</p> </li> <li> <p> <code>SPEAKER_NOT_SET</code>: You must set the
     * speaker ID before requesting an enrollment.</p> </li> <li> <p>
     * <code>SPEAKER_OPTED_OUT</code>: You cannot request an enrollment for an opted
     * out speaker.</p> </li> <li> <p> <code>CONCURRENT_CHANGES</code>: The request
     * could not be processed as the resource was modified by another request during
     * execution.</p> </li> </ul>
     */
    inline ConflictException& WithConflictType(ConflictType&& value) { SetConflictType(std::move(value)); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    ConflictType m_conflictType;
    bool m_conflictTypeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
