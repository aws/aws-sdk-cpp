﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/StackInstanceStatus.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>An CloudFormation stack, in a specific account and Region, that's part of a
   * stack set operation. A stack instance is a reference to an attempted or actual
   * stack in a given account within a given Region. A stack instance can exist
   * without a stack—for example, if the stack couldn't be created for some reason. A
   * stack instance is associated with only one stack set. Each stack instance
   * contains the ID of its associated stack set, as well as the ID of the actual
   * stack and the stack status. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/StackInstance">AWS
   * API Reference</a></p>
   */
  class StackInstance
  {
  public:
    AWS_SERVICECATALOG_API StackInstance() = default;
    AWS_SERVICECATALOG_API StackInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API StackInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon Web Services account that the stack instance is
     * associated with.</p>
     */
    inline const Aws::String& GetAccount() const { return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    template<typename AccountT = Aws::String>
    void SetAccount(AccountT&& value) { m_accountHasBeenSet = true; m_account = std::forward<AccountT>(value); }
    template<typename AccountT = Aws::String>
    StackInstance& WithAccount(AccountT&& value) { SetAccount(std::forward<AccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services Region that the stack instance is
     * associated with.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    StackInstance& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the stack instance, in terms of its synchronization with its
     * associated stack set. </p> <ul> <li> <p> <code>INOPERABLE</code>: A
     * <code>DeleteStackInstances</code> operation has failed and left the stack in an
     * unstable state. Stacks in this state are excluded from further
     * <code>UpdateStackSet</code> operations. You might need to perform a
     * <code>DeleteStackInstances</code> operation, with <code>RetainStacks</code> set
     * to true, to delete the stack instance, and then delete the stack manually. </p>
     * </li> <li> <p> <code>OUTDATED</code>: The stack isn't currently up to date with
     * the stack set because either the associated stack failed during a
     * <code>CreateStackSet</code> or <code>UpdateStackSet</code> operation, or the
     * stack was part of a <code>CreateStackSet</code> or <code>UpdateStackSet</code>
     * operation that failed or was stopped before the stack was created or
     * updated.</p> </li> <li> <p> <code>CURRENT</code>: The stack is currently up to
     * date with the stack set.</p> </li> </ul>
     */
    inline StackInstanceStatus GetStackInstanceStatus() const { return m_stackInstanceStatus; }
    inline bool StackInstanceStatusHasBeenSet() const { return m_stackInstanceStatusHasBeenSet; }
    inline void SetStackInstanceStatus(StackInstanceStatus value) { m_stackInstanceStatusHasBeenSet = true; m_stackInstanceStatus = value; }
    inline StackInstance& WithStackInstanceStatus(StackInstanceStatus value) { SetStackInstanceStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    StackInstanceStatus m_stackInstanceStatus{StackInstanceStatus::NOT_SET};
    bool m_stackInstanceStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
