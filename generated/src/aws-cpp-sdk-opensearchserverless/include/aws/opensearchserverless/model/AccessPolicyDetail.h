/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/AccessPolicyType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
   * <p>Details about an OpenSearch Serverless access policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/AccessPolicyDetail">AWS
   * API Reference</a></p>
   */
  class AccessPolicyDetail
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API AccessPolicyDetail() = default;
    AWS_OPENSEARCHSERVERLESS_API AccessPolicyDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API AccessPolicyDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of access policy.</p>
     */
    inline AccessPolicyType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(AccessPolicyType value) { m_typeHasBeenSet = true; m_type = value; }
    inline AccessPolicyDetail& WithType(AccessPolicyType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AccessPolicyDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the policy.</p>
     */
    inline const Aws::String& GetPolicyVersion() const { return m_policyVersion; }
    inline bool PolicyVersionHasBeenSet() const { return m_policyVersionHasBeenSet; }
    template<typename PolicyVersionT = Aws::String>
    void SetPolicyVersion(PolicyVersionT&& value) { m_policyVersionHasBeenSet = true; m_policyVersion = std::forward<PolicyVersionT>(value); }
    template<typename PolicyVersionT = Aws::String>
    AccessPolicyDetail& WithPolicyVersion(PolicyVersionT&& value) { SetPolicyVersion(std::forward<PolicyVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the policy.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AccessPolicyDetail& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON policy document without any whitespaces.</p>
     */
    inline Aws::Utils::DocumentView GetPolicy() const { return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    template<typename PolicyT = Aws::Utils::Document>
    void SetPolicy(PolicyT&& value) { m_policyHasBeenSet = true; m_policy = std::forward<PolicyT>(value); }
    template<typename PolicyT = Aws::Utils::Document>
    AccessPolicyDetail& WithPolicy(PolicyT&& value) { SetPolicy(std::forward<PolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the policy was created.</p>
     */
    inline long long GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(long long value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline AccessPolicyDetail& WithCreatedDate(long long value) { SetCreatedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the policy was last modified.</p>
     */
    inline long long GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(long long value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline AccessPolicyDetail& WithLastModifiedDate(long long value) { SetLastModifiedDate(value); return *this;}
    ///@}
  private:

    AccessPolicyType m_type{AccessPolicyType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_policyVersion;
    bool m_policyVersionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::Document m_policy;
    bool m_policyHasBeenSet = false;

    long long m_createdDate{0};
    bool m_createdDateHasBeenSet = false;

    long long m_lastModifiedDate{0};
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
