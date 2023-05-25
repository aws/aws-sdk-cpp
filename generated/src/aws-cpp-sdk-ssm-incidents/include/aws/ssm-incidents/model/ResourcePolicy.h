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
    AWS_SSMINCIDENTS_API ResourcePolicy();
    AWS_SSMINCIDENTS_API ResourcePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API ResourcePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The JSON blob that describes the policy.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The JSON blob that describes the policy.</p>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

    /**
     * <p>The JSON blob that describes the policy.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The JSON blob that describes the policy.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p>The JSON blob that describes the policy.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>The JSON blob that describes the policy.</p>
     */
    inline ResourcePolicy& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The JSON blob that describes the policy.</p>
     */
    inline ResourcePolicy& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The JSON blob that describes the policy.</p>
     */
    inline ResourcePolicy& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>The ID of the resource policy.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The ID of the resource policy.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The ID of the resource policy.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The ID of the resource policy.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The ID of the resource policy.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The ID of the resource policy.</p>
     */
    inline ResourcePolicy& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The ID of the resource policy.</p>
     */
    inline ResourcePolicy& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resource policy.</p>
     */
    inline ResourcePolicy& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>The Amazon Web Services Region that policy allows resources to be used
     * in.</p>
     */
    inline const Aws::String& GetRamResourceShareRegion() const{ return m_ramResourceShareRegion; }

    /**
     * <p>The Amazon Web Services Region that policy allows resources to be used
     * in.</p>
     */
    inline bool RamResourceShareRegionHasBeenSet() const { return m_ramResourceShareRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region that policy allows resources to be used
     * in.</p>
     */
    inline void SetRamResourceShareRegion(const Aws::String& value) { m_ramResourceShareRegionHasBeenSet = true; m_ramResourceShareRegion = value; }

    /**
     * <p>The Amazon Web Services Region that policy allows resources to be used
     * in.</p>
     */
    inline void SetRamResourceShareRegion(Aws::String&& value) { m_ramResourceShareRegionHasBeenSet = true; m_ramResourceShareRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region that policy allows resources to be used
     * in.</p>
     */
    inline void SetRamResourceShareRegion(const char* value) { m_ramResourceShareRegionHasBeenSet = true; m_ramResourceShareRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region that policy allows resources to be used
     * in.</p>
     */
    inline ResourcePolicy& WithRamResourceShareRegion(const Aws::String& value) { SetRamResourceShareRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region that policy allows resources to be used
     * in.</p>
     */
    inline ResourcePolicy& WithRamResourceShareRegion(Aws::String&& value) { SetRamResourceShareRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region that policy allows resources to be used
     * in.</p>
     */
    inline ResourcePolicy& WithRamResourceShareRegion(const char* value) { SetRamResourceShareRegion(value); return *this;}

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
