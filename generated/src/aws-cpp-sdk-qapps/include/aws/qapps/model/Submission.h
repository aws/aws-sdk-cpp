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
    AWS_QAPPS_API Submission() = default;
    AWS_QAPPS_API Submission(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Submission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data submitted by the user.</p>
     */
    inline Aws::Utils::DocumentView GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::Utils::Document>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::Utils::Document>
    Submission& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the submission.</p>
     */
    inline const Aws::String& GetSubmissionId() const { return m_submissionId; }
    inline bool SubmissionIdHasBeenSet() const { return m_submissionIdHasBeenSet; }
    template<typename SubmissionIdT = Aws::String>
    void SetSubmissionId(SubmissionIdT&& value) { m_submissionIdHasBeenSet = true; m_submissionId = std::forward<SubmissionIdT>(value); }
    template<typename SubmissionIdT = Aws::String>
    Submission& WithSubmissionId(SubmissionIdT&& value) { SetSubmissionId(std::forward<SubmissionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the card is submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    Submission& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_submissionId;
    bool m_submissionIdHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
