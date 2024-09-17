/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
#include <aws/opensearchserverless/model/LifecyclePolicyType.h>
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
namespace OpenSearchServerless
{
namespace Model
{

  /**
   * <p>Details about an OpenSearch Serverless lifecycle policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/LifecyclePolicyDetail">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicyDetail
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API LifecyclePolicyDetail();
    AWS_OPENSEARCHSERVERLESS_API LifecyclePolicyDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API LifecyclePolicyDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date the lifecycle policy was created.</p>
     */
    inline long long GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(long long value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline LifecyclePolicyDetail& WithCreatedDate(long long value) { SetCreatedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline LifecyclePolicyDetail& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline LifecyclePolicyDetail& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline LifecyclePolicyDetail& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the lifecycle policy was last modified.</p>
     */
    inline long long GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(long long value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline LifecyclePolicyDetail& WithLastModifiedDate(long long value) { SetLastModifiedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the lifecycle policy.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline LifecyclePolicyDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline LifecyclePolicyDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline LifecyclePolicyDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON policy document without any whitespaces.</p>
     */
    inline Aws::Utils::DocumentView GetPolicy() const{ return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    inline void SetPolicy(const Aws::Utils::Document& value) { m_policyHasBeenSet = true; m_policy = value; }
    inline void SetPolicy(Aws::Utils::Document&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }
    inline LifecyclePolicyDetail& WithPolicy(const Aws::Utils::Document& value) { SetPolicy(value); return *this;}
    inline LifecyclePolicyDetail& WithPolicy(Aws::Utils::Document&& value) { SetPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the lifecycle policy.</p>
     */
    inline const Aws::String& GetPolicyVersion() const{ return m_policyVersion; }
    inline bool PolicyVersionHasBeenSet() const { return m_policyVersionHasBeenSet; }
    inline void SetPolicyVersion(const Aws::String& value) { m_policyVersionHasBeenSet = true; m_policyVersion = value; }
    inline void SetPolicyVersion(Aws::String&& value) { m_policyVersionHasBeenSet = true; m_policyVersion = std::move(value); }
    inline void SetPolicyVersion(const char* value) { m_policyVersionHasBeenSet = true; m_policyVersion.assign(value); }
    inline LifecyclePolicyDetail& WithPolicyVersion(const Aws::String& value) { SetPolicyVersion(value); return *this;}
    inline LifecyclePolicyDetail& WithPolicyVersion(Aws::String&& value) { SetPolicyVersion(std::move(value)); return *this;}
    inline LifecyclePolicyDetail& WithPolicyVersion(const char* value) { SetPolicyVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline const LifecyclePolicyType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const LifecyclePolicyType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(LifecyclePolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline LifecyclePolicyDetail& WithType(const LifecyclePolicyType& value) { SetType(value); return *this;}
    inline LifecyclePolicyDetail& WithType(LifecyclePolicyType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    long long m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    long long m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::Document m_policy;
    bool m_policyHasBeenSet = false;

    Aws::String m_policyVersion;
    bool m_policyVersionHasBeenSet = false;

    LifecyclePolicyType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
