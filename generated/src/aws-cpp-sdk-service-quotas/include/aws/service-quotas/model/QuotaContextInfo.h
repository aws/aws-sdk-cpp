/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/QuotaContextScope.h>
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
namespace ServiceQuotas
{
namespace Model
{

  /**
   * <p>A structure that describes the context for a resource-level quota. For
   * resource-level quotas, such as <code>Instances per OpenSearch Service
   * Domain</code>, you can apply the quota value at the resource-level for each
   * OpenSearch Service Domain in your Amazon Web Services account. Together the
   * attributes of this structure help you understand how the quota is implemented by
   * Amazon Web Services and how you can manage it. For quotas such as <code>Amazon
   * OpenSearch Service Domains</code> which can be managed at the account-level for
   * each Amazon Web Services Region, the <code>QuotaContext</code> field is absent.
   * See the attribute descriptions below to further understand how to use
   * them.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/QuotaContextInfo">AWS
   * API Reference</a></p>
   */
  class QuotaContextInfo
  {
  public:
    AWS_SERVICEQUOTAS_API QuotaContextInfo() = default;
    AWS_SERVICEQUOTAS_API QuotaContextInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API QuotaContextInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the scope to which the quota value is applied. If the scope is
     * <code>RESOURCE</code>, the quota value is applied to each resource in the Amazon
     * Web Services account. If the scope is <code>ACCOUNT</code>, the quota value is
     * applied to the Amazon Web Services account.</p>
     */
    inline QuotaContextScope GetContextScope() const { return m_contextScope; }
    inline bool ContextScopeHasBeenSet() const { return m_contextScopeHasBeenSet; }
    inline void SetContextScope(QuotaContextScope value) { m_contextScopeHasBeenSet = true; m_contextScope = value; }
    inline QuotaContextInfo& WithContextScope(QuotaContextScope value) { SetContextScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the resource type to which the quota can be applied.</p>
     */
    inline const Aws::String& GetContextScopeType() const { return m_contextScopeType; }
    inline bool ContextScopeTypeHasBeenSet() const { return m_contextScopeTypeHasBeenSet; }
    template<typename ContextScopeTypeT = Aws::String>
    void SetContextScopeType(ContextScopeTypeT&& value) { m_contextScopeTypeHasBeenSet = true; m_contextScopeType = std::forward<ContextScopeTypeT>(value); }
    template<typename ContextScopeTypeT = Aws::String>
    QuotaContextInfo& WithContextScopeType(ContextScopeTypeT&& value) { SetContextScopeType(std::forward<ContextScopeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the resource, or resources, to which the quota applies. The value
     * for this field is either an Amazon Resource Name (ARN) or *. If the value is an
     * ARN, the quota value applies to that resource. If the value is *, then the quota
     * value applies to all resources listed in the <code>ContextScopeType</code>
     * field. The quota value applies to all resources for which you haven’t previously
     * applied a quota value, and any new resources you create in your Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetContextId() const { return m_contextId; }
    inline bool ContextIdHasBeenSet() const { return m_contextIdHasBeenSet; }
    template<typename ContextIdT = Aws::String>
    void SetContextId(ContextIdT&& value) { m_contextIdHasBeenSet = true; m_contextId = std::forward<ContextIdT>(value); }
    template<typename ContextIdT = Aws::String>
    QuotaContextInfo& WithContextId(ContextIdT&& value) { SetContextId(std::forward<ContextIdT>(value)); return *this;}
    ///@}
  private:

    QuotaContextScope m_contextScope{QuotaContextScope::NOT_SET};
    bool m_contextScopeHasBeenSet = false;

    Aws::String m_contextScopeType;
    bool m_contextScopeTypeHasBeenSet = false;

    Aws::String m_contextId;
    bool m_contextIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
