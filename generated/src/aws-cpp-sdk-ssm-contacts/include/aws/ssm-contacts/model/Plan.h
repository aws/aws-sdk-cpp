﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-contacts/model/Stage.h>
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
namespace SSMContacts
{
namespace Model
{

  /**
   * <p>Information about the stages and on-call rotation teams associated with an
   * escalation plan or engagement plan. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-contacts-2021-05-03/Plan">AWS
   * API Reference</a></p>
   */
  class Plan
  {
  public:
    AWS_SSMCONTACTS_API Plan();
    AWS_SSMCONTACTS_API Plan(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Plan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMCONTACTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of stages that the escalation plan or engagement plan uses to engage
     * contacts and contact methods.</p>
     */
    inline const Aws::Vector<Stage>& GetStages() const{ return m_stages; }
    inline bool StagesHasBeenSet() const { return m_stagesHasBeenSet; }
    inline void SetStages(const Aws::Vector<Stage>& value) { m_stagesHasBeenSet = true; m_stages = value; }
    inline void SetStages(Aws::Vector<Stage>&& value) { m_stagesHasBeenSet = true; m_stages = std::move(value); }
    inline Plan& WithStages(const Aws::Vector<Stage>& value) { SetStages(value); return *this;}
    inline Plan& WithStages(Aws::Vector<Stage>&& value) { SetStages(std::move(value)); return *this;}
    inline Plan& AddStages(const Stage& value) { m_stagesHasBeenSet = true; m_stages.push_back(value); return *this; }
    inline Plan& AddStages(Stage&& value) { m_stagesHasBeenSet = true; m_stages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the on-call rotations associated with the
     * plan. </p>
     */
    inline const Aws::Vector<Aws::String>& GetRotationIds() const{ return m_rotationIds; }
    inline bool RotationIdsHasBeenSet() const { return m_rotationIdsHasBeenSet; }
    inline void SetRotationIds(const Aws::Vector<Aws::String>& value) { m_rotationIdsHasBeenSet = true; m_rotationIds = value; }
    inline void SetRotationIds(Aws::Vector<Aws::String>&& value) { m_rotationIdsHasBeenSet = true; m_rotationIds = std::move(value); }
    inline Plan& WithRotationIds(const Aws::Vector<Aws::String>& value) { SetRotationIds(value); return *this;}
    inline Plan& WithRotationIds(Aws::Vector<Aws::String>&& value) { SetRotationIds(std::move(value)); return *this;}
    inline Plan& AddRotationIds(const Aws::String& value) { m_rotationIdsHasBeenSet = true; m_rotationIds.push_back(value); return *this; }
    inline Plan& AddRotationIds(Aws::String&& value) { m_rotationIdsHasBeenSet = true; m_rotationIds.push_back(std::move(value)); return *this; }
    inline Plan& AddRotationIds(const char* value) { m_rotationIdsHasBeenSet = true; m_rotationIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Stage> m_stages;
    bool m_stagesHasBeenSet = false;

    Aws::Vector<Aws::String> m_rotationIds;
    bool m_rotationIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
