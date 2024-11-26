/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/Document.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>A record created when a user submits a form card.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/Submission">AWS
   * API Reference</a></p>
   */
  class Submission
  {
  public:
    AWS_QAPPS_API Submission();
    AWS_QAPPS_API Submission(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Submission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data submitted by the user.</p>
     */
    inline Aws::Utils::DocumentView GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::Utils::Document& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::Utils::Document&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline Submission& WithValue(const Aws::Utils::Document& value) { SetValue(value); return *this;}
    inline Submission& WithValue(Aws::Utils::Document&& value) { SetValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the submission.</p>
     */
    inline const Aws::String& GetSubmissionId() const{ return m_submissionId; }
    inline bool SubmissionIdHasBeenSet() const { return m_submissionIdHasBeenSet; }
    inline void SetSubmissionId(const Aws::String& value) { m_submissionIdHasBeenSet = true; m_submissionId = value; }
    inline void SetSubmissionId(Aws::String&& value) { m_submissionIdHasBeenSet = true; m_submissionId = std::move(value); }
    inline void SetSubmissionId(const char* value) { m_submissionIdHasBeenSet = true; m_submissionId.assign(value); }
    inline Submission& WithSubmissionId(const Aws::String& value) { SetSubmissionId(value); return *this;}
    inline Submission& WithSubmissionId(Aws::String&& value) { SetSubmissionId(std::move(value)); return *this;}
    inline Submission& WithSubmissionId(const char* value) { SetSubmissionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the card is submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline Submission& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline Submission& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_submissionId;
    bool m_submissionIdHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
