/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/AudioExtractionStatus.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Configuration settings for audio content extraction and
   * processing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/AudioExtractionConfiguration">AWS
   * API Reference</a></p>
   */
  class AudioExtractionConfiguration
  {
  public:
    AWS_QBUSINESS_API AudioExtractionConfiguration() = default;
    AWS_QBUSINESS_API AudioExtractionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API AudioExtractionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of audio extraction (ENABLED or DISABLED) for processing audio
     * content from files.</p>
     */
    inline AudioExtractionStatus GetAudioExtractionStatus() const { return m_audioExtractionStatus; }
    inline bool AudioExtractionStatusHasBeenSet() const { return m_audioExtractionStatusHasBeenSet; }
    inline void SetAudioExtractionStatus(AudioExtractionStatus value) { m_audioExtractionStatusHasBeenSet = true; m_audioExtractionStatus = value; }
    inline AudioExtractionConfiguration& WithAudioExtractionStatus(AudioExtractionStatus value) { SetAudioExtractionStatus(value); return *this;}
    ///@}
  private:

    AudioExtractionStatus m_audioExtractionStatus{AudioExtractionStatus::NOT_SET};
    bool m_audioExtractionStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
