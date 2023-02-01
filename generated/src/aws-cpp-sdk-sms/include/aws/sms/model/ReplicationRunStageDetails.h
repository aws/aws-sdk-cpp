/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Details of the current stage of a replication run.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/ReplicationRunStageDetails">AWS
   * API Reference</a></p>
   */
  class ReplicationRunStageDetails
  {
  public:
    AWS_SMS_API ReplicationRunStageDetails();
    AWS_SMS_API ReplicationRunStageDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ReplicationRunStageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The current stage of a replication run.</p>
     */
    inline const Aws::String& GetStage() const{ return m_stage; }

    /**
     * <p>The current stage of a replication run.</p>
     */
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }

    /**
     * <p>The current stage of a replication run.</p>
     */
    inline void SetStage(const Aws::String& value) { m_stageHasBeenSet = true; m_stage = value; }

    /**
     * <p>The current stage of a replication run.</p>
     */
    inline void SetStage(Aws::String&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }

    /**
     * <p>The current stage of a replication run.</p>
     */
    inline void SetStage(const char* value) { m_stageHasBeenSet = true; m_stage.assign(value); }

    /**
     * <p>The current stage of a replication run.</p>
     */
    inline ReplicationRunStageDetails& WithStage(const Aws::String& value) { SetStage(value); return *this;}

    /**
     * <p>The current stage of a replication run.</p>
     */
    inline ReplicationRunStageDetails& WithStage(Aws::String&& value) { SetStage(std::move(value)); return *this;}

    /**
     * <p>The current stage of a replication run.</p>
     */
    inline ReplicationRunStageDetails& WithStage(const char* value) { SetStage(value); return *this;}


    /**
     * <p>The progress of the current stage of a replication run.</p>
     */
    inline const Aws::String& GetStageProgress() const{ return m_stageProgress; }

    /**
     * <p>The progress of the current stage of a replication run.</p>
     */
    inline bool StageProgressHasBeenSet() const { return m_stageProgressHasBeenSet; }

    /**
     * <p>The progress of the current stage of a replication run.</p>
     */
    inline void SetStageProgress(const Aws::String& value) { m_stageProgressHasBeenSet = true; m_stageProgress = value; }

    /**
     * <p>The progress of the current stage of a replication run.</p>
     */
    inline void SetStageProgress(Aws::String&& value) { m_stageProgressHasBeenSet = true; m_stageProgress = std::move(value); }

    /**
     * <p>The progress of the current stage of a replication run.</p>
     */
    inline void SetStageProgress(const char* value) { m_stageProgressHasBeenSet = true; m_stageProgress.assign(value); }

    /**
     * <p>The progress of the current stage of a replication run.</p>
     */
    inline ReplicationRunStageDetails& WithStageProgress(const Aws::String& value) { SetStageProgress(value); return *this;}

    /**
     * <p>The progress of the current stage of a replication run.</p>
     */
    inline ReplicationRunStageDetails& WithStageProgress(Aws::String&& value) { SetStageProgress(std::move(value)); return *this;}

    /**
     * <p>The progress of the current stage of a replication run.</p>
     */
    inline ReplicationRunStageDetails& WithStageProgress(const char* value) { SetStageProgress(value); return *this;}

  private:

    Aws::String m_stage;
    bool m_stageHasBeenSet = false;

    Aws::String m_stageProgress;
    bool m_stageProgressHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
