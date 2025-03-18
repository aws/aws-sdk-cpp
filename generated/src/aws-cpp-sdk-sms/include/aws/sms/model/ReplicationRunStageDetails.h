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
    AWS_SMS_API ReplicationRunStageDetails() = default;
    AWS_SMS_API ReplicationRunStageDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API ReplicationRunStageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current stage of a replication run.</p>
     */
    inline const Aws::String& GetStage() const { return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    template<typename StageT = Aws::String>
    void SetStage(StageT&& value) { m_stageHasBeenSet = true; m_stage = std::forward<StageT>(value); }
    template<typename StageT = Aws::String>
    ReplicationRunStageDetails& WithStage(StageT&& value) { SetStage(std::forward<StageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The progress of the current stage of a replication run.</p>
     */
    inline const Aws::String& GetStageProgress() const { return m_stageProgress; }
    inline bool StageProgressHasBeenSet() const { return m_stageProgressHasBeenSet; }
    template<typename StageProgressT = Aws::String>
    void SetStageProgress(StageProgressT&& value) { m_stageProgressHasBeenSet = true; m_stageProgress = std::forward<StageProgressT>(value); }
    template<typename StageProgressT = Aws::String>
    ReplicationRunStageDetails& WithStageProgress(StageProgressT&& value) { SetStageProgress(std::forward<StageProgressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stage;
    bool m_stageHasBeenSet = false;

    Aws::String m_stageProgress;
    bool m_stageProgressHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
