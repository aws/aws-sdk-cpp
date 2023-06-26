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
    AWS_SFN_API StateMachineVersionListItem();
    AWS_SFN_API StateMachineVersionListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API StateMachineVersionListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine version. The
     * version ARN is a combination of state machine ARN and the version number
     * separated by a colon (:). For example, <code>stateMachineARN:1</code>.</p>
     */
    inline const Aws::String& GetStateMachineVersionArn() const{ return m_stateMachineVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine version. The
     * version ARN is a combination of state machine ARN and the version number
     * separated by a colon (:). For example, <code>stateMachineARN:1</code>.</p>
     */
    inline bool StateMachineVersionArnHasBeenSet() const { return m_stateMachineVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine version. The
     * version ARN is a combination of state machine ARN and the version number
     * separated by a colon (:). For example, <code>stateMachineARN:1</code>.</p>
     */
    inline void SetStateMachineVersionArn(const Aws::String& value) { m_stateMachineVersionArnHasBeenSet = true; m_stateMachineVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine version. The
     * version ARN is a combination of state machine ARN and the version number
     * separated by a colon (:). For example, <code>stateMachineARN:1</code>.</p>
     */
    inline void SetStateMachineVersionArn(Aws::String&& value) { m_stateMachineVersionArnHasBeenSet = true; m_stateMachineVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine version. The
     * version ARN is a combination of state machine ARN and the version number
     * separated by a colon (:). For example, <code>stateMachineARN:1</code>.</p>
     */
    inline void SetStateMachineVersionArn(const char* value) { m_stateMachineVersionArnHasBeenSet = true; m_stateMachineVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine version. The
     * version ARN is a combination of state machine ARN and the version number
     * separated by a colon (:). For example, <code>stateMachineARN:1</code>.</p>
     */
    inline StateMachineVersionListItem& WithStateMachineVersionArn(const Aws::String& value) { SetStateMachineVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine version. The
     * version ARN is a combination of state machine ARN and the version number
     * separated by a colon (:). For example, <code>stateMachineARN:1</code>.</p>
     */
    inline StateMachineVersionListItem& WithStateMachineVersionArn(Aws::String&& value) { SetStateMachineVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies a state machine version. The
     * version ARN is a combination of state machine ARN and the version number
     * separated by a colon (:). For example, <code>stateMachineARN:1</code>.</p>
     */
    inline StateMachineVersionListItem& WithStateMachineVersionArn(const char* value) { SetStateMachineVersionArn(value); return *this;}


    /**
     * <p>The creation date of a state machine version.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The creation date of a state machine version.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The creation date of a state machine version.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The creation date of a state machine version.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The creation date of a state machine version.</p>
     */
    inline StateMachineVersionListItem& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The creation date of a state machine version.</p>
     */
    inline StateMachineVersionListItem& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_stateMachineVersionArn;
    bool m_stateMachineVersionArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
