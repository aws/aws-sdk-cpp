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
    AWS_SFN_API StateMachineAliasListItem();
    AWS_SFN_API StateMachineAliasListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API StateMachineAliasListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine alias. The
     * alias ARN is a combination of state machine ARN and the alias name separated by
     * a colon (:). For example, <code>stateMachineARN:PROD</code>.</p>
     */
    inline const Aws::String& GetStateMachineAliasArn() const{ return m_stateMachineAliasArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine alias. The
     * alias ARN is a combination of state machine ARN and the alias name separated by
     * a colon (:). For example, <code>stateMachineARN:PROD</code>.</p>
     */
    inline bool StateMachineAliasArnHasBeenSet() const { return m_stateMachineAliasArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine alias. The
     * alias ARN is a combination of state machine ARN and the alias name separated by
     * a colon (:). For example, <code>stateMachineARN:PROD</code>.</p>
     */
    inline void SetStateMachineAliasArn(const Aws::String& value) { m_stateMachineAliasArnHasBeenSet = true; m_stateMachineAliasArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine alias. The
     * alias ARN is a combination of state machine ARN and the alias name separated by
     * a colon (:). For example, <code>stateMachineARN:PROD</code>.</p>
     */
    inline void SetStateMachineAliasArn(Aws::String&& value) { m_stateMachineAliasArnHasBeenSet = true; m_stateMachineAliasArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine alias. The
     * alias ARN is a combination of state machine ARN and the alias name separated by
     * a colon (:). For example, <code>stateMachineARN:PROD</code>.</p>
     */
    inline void SetStateMachineAliasArn(const char* value) { m_stateMachineAliasArnHasBeenSet = true; m_stateMachineAliasArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine alias. The
     * alias ARN is a combination of state machine ARN and the alias name separated by
     * a colon (:). For example, <code>stateMachineARN:PROD</code>.</p>
     */
    inline StateMachineAliasListItem& WithStateMachineAliasArn(const Aws::String& value) { SetStateMachineAliasArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine alias. The
     * alias ARN is a combination of state machine ARN and the alias name separated by
     * a colon (:). For example, <code>stateMachineARN:PROD</code>.</p>
     */
    inline StateMachineAliasListItem& WithStateMachineAliasArn(Aws::String&& value) { SetStateMachineAliasArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine alias. The
     * alias ARN is a combination of state machine ARN and the alias name separated by
     * a colon (:). For example, <code>stateMachineARN:PROD</code>.</p>
     */
    inline StateMachineAliasListItem& WithStateMachineAliasArn(const char* value) { SetStateMachineAliasArn(value); return *this;}


    /**
     * <p>The creation date of a state machine alias.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The creation date of a state machine alias.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The creation date of a state machine alias.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date of a state machine alias.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The creation date of a state machine alias.</p>
     */
    inline StateMachineAliasListItem& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date of a state machine alias.</p>
     */
    inline StateMachineAliasListItem& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_stateMachineAliasArn;
    bool m_stateMachineAliasArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
