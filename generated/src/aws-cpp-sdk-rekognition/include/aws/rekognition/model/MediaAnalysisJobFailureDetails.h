/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/MediaAnalysisJobFailureCode.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Details about the error that resulted in failure of the job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/MediaAnalysisJobFailureDetails">AWS
   * API Reference</a></p>
   */
  class MediaAnalysisJobFailureDetails
  {
  public:
    AWS_REKOGNITION_API MediaAnalysisJobFailureDetails();
    AWS_REKOGNITION_API MediaAnalysisJobFailureDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API MediaAnalysisJobFailureDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Error code for the failed job.</p>
     */
    inline const MediaAnalysisJobFailureCode& GetCode() const{ return m_code; }

    /**
     * <p>Error code for the failed job.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>Error code for the failed job.</p>
     */
    inline void SetCode(const MediaAnalysisJobFailureCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>Error code for the failed job.</p>
     */
    inline void SetCode(MediaAnalysisJobFailureCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>Error code for the failed job.</p>
     */
    inline MediaAnalysisJobFailureDetails& WithCode(const MediaAnalysisJobFailureCode& value) { SetCode(value); return *this;}

    /**
     * <p>Error code for the failed job.</p>
     */
    inline MediaAnalysisJobFailureDetails& WithCode(MediaAnalysisJobFailureCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>Human readable error message.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Human readable error message.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Human readable error message.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Human readable error message.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Human readable error message.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Human readable error message.</p>
     */
    inline MediaAnalysisJobFailureDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Human readable error message.</p>
     */
    inline MediaAnalysisJobFailureDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Human readable error message.</p>
     */
    inline MediaAnalysisJobFailureDetails& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    MediaAnalysisJobFailureCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
