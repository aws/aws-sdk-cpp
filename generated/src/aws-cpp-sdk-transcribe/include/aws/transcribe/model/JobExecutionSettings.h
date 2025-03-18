/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Makes it possible to control how your transcription job is processed.
   * Currently, the only <code>JobExecutionSettings</code> modification you can
   * choose is enabling job queueing using the <code>AllowDeferredExecution</code>
   * sub-parameter.</p> <p>If you include <code>JobExecutionSettings</code> in your
   * request, you must also include the sub-parameters:
   * <code>AllowDeferredExecution</code> and
   * <code>DataAccessRoleArn</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/JobExecutionSettings">AWS
   * API Reference</a></p>
   */
  class JobExecutionSettings
  {
  public:
    AWS_TRANSCRIBESERVICE_API JobExecutionSettings() = default;
    AWS_TRANSCRIBESERVICE_API JobExecutionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API JobExecutionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Makes it possible to enable job queuing when your concurrent request limit is
     * exceeded. When <code>AllowDeferredExecution</code> is set to <code>true</code>,
     * transcription job requests are placed in a queue until the number of jobs falls
     * below the concurrent request limit. If <code>AllowDeferredExecution</code> is
     * set to <code>false</code> and the number of transcription job requests exceed
     * the concurrent request limit, you get a <code>LimitExceededException</code>
     * error.</p> <p>If you include <code>AllowDeferredExecution</code> in your
     * request, you must also include <code>DataAccessRoleArn</code>.</p>
     */
    inline bool GetAllowDeferredExecution() const { return m_allowDeferredExecution; }
    inline bool AllowDeferredExecutionHasBeenSet() const { return m_allowDeferredExecutionHasBeenSet; }
    inline void SetAllowDeferredExecution(bool value) { m_allowDeferredExecutionHasBeenSet = true; m_allowDeferredExecution = value; }
    inline JobExecutionSettings& WithAllowDeferredExecution(bool value) { SetAllowDeferredExecution(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the Amazon S3 bucket that contains your input files. If the role that you
     * specify doesn’t have the appropriate permissions to access the specified Amazon
     * S3 location, your request fails.</p> <p>IAM role ARNs have the format
     * <code>arn:partition:iam::account:role/role-name-with-path</code>. For example:
     * <code>arn:aws:iam::111122223333:role/Admin</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-arns">IAM
     * ARNs</a>.</p> <p>Note that if you include <code>DataAccessRoleArn</code> in your
     * request, you must also include <code>AllowDeferredExecution</code>.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    template<typename DataAccessRoleArnT = Aws::String>
    void SetDataAccessRoleArn(DataAccessRoleArnT&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value); }
    template<typename DataAccessRoleArnT = Aws::String>
    JobExecutionSettings& WithDataAccessRoleArn(DataAccessRoleArnT&& value) { SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value)); return *this;}
    ///@}
  private:

    bool m_allowDeferredExecution{false};
    bool m_allowDeferredExecutionHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
