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
   * <p>A structure that describes the context for a service quota. The context
   * identifies what the quota applies to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/QuotaContextInfo">AWS
   * API Reference</a></p>
   */
  class QuotaContextInfo
  {
  public:
    AWS_SERVICEQUOTAS_API QuotaContextInfo();
    AWS_SERVICEQUOTAS_API QuotaContextInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API QuotaContextInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEQUOTAS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether the quota applies to an Amazon Web Services account, or to
     * a resource.</p>
     */
    inline const QuotaContextScope& GetContextScope() const{ return m_contextScope; }

    /**
     * <p>Specifies whether the quota applies to an Amazon Web Services account, or to
     * a resource.</p>
     */
    inline bool ContextScopeHasBeenSet() const { return m_contextScopeHasBeenSet; }

    /**
     * <p>Specifies whether the quota applies to an Amazon Web Services account, or to
     * a resource.</p>
     */
    inline void SetContextScope(const QuotaContextScope& value) { m_contextScopeHasBeenSet = true; m_contextScope = value; }

    /**
     * <p>Specifies whether the quota applies to an Amazon Web Services account, or to
     * a resource.</p>
     */
    inline void SetContextScope(QuotaContextScope&& value) { m_contextScopeHasBeenSet = true; m_contextScope = std::move(value); }

    /**
     * <p>Specifies whether the quota applies to an Amazon Web Services account, or to
     * a resource.</p>
     */
    inline QuotaContextInfo& WithContextScope(const QuotaContextScope& value) { SetContextScope(value); return *this;}

    /**
     * <p>Specifies whether the quota applies to an Amazon Web Services account, or to
     * a resource.</p>
     */
    inline QuotaContextInfo& WithContextScope(QuotaContextScope&& value) { SetContextScope(std::move(value)); return *this;}


    /**
     * <p>When the <code>ContextScope</code> is <code>RESOURCE</code>, then this
     * specifies the resource type of the specified resource.</p>
     */
    inline const Aws::String& GetContextScopeType() const{ return m_contextScopeType; }

    /**
     * <p>When the <code>ContextScope</code> is <code>RESOURCE</code>, then this
     * specifies the resource type of the specified resource.</p>
     */
    inline bool ContextScopeTypeHasBeenSet() const { return m_contextScopeTypeHasBeenSet; }

    /**
     * <p>When the <code>ContextScope</code> is <code>RESOURCE</code>, then this
     * specifies the resource type of the specified resource.</p>
     */
    inline void SetContextScopeType(const Aws::String& value) { m_contextScopeTypeHasBeenSet = true; m_contextScopeType = value; }

    /**
     * <p>When the <code>ContextScope</code> is <code>RESOURCE</code>, then this
     * specifies the resource type of the specified resource.</p>
     */
    inline void SetContextScopeType(Aws::String&& value) { m_contextScopeTypeHasBeenSet = true; m_contextScopeType = std::move(value); }

    /**
     * <p>When the <code>ContextScope</code> is <code>RESOURCE</code>, then this
     * specifies the resource type of the specified resource.</p>
     */
    inline void SetContextScopeType(const char* value) { m_contextScopeTypeHasBeenSet = true; m_contextScopeType.assign(value); }

    /**
     * <p>When the <code>ContextScope</code> is <code>RESOURCE</code>, then this
     * specifies the resource type of the specified resource.</p>
     */
    inline QuotaContextInfo& WithContextScopeType(const Aws::String& value) { SetContextScopeType(value); return *this;}

    /**
     * <p>When the <code>ContextScope</code> is <code>RESOURCE</code>, then this
     * specifies the resource type of the specified resource.</p>
     */
    inline QuotaContextInfo& WithContextScopeType(Aws::String&& value) { SetContextScopeType(std::move(value)); return *this;}

    /**
     * <p>When the <code>ContextScope</code> is <code>RESOURCE</code>, then this
     * specifies the resource type of the specified resource.</p>
     */
    inline QuotaContextInfo& WithContextScopeType(const char* value) { SetContextScopeType(value); return *this;}


    /**
     * <p>Specifies the Amazon Web Services account or resource to which the quota
     * applies. The value in this field depends on the context scope associated with
     * the specified service quota.</p>
     */
    inline const Aws::String& GetContextId() const{ return m_contextId; }

    /**
     * <p>Specifies the Amazon Web Services account or resource to which the quota
     * applies. The value in this field depends on the context scope associated with
     * the specified service quota.</p>
     */
    inline bool ContextIdHasBeenSet() const { return m_contextIdHasBeenSet; }

    /**
     * <p>Specifies the Amazon Web Services account or resource to which the quota
     * applies. The value in this field depends on the context scope associated with
     * the specified service quota.</p>
     */
    inline void SetContextId(const Aws::String& value) { m_contextIdHasBeenSet = true; m_contextId = value; }

    /**
     * <p>Specifies the Amazon Web Services account or resource to which the quota
     * applies. The value in this field depends on the context scope associated with
     * the specified service quota.</p>
     */
    inline void SetContextId(Aws::String&& value) { m_contextIdHasBeenSet = true; m_contextId = std::move(value); }

    /**
     * <p>Specifies the Amazon Web Services account or resource to which the quota
     * applies. The value in this field depends on the context scope associated with
     * the specified service quota.</p>
     */
    inline void SetContextId(const char* value) { m_contextIdHasBeenSet = true; m_contextId.assign(value); }

    /**
     * <p>Specifies the Amazon Web Services account or resource to which the quota
     * applies. The value in this field depends on the context scope associated with
     * the specified service quota.</p>
     */
    inline QuotaContextInfo& WithContextId(const Aws::String& value) { SetContextId(value); return *this;}

    /**
     * <p>Specifies the Amazon Web Services account or resource to which the quota
     * applies. The value in this field depends on the context scope associated with
     * the specified service quota.</p>
     */
    inline QuotaContextInfo& WithContextId(Aws::String&& value) { SetContextId(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Web Services account or resource to which the quota
     * applies. The value in this field depends on the context scope associated with
     * the specified service quota.</p>
     */
    inline QuotaContextInfo& WithContextId(const char* value) { SetContextId(value); return *this;}

  private:

    QuotaContextScope m_contextScope;
    bool m_contextScopeHasBeenSet = false;

    Aws::String m_contextScopeType;
    bool m_contextScopeTypeHasBeenSet = false;

    Aws::String m_contextId;
    bool m_contextIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
