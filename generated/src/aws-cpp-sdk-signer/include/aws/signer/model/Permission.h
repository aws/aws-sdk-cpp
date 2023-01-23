/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>A cross-account permission for a signing profile.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/Permission">AWS
   * API Reference</a></p>
   */
  class Permission
  {
  public:
    AWS_SIGNER_API Permission();
    AWS_SIGNER_API Permission(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Permission& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An AWS Signer action permitted as part of cross-account permissions.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>An AWS Signer action permitted as part of cross-account permissions.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>An AWS Signer action permitted as part of cross-account permissions.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>An AWS Signer action permitted as part of cross-account permissions.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>An AWS Signer action permitted as part of cross-account permissions.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>An AWS Signer action permitted as part of cross-account permissions.</p>
     */
    inline Permission& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>An AWS Signer action permitted as part of cross-account permissions.</p>
     */
    inline Permission& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>An AWS Signer action permitted as part of cross-account permissions.</p>
     */
    inline Permission& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>The AWS principal that has been granted a cross-account permission.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>The AWS principal that has been granted a cross-account permission.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>The AWS principal that has been granted a cross-account permission.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>The AWS principal that has been granted a cross-account permission.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>The AWS principal that has been granted a cross-account permission.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>The AWS principal that has been granted a cross-account permission.</p>
     */
    inline Permission& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>The AWS principal that has been granted a cross-account permission.</p>
     */
    inline Permission& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>The AWS principal that has been granted a cross-account permission.</p>
     */
    inline Permission& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}


    /**
     * <p>A unique identifier for a cross-account permission statement.</p>
     */
    inline const Aws::String& GetStatementId() const{ return m_statementId; }

    /**
     * <p>A unique identifier for a cross-account permission statement.</p>
     */
    inline bool StatementIdHasBeenSet() const { return m_statementIdHasBeenSet; }

    /**
     * <p>A unique identifier for a cross-account permission statement.</p>
     */
    inline void SetStatementId(const Aws::String& value) { m_statementIdHasBeenSet = true; m_statementId = value; }

    /**
     * <p>A unique identifier for a cross-account permission statement.</p>
     */
    inline void SetStatementId(Aws::String&& value) { m_statementIdHasBeenSet = true; m_statementId = std::move(value); }

    /**
     * <p>A unique identifier for a cross-account permission statement.</p>
     */
    inline void SetStatementId(const char* value) { m_statementIdHasBeenSet = true; m_statementId.assign(value); }

    /**
     * <p>A unique identifier for a cross-account permission statement.</p>
     */
    inline Permission& WithStatementId(const Aws::String& value) { SetStatementId(value); return *this;}

    /**
     * <p>A unique identifier for a cross-account permission statement.</p>
     */
    inline Permission& WithStatementId(Aws::String&& value) { SetStatementId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a cross-account permission statement.</p>
     */
    inline Permission& WithStatementId(const char* value) { SetStatementId(value); return *this;}


    /**
     * <p>The signing profile version that a permission applies to.</p>
     */
    inline const Aws::String& GetProfileVersion() const{ return m_profileVersion; }

    /**
     * <p>The signing profile version that a permission applies to.</p>
     */
    inline bool ProfileVersionHasBeenSet() const { return m_profileVersionHasBeenSet; }

    /**
     * <p>The signing profile version that a permission applies to.</p>
     */
    inline void SetProfileVersion(const Aws::String& value) { m_profileVersionHasBeenSet = true; m_profileVersion = value; }

    /**
     * <p>The signing profile version that a permission applies to.</p>
     */
    inline void SetProfileVersion(Aws::String&& value) { m_profileVersionHasBeenSet = true; m_profileVersion = std::move(value); }

    /**
     * <p>The signing profile version that a permission applies to.</p>
     */
    inline void SetProfileVersion(const char* value) { m_profileVersionHasBeenSet = true; m_profileVersion.assign(value); }

    /**
     * <p>The signing profile version that a permission applies to.</p>
     */
    inline Permission& WithProfileVersion(const Aws::String& value) { SetProfileVersion(value); return *this;}

    /**
     * <p>The signing profile version that a permission applies to.</p>
     */
    inline Permission& WithProfileVersion(Aws::String&& value) { SetProfileVersion(std::move(value)); return *this;}

    /**
     * <p>The signing profile version that a permission applies to.</p>
     */
    inline Permission& WithProfileVersion(const char* value) { SetProfileVersion(value); return *this;}

  private:

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    Aws::String m_statementId;
    bool m_statementIdHasBeenSet = false;

    Aws::String m_profileVersion;
    bool m_profileVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
