/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/shield/model/AttackVectorDescription.h>
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
namespace Shield
{
namespace Model
{

  /**
   * <p>Summarizes all DDoS attacks for a specified time period.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/AttackSummary">AWS
   * API Reference</a></p>
   */
  class AttackSummary
  {
  public:
    AWS_SHIELD_API AttackSummary() = default;
    AWS_SHIELD_API AttackSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API AttackSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline const Aws::String& GetAttackId() const { return m_attackId; }
    inline bool AttackIdHasBeenSet() const { return m_attackIdHasBeenSet; }
    template<typename AttackIdT = Aws::String>
    void SetAttackId(AttackIdT&& value) { m_attackIdHasBeenSet = true; m_attackId = std::forward<AttackIdT>(value); }
    template<typename AttackIdT = Aws::String>
    AttackSummary& WithAttackId(AttackIdT&& value) { SetAttackId(std::forward<AttackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    AttackSummary& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the attack, in Unix time in seconds. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    AttackSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the attack, in Unix time in seconds. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    AttackSummary& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of attacks for a specified time period.</p>
     */
    inline const Aws::Vector<AttackVectorDescription>& GetAttackVectors() const { return m_attackVectors; }
    inline bool AttackVectorsHasBeenSet() const { return m_attackVectorsHasBeenSet; }
    template<typename AttackVectorsT = Aws::Vector<AttackVectorDescription>>
    void SetAttackVectors(AttackVectorsT&& value) { m_attackVectorsHasBeenSet = true; m_attackVectors = std::forward<AttackVectorsT>(value); }
    template<typename AttackVectorsT = Aws::Vector<AttackVectorDescription>>
    AttackSummary& WithAttackVectors(AttackVectorsT&& value) { SetAttackVectors(std::forward<AttackVectorsT>(value)); return *this;}
    template<typename AttackVectorsT = AttackVectorDescription>
    AttackSummary& AddAttackVectors(AttackVectorsT&& value) { m_attackVectorsHasBeenSet = true; m_attackVectors.emplace_back(std::forward<AttackVectorsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_attackId;
    bool m_attackIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Vector<AttackVectorDescription> m_attackVectors;
    bool m_attackVectorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
