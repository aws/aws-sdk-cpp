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
    AWS_OPENSEARCHSERVICE_API JWTOptionsInput();
    AWS_OPENSEARCHSERVICE_API JWTOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API JWTOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>True to enable JWT authentication and authorization for a domain.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline JWTOptionsInput& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Element of the JWT assertion to use for the user name.</p>
     */
    inline const Aws::String& GetSubjectKey() const{ return m_subjectKey; }
    inline bool SubjectKeyHasBeenSet() const { return m_subjectKeyHasBeenSet; }
    inline void SetSubjectKey(const Aws::String& value) { m_subjectKeyHasBeenSet = true; m_subjectKey = value; }
    inline void SetSubjectKey(Aws::String&& value) { m_subjectKeyHasBeenSet = true; m_subjectKey = std::move(value); }
    inline void SetSubjectKey(const char* value) { m_subjectKeyHasBeenSet = true; m_subjectKey.assign(value); }
    inline JWTOptionsInput& WithSubjectKey(const Aws::String& value) { SetSubjectKey(value); return *this;}
    inline JWTOptionsInput& WithSubjectKey(Aws::String&& value) { SetSubjectKey(std::move(value)); return *this;}
    inline JWTOptionsInput& WithSubjectKey(const char* value) { SetSubjectKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Element of the JWT assertion to use for roles.</p>
     */
    inline const Aws::String& GetRolesKey() const{ return m_rolesKey; }
    inline bool RolesKeyHasBeenSet() const { return m_rolesKeyHasBeenSet; }
    inline void SetRolesKey(const Aws::String& value) { m_rolesKeyHasBeenSet = true; m_rolesKey = value; }
    inline void SetRolesKey(Aws::String&& value) { m_rolesKeyHasBeenSet = true; m_rolesKey = std::move(value); }
    inline void SetRolesKey(const char* value) { m_rolesKeyHasBeenSet = true; m_rolesKey.assign(value); }
    inline JWTOptionsInput& WithRolesKey(const Aws::String& value) { SetRolesKey(value); return *this;}
    inline JWTOptionsInput& WithRolesKey(Aws::String&& value) { SetRolesKey(std::move(value)); return *this;}
    inline JWTOptionsInput& WithRolesKey(const char* value) { SetRolesKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Element of the JWT assertion used by the cluster to verify JWT
     * signatures.</p>
     */
    inline const Aws::String& GetPublicKey() const{ return m_publicKey; }
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }
    inline void SetPublicKey(const Aws::String& value) { m_publicKeyHasBeenSet = true; m_publicKey = value; }
    inline void SetPublicKey(Aws::String&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::move(value); }
    inline void SetPublicKey(const char* value) { m_publicKeyHasBeenSet = true; m_publicKey.assign(value); }
    inline JWTOptionsInput& WithPublicKey(const Aws::String& value) { SetPublicKey(value); return *this;}
    inline JWTOptionsInput& WithPublicKey(Aws::String&& value) { SetPublicKey(std::move(value)); return *this;}
    inline JWTOptionsInput& WithPublicKey(const char* value) { SetPublicKey(value); return *this;}
    ///@}
  private:

    bool m_enabled;
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
