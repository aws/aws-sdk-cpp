/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/PrincipalType.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>A structure that describes an application to which a principal is
   * assigned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/ApplicationAssignmentForPrincipal">AWS
   * API Reference</a></p>
   */
  class ApplicationAssignmentForPrincipal
  {
  public:
    AWS_SSOADMIN_API ApplicationAssignmentForPrincipal();
    AWS_SSOADMIN_API ApplicationAssignmentForPrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API ApplicationAssignmentForPrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the application to which the specified principal is assigned.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The ARN of the application to which the specified principal is assigned.</p>
     */
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }

    /**
     * <p>The ARN of the application to which the specified principal is assigned.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>The ARN of the application to which the specified principal is assigned.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }

    /**
     * <p>The ARN of the application to which the specified principal is assigned.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }

    /**
     * <p>The ARN of the application to which the specified principal is assigned.</p>
     */
    inline ApplicationAssignmentForPrincipal& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The ARN of the application to which the specified principal is assigned.</p>
     */
    inline ApplicationAssignmentForPrincipal& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the application to which the specified principal is assigned.</p>
     */
    inline ApplicationAssignmentForPrincipal& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>The unique identifier of the principal assigned to the application.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The unique identifier of the principal assigned to the application.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>The unique identifier of the principal assigned to the application.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>The unique identifier of the principal assigned to the application.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>The unique identifier of the principal assigned to the application.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>The unique identifier of the principal assigned to the application.</p>
     */
    inline ApplicationAssignmentForPrincipal& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The unique identifier of the principal assigned to the application.</p>
     */
    inline ApplicationAssignmentForPrincipal& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the principal assigned to the application.</p>
     */
    inline ApplicationAssignmentForPrincipal& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The type of the principal assigned to the application.</p>
     */
    inline const PrincipalType& GetPrincipalType() const{ return m_principalType; }

    /**
     * <p>The type of the principal assigned to the application.</p>
     */
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }

    /**
     * <p>The type of the principal assigned to the application.</p>
     */
    inline void SetPrincipalType(const PrincipalType& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }

    /**
     * <p>The type of the principal assigned to the application.</p>
     */
    inline void SetPrincipalType(PrincipalType&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }

    /**
     * <p>The type of the principal assigned to the application.</p>
     */
    inline ApplicationAssignmentForPrincipal& WithPrincipalType(const PrincipalType& value) { SetPrincipalType(value); return *this;}

    /**
     * <p>The type of the principal assigned to the application.</p>
     */
    inline ApplicationAssignmentForPrincipal& WithPrincipalType(PrincipalType&& value) { SetPrincipalType(std::move(value)); return *this;}

  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    PrincipalType m_principalType;
    bool m_principalTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
