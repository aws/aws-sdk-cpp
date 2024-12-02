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
    AWS_NETWORKFLOWMONITOR_API ScopeSummary();
    AWS_NETWORKFLOWMONITOR_API ScopeSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API ScopeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the scope that includes the resources you want to get data
     * results for. A scope ID is an internally-generated identifier that includes all
     * the resources for a specific root account.</p>
     */
    inline const Aws::String& GetScopeId() const{ return m_scopeId; }
    inline bool ScopeIdHasBeenSet() const { return m_scopeIdHasBeenSet; }
    inline void SetScopeId(const Aws::String& value) { m_scopeIdHasBeenSet = true; m_scopeId = value; }
    inline void SetScopeId(Aws::String&& value) { m_scopeIdHasBeenSet = true; m_scopeId = std::move(value); }
    inline void SetScopeId(const char* value) { m_scopeIdHasBeenSet = true; m_scopeId.assign(value); }
    inline ScopeSummary& WithScopeId(const Aws::String& value) { SetScopeId(value); return *this;}
    inline ScopeSummary& WithScopeId(Aws::String&& value) { SetScopeId(std::move(value)); return *this;}
    inline ScopeSummary& WithScopeId(const char* value) { SetScopeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a scope. The status can be one of the following, depending on
     * the state of scope creation: <code>SUCCEEDED</code>, <code>IN_PROGRESS</code>,
     * or <code>FAILED</code>.</p>
     */
    inline const ScopeStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ScopeStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ScopeStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ScopeSummary& WithStatus(const ScopeStatus& value) { SetStatus(value); return *this;}
    inline ScopeSummary& WithStatus(ScopeStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the scope.</p>
     */
    inline const Aws::String& GetScopeArn() const{ return m_scopeArn; }
    inline bool ScopeArnHasBeenSet() const { return m_scopeArnHasBeenSet; }
    inline void SetScopeArn(const Aws::String& value) { m_scopeArnHasBeenSet = true; m_scopeArn = value; }
    inline void SetScopeArn(Aws::String&& value) { m_scopeArnHasBeenSet = true; m_scopeArn = std::move(value); }
    inline void SetScopeArn(const char* value) { m_scopeArnHasBeenSet = true; m_scopeArn.assign(value); }
    inline ScopeSummary& WithScopeArn(const Aws::String& value) { SetScopeArn(value); return *this;}
    inline ScopeSummary& WithScopeArn(Aws::String&& value) { SetScopeArn(std::move(value)); return *this;}
    inline ScopeSummary& WithScopeArn(const char* value) { SetScopeArn(value); return *this;}
    ///@}
  private:

    Aws::String m_scopeId;
    bool m_scopeIdHasBeenSet = false;

    ScopeStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_scopeArn;
    bool m_scopeArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
