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
   * <p>Describes the JWT options configured for the domain.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/JWTOptionsOutput">AWS
   * API Reference</a></p>
   */
  class JWTOptionsOutput
  {
  public:
    AWS_OPENSEARCHSERVICE_API JWTOptionsOutput();
    AWS_OPENSEARCHSERVICE_API JWTOptionsOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API JWTOptionsOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>True if JWT use is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline JWTOptionsOutput& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key used for matching the JWT subject attribute.</p>
     */
    inline const Aws::String& GetSubjectKey() const{ return m_subjectKey; }
    inline bool SubjectKeyHasBeenSet() const { return m_subjectKeyHasBeenSet; }
    inline void SetSubjectKey(const Aws::String& value) { m_subjectKeyHasBeenSet = true; m_subjectKey = value; }
    inline void SetSubjectKey(Aws::String&& value) { m_subjectKeyHasBeenSet = true; m_subjectKey = std::move(value); }
    inline void SetSubjectKey(const char* value) { m_subjectKeyHasBeenSet = true; m_subjectKey.assign(value); }
    inline JWTOptionsOutput& WithSubjectKey(const Aws::String& value) { SetSubjectKey(value); return *this;}
    inline JWTOptionsOutput& WithSubjectKey(Aws::String&& value) { SetSubjectKey(std::move(value)); return *this;}
    inline JWTOptionsOutput& WithSubjectKey(const char* value) { SetSubjectKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key used for matching the JWT roles attribute.</p>
     */
    inline const Aws::String& GetRolesKey() const{ return m_rolesKey; }
    inline bool RolesKeyHasBeenSet() const { return m_rolesKeyHasBeenSet; }
    inline void SetRolesKey(const Aws::String& value) { m_rolesKeyHasBeenSet = true; m_rolesKey = value; }
    inline void SetRolesKey(Aws::String&& value) { m_rolesKeyHasBeenSet = true; m_rolesKey = std::move(value); }
    inline void SetRolesKey(const char* value) { m_rolesKeyHasBeenSet = true; m_rolesKey.assign(value); }
    inline JWTOptionsOutput& WithRolesKey(const Aws::String& value) { SetRolesKey(value); return *this;}
    inline JWTOptionsOutput& WithRolesKey(Aws::String&& value) { SetRolesKey(std::move(value)); return *this;}
    inline JWTOptionsOutput& WithRolesKey(const char* value) { SetRolesKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key used to verify the signature of incoming JWT requests.</p>
     */
    inline const Aws::String& GetPublicKey() const{ return m_publicKey; }
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }
    inline void SetPublicKey(const Aws::String& value) { m_publicKeyHasBeenSet = true; m_publicKey = value; }
    inline void SetPublicKey(Aws::String&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::move(value); }
    inline void SetPublicKey(const char* value) { m_publicKeyHasBeenSet = true; m_publicKey.assign(value); }
    inline JWTOptionsOutput& WithPublicKey(const Aws::String& value) { SetPublicKey(value); return *this;}
    inline JWTOptionsOutput& WithPublicKey(Aws::String&& value) { SetPublicKey(std::move(value)); return *this;}
    inline JWTOptionsOutput& WithPublicKey(const char* value) { SetPublicKey(value); return *this;}
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
