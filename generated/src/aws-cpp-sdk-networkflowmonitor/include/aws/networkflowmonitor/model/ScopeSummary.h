/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/model/ScopeStatus.h>
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
   * <p>A summary of information about a scope, including the ARN, target ID, and
   * Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/ScopeSummary">AWS
   * API Reference</a></p>
   */
  class ScopeSummary
  {
  public:
    AWS_NETWORKFLOWMONITOR_API ScopeSummary() = default;
    AWS_NETWORKFLOWMONITOR_API ScopeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API ScopeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the scope that includes the resources that you want to get
     * data results for. A scope ID is an internally-generated identifier that includes
     * all the resources for the accounts in a scope.</p>
     */
    inline const Aws::String& GetScopeId() const { return m_scopeId; }
    inline bool ScopeIdHasBeenSet() const { return m_scopeIdHasBeenSet; }
    template<typename ScopeIdT = Aws::String>
    void SetScopeId(ScopeIdT&& value) { m_scopeIdHasBeenSet = true; m_scopeId = std::forward<ScopeIdT>(value); }
    template<typename ScopeIdT = Aws::String>
    ScopeSummary& WithScopeId(ScopeIdT&& value) { SetScopeId(std::forward<ScopeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for a scope. The status can be one of the following:
     * <code>SUCCEEDED</code>, <code>IN_PROGRESS</code>, <code>FAILED</code>,
     * <code>DEACTIVATING</code>, or <code>DEACTIVATED</code>.</p> <p>A status of
     * <code>DEACTIVATING</code> means that you've requested a scope to be deactivated
     * and Network Flow Monitor is in the process of deactivating the scope. A status
     * of <code>DEACTIVATED</code> means that the deactivating process is complete.</p>
     */
    inline ScopeStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ScopeStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ScopeSummary& WithStatus(ScopeStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scope.</p>
     */
    inline const Aws::String& GetScopeArn() const { return m_scopeArn; }
    inline bool ScopeArnHasBeenSet() const { return m_scopeArnHasBeenSet; }
    template<typename ScopeArnT = Aws::String>
    void SetScopeArn(ScopeArnT&& value) { m_scopeArnHasBeenSet = true; m_scopeArn = std::forward<ScopeArnT>(value); }
    template<typename ScopeArnT = Aws::String>
    ScopeSummary& WithScopeArn(ScopeArnT&& value) { SetScopeArn(std::forward<ScopeArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_scopeId;
    bool m_scopeIdHasBeenSet = false;

    ScopeStatus m_status{ScopeStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_scopeArn;
    bool m_scopeArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
