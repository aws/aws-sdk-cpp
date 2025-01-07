﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
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
namespace NetworkFlowMonitor
{
namespace Model
{

  /**
   * <p>A target ID is an internally-generated identifier for a target. A target
   * allows you to identify all the resources in a Network Flow Monitor scope.
   * Currently, a target is always an Amazon Web Services account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/TargetId">AWS
   * API Reference</a></p>
   */
  class TargetId
  {
  public:
    AWS_NETWORKFLOWMONITOR_API TargetId();
    AWS_NETWORKFLOWMONITOR_API TargetId(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API TargetId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the account for a target.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline TargetId& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline TargetId& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline TargetId& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
