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
   * <p>Contains details about a specific state machine version.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/StateMachineVersionListItem">AWS
   * API Reference</a></p>
   */
  class StateMachineVersionListItem
  {
  public:
    AWS_SFN_API StateMachineVersionListItem() = default;
    AWS_SFN_API StateMachineVersionListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API StateMachineVersionListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine version. The
     * version ARN is a combination of state machine ARN and the version number
     * separated by a colon (:). For example, <code>stateMachineARN:1</code>.</p>
     */
    inline const Aws::String& GetStateMachineVersionArn() const { return m_stateMachineVersionArn; }
    inline bool StateMachineVersionArnHasBeenSet() const { return m_stateMachineVersionArnHasBeenSet; }
    template<typename StateMachineVersionArnT = Aws::String>
    void SetStateMachineVersionArn(StateMachineVersionArnT&& value) { m_stateMachineVersionArnHasBeenSet = true; m_stateMachineVersionArn = std::forward<StateMachineVersionArnT>(value); }
    template<typename StateMachineVersionArnT = Aws::String>
    StateMachineVersionListItem& WithStateMachineVersionArn(StateMachineVersionArnT&& value) { SetStateMachineVersionArn(std::forward<StateMachineVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date of a state machine version.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    StateMachineVersionListItem& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stateMachineVersionArn;
    bool m_stateMachineVersionArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
