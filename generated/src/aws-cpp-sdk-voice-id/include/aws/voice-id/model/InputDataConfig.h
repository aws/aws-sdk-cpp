/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
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
   * <p>The configuration containing input file information for a batch
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/InputDataConfig">AWS
   * API Reference</a></p>
   */
  class InputDataConfig
  {
  public:
    AWS_VOICEID_API InputDataConfig();
    AWS_VOICEID_API InputDataConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API InputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The S3 location for the input manifest file that contains the list of
     * individual enrollment or registration job requests.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }

    /**
     * <p>The S3 location for the input manifest file that contains the list of
     * individual enrollment or registration job requests.</p>
     */
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }

    /**
     * <p>The S3 location for the input manifest file that contains the list of
     * individual enrollment or registration job requests.</p>
     */
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }

    /**
     * <p>The S3 location for the input manifest file that contains the list of
     * individual enrollment or registration job requests.</p>
     */
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }

    /**
     * <p>The S3 location for the input manifest file that contains the list of
     * individual enrollment or registration job requests.</p>
     */
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }

    /**
     * <p>The S3 location for the input manifest file that contains the list of
     * individual enrollment or registration job requests.</p>
     */
    inline InputDataConfig& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}

    /**
     * <p>The S3 location for the input manifest file that contains the list of
     * individual enrollment or registration job requests.</p>
     */
    inline InputDataConfig& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The S3 location for the input manifest file that contains the list of
     * individual enrollment or registration job requests.</p>
     */
    inline InputDataConfig& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}

  private:

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
