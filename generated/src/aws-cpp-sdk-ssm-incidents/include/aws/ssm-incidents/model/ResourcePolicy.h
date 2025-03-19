/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>The resource policy that allows Incident Manager to perform actions on
   * resources on your behalf.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ResourcePolicy">AWS
   * API Reference</a></p>
   */
  class ResourcePolicy
  {
  public:
    AWS_SSMINCIDENTS_API ResourcePolicy() = default;
    AWS_SSMINCIDENTS_API ResourcePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API ResourcePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The JSON blob that describes the policy.</p>
     */
    inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
    template<typename PolicyDocumentT = Aws::String>
    void SetPolicyDocument(PolicyDocumentT&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::forward<PolicyDocumentT>(value); }
    template<typename PolicyDocumentT = Aws::String>
    ResourcePolicy& WithPolicyDocument(PolicyDocumentT&& value) { SetPolicyDocument(std::forward<PolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the resource policy.</p>
     */
    inline const Aws::String& GetPolicyId() const { return m_policyId; }
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }
    template<typename PolicyIdT = Aws::String>
    void SetPolicyId(PolicyIdT&& value) { m_policyIdHasBeenSet = true; m_policyId = std::forward<PolicyIdT>(value); }
    template<typename PolicyIdT = Aws::String>
    ResourcePolicy& WithPolicyId(PolicyIdT&& value) { SetPolicyId(std::forward<PolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region that policy allows resources to be used
     * in.</p>
     */
    inline const Aws::String& GetRamResourceShareRegion() const { return m_ramResourceShareRegion; }
    inline bool RamResourceShareRegionHasBeenSet() const { return m_ramResourceShareRegionHasBeenSet; }
    template<typename RamResourceShareRegionT = Aws::String>
    void SetRamResourceShareRegion(RamResourceShareRegionT&& value) { m_ramResourceShareRegionHasBeenSet = true; m_ramResourceShareRegion = std::forward<RamResourceShareRegionT>(value); }
    template<typename RamResourceShareRegionT = Aws::String>
    ResourcePolicy& WithRamResourceShareRegion(RamResourceShareRegionT&& value) { SetRamResourceShareRegion(std::forward<RamResourceShareRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet = false;

    Aws::String m_ramResourceShareRegion;
    bool m_ramResourceShareRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
