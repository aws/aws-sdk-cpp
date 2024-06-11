/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/StateMachineType.h>
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
   * <p>Contains details about the state machine.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/StateMachineListItem">AWS
   * API Reference</a></p>
   */
  class StateMachineListItem
  {
  public:
    AWS_SFN_API StateMachineListItem();
    AWS_SFN_API StateMachineListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API StateMachineListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p>
     */
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }
    inline bool StateMachineArnHasBeenSet() const { return m_stateMachineArnHasBeenSet; }
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = value; }
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::move(value); }
    inline void SetStateMachineArn(const char* value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn.assign(value); }
    inline StateMachineListItem& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}
    inline StateMachineListItem& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(std::move(value)); return *this;}
    inline StateMachineListItem& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the state machine.</p> <p>A name must <i>not</i> contain:</p>
     * <ul> <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [
     * ]</code> </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>,
     * <code>U+007F-009F</code>)</p> </li> </ul> <p>To enable logging with CloudWatch
     * Logs, the name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StateMachineListItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StateMachineListItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StateMachineListItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const StateMachineType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const StateMachineType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(StateMachineType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline StateMachineListItem& WithType(const StateMachineType& value) { SetType(value); return *this;}
    inline StateMachineListItem& WithType(StateMachineType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the state machine is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline StateMachineListItem& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline StateMachineListItem& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StateMachineType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
