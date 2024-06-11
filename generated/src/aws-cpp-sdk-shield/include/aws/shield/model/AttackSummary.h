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
    AWS_SHIELD_API AttackSummary();
    AWS_SHIELD_API AttackSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API AttackSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SHIELD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier (ID) of the attack.</p>
     */
    inline const Aws::String& GetAttackId() const{ return m_attackId; }
    inline bool AttackIdHasBeenSet() const { return m_attackIdHasBeenSet; }
    inline void SetAttackId(const Aws::String& value) { m_attackIdHasBeenSet = true; m_attackId = value; }
    inline void SetAttackId(Aws::String&& value) { m_attackIdHasBeenSet = true; m_attackId = std::move(value); }
    inline void SetAttackId(const char* value) { m_attackIdHasBeenSet = true; m_attackId.assign(value); }
    inline AttackSummary& WithAttackId(const Aws::String& value) { SetAttackId(value); return *this;}
    inline AttackSummary& WithAttackId(Aws::String&& value) { SetAttackId(std::move(value)); return *this;}
    inline AttackSummary& WithAttackId(const char* value) { SetAttackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) of the resource that was attacked.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline AttackSummary& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline AttackSummary& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline AttackSummary& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the attack, in Unix time in seconds. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline AttackSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline AttackSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the attack, in Unix time in seconds. </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline AttackSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline AttackSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of attacks for a specified time period.</p>
     */
    inline const Aws::Vector<AttackVectorDescription>& GetAttackVectors() const{ return m_attackVectors; }
    inline bool AttackVectorsHasBeenSet() const { return m_attackVectorsHasBeenSet; }
    inline void SetAttackVectors(const Aws::Vector<AttackVectorDescription>& value) { m_attackVectorsHasBeenSet = true; m_attackVectors = value; }
    inline void SetAttackVectors(Aws::Vector<AttackVectorDescription>&& value) { m_attackVectorsHasBeenSet = true; m_attackVectors = std::move(value); }
    inline AttackSummary& WithAttackVectors(const Aws::Vector<AttackVectorDescription>& value) { SetAttackVectors(value); return *this;}
    inline AttackSummary& WithAttackVectors(Aws::Vector<AttackVectorDescription>&& value) { SetAttackVectors(std::move(value)); return *this;}
    inline AttackSummary& AddAttackVectors(const AttackVectorDescription& value) { m_attackVectorsHasBeenSet = true; m_attackVectors.push_back(value); return *this; }
    inline AttackSummary& AddAttackVectors(AttackVectorDescription&& value) { m_attackVectorsHasBeenSet = true; m_attackVectors.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_attackId;
    bool m_attackIdHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::Vector<AttackVectorDescription> m_attackVectors;
    bool m_attackVectorsHasBeenSet = false;
  };

} // namespace Model
} // namespace Shield
} // namespace Aws
