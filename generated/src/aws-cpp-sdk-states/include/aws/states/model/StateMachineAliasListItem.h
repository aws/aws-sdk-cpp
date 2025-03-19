/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about a specific state machine alias.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/StateMachineAliasListItem">AWS
   * API Reference</a></p>
   */
  class StateMachineAliasListItem
  {
  public:
    AWS_SFN_API StateMachineAliasListItem() = default;
    AWS_SFN_API StateMachineAliasListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API StateMachineAliasListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine alias. The
     * alias ARN is a combination of state machine ARN and the alias name separated by
     * a colon (:). For example, <code>stateMachineARN:PROD</code>.</p>
     */
    inline const Aws::String& GetStateMachineAliasArn() const { return m_stateMachineAliasArn; }
    inline bool StateMachineAliasArnHasBeenSet() const { return m_stateMachineAliasArnHasBeenSet; }
    template<typename StateMachineAliasArnT = Aws::String>
    void SetStateMachineAliasArn(StateMachineAliasArnT&& value) { m_stateMachineAliasArnHasBeenSet = true; m_stateMachineAliasArn = std::forward<StateMachineAliasArnT>(value); }
    template<typename StateMachineAliasArnT = Aws::String>
    StateMachineAliasListItem& WithStateMachineAliasArn(StateMachineAliasArnT&& value) { SetStateMachineAliasArn(std::forward<StateMachineAliasArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date of a state machine alias.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    StateMachineAliasListItem& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stateMachineAliasArn;
    bool m_stateMachineAliasArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
