/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>A resource policy grants one or more Amazon Web Services services and
   * accounts permissions to access X-Ray. Each resource policy is associated with a
   * specific Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ResourcePolicy">AWS
   * API Reference</a></p>
   */
  class ResourcePolicy
  {
  public:
    AWS_XRAY_API ResourcePolicy();
    AWS_XRAY_API ResourcePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API ResourcePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the resource policy. Must be unique within a specific Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the resource policy. Must be unique within a specific Amazon Web
     * Services account.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the resource policy. Must be unique within a specific Amazon Web
     * Services account.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the resource policy. Must be unique within a specific Amazon Web
     * Services account.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the resource policy. Must be unique within a specific Amazon Web
     * Services account.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the resource policy. Must be unique within a specific Amazon Web
     * Services account.</p>
     */
    inline ResourcePolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the resource policy. Must be unique within a specific Amazon Web
     * Services account.</p>
     */
    inline ResourcePolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource policy. Must be unique within a specific Amazon Web
     * Services account.</p>
     */
    inline ResourcePolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The resource policy document, which can be up to 5kb in size.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The resource policy document, which can be up to 5kb in size.</p>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

    /**
     * <p>The resource policy document, which can be up to 5kb in size.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The resource policy document, which can be up to 5kb in size.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p>The resource policy document, which can be up to 5kb in size.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>The resource policy document, which can be up to 5kb in size.</p>
     */
    inline ResourcePolicy& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The resource policy document, which can be up to 5kb in size.</p>
     */
    inline ResourcePolicy& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The resource policy document, which can be up to 5kb in size.</p>
     */
    inline ResourcePolicy& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>Returns the current policy revision id for this policy name.</p>
     */
    inline const Aws::String& GetPolicyRevisionId() const{ return m_policyRevisionId; }

    /**
     * <p>Returns the current policy revision id for this policy name.</p>
     */
    inline bool PolicyRevisionIdHasBeenSet() const { return m_policyRevisionIdHasBeenSet; }

    /**
     * <p>Returns the current policy revision id for this policy name.</p>
     */
    inline void SetPolicyRevisionId(const Aws::String& value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId = value; }

    /**
     * <p>Returns the current policy revision id for this policy name.</p>
     */
    inline void SetPolicyRevisionId(Aws::String&& value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId = std::move(value); }

    /**
     * <p>Returns the current policy revision id for this policy name.</p>
     */
    inline void SetPolicyRevisionId(const char* value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId.assign(value); }

    /**
     * <p>Returns the current policy revision id for this policy name.</p>
     */
    inline ResourcePolicy& WithPolicyRevisionId(const Aws::String& value) { SetPolicyRevisionId(value); return *this;}

    /**
     * <p>Returns the current policy revision id for this policy name.</p>
     */
    inline ResourcePolicy& WithPolicyRevisionId(Aws::String&& value) { SetPolicyRevisionId(std::move(value)); return *this;}

    /**
     * <p>Returns the current policy revision id for this policy name.</p>
     */
    inline ResourcePolicy& WithPolicyRevisionId(const char* value) { SetPolicyRevisionId(value); return *this;}


    /**
     * <p>When the policy was last updated, in Unix time seconds.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>When the policy was last updated, in Unix time seconds.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>When the policy was last updated, in Unix time seconds.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>When the policy was last updated, in Unix time seconds.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>When the policy was last updated, in Unix time seconds.</p>
     */
    inline ResourcePolicy& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>When the policy was last updated, in Unix time seconds.</p>
     */
    inline ResourcePolicy& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    Aws::String m_policyRevisionId;
    bool m_policyRevisionIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
