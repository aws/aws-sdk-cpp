/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The JWT authentication and authorization configuration for an Amazon
   * OpenSearch Service domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/JWTOptionsInput">AWS
   * API Reference</a></p>
   */
  class JWTOptionsInput
  {
  public:
    AWS_OPENSEARCHSERVICE_API JWTOptionsInput() = default;
    AWS_OPENSEARCHSERVICE_API JWTOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API JWTOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>True to enable JWT authentication and authorization for a domain.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline JWTOptionsInput& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Element of the JWT assertion to use for the user name.</p>
     */
    inline const Aws::String& GetSubjectKey() const { return m_subjectKey; }
    inline bool SubjectKeyHasBeenSet() const { return m_subjectKeyHasBeenSet; }
    template<typename SubjectKeyT = Aws::String>
    void SetSubjectKey(SubjectKeyT&& value) { m_subjectKeyHasBeenSet = true; m_subjectKey = std::forward<SubjectKeyT>(value); }
    template<typename SubjectKeyT = Aws::String>
    JWTOptionsInput& WithSubjectKey(SubjectKeyT&& value) { SetSubjectKey(std::forward<SubjectKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Element of the JWT assertion to use for roles.</p>
     */
    inline const Aws::String& GetRolesKey() const { return m_rolesKey; }
    inline bool RolesKeyHasBeenSet() const { return m_rolesKeyHasBeenSet; }
    template<typename RolesKeyT = Aws::String>
    void SetRolesKey(RolesKeyT&& value) { m_rolesKeyHasBeenSet = true; m_rolesKey = std::forward<RolesKeyT>(value); }
    template<typename RolesKeyT = Aws::String>
    JWTOptionsInput& WithRolesKey(RolesKeyT&& value) { SetRolesKey(std::forward<RolesKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Element of the JWT assertion used by the cluster to verify JWT
     * signatures.</p>
     */
    inline const Aws::String& GetPublicKey() const { return m_publicKey; }
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }
    template<typename PublicKeyT = Aws::String>
    void SetPublicKey(PublicKeyT&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::forward<PublicKeyT>(value); }
    template<typename PublicKeyT = Aws::String>
    JWTOptionsInput& WithPublicKey(PublicKeyT&& value) { SetPublicKey(std::forward<PublicKeyT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_subjectKey;
    bool m_subjectKeyHasBeenSet = false;

    Aws::String m_rolesKey;
    bool m_rolesKeyHasBeenSet = false;

    Aws::String m_publicKey;
    bool m_publicKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
