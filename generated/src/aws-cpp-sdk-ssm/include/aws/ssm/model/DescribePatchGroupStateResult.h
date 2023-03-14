/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class DescribePatchGroupStateResult
  {
  public:
    AWS_SSM_API DescribePatchGroupStateResult();
    AWS_SSM_API DescribePatchGroupStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribePatchGroupStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The number of managed nodes in the patch group.</p>
     */
    inline int GetInstances() const{ return m_instances; }

    /**
     * <p>The number of managed nodes in the patch group.</p>
     */
    inline void SetInstances(int value) { m_instances = value; }

    /**
     * <p>The number of managed nodes in the patch group.</p>
     */
    inline DescribePatchGroupStateResult& WithInstances(int value) { SetInstances(value); return *this;}


    /**
     * <p>The number of managed nodes with installed patches.</p>
     */
    inline int GetInstancesWithInstalledPatches() const{ return m_instancesWithInstalledPatches; }

    /**
     * <p>The number of managed nodes with installed patches.</p>
     */
    inline void SetInstancesWithInstalledPatches(int value) { m_instancesWithInstalledPatches = value; }

    /**
     * <p>The number of managed nodes with installed patches.</p>
     */
    inline DescribePatchGroupStateResult& WithInstancesWithInstalledPatches(int value) { SetInstancesWithInstalledPatches(value); return *this;}


    /**
     * <p>The number of managed nodes with patches installed that aren't defined in the
     * patch baseline.</p>
     */
    inline int GetInstancesWithInstalledOtherPatches() const{ return m_instancesWithInstalledOtherPatches; }

    /**
     * <p>The number of managed nodes with patches installed that aren't defined in the
     * patch baseline.</p>
     */
    inline void SetInstancesWithInstalledOtherPatches(int value) { m_instancesWithInstalledOtherPatches = value; }

    /**
     * <p>The number of managed nodes with patches installed that aren't defined in the
     * patch baseline.</p>
     */
    inline DescribePatchGroupStateResult& WithInstancesWithInstalledOtherPatches(int value) { SetInstancesWithInstalledOtherPatches(value); return *this;}


    /**
     * <p>The number of managed nodes with patches installed by Patch Manager that
     * haven't been rebooted after the patch installation. The status of these managed
     * nodes is <code>NON_COMPLIANT</code>.</p>
     */
    inline int GetInstancesWithInstalledPendingRebootPatches() const{ return m_instancesWithInstalledPendingRebootPatches; }

    /**
     * <p>The number of managed nodes with patches installed by Patch Manager that
     * haven't been rebooted after the patch installation. The status of these managed
     * nodes is <code>NON_COMPLIANT</code>.</p>
     */
    inline void SetInstancesWithInstalledPendingRebootPatches(int value) { m_instancesWithInstalledPendingRebootPatches = value; }

    /**
     * <p>The number of managed nodes with patches installed by Patch Manager that
     * haven't been rebooted after the patch installation. The status of these managed
     * nodes is <code>NON_COMPLIANT</code>.</p>
     */
    inline DescribePatchGroupStateResult& WithInstancesWithInstalledPendingRebootPatches(int value) { SetInstancesWithInstalledPendingRebootPatches(value); return *this;}


    /**
     * <p>The number of managed nodes with patches installed that are specified in a
     * <code>RejectedPatches</code> list. Patches with a status of
     * <code>INSTALLED_REJECTED</code> were typically installed before they were added
     * to a <code>RejectedPatches</code> list.</p>  <p>If
     * <code>ALLOW_AS_DEPENDENCY</code> is the specified option for
     * <code>RejectedPatchesAction</code>, the value of
     * <code>InstancesWithInstalledRejectedPatches</code> will always be <code>0</code>
     * (zero).</p> 
     */
    inline int GetInstancesWithInstalledRejectedPatches() const{ return m_instancesWithInstalledRejectedPatches; }

    /**
     * <p>The number of managed nodes with patches installed that are specified in a
     * <code>RejectedPatches</code> list. Patches with a status of
     * <code>INSTALLED_REJECTED</code> were typically installed before they were added
     * to a <code>RejectedPatches</code> list.</p>  <p>If
     * <code>ALLOW_AS_DEPENDENCY</code> is the specified option for
     * <code>RejectedPatchesAction</code>, the value of
     * <code>InstancesWithInstalledRejectedPatches</code> will always be <code>0</code>
     * (zero).</p> 
     */
    inline void SetInstancesWithInstalledRejectedPatches(int value) { m_instancesWithInstalledRejectedPatches = value; }

    /**
     * <p>The number of managed nodes with patches installed that are specified in a
     * <code>RejectedPatches</code> list. Patches with a status of
     * <code>INSTALLED_REJECTED</code> were typically installed before they were added
     * to a <code>RejectedPatches</code> list.</p>  <p>If
     * <code>ALLOW_AS_DEPENDENCY</code> is the specified option for
     * <code>RejectedPatchesAction</code>, the value of
     * <code>InstancesWithInstalledRejectedPatches</code> will always be <code>0</code>
     * (zero).</p> 
     */
    inline DescribePatchGroupStateResult& WithInstancesWithInstalledRejectedPatches(int value) { SetInstancesWithInstalledRejectedPatches(value); return *this;}


    /**
     * <p>The number of managed nodes with missing patches from the patch baseline.</p>
     */
    inline int GetInstancesWithMissingPatches() const{ return m_instancesWithMissingPatches; }

    /**
     * <p>The number of managed nodes with missing patches from the patch baseline.</p>
     */
    inline void SetInstancesWithMissingPatches(int value) { m_instancesWithMissingPatches = value; }

    /**
     * <p>The number of managed nodes with missing patches from the patch baseline.</p>
     */
    inline DescribePatchGroupStateResult& WithInstancesWithMissingPatches(int value) { SetInstancesWithMissingPatches(value); return *this;}


    /**
     * <p>The number of managed nodes with patches from the patch baseline that failed
     * to install.</p>
     */
    inline int GetInstancesWithFailedPatches() const{ return m_instancesWithFailedPatches; }

    /**
     * <p>The number of managed nodes with patches from the patch baseline that failed
     * to install.</p>
     */
    inline void SetInstancesWithFailedPatches(int value) { m_instancesWithFailedPatches = value; }

    /**
     * <p>The number of managed nodes with patches from the patch baseline that failed
     * to install.</p>
     */
    inline DescribePatchGroupStateResult& WithInstancesWithFailedPatches(int value) { SetInstancesWithFailedPatches(value); return *this;}


    /**
     * <p>The number of managed nodes with patches that aren't applicable.</p>
     */
    inline int GetInstancesWithNotApplicablePatches() const{ return m_instancesWithNotApplicablePatches; }

    /**
     * <p>The number of managed nodes with patches that aren't applicable.</p>
     */
    inline void SetInstancesWithNotApplicablePatches(int value) { m_instancesWithNotApplicablePatches = value; }

    /**
     * <p>The number of managed nodes with patches that aren't applicable.</p>
     */
    inline DescribePatchGroupStateResult& WithInstancesWithNotApplicablePatches(int value) { SetInstancesWithNotApplicablePatches(value); return *this;}


    /**
     * <p>The number of managed nodes with <code>NotApplicable</code> patches beyond
     * the supported limit, which aren't reported by name to Inventory. Inventory is a
     * capability of Amazon Web Services Systems Manager.</p>
     */
    inline int GetInstancesWithUnreportedNotApplicablePatches() const{ return m_instancesWithUnreportedNotApplicablePatches; }

    /**
     * <p>The number of managed nodes with <code>NotApplicable</code> patches beyond
     * the supported limit, which aren't reported by name to Inventory. Inventory is a
     * capability of Amazon Web Services Systems Manager.</p>
     */
    inline void SetInstancesWithUnreportedNotApplicablePatches(int value) { m_instancesWithUnreportedNotApplicablePatches = value; }

    /**
     * <p>The number of managed nodes with <code>NotApplicable</code> patches beyond
     * the supported limit, which aren't reported by name to Inventory. Inventory is a
     * capability of Amazon Web Services Systems Manager.</p>
     */
    inline DescribePatchGroupStateResult& WithInstancesWithUnreportedNotApplicablePatches(int value) { SetInstancesWithUnreportedNotApplicablePatches(value); return *this;}


    /**
     * <p>The number of managed nodes where patches that are specified as
     * <code>Critical</code> for compliance reporting in the patch baseline aren't
     * installed. These patches might be missing, have failed installation, were
     * rejected, or were installed but awaiting a required managed node reboot. The
     * status of these managed nodes is <code>NON_COMPLIANT</code>.</p>
     */
    inline int GetInstancesWithCriticalNonCompliantPatches() const{ return m_instancesWithCriticalNonCompliantPatches; }

    /**
     * <p>The number of managed nodes where patches that are specified as
     * <code>Critical</code> for compliance reporting in the patch baseline aren't
     * installed. These patches might be missing, have failed installation, were
     * rejected, or were installed but awaiting a required managed node reboot. The
     * status of these managed nodes is <code>NON_COMPLIANT</code>.</p>
     */
    inline void SetInstancesWithCriticalNonCompliantPatches(int value) { m_instancesWithCriticalNonCompliantPatches = value; }

    /**
     * <p>The number of managed nodes where patches that are specified as
     * <code>Critical</code> for compliance reporting in the patch baseline aren't
     * installed. These patches might be missing, have failed installation, were
     * rejected, or were installed but awaiting a required managed node reboot. The
     * status of these managed nodes is <code>NON_COMPLIANT</code>.</p>
     */
    inline DescribePatchGroupStateResult& WithInstancesWithCriticalNonCompliantPatches(int value) { SetInstancesWithCriticalNonCompliantPatches(value); return *this;}


    /**
     * <p>The number of managed nodes where patches that are specified as
     * <code>Security</code> in a patch advisory aren't installed. These patches might
     * be missing, have failed installation, were rejected, or were installed but
     * awaiting a required managed node reboot. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline int GetInstancesWithSecurityNonCompliantPatches() const{ return m_instancesWithSecurityNonCompliantPatches; }

    /**
     * <p>The number of managed nodes where patches that are specified as
     * <code>Security</code> in a patch advisory aren't installed. These patches might
     * be missing, have failed installation, were rejected, or were installed but
     * awaiting a required managed node reboot. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline void SetInstancesWithSecurityNonCompliantPatches(int value) { m_instancesWithSecurityNonCompliantPatches = value; }

    /**
     * <p>The number of managed nodes where patches that are specified as
     * <code>Security</code> in a patch advisory aren't installed. These patches might
     * be missing, have failed installation, were rejected, or were installed but
     * awaiting a required managed node reboot. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline DescribePatchGroupStateResult& WithInstancesWithSecurityNonCompliantPatches(int value) { SetInstancesWithSecurityNonCompliantPatches(value); return *this;}


    /**
     * <p>The number of managed nodes with patches installed that are specified as
     * other than <code>Critical</code> or <code>Security</code> but aren't compliant
     * with the patch baseline. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline int GetInstancesWithOtherNonCompliantPatches() const{ return m_instancesWithOtherNonCompliantPatches; }

    /**
     * <p>The number of managed nodes with patches installed that are specified as
     * other than <code>Critical</code> or <code>Security</code> but aren't compliant
     * with the patch baseline. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline void SetInstancesWithOtherNonCompliantPatches(int value) { m_instancesWithOtherNonCompliantPatches = value; }

    /**
     * <p>The number of managed nodes with patches installed that are specified as
     * other than <code>Critical</code> or <code>Security</code> but aren't compliant
     * with the patch baseline. The status of these managed nodes is
     * <code>NON_COMPLIANT</code>.</p>
     */
    inline DescribePatchGroupStateResult& WithInstancesWithOtherNonCompliantPatches(int value) { SetInstancesWithOtherNonCompliantPatches(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribePatchGroupStateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribePatchGroupStateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribePatchGroupStateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    int m_instances;

    int m_instancesWithInstalledPatches;

    int m_instancesWithInstalledOtherPatches;

    int m_instancesWithInstalledPendingRebootPatches;

    int m_instancesWithInstalledRejectedPatches;

    int m_instancesWithMissingPatches;

    int m_instancesWithFailedPatches;

    int m_instancesWithNotApplicablePatches;

    int m_instancesWithUnreportedNotApplicablePatches;

    int m_instancesWithCriticalNonCompliantPatches;

    int m_instancesWithSecurityNonCompliantPatches;

    int m_instancesWithOtherNonCompliantPatches;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
